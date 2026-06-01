_BOOL8 __fastcall sub_46D7D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r12
  unsigned int *v6; // r13
  __int64 v7; // r12
  _DWORD *v8; // rdi
  unsigned int *v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // r8
  unsigned int *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int *v15; // rbx
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  unsigned int *v18; // r15
  unsigned int v19; // r14d
  const char *v21; // rsi
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rax
  const char *v26; // rdi
  unsigned int v27[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v3 = (_QWORD *)a1[5];
  v4 = a1[7];
  v28 = __readfsqword(0x28u);
  v27[1] = 0;
  v6 = (unsigned int *)(*v3 + 8 * a3);
  v7 = a1[6] + (v4 << 6);
  v8 = (_DWORD *)a1[6];
  v27[0] = *v6;
  v9 = sub_46CDC0(v8, v7, v27);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = v9;
  v13 = *(_QWORD *)(a2 + 56) << 6;
  v14 = v13 >> 6;
  if ( v13 <= 0 )
  {
    v15 = *(unsigned int **)(a2 + 48);
  }
  else
  {
    v15 = *(unsigned int **)(a2 + 48);
    do
    {
      while ( 1 )
      {
        v16 = v14 >> 1;
        v17 = &v15[16 * (v14 >> 1)];
        if ( v10 >= *v17 && (v10 != *v17 || v17[1] < v10 + 1) )
          break;
        v14 >>= 1;
        if ( v16 <= 0 )
          goto LABEL_8;
      }
      v15 = v17 + 16;
      v14 = v14 - 1 - v16;
    }
    while ( v14 > 0 );
  }
LABEL_8:
  v18 = (unsigned int *)(v11 + v13);
  if ( (unsigned int *)v7 != v12 )
  {
    v19 = v6[1];
    do
    {
      if ( *v12 >= v19 )
        break;
      if ( v15 == v18 || *v15 >= v19 || *(_QWORD *)v12 != *(_QWORD *)v15 )
        return 1;
      v22 = *((_QWORD *)v12 + 2);
      if ( *((_QWORD *)v15 + 2) )
      {
        v23 = *((const char **)v15 + 1);
        v24 = haystack;
        if ( !v22 )
          goto LABEL_23;
      }
      else
      {
        v23 = haystack;
        if ( !v22 )
          goto LABEL_24;
      }
      v24 = *((const char **)v12 + 1);
LABEL_23:
      if ( strcmp(v24, v23) )
        return 1;
LABEL_24:
      v25 = *((_QWORD *)v12 + 5);
      if ( *((_QWORD *)v15 + 5) )
      {
        v21 = *((const char **)v15 + 4);
        v26 = haystack;
        if ( !v25 )
          goto LABEL_27;
      }
      else
      {
        v21 = haystack;
        if ( !v25 )
          goto LABEL_16;
      }
      v26 = *((const char **)v12 + 4);
LABEL_27:
      if ( strcmp(v26, v21) )
        return 1;
LABEL_16:
      if ( ((*((_QWORD *)v15 + 7) ^ *((_QWORD *)v12 + 7)) & 0xFFFFFFFFFFFFLL) != 0 )
        return 1;
      v12 += 16;
      v15 += 16;
    }
    while ( v12 != (unsigned int *)v7 );
  }
  return v18 != v15 && *v15 < v6[1];
}

