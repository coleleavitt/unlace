/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F960
// Address: 0x000000014005F960

//----- (000000014005F960) ----------------------------------------------------
__int64 __fastcall sub_14005F960(unsigned int *a1, _WORD *a2, int a3, void *a4, int a5)
{
  size_t v7; // rsi
  int v9; // ebp
  int v10; // r14d
  int v11; // edx
  const char *v13; // rax
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r9d
  size_t v18; // rdi
  unsigned int v19; // r15d
  int v20; // ebp
  unsigned int v21; // ebx
  int v22; // [rsp+30h] [rbp-78h] BYREF
  int v23; // [rsp+38h] [rbp-70h] BYREF
  int v24; // [rsp+40h] [rbp-68h] BYREF
  void *v25; // [rsp+48h] [rbp-60h]
  char Src; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v27[15]; // [rsp+51h] [rbp-57h] BYREF

  v25 = a4;
  LODWORD(v7) = 0;
  v23 = a3;
  v22 = 16;
  v24 = 0;
  v9 = 0;
  v10 = 0;
  if ( (unsigned int)qword_1400CBA48(&v24, *a1, a2, &v23, &Src, &v22) || a3 != v23 )
  {
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v11 = v22;
    if ( a5 < v22 )
    {
      *errno() = 7;
      return 0xFFFFFFFFLL;
    }
    if ( v22 != 1 )
    {
      v13 = off_1400C9F18;
      v14 = 1;
      if ( off_1400C9F18 )
      {
        v15 = 1;
        v16 = 3;
        while ( 1 )
        {
          v9 = (int)(&off_1400C9F00)[v16 + 1];
          if ( !strncmp(&Src, v13, v9) )
            break;
          ++v15;
          ++v14;
          v16 = 3 * v15;
          v13 = (&off_1400C9F00)[3 * v15];
          if ( !v13 )
            goto LABEL_12;
        }
        v10 = (int)(&off_1400C9F00)[3 * v14 + 2];
LABEL_12:
        v11 = v22;
      }
      if ( !(&off_1400C9F00)[3 * v14] )
        goto LABEL_19;
    }
    v17 = v9 + 1;
    if ( v27[v9 - 1] != 14 )
      v17 = v9;
    if ( (v18 = *((int *)&off_1400C9F00 + 6 * v10 + 3), !v10) && *a2 >= 0x80u || v11 < v17 + (int)v18 )
    {
LABEL_19:
      *errno() = 42;
      return 0xFFFFFFFFLL;
    }
    v19 = a1[10];
    v20 = (v27[v9 - 1] == 14) | (v10 << 8);
    if ( v19 == v20 )
    {
      if ( v17 )
        memcpy(&Src, &v27[v17 - 1], v18);
    }
    else
    {
      LODWORD(v7) = v17;
      if ( !v10 )
      {
        v7 = dword_1400C9F08;
        memcpy(&v27[dword_1400C9F08 - 1], &Src, v18);
        memcpy(&Src, off_1400C9F00, v7);
      }
      if ( (_BYTE)v19 == 1 )
      {
        memcpy(v27, &Src, (int)v18 + (int)v7);
        LODWORD(v7) = v7 + 1;
        Src = 15;
      }
    }
    v21 = v18 + v7;
    if ( a5 < (int)v18 + (int)v7 )
    {
      *errno() = 7;
      return 0xFFFFFFFFLL;
    }
    memcpy(v25, &Src, (int)v21);
    a1[10] = v20;
    return v21;
  }
}
// 1400C9F08: using guessed type int dword_1400C9F08;
// 1400CBA48: using guessed type __int64 (__fastcall *qword_1400CBA48)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
