/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F6B0
// Address: 0x000000014005F6B0

//----- (000000014005F6B0) ----------------------------------------------------
__int64 __fastcall sub_14005F6B0(unsigned int *a1, const char *a2, int a3, _WORD *a4, _DWORD *a5)
{
  __int64 v5; // rbx
  char v7; // dl
  size_t v9; // r12
  const char *v10; // rax
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rcx
  size_t v14; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rdi
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  size_t v21; // rbp
  size_t v22; // rsi
  int v23; // r12d
  unsigned int v24; // r15d
  int v25; // ebx
  _WORD *v26; // rsi
  int v27; // edi
  int v28; // [rsp+30h] [rbp-88h] BYREF
  int v29; // [rsp+34h] [rbp-84h]
  int v30; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v31; // [rsp+40h] [rbp-78h]
  _WORD *v32; // [rsp+48h] [rbp-70h]
  _BYTE v33[16]; // [rsp+50h] [rbp-68h] BYREF

  v5 = 0;
  v32 = a4;
  v7 = *a2;
  v9 = a3;
  v31 = a5;
  v30 = 0;
  if ( v7 == 27 )
  {
    v10 = off_1400C9F00;
    v11 = 0;
    if ( off_1400C9F00 )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = SLODWORD((&off_1400C9F00)[v13 + 1]);
        if ( (int)v9 >= (int)v14 )
        {
          if ( !strncmp(a2, v10, v14) )
          {
            a1[10] = LODWORD((&off_1400C9F00)[3 * v11 + 2]) << 8;
            *v31 = 0;
            return (unsigned int)v14;
          }
        }
        else if ( !strncmp(a2, v10, v9) )
        {
          goto LABEL_6;
        }
        ++v12;
        ++v11;
        v13 = 3 * v12;
        v10 = (&off_1400C9F00)[3 * v12];
        if ( !v10 )
          goto LABEL_9;
      }
    }
    goto LABEL_9;
  }
  v16 = *((unsigned __int8 *)a1 + 41);
  if ( v7 == 14 )
  {
    a1[10] = (v16 << 8) | 1;
    *a5 = 0;
    return 1;
  }
  else if ( v7 == 15 )
  {
    a1[10] = v16 << 8;
    *a5 = 0;
    return 1;
  }
  else
  {
    v17 = 0;
    v18 = 0;
    if ( (unsigned __int8)v7 >= 0x20u )
    {
      v18 = *((unsigned __int8 *)a1 + 40);
      v17 = v16;
    }
    v29 = v18;
    if ( (unsigned int)v17 >= 7 || (v19 = 3 * v17, v20 = *((int *)&off_1400C9F00 + 6 * v17 + 3), (int)v9 < (int)v20) )
    {
LABEL_6:
      *errno() = 22;
      return 0xFFFFFFFFLL;
    }
    v21 = *((int *)&off_1400C9F00 + 6 * v17 + 3);
    if ( (int)v20 > 0 )
    {
      while ( a2[v5] < 0x80u )
      {
        if ( ++v5 >= v20 )
          goto LABEL_23;
      }
      goto LABEL_9;
    }
LABEL_23:
    v22 = SLODWORD((&off_1400C9F00)[v19 + 1]);
    memcpy(v33, (&off_1400C9F00)[v19], v22);
    v23 = v29;
    if ( v29 == 1 )
    {
      v33[v22] = 14;
      LODWORD(v22) = v22 + 1;
    }
    memcpy(&v33[(int)v22], a2, v21);
    v24 = *a1;
    if ( (*a1 == 50220 || v24 - 50221 <= 1) && v23 == 1 )
    {
      v22 = dword_1400C9F38;
      memcpy(v33, off_1400C9F30, dword_1400C9F38);
      memcpy(&v33[v22], a2, v21);
    }
    v25 = v21 + v22;
    v26 = v32;
    v28 = v25;
    if ( (unsigned int)qword_1400CBA40(&v30, v24, v33, &v28, v32, v31)
      || v28 != v25
      || *v26 == *(unsigned __int8 *)a2 && a1[10] )
    {
LABEL_9:
      *errno() = 42;
      return 0xFFFFFFFFLL;
    }
    v27 = v29 | ((_DWORD)v17 << 8);
    if ( a1[10] != v27 )
      a1[10] = v27;
    return (unsigned int)v21;
  }
}
// 1400C9F38: using guessed type int dword_1400C9F38;
// 1400CBA40: using guessed type __int64 (__fastcall *qword_1400CBA40)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
