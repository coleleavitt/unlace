/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E400
// Address: 0x000000000004E400

//----- (000000000004E400) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4E400(pthread_mutex_t *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int **a5)
{
  __int64 v7; // x8
  unsigned int *v8; // x8
  int v10; // w8
  unsigned int *v11; // x8
  char *v12; // x1
  __int64 v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  __int64 v16; // x3
  unsigned int *v17; // x8
  __int64 v18; // x8
  unsigned int *v19; // x8
  __int64 v20; // x3
  __int64 v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  __int64 v24; // x3
  unsigned int *v25; // x8
  __int64 v26; // x8
  unsigned int *v27; // x8
  int v28; // w21
  __int64 v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  unsigned int v32; // w3
  unsigned int *v33; // x8
  unsigned int v34; // w22
  pthread_mutex_t *result; // x0
  int v36; // w9
  int v37; // w8
  int v38; // w8
  int v39; // w8
  int v40; // w8
  pthread_mutex_t *v41; // x19
  unsigned __int64 v42; // x8
  __int64 *v43; // x2
  pthread_mutex_t *v44; // x2
  pthread_mutex_t *v45; // x8
  unsigned __int64 owner; // x8
  __int64 v47; // x9

  switch ( (int)a4 )
  {
    case 1:
      v7 = *((int *)a5 + 6);
      if ( (v7 & 0x80000000) != 0 && (*((_DWORD *)a5 + 6) = v7 + 8, (int)v7 + 8 <= 0) )
      {
        v8 = (unsigned int *)((char *)a5[1] + v7);
      }
      else
      {
        v8 = *a5;
        *a5 += 2;
      }
      return (pthread_mutex_t *)(int)qsnprintf(
                                       (pthread_mutex_t *)a2,
                                       a3,
                                       "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)",
                                       *v8,
                                       1,
                                       2);
    case 2:
      v21 = *((int *)a5 + 6);
      if ( (v21 & 0x80000000) == 0 || (v22 = v21 + 8, *((_DWORD *)a5 + 6) = v21 + 8, (int)v21 + 8 >= 1) )
      {
        v23 = *a5;
        *a5 += 2;
        v24 = *v23;
LABEL_28:
        v25 = *a5;
        *a5 += 2;
        return (pthread_mutex_t *)(int)qsnprintf(
                                         (pthread_mutex_t *)a2,
                                         a3,
                                         "The ELF header entry size is invalid (%d, expected %d)",
                                         v24,
                                         *v25);
      }
      v24 = *(unsigned int *)((char *)a5[1] + v21);
      if ( (v22 & 0x80000000) == 0 )
        goto LABEL_28;
      v39 = v21 + 16;
      *((_DWORD *)a5 + 6) = v39;
      if ( v39 > 0 )
        goto LABEL_28;
      v25 = (unsigned int *)((char *)a5[1] + v22);
      return (pthread_mutex_t *)(int)qsnprintf(
                                       (pthread_mutex_t *)a2,
                                       a3,
                                       "The ELF header entry size is invalid (%d, expected %d)",
                                       v24,
                                       *v25);
    case 3:
      v18 = *((int *)a5 + 6);
      if ( (v18 & 0x80000000) != 0 && (*((_DWORD *)a5 + 6) = v18 + 8, (int)v18 + 8 <= 0) )
      {
        v19 = (unsigned int *)((char *)a5[1] + v18);
      }
      else
      {
        v19 = *a5;
        *a5 += 2;
      }
      v20 = *v19;
      if ( (unsigned int)(v20 - 1) < 2 )
        return (pthread_mutex_t *)(int)qsnprintf(
                                         (pthread_mutex_t *)a2,
                                         a3,
                                         "Bad ELF byte sex %d for the indicated machine",
                                         v20);
      else
        return (pthread_mutex_t *)(int)qsnprintf(
                                         (pthread_mutex_t *)a2,
                                         a3,
                                         "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)",
                                         v20,
                                         1,
                                         2);
    case 4:
      v13 = *((int *)a5 + 6);
      if ( (v13 & 0x80000000) == 0 || (v14 = v13 + 8, *((_DWORD *)a5 + 6) = v13 + 8, (int)v13 + 8 >= 1) )
      {
        v15 = *a5;
        *a5 += 2;
        v16 = *v15;
LABEL_17:
        v17 = *a5;
        *a5 += 2;
        return (pthread_mutex_t *)(int)qsnprintf(
                                         (pthread_mutex_t *)a2,
                                         a3,
                                         "PHT entry size is invalid: %d. Falling back to %d",
                                         v16,
                                         *v17);
      }
      v16 = *(unsigned int *)((char *)a5[1] + v13);
      if ( (v14 & 0x80000000) == 0 )
        goto LABEL_17;
      v38 = v13 + 16;
      *((_DWORD *)a5 + 6) = v38;
      if ( v38 > 0 )
        goto LABEL_17;
      v17 = (unsigned int *)((char *)a5[1] + v14);
      return (pthread_mutex_t *)(int)qsnprintf(
                                       (pthread_mutex_t *)a2,
                                       a3,
                                       "PHT entry size is invalid: %d. Falling back to %d",
                                       v16,
                                       *v17);
    case 5:
      v12 = "The PHT table size or offset is invalid";
      return (pthread_mutex_t *)(int)((unsigned int)qstpncpy((pthread_mutex_t *)a2, v12, a3) - a2);
    case 6:
      v12 = "The SHT entry size is invalid";
      return (pthread_mutex_t *)(int)((unsigned int)qstpncpy((pthread_mutex_t *)a2, v12, a3) - a2);
    case 7:
      v12 = "SHT table size or offset is invalid";
      return (pthread_mutex_t *)(int)((unsigned int)qstpncpy((pthread_mutex_t *)a2, v12, a3) - a2);
    case 15:
      v26 = *((int *)a5 + 6);
      if ( (v26 & 0x80000000) != 0 && (*((_DWORD *)a5 + 6) = v26 + 8, (int)v26 + 8 <= 0) )
      {
        v27 = (unsigned int *)((char *)a5[1] + v26);
      }
      else
      {
        v27 = *a5;
        *a5 += 2;
      }
      return (pthread_mutex_t *)(int)qsnprintf((pthread_mutex_t *)a2, a3, "Bad DT_PLTREL value (%d)", *v27);
    case 17:
      v29 = *((int *)a5 + 6);
      if ( (v29 & 0x80000000) == 0 || (v30 = v29 + 8, *((_DWORD *)a5 + 6) = v29 + 8, (int)v29 + 8 >= 1) )
      {
        v31 = *a5;
        *a5 += 2;
        v32 = *v31;
LABEL_41:
        v33 = *a5;
        *a5 += 2;
        goto LABEL_42;
      }
      v32 = *(unsigned int *)((char *)a5[1] + v29);
      if ( (v30 & 0x80000000) == 0 )
        goto LABEL_41;
      v40 = v29 + 16;
      *((_DWORD *)a5 + 6) = v40;
      if ( v40 > 0 )
        goto LABEL_41;
      v33 = (unsigned int *)((char *)a5[1] + v30);
LABEL_42:
      v34 = *v33;
      v28 = qsnprintf((pthread_mutex_t *)a2, a3, "Section header string table index %u is out of bounds", v32);
      if ( v34 )
        v28 += qsnprintf((pthread_mutex_t *)(a2 + v28), a3 - v28, " (max %u)", v34 - 1);
      return (pthread_mutex_t *)v28;
    case 18:
      v12 = "ELF file with PHT cannot be ET_REL";
      return (pthread_mutex_t *)(int)((unsigned int)qstpncpy((pthread_mutex_t *)a2, v12, a3) - a2);
    case 19:
      v10 = *((_DWORD *)a5 + 6);
      if ( (v10 & 0x80000000) == 0 || (*((_DWORD *)a5 + 6) = v10 + 8, v10 + 8 >= 1) )
      {
        *a5 += 2;
LABEL_9:
        *a5 += 2;
LABEL_10:
        v11 = *a5;
        *a5 += 2;
        return (pthread_mutex_t *)(int)qsnprintf(
                                         (pthread_mutex_t *)a2,
                                         a3,
                                         "Bad file structure or read error (offset %llu)",
                                         *(_QWORD *)v11);
      }
      if ( ((v10 + 8) & 0x80000000) == 0 )
        goto LABEL_9;
      v36 = v10 + 16;
      *((_DWORD *)a5 + 6) = v10 + 16;
      if ( v10 + 16 >= 1 )
        goto LABEL_9;
      if ( (v36 & 0x80000000) == 0 )
        goto LABEL_10;
      v37 = v10 + 24;
      *((_DWORD *)a5 + 6) = v37;
      if ( v37 > 0 )
        goto LABEL_10;
      v11 = (unsigned int *)((char *)a5[1] + v36);
      return (pthread_mutex_t *)(int)qsnprintf(
                                       (pthread_mutex_t *)a2,
                                       a3,
                                       "Bad file structure or read error (offset %llu)",
                                       *(_QWORD *)v11);
    default:
      if ( (int)a4 >= 20 )
      {
        if ( under_debugger )
          goto LABEL_71;
        a1 = interr(20035);
      }
      else if ( (_DWORD)a4 != 19 )
      {
        return (pthread_mutex_t *)(int)qsnprintf((pthread_mutex_t *)a2, a3, "Unknown ELF warning %d", a4);
      }
      if ( !under_debugger )
        a1 = interr(20034);
LABEL_71:
      __break(1u);
      if ( (int)a2 < 20 )
        return (pthread_mutex_t *)((_DWORD)a2 == 19);
      if ( !under_debugger )
        a1 = interr(20035);
      __break(1u);
      v41 = a1;
      if ( *(&a1->__align + 1) > 1uLL )
        return v41;
      v42 = *(_QWORD *)(a2 + 288);
      if ( v42 <= (unsigned __int64)a1 && v42 + 96LL * *(_QWORD *)(a2 + 296) >= (unsigned __int64)a1 )
      {
        if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)a1 - v42) >> 5) >= *(_QWORD *)(a2 + 312) )
          v43 = (__int64 *)(a2 + 352);
        else
          v43 = (__int64 *)(a2 + 320);
        sub_55D60(a2, (__int64)a1, v43, a1[1].__owner);
        return v41;
      }
      if ( !under_debugger )
        a1 = interr(20086);
      __break(1u);
      if ( (_DWORD)a3 == 2 )
      {
        v44 = (pthread_mutex_t *)((char *)a1 + 352);
        return (pthread_mutex_t *)sub_55D60((__int64)a1, a2, &v44->__align, a4);
      }
      if ( (_DWORD)a3 == 1 )
      {
        v44 = a1 + 8;
        return (pthread_mutex_t *)sub_55D60((__int64)a1, a2, &v44->__align, a4);
      }
      if ( !under_debugger )
        a1 = interr(20086);
      __break(1u);
      v45 = a1;
      result = (pthread_mutex_t *)a1[2].__align;
      if ( *(_BYTE *)(a2 + 248) && *(_QWORD *)(a2 + 120) && *(_WORD *)(a2 + 520) == 1 )
        goto LABEL_98;
      if ( *(_WORD *)(a2 + 522) != 8 || *(__int16 *)(a2 + 520) != -96 )
        return (pthread_mutex_t *)((char *)result + a3);
      if ( *(_BYTE *)(a2 + 248) )
      {
LABEL_98:
        owner = (unsigned int)v45[2].__owner;
        if ( *(_QWORD *)(a2 + 120) > owner )
        {
          v47 = *(_QWORD *)(a2 + 112);
          if ( v47 + (owner << 6) )
            return (pthread_mutex_t *)((char *)result + *(_QWORD *)(v47 + (owner << 6) + 16));
        }
      }
      else
      {
        if ( !under_debugger )
          result = interr(20099);
        __break(1u);
        return (pthread_mutex_t *)sub_4E97C((unsigned __int64)result, a2);
      }
      return result;
  }
}
// 4E7E4: variable 'a2' is possibly undefined
// 4E8AC: variable 'a3' is possibly undefined
// 4E8C4: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
