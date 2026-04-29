__int64 __fastcall sub_3960F0(__int64 *a1, __int64 a2)
{
  __m128i *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 *v11; // rcx
  __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 **v17; // rdx
  unsigned __int64 *v18; // r14
  __m128i *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 *v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // r15
  __int64 *v25; // rcx
  __int64 *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v31[9]; // [rsp+10h] [rbp-48h] BYREF

  v31[1] = (__int64 *)__readfsqword(0x28u);
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
      sub_2506C0(a1 + 8, *(_QWORD *)(a2 + 24), 0);
      goto LABEL_3;
    case 'J':
      v14 = a1 + 8;
      sub_2506C0(a1 + 8, *(_QWORD *)(a2 + 24) + 72LL, 0);
      sub_2506C0(a1 + 8, *(_QWORD *)(a2 + 24) + 136LL, 0);
      goto LABEL_14;
    case 'K':
    case 'L':
      v14 = a1 + 8;
LABEL_14:
      sub_2506C0(v14, *(_QWORD *)(a2 + 24), 0);
      v30 = *(_QWORD *)a2;
      if ( v30 != -1 )
        goto LABEL_5;
      return 0;
    case 'R':
      v17 = *(unsigned __int64 ***)(a2 + 24);
      v18 = *v17;
      if ( !(8LL * (_QWORD)v17[1]) )
        goto LABEL_3;
      break;
    default:
      goto LABEL_3;
  }
  do
  {
    v30 = *v18;
    if ( v30 != -1 )
    {
      v19 = (__m128i *)a1[16];
      v31[0] = (__int64 *)&v30;
      v20 = sub_395D00(v19, &v30, v31);
      v21 = a1[17];
      v22 = *(__int64 **)(v20 + 32);
      v23 = *(_QWORD *)(v20 + 40);
      v24 = (_QWORD *)(v20 + 24);
      v25 = &v22[v23];
      if ( v22 == v25 )
        goto LABEL_27;
      v26 = *(__int64 **)(v20 + 32);
      while ( v21 != *v26 )
      {
        if ( v25 == ++v26 )
          goto LABEL_27;
      }
      if ( v25 == v26 )
      {
LABEL_27:
        v27 = v23 + 1;
        if ( v24[3] < v27 )
        {
          v28 = qvector_reserve(v24 + 1, v22, v27, 8);
          v29 = v24[2];
          v24[1] = v28;
          v25 = (__int64 *)(v28 + 8 * v29);
        }
        *v25 = v21;
        ++v24[2];
      }
      v17 = *(unsigned __int64 ***)(a2 + 24);
    }
    ++v18;
  }
  while ( v18 != &(*v17)[(_QWORD)v17[1]] );
LABEL_3:
  v30 = *(_QWORD *)a2;
  if ( v30 != -1 )
  {
LABEL_5:
    v5 = (__m128i *)a1[16];
    v31[0] = (__int64 *)&v30;
    v6 = sub_395D00(v5, &v30, v31);
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
      v13 = v9 + 1;
      if ( v10[3] < v13 )
      {
        v15 = qvector_reserve(v10 + 1, v8, v13, 8);
        v16 = v10[2];
        v10[1] = v15;
        v11 = (__int64 *)(v15 + 8 * v16);
      }
      *v11 = v7;
      ++v10[2];
    }
  }
  return 0;
}
