unsigned __int64 __fastcall sub_6091E0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // r14
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 *v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  const char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+0h] [rbp-68h]
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  unsigned int v25; // [rsp+Ch] [rbp-5Ch]
  _QWORD v26[2]; // [rsp+10h] [rbp-58h] BYREF
  char v27; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 48) )
    return v28 - __readfsqword(0x28u);
  v26[0] = a2;
  v26[1] = a3;
  v6 = (char *)v26;
  v7 = -1;
  do
  {
    v8 = *(_QWORD *)(*(_QWORD *)v6 + 96LL);
    v9 = (unsigned int)v8;
    v10 = (__int64 *)(a1 + 24LL * *(int *)(*(_QWORD *)v6 + 12LL));
    if ( v7 > (unsigned int)v8 )
      v7 = v8;
    v11 = v10[1];
    if ( v11 < (unsigned int)v8 )
    {
      v20 = *v10;
      if ( v10[2] < (unsigned __int64)(unsigned int)v8 )
      {
        v25 = v7;
        v23 = (unsigned int)*(_QWORD *)(*(_QWORD *)v6 + 96LL);
        v21 = qvector_reserve(a1 + 24LL * *(int *)(*(_QWORD *)v6 + 12LL), v20, v23, 4);
        v11 = v10[1];
        v7 = v25;
        *v10 = v21;
        v9 = v23;
        v20 = v21;
      }
      v24 = v7;
      v22 = v9;
      memset((void *)(v20 + 4 * v11), 0, 4 * (v9 - v11));
      v9 = v22;
      v7 = v24;
      v10[1] = v22;
LABEL_9:
      v12 = 0;
      do
      {
        *(_DWORD *)(*v10 + v12) = -1;
        v12 += 4;
      }
      while ( 4 * v9 != v12 );
      goto LABEL_11;
    }
    if ( (unsigned int)v8 != v11 )
      v10[1] = (unsigned int)v8;
    if ( (_DWORD)v8 )
      goto LABEL_9;
LABEL_11:
    v6 += 8;
  }
  while ( &v27 != v6 );
  v13 = v7;
  v14 = 0;
  if ( v7 )
  {
    do
    {
      v15 = haystack;
      v16 = 24 * v14 + *(_QWORD *)(a2 + 88);
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      v17 = *(_QWORD *)(a3 + 88) + 24 * v14;
      v18 = haystack;
      if ( *(_QWORD *)(v17 + 8) )
        v18 = *(const char **)v17;
      if ( !strcasecmp(v15, v18) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 24LL * *(int *)(a2 + 12)) + 4 * v14) = v14;
        *(_DWORD *)(*(_QWORD *)(a1 + 24LL * *(int *)(a3 + 12)) + 4 * v14) = v14;
      }
      ++v14;
    }
    while ( v14 != v13 );
  }
  *(_BYTE *)(a1 + 48) = 1;
  return v28 - __readfsqword(0x28u);
}

