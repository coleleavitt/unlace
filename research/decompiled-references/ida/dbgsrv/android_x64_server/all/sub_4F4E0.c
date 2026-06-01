/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F4E0
// Address: 0x000000000004F4E0

//----- (000000000004F4E0) ----------------------------------------------------
__int64 __fastcall sub_4F4E0(__int64 a1, char *a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  const char *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ecx
  int *v28; // rdx
  const char *v29; // rdx
  unsigned int *v31; // rax
  char *v32; // rdi
  __int64 v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rax
  int v36; // ebp
  int v37; // eax

  switch ( (int)a4 )
  {
    case 1:
      v7 = *a5;
      if ( v7 > 0x28 )
      {
        v8 = *((_DWORD **)a5 + 1);
        *((_QWORD *)a5 + 1) = v8 + 2;
      }
      else
      {
        v8 = (_DWORD *)(*((_QWORD *)a5 + 2) + v7);
        *a5 = v7 + 8;
      }
      return (int)qsnprintf(a2, a3, "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)", *v8, 1, 2);
    case 2:
      v18 = *a5;
      if ( v18 >= 0x29 )
      {
        v34 = *((unsigned int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v34 + 2;
        v20 = *v34;
      }
      else
      {
        v19 = *((_QWORD *)a5 + 2);
        *a5 = v18 + 8;
        v20 = *(unsigned int *)(v19 + v18);
        if ( (unsigned int)(v18 + 8) <= 0x28 )
        {
          v21 = (unsigned int *)(*((_QWORD *)a5 + 2) + (int)v18 + 8);
          *a5 = v18 + 16;
          return (int)qsnprintf(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", v20, *v21);
        }
      }
      v21 = *((unsigned int **)a5 + 1);
      *((_QWORD *)a5 + 1) = v21 + 2;
      return (int)qsnprintf(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", v20, *v21);
    case 3:
      v16 = *a5;
      if ( v16 > 0x28 )
      {
        v17 = *((unsigned int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v17 + 2;
      }
      else
      {
        v17 = (unsigned int *)(*((_QWORD *)a5 + 2) + v16);
        *a5 = v16 + 8;
      }
      a4 = *v17;
      if ( (unsigned int)(a4 - 1) >= 2 )
        return (int)qsnprintf(a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)", a4, 1, 2);
      v29 = "Bad ELF byte sex %d for the indicated machine";
      goto LABEL_42;
    case 4:
      v12 = *a5;
      if ( v12 >= 0x29 )
      {
        v31 = *((unsigned int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v31 + 2;
        v14 = *v31;
      }
      else
      {
        v13 = *((_QWORD *)a5 + 2);
        *a5 = v12 + 8;
        v14 = *(unsigned int *)(v13 + v12);
        if ( (unsigned int)(v12 + 8) <= 0x28 )
        {
          v15 = (unsigned int *)(*((_QWORD *)a5 + 2) + (int)v12 + 8);
          *a5 = v12 + 16;
          return (int)qsnprintf(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", v14, *v15);
        }
      }
      v15 = *((unsigned int **)a5 + 1);
      *((_QWORD *)a5 + 1) = v15 + 2;
      return (int)qsnprintf(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", v14, *v15);
    case 5:
      v11 = "The PHT table size or offset is invalid";
      return (int)((unsigned int)qstpncpy(a2, (__int64)v11, a3) - (_DWORD)a2);
    case 6:
      v11 = "The SHT entry size is invalid";
      return (int)((unsigned int)qstpncpy(a2, (__int64)v11, a3) - (_DWORD)a2);
    case 7:
      v11 = "SHT table size or offset is invalid";
      return (int)((unsigned int)qstpncpy(a2, (__int64)v11, a3) - (_DWORD)a2);
    case 15:
      v22 = *a5;
      if ( v22 > 0x28 )
      {
        v23 = *((unsigned int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v23 + 2;
      }
      else
      {
        v23 = (unsigned int *)(*((_QWORD *)a5 + 2) + v22);
        *a5 = v22 + 8;
      }
      a4 = *v23;
      v29 = "Bad DT_PLTREL value (%d)";
      v32 = a2;
      v33 = a3;
      return (int)qsnprintf(v32, v33, v29, a4);
    case 17:
      v25 = *a5;
      if ( v25 >= 0x29 )
      {
        v35 = *((int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v35 + 2;
        v27 = *v35;
      }
      else
      {
        v26 = *((_QWORD *)a5 + 2);
        *a5 = v25 + 8;
        v27 = *(_DWORD *)(v26 + v25);
        if ( (unsigned int)(v25 + 8) <= 0x28 )
        {
          v28 = (int *)(*((_QWORD *)a5 + 2) + (int)v25 + 8);
          *a5 = v25 + 16;
          goto LABEL_52;
        }
      }
      v28 = *((int **)a5 + 1);
      *((_QWORD *)a5 + 1) = v28 + 2;
LABEL_52:
      v36 = *v28;
      v37 = qsnprintf(a2, a3, "Section header string table index %u is out of bounds", v27);
      v24 = v37;
      if ( !v36 )
        return v24;
      return (int)(v37 + qsnprintf(&a2[v37], a3 - v37, " (max %u)", v36 - 1));
    case 18:
      v11 = "ELF file with PHT cannot be ET_REL";
      return (int)((unsigned int)qstpncpy(a2, (__int64)v11, a3) - (_DWORD)a2);
    case 19:
      v9 = *a5;
      if ( (unsigned int)*a5 >= 0x29 )
      {
        *((_QWORD *)a5 + 1) += 8LL;
        goto LABEL_30;
      }
      *a5 = v9 + 8;
      if ( (unsigned int)(v9 + 8) >= 0x29 )
      {
LABEL_30:
        *((_QWORD *)a5 + 1) += 8LL;
        goto LABEL_31;
      }
      *a5 = v9 + 16;
      if ( (unsigned int)(v9 + 16) <= 0x28 )
      {
        v10 = (_QWORD *)(*((_QWORD *)a5 + 2) + v9 + 16);
        *a5 = v9 + 24;
        return (int)qsnprintf(a2, a3, "Bad file structure or read error (offset %llu)", *v10);
      }
LABEL_31:
      v10 = *((_QWORD **)a5 + 1);
      *((_QWORD *)a5 + 1) = v10 + 1;
      return (int)qsnprintf(a2, a3, "Bad file structure or read error (offset %llu)", *v10);
    default:
      if ( (int)a4 >= 20 )
      {
        if ( !(_BYTE)under_debugger )
          interr(20035);
      }
      else
      {
        if ( (_DWORD)a4 != 19 )
        {
          v29 = "Unknown ELF warning %d";
LABEL_42:
          v32 = a2;
          v33 = a3;
          return (int)qsnprintf(v32, v33, v29, a4);
        }
        if ( !(_BYTE)under_debugger )
          interr(20034);
      }
      BUG();
  }
}
// 158B40: using guessed type __int64 under_debugger;
