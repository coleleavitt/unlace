unsigned __int64 __fastcall sub_4B3CB0(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // rbp
  _BYTE *v9; // rsi
  unsigned __int64 v10; // rax
  size_t v11; // r15
  unsigned __int64 v12; // r14
  _BYTE *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rdx
  size_t v16; // rax
  __int64 v17; // rbp
  unsigned int v18; // r8d
  size_t v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  unsigned int i; // eax
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+8h] [rbp-50h]
  char s[3]; // [rsp+15h] [rbp-43h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  tag_addr(a4, a3, 1);
  s[2] = 0;
  s[0] = 1;
  s[1] = sub_4B3B40(a1, a2, a3);
  v6 = strlen(s);
  v7 = *(_QWORD *)(a4 + 8);
  v8 = v6;
  v9 = *(_BYTE **)a4;
  v10 = *(_QWORD *)(a4 + 16);
  if ( v7 )
  {
    --v7;
    v11 = v8 + v7;
    v12 = v8 + v7 + 1;
    if ( v10 >= v12 )
    {
      *(_QWORD *)(a4 + 8) = v12;
      v9[v11] = 0;
      if ( !v7 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  else
  {
    v12 = v8 + 1;
    if ( v10 >= v8 + 1 )
    {
      *(_QWORD *)(a4 + 8) = v12;
      v9[v8] = 0;
      goto LABEL_4;
    }
    v11 = v8;
  }
  v25 = qvector_reserve(a4, v9, v12, 1);
  *(_QWORD *)(a4 + 8) = v12;
  *(_QWORD *)a4 = v25;
  *(_BYTE *)(v25 + v11) = 0;
  if ( v7 )
LABEL_16:
    memmove((void *)(*(_QWORD *)a4 + v8), *(const void **)a4, v7);
LABEL_4:
  v13 = *(_BYTE **)a4;
  if ( (_DWORD)v8 )
  {
    v14 = 0;
    do
    {
      v15 = v14++;
      v13[v15] = s[v15];
    }
    while ( v14 < (unsigned int)v8 );
    v13 = *(_BYTE **)a4;
  }
  s[0] = 2;
  v16 = strlen(s);
  v17 = *(_QWORD *)(a4 + 8);
  v18 = v16;
  v19 = v16;
  if ( v17 )
  {
    --v17;
    v19 = v16 + v17;
    v20 = v16 + v17 + 1;
    if ( *(_QWORD *)(a4 + 16) >= v20 )
      goto LABEL_10;
  }
  else
  {
    v20 = v16 + 1;
    if ( *(_QWORD *)(a4 + 16) >= v16 + 1 )
      goto LABEL_10;
  }
  v27 = v16;
  v26 = qvector_reserve(a4, v13, v20, 1);
  v18 = v27;
  *(_QWORD *)a4 = v26;
  v13 = (_BYTE *)v26;
LABEL_10:
  *(_QWORD *)(a4 + 8) = v20;
  v13[v19] = 0;
  v21 = *(_QWORD *)a4 + v17;
  if ( v18 )
  {
    for ( i = 0; i < v18; ++i )
    {
      v23 = i;
      *(_BYTE *)(v21 + v23) = s[v23];
    }
  }
  return v29 - __readfsqword(0x28u);
}

