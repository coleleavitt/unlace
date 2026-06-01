__int64 __fastcall sub_AAA0(__int64 a1, __int64 a2, __int64 a3, int a4, int *a5)
{
  int v7; // ebx
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edi
  _DWORD *v15; // rax
  unsigned int v16; // eax
  int *v17; // rdx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edi
  _DWORD *v23; // rax
  unsigned int v24; // eax
  _DWORD *v25; // rdx
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // edi
  int *v30; // rax
  int v31; // r12d
  int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  int *v37; // rdx
  int *v38; // rdx
  int *v39; // rdx

  switch ( a4 )
  {
    case 1:
      v9 = *a5;
      if ( (unsigned int)*a5 <= 0x2F )
      {
        v10 = (_DWORD *)(*((_QWORD *)a5 + 2) + v9);
        *a5 = v9 + 8;
      }
      else
      {
        v10 = *((_DWORD **)a5 + 1);
        *((_QWORD *)a5 + 1) = v10 + 2;
      }
      return (int)qsnprintf(a2, a3, "Unknown ELF class %d (should be %d for 32-bit, %d for 64-bit)", *v10, 1, 2);
    case 2:
      v11 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v39 = *((int **)a5 + 1);
        v15 = v39 + 2;
        *((_QWORD *)a5 + 1) = v39 + 2;
        v14 = *v39;
      }
      else
      {
        v12 = *((_QWORD *)a5 + 2);
        v13 = v11 + 8;
        *a5 = v13;
        v14 = *(_DWORD *)(v12 + v11);
        if ( (unsigned int)v13 <= 0x2F )
        {
          v15 = (_DWORD *)(v13 + v12);
          *a5 = v11 + 16;
          return (int)qsnprintf(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", v14, *v15);
        }
        v15 = *((_DWORD **)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v15 + 2;
      return (int)qsnprintf(a2, a3, "The ELF header entry size is invalid (%d, expected %d)", v14, *v15);
    case 3:
      v16 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v17 = *((int **)a5 + 1);
        *((_QWORD *)a5 + 1) = v17 + 2;
      }
      else
      {
        v17 = (int *)(*((_QWORD *)a5 + 2) + v16);
        *a5 = v16 + 8;
      }
      v18 = *v17;
      if ( (unsigned int)(*v17 - 1) <= 1 )
        return (int)qsnprintf(a2, a3, "Bad ELF byte sex %d for the indicated machine", v18);
      else
        return (int)qsnprintf(a2, a3, "Unknown ELF byte sex %d (should be %d for LSB, %d for MSB)", v18, 1, 2);
    case 4:
      v19 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v38 = *((int **)a5 + 1);
        v23 = v38 + 2;
        *((_QWORD *)a5 + 1) = v38 + 2;
        v22 = *v38;
      }
      else
      {
        v20 = *((_QWORD *)a5 + 2);
        v21 = v19 + 8;
        *a5 = v21;
        v22 = *(_DWORD *)(v20 + v19);
        if ( (unsigned int)v21 <= 0x2F )
        {
          v23 = (_DWORD *)(v21 + v20);
          *a5 = v19 + 16;
          return (int)qsnprintf(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", v22, *v23);
        }
        v23 = *((_DWORD **)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v23 + 2;
      return (int)qsnprintf(a2, a3, "PHT entry size is invalid: %d. Falling back to %d", v22, *v23);
    case 5:
      return (int)(qstpncpy(a2, "The PHT table size or offset is invalid", a3) - a2);
    case 6:
      return (int)(qstpncpy(a2, "The SHT entry size is invalid", a3) - a2);
    case 7:
      return (int)(qstpncpy(a2, "SHT table size or offset is invalid", a3) - a2);
    case 15:
      v24 = *a5;
      if ( (unsigned int)*a5 <= 0x2F )
      {
        v25 = (_DWORD *)(*((_QWORD *)a5 + 2) + v24);
        *a5 = v24 + 8;
      }
      else
      {
        v25 = *((_DWORD **)a5 + 1);
        *((_QWORD *)a5 + 1) = v25 + 2;
      }
      return (int)qsnprintf(a2, a3, "Bad DT_PLTREL value (%d)", *v25);
    case 17:
      v26 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v37 = *((int **)a5 + 1);
        v30 = v37 + 2;
        *((_QWORD *)a5 + 1) = v37 + 2;
        v29 = *v37;
      }
      else
      {
        v27 = *((_QWORD *)a5 + 2);
        v28 = v26 + 8;
        *a5 = v28;
        v29 = *(_DWORD *)(v27 + v26);
        if ( (unsigned int)v28 <= 0x2F )
        {
          v30 = (int *)(v28 + v27);
          *a5 = v26 + 16;
          goto LABEL_29;
        }
        v30 = *((int **)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v30 + 2;
LABEL_29:
      v31 = *v30;
      v32 = qsnprintf(a2, a3, "Section header string table index %u is out of bounds", v29);
      v7 = v32;
      if ( v31 )
        return (int)(qsnprintf(a2 + v32, a3 - v32, " (max %u)", v31 - 1) + v32);
      return v7;
    case 18:
      return (int)(qstpncpy(a2, "ELF file with PHT cannot be ET_REL", a3) - a2);
    case 19:
      v33 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v36 = *((_QWORD *)a5 + 1) + 8LL;
LABEL_38:
        v35 = (_QWORD *)(v36 + 8);
        goto LABEL_39;
      }
      *a5 = v33 + 8;
      if ( v33 + 8 > 0x2F )
      {
        v36 = *((_QWORD *)a5 + 1);
        goto LABEL_38;
      }
      v34 = v33 + 16;
      *a5 = v34;
      if ( (unsigned int)v34 > 0x2F )
        goto LABEL_52;
      v35 = (_QWORD *)(*((_QWORD *)a5 + 2) + v34);
      *a5 = v33 + 24;
      return (int)qsnprintf(a2, a3, "Bad file structure or read error (offset %llu)", *v35);
    default:
      if ( a4 <= 19 )
        return (int)qsnprintf(a2, a3, "Unknown ELF warning %d", a4);
      sub_59D0();
LABEL_52:
      v35 = *((_QWORD **)a5 + 1);
LABEL_39:
      *((_QWORD *)a5 + 1) = v35 + 1;
      return (int)qsnprintf(a2, a3, "Bad file structure or read error (offset %llu)", *v35);
  }
}

