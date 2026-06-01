__int64 __fastcall sub_39C170(__int64 *a1, __int64 a2)
{
  __m128i *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 **v16; // rdx
  unsigned __int64 *v17; // r14
  __m128i *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 *v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v29[9]; // [rsp+10h] [rbp-48h] BYREF

  v29[1] = (__int64 *)__readfsqword(0x28u);
  a1[17] = a2;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 'F':
    case 'G':
      return 0;
    case 'H':
    case 'I':
    case 'P':
    case 'T':
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24), 0);
      goto LABEL_3;
    case 'J':
      v13 = a1 + 8;
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24) + 72LL, 0);
      sub_255A80(a1 + 8, *(_QWORD *)(a2 + 24) + 136LL, 0);
      goto LABEL_14;
    case 'K':
    case 'L':
      v13 = a1 + 8;
LABEL_14:
      sub_255A80(v13, *(_QWORD *)(a2 + 24), 0);
      v28 = *(_QWORD *)a2;
      if ( v28 != -1 )
        goto LABEL_5;
      return 0;
    case 'R':
      v16 = *(unsigned __int64 ***)(a2 + 24);
      v17 = *v16;
      if ( !(8LL * (_QWORD)v16[1]) )
        goto LABEL_3;
      break;
    default:
      goto LABEL_3;
  }
  do
  {
    v28 = *v17;
    if ( v28 != -1 )
    {
      v18 = (__m128i *)a1[16];
      v29[0] = (__int64 *)&v28;
      v19 = sub_39BD80(v18, &v28, v29);
      v20 = a1[17];
      v21 = *(__int64 **)(v19 + 32);
      v22 = *(_QWORD *)(v19 + 40);
      v23 = (_QWORD *)(v19 + 24);
      v24 = &v21[v22];
      if ( v21 == v24 )
        goto LABEL_27;
      v25 = *(__int64 **)(v19 + 32);
      while ( v20 != *v25 )
      {
        if ( v24 == ++v25 )
          goto LABEL_27;
      }
      if ( v24 == v25 )
      {
LABEL_27:
        if ( v23[3] < (unsigned __int64)(v22 + 1) )
        {
          v26 = qvector_reserve();
          v27 = v23[2];
          v23[1] = v26;
          v24 = (__int64 *)(v26 + 8 * v27);
        }
        *v24 = v20;
        ++v23[2];
      }
      v16 = *(unsigned __int64 ***)(a2 + 24);
    }
    ++v17;
  }
  while ( v17 != &(*v16)[(_QWORD)v16[1]] );
LABEL_3:
  v28 = *(_QWORD *)a2;
  if ( v28 != -1 )
  {
LABEL_5:
    v5 = (__m128i *)a1[16];
    v29[0] = (__int64 *)&v28;
    v6 = sub_39BD80(v5, &v28, v29);
    v7 = a1[17];
    v8 = *(__int64 **)(v6 + 32);
    v9 = *(_QWORD *)(v6 + 40);
    v10 = (_QWORD *)(v6 + 24);
    v11 = &v8[v9];
    if ( v8 == v11 )
      goto LABEL_10;
    v12 = *(__int64 **)(v6 + 32);
    while ( v7 != *v12 )
    {
      if ( v11 == ++v12 )
        goto LABEL_10;
    }
    if ( v12 == v11 )
    {
LABEL_10:
      if ( v10[3] < (unsigned __int64)(v9 + 1) )
      {
        v14 = qvector_reserve();
        v15 = v10[2];
        v10[1] = v14;
        v11 = (__int64 *)(v14 + 8 * v15);
      }
      *v11 = v7;
      ++v10[2];
    }
  }
  return 0;
}
