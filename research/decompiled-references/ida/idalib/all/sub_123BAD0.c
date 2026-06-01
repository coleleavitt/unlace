__int64 __fastcall sub_123BAD0(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // r15
  __int64 *v7; // r12
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // r10
  const __m128i *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 *v27; // [rsp+18h] [rbp-50h]
  int v28[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 5032) + 72LL))(*(_QWORD *)(a1 + 5032));
  if ( !v26 )
  {
    v24 = *(_QWORD *)(a2 + 176);
    v26 = operator new(0x148u);
    sub_21B6CD0(v26, v24);
  }
  v5 = sub_1105E80();
  v6 = *(__int64 **)(a2 + 8);
  v27 = v5;
  v7 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v6 != v7 )
  {
    v8 = v6 + 1;
    if ( *v6 )
      goto LABEL_9;
    while ( 1 )
    {
      v6 = v8;
      if ( v7 == v8 )
        break;
      if ( *v8++ )
      {
        while ( 1 )
        {
LABEL_9:
          v11 = (const __m128i *)*v6;
          if ( (unsigned __int8)sub_1170CC0(a1, a1, a2, a3, a4, (const __m128i *)*v6) )
          {
            v9 = v6 + 1;
            if ( v7 == v6 + 1 )
              goto LABEL_11;
          }
          else
          {
            sub_21B80F0(v26, v11);
            v9 = v6 + 1;
            if ( v7 == v6 + 1 )
              goto LABEL_11;
          }
          v10 = v6 + 2;
          if ( !v6[1] )
            break;
LABEL_8:
          v6 = v9;
        }
        while ( 1 )
        {
          v9 = v10;
          if ( v7 == v10 )
            goto LABEL_11;
          if ( *v10++ )
            goto LABEL_8;
        }
      }
    }
  }
LABEL_11:
  if ( a4 )
  {
    sub_21B7DF0(v26, 2323);
    v21 = sub_21BB380(v27, 2323);
    v23 = sub_21B8AA0(v26, 0, v21, v22, a3, a4);
    sub_21B80F0(v26, v23);
    sub_123B3F0(a1, v26);
  }
  v28[0] = 905;
  v12 = sub_21B6DA0(a2, v28, 1);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_17;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 905) )
  {
    if ( v15 == ++v14 )
      goto LABEL_17;
  }
  if ( v15 == v14 )
  {
LABEL_17:
    v16 = sub_21BB380(v27, 905);
    v18 = sub_21B8AA0(v26, 0, v16, v17, "8", 1);
    sub_21B80F0(v26, v18);
  }
  else
  {
    do
    {
      v20 = *(_QWORD *)(*v14 + 16LL);
      if ( !v20 )
        v20 = *v14;
      ++v14;
      *(_BYTE *)(v20 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 905) )
      {
        if ( v15 == ++v14 )
          return v26;
      }
    }
    while ( v15 != v14 );
  }
  return v26;
}
