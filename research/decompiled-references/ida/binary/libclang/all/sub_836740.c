__int64 __fastcall sub_836740(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 i; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // r12

  v4 = a2;
  for ( i = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v8 = sub_B0D320(i);
    if ( !v8 )
      break;
    i = v8;
  }
  v9 = sub_B0E910(i);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *(_QWORD *)(v9 + 104);
  v12 = *(_QWORD *)(v11 + 96);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) != 0 )
  {
    if ( v13 && (v12 & 4) != 0 )
    {
LABEL_15:
      v18 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( v18[2] != v20 )
        {
          v18[2] = v20;
          a2 = v11;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 144LL))(v19, v11);
        }
      }
    }
  }
  else if ( v13 > 3 && (v12 & 2) != 0 )
  {
    v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    v15 = v14[2275];
    if ( v15 )
    {
      v16 = v14[274];
      v14[284] += 24LL;
      v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v17 + 24;
      if ( v14[275] >= v17 + 24 && v16 )
      {
        v14[274] = a2;
      }
      else
      {
        a2 = 24;
        v17 = sub_820510((__int64)(v14 + 274), 24, 3);
      }
      *(_QWORD *)v17 = v15;
      *(_DWORD *)(v17 + 8) = 0;
      v12 = v17 | 5;
      *(_QWORD *)(v17 + 16) = v11;
      *(_QWORD *)(v11 + 96) = v17 | 5;
      goto LABEL_15;
    }
    *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 128) + 2LL) & 8) == 0 )
    return 0;
  v21 = sub_7868A0(v10);
  if ( !v21 )
    goto LABEL_27;
LABEL_20:
  if ( (*(_BYTE *)(v21 + 68) & 2) != 0 && (*(_BYTE *)(v10 + 73) >> 5 == 2 || sub_831200(*(_QWORD *)(v21 + 48), a2)) )
  {
    v33 = (unsigned __int8 **)sub_A2E130(a1, v4, 2167, 1);
    v34 = v33;
    if ( v33 )
    {
      sub_823450(v33, (int)a3);
      sub_8356A0(v34, v21, 0xAu);
    }
    sub_A2DD70(a1, *(unsigned int *)(v21 + 24), 105);
    return 1;
  }
  a2 = v4;
  if ( (unsigned __int8)sub_836740(a1, v4, a3, *(_QWORD *)(v21 + 48)) )
    return 1;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    v21 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22 <= 7 )
      break;
    if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 47 <= 2 )
      goto LABEL_20;
  }
LABEL_27:
  sub_8226C0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104));
  v23 = *(_QWORD *)(v10 + 128);
  v24 = (*(_BYTE *)(v23 + 24) & 1) != 0 ? sub_7A2E20(v23) : *(_QWORD *)(v23 + 24);
  sub_8226C0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104));
  v25 = *(_QWORD *)(v10 + 104);
  v26 = v24 + 24LL * *(unsigned int *)(*(_QWORD *)(v10 + 128) + 16LL);
  sub_8226C0((__int64 *)(v25 + 96), v25);
  v27 = *(_QWORD *)(v10 + 128);
  v28 = (*(_BYTE *)(v27 + 24) & 1) != 0 ? sub_7A2E20(v27) : *(_QWORD *)(v27 + 24);
  if ( v28 == v26 )
    return 0;
  while ( 1 )
  {
    v29 = *(_QWORD *)(**(_QWORD **)(v28 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v30 = *(_QWORD *)(v29 + 8);
    if ( (v30 & 7) != 0 || (v31 = v29 & 0xFFFFFFFFFFFFFFF0LL, (v30 & 8) != 0) )
      v31 = sub_B0CF30(**(_QWORD **)(v28 + 16), v25) & 0xFFFFFFFFFFFFFFF0LL;
    v25 = v4;
    if ( (unsigned __int8)sub_836740(a1, v4, a3, v31) )
      break;
    v28 += 24;
    if ( v28 == v26 )
      return 0;
  }
  return 1;
}

