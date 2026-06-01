__int64 __fastcall sub_C04AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  unsigned int v6; // ebp
  __int64 i; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int8 **v43; // rax
  unsigned __int8 **v44; // r12

  v4 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = a3;
  for ( i = *v4; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v9 = sub_F3F310(i, a2, a3, v4);
    if ( !v9 )
      break;
    i = v9;
  }
  v10 = sub_F3F530(i);
  v15 = v10;
  if ( !v10 )
    return 0;
  v16 = *(_QWORD *)(v10 + 104);
  sub_6E4DB0((__int64 *)(v16 + 96), v16, v11, v12, v13, v14);
  if ( (*(_BYTE *)(*(_QWORD *)(v15 + 128) + 2LL) & 8) == 0 )
    return 0;
  v26 = sub_B5ABC0(v15, v16, v17, v18, v19, v20);
  if ( !v26 )
    goto LABEL_18;
LABEL_11:
  if ( (*(_BYTE *)(v26 + 68) & 2) != 0
    && (*(_BYTE *)(v15 + 73) >> 5 == 2 || sub_C048B0(*(_QWORD *)(v26 + 48), v16, v22, v23)) )
  {
    v43 = (unsigned __int8 **)sub_E0FED0(a1, a2, 2368, 1);
    v44 = v43;
    if ( v43 )
    {
      sub_BED5E0(v43, (int)v6);
      sub_AC60B0(v44, v26, 0xAu);
    }
    sub_E10070(a1, *(unsigned int *)(v26 + 24), 103);
    return 1;
  }
  else
  {
    v16 = a2;
    result = sub_C04AA0(a1, a2, v6, *(_QWORD *)(v26 + 48));
    if ( (_BYTE)result )
      return result;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v26 = v27;
      if ( !v27 )
        break;
      if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_11;
    }
LABEL_18:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), v22, v23, v24, v25);
    v32 = *(_QWORD *)(v15 + 128);
    if ( (*(_BYTE *)(v32 + 24) & 1) != 0 )
      v33 = sub_B72C40(v32);
    else
      v33 = *(_QWORD *)(v32 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), v28, v29, v30, v31);
    v34 = v33 + 24LL * *(unsigned int *)(*(_QWORD *)(v15 + 128) + 16LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), v35, v36, v37, v38);
    v39 = *(_QWORD *)(v15 + 128);
    if ( (*(_BYTE *)(v39 + 24) & 1) != 0 )
      v40 = sub_B72C40(v39);
    else
      v40 = *(_QWORD *)(v39 + 24);
    if ( v40 == v34 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v41 = **(_QWORD **)(v40 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        v42 = (*(_BYTE *)(*(_QWORD *)v41 + 8LL) & 0xF) != 0
            ? sub_F411C0(**(_QWORD **)(v40 + 16)) & 0xFFFFFFFFFFFFFFF0LL
            : *(_QWORD *)v41 & 0xFFFFFFFFFFFFFFF0LL;
        result = sub_C04AA0(a1, a2, v6, v42);
        if ( (_BYTE)result )
          break;
        v40 += 24;
        if ( v40 == v34 )
          return 0;
      }
    }
  }
  return result;
}

