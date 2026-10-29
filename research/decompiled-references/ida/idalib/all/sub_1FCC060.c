void __fastcall sub_1FCC060(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rbp
  _BYTE *v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // r15
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  _QWORD *v34; // rdi
  unsigned __int64 v35; // [rsp+8h] [rbp-80h]
  _BYTE *v36; // [rsp+10h] [rbp-78h] BYREF
  __int64 v37; // [rsp+18h] [rbp-70h]
  _BYTE v38[104]; // [rsp+20h] [rbp-68h] BYREF

  sub_1FC7210(a1, a2);
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 232) |= ((*(_DWORD *)a2 >> 20) & 1) << v3;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  sub_1F92A90(v5, *(_QWORD *)(a2 + 56), v4);
  v8 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 224) = 276;
  v9 = *(_QWORD *)(v8 + 56);
  if ( !v9 )
    return;
  v10 = *(_DWORD *)(v9 + 36);
  if ( v10 > 7 || ((1LL << v10) & 0xBC) == 0 || !*(_QWORD *)(v8 + 48) )
    return;
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2264LL) + 80LL);
  v13 = *(_QWORD *)(v12 + 72);
  v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v13 & 1) != 0 )
    goto LABEL_30;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_30;
  v16 = v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v13 & 2) != 0 )
  {
    v28 = v15[2295];
    v29 = v12 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v28 )
    {
      v30 = v15[294];
      v15[304] += 24LL;
      v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[295] >= v31 + 24 && v30 )
      {
        v15[294] = v31 + 24;
        v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v32 = sub_986170((__int64)(v15 + 294), 24, 24, 3, v6, v7);
        v31 = v32 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v32 = v28;
      v29 = v31 | 4;
      *(_DWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 16) = v12;
    }
    v14 = v29 & 0xFFFFFFFFFFFFFFFELL;
    v13 = v14 | 1;
    *(_QWORD *)(v12 + 72) = v14 | 1;
LABEL_30:
    v33 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v33;
    if ( v14 )
    {
      v14 &= 4u;
      if ( (_DWORD)v14 )
      {
        v16 = 0;
        if ( v33 )
        {
          v34 = *(_QWORD **)v33;
          v14 = *(unsigned int *)(*(_QWORD *)v33 + 12LL);
          if ( *(_DWORD *)(v33 + 8) != (_DWORD)v14 )
          {
            *(_DWORD *)(v33 + 8) = v14;
            v35 = v33;
            (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v34 + 152LL))(v34, v12, *v34, 0);
            v33 = v35;
          }
          v16 = *(_QWORD *)(v33 + 16);
        }
      }
    }
  }
  v17 = sub_B94670(v16 + 40, v11, v14, v16, v6, v7);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) == 0 )
        break;
      if ( v18 )
      {
        if ( *(char *)(*(_QWORD *)v18 + 29LL) < 0 )
          sub_1F92240(*(_QWORD *)a1, *(_QWORD *)v18);
        v17 = *(_QWORD *)(v18 + 8);
        if ( v17 )
          continue;
      }
      goto LABEL_14;
    }
    if ( *(char *)(v18 + 29) < 0 )
      sub_1F92240(*(_QWORD *)a1, v17 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_14:
  v36 = v38;
  v37 = 0x600000000LL;
  (*(void (__fastcall **)(_QWORD, _BYTE **))(**(_QWORD **)(*(_QWORD *)a1 + 48LL) + 248LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 48LL),
    &v36);
  v23 = v36;
  v24 = &v36[8 * (unsigned int)v37];
  if ( v36 != v24 )
  {
    do
    {
      v25 = sub_B94670(*v23 + 48LL, v11, v19, v20, v21, v22);
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)a1;
          v27 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v25 & 4) == 0 )
          {
            sub_1F92240(v26, v25 & 0xFFFFFFFFFFFFFFF8LL);
            goto LABEL_19;
          }
          if ( !v27 )
            break;
          sub_1F92240(v26, *v27);
          v25 = v27[1];
          if ( !v25 )
            goto LABEL_19;
        }
        sub_1F92240(v26, 0);
      }
LABEL_19:
      ++v23;
    }
    while ( v24 != (_BYTE *)v23 );
    v24 = v36;
  }
  if ( v24 != v38 )
    free(v24);
}
