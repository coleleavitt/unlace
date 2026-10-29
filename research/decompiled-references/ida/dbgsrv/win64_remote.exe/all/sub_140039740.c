/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039740
// Address: 0x0000000140039740

//----- (0000000140039740) ----------------------------------------------------
__int64 __fastcall sub_140039740(__int64 a1, __int64 a2, _BYTE *a3)
{
  const char *v5; // r12
  char *v6; // r13
  _QWORD *v7; // r14
  _DWORD *v8; // r15
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  const char *v14; // rsi
  __int8 *v15; // rax
  unsigned __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // ebp
  char *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  __int64 v25; // rbx
  void *v26; // rcx
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  char v30; // [rsp+88h] [rbp+10h] BYREF
  _BYTE *v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  v5 = Str1;
  v6 = (char *)Str1;
  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(char **)a2;
  v7 = sub_14003A4F0(a1, v6);
  *a3 = 0;
  if ( !v7 )
    return 0;
  v8 = (_DWORD *)(a1 + 64);
  v9 = *(_DWORD *)(a1 + 64) - 1;
  if ( v9 >= 0 )
  {
    v10 = v9;
    v11 = 56LL * v9;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_QWORD *)(v12 + v11 + 40);
      if ( (_QWORD *)v13 == v7 )
      {
        if ( !*((_BYTE *)v7 + 25) )
          return 0;
        v14 = Str1;
        if ( *(_QWORD *)(v13 + 8) )
          v14 = *(const char **)v13;
        v15 = sub_14006CA14((__int64)v14, 0);
        v16 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v14 <= v16 && v16 <= (unsigned __int64)v15 )
          return 0;
        if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v12 + v11 + 48) )
          return 0;
      }
      v11 -= 56;
      if ( --v10 < 0 )
      {
        v8 = (_DWORD *)(a1 + 64);
        break;
      }
    }
  }
  v17 = nullptr;
  Block = nullptr;
  v18 = 0;
  v28 = 0;
  v29 = 0;
  if ( !*((_BYTE *)v7 + 25) )
  {
LABEL_29:
    if ( v7[1] > 1u )
    {
      sub_14003D9B0(a1, (__int64)v7, (__int64 *)&Block);
      *(_DWORD *)(a1 + 80) = *v8 - 1;
      if ( v7[1] )
        v5 = (const char *)*v7;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = v5;
      v18 = v28;
      v17 = (char *)Block;
    }
    *v31 = 1;
    if ( v17 )
    {
      if ( v18 )
      {
        v25 = 0;
        do
        {
          v26 = *(void **)&v17[v25];
          if ( v26 )
          {
            *(_QWORD *)&v17[v25 + 8] = 0;
            j_free(v26);
            *(_QWORD *)&v17[v25] = 0;
            *(_QWORD *)&v17[v25 + 16] = 0;
            v17 = (char *)Block;
          }
          v25 += 24;
          --v18;
        }
        while ( v18 );
      }
      v28 = 0;
      j_free(v17);
    }
    return 0;
  }
  v19 = sub_140038100(a1, (__int64)&Block, &v30);
  if ( v19 || !v30 )
    goto LABEL_20;
  v18 = v28;
  if ( v28 == *((unsigned __int8 *)v7 + 24) )
  {
    v8 = (_DWORD *)(a1 + 64);
    v17 = (char *)Block;
    goto LABEL_29;
  }
  sub_140063F70(0, v6);
  v19 = sub_1400640B0(0x27u);
LABEL_20:
  v20 = (char *)Block;
  if ( Block )
  {
    v21 = v28;
    if ( v28 )
    {
      v22 = 0;
      do
      {
        v23 = *(void **)&v20[v22];
        if ( v23 )
        {
          *(_QWORD *)&v20[v22 + 8] = 0;
          j_free(v23);
          *(_QWORD *)&v20[v22] = 0;
          *(_QWORD *)&v20[v22 + 16] = 0;
          v20 = (char *)Block;
        }
        v22 += 24;
        --v21;
      }
      while ( v21 );
    }
    v28 = 0;
    j_free(v20);
  }
  return v19;
}
