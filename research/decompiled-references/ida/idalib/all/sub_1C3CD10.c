unsigned __int64 __fastcall sub_1C3CD10(__int64 a1, char a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // cl
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rdi
  int v18; // eax
  const char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rax
  const char *v33; // [rsp+10h] [rbp-E8h]
  __int64 v34; // [rsp+10h] [rbp-E8h]
  __int64 v35; // [rsp+18h] [rbp-E0h]
  __int64 v36; // [rsp+18h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v39; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v40[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v41; // [rsp+A8h] [rbp-50h]
  unsigned int v42; // [rsp+B0h] [rbp-48h]
  char v43; // [rsp+B4h] [rbp-44h]

  v9 = 0;
  v11 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v11 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11 - 8);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 4) == 0 && *(_DWORD *)(v9 + 20) )
  {
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a3, 0x1063u, 0);
    if ( v41 )
    {
      sub_1C2FE50(v40, *(int *)(v9 + 24));
    }
    else if ( v43 )
    {
      v20 = sub_168B9E0(v38);
      v24 = (__int64)v39;
      if ( v39 )
      {
        v35 = v20;
        v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v39 + 32LL))(v39);
        v20 = v35;
      }
      v37 = v24;
      v25 = sub_1587BC0(v20, &v37, v20, v21, v22, v23);
      sub_1C2FE50((unsigned __int8 **)(*v25 + 32LL * v42 + 8), *(int *)(v9 + 24));
    }
    sub_15F7200(v38);
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 20), 0x16D1u, 0);
    v19 = "'@try'";
    if ( !*(_DWORD *)(v9 + 24) )
      v19 = "'try'";
    if ( v41 )
    {
      sub_AE9DF0(v40, (__int64)v19, 1u);
    }
    else if ( v43 )
    {
      v33 = v19;
      v26 = sub_168B9E0(v38);
      v29 = (__int64)v33;
      v30 = v26;
      v31 = (__int64)v39;
      if ( v39 )
      {
        v36 = v30;
        v31 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64, _QWORD, const char *))(*v39 + 32LL))(
                v39,
                "'try'",
                v30,
                *v39,
                v33);
        v30 = v36;
        v29 = (__int64)v33;
      }
      v34 = v29;
      v37 = v31;
      v32 = sub_1587BC0(v30, &v37, v30, v27, v29, v28);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v42 + 8), v34, 1u);
    }
    sub_15F7200(v38);
  }
  *(_BYTE *)(v9 + 8) |= 8u;
  *(_DWORD *)(v9 + 28) = a3;
  v12 = *(_QWORD *)(a1 + 544);
  if ( !v12 )
    goto LABEL_8;
  while ( 1 )
  {
    v13 = *(_BYTE *)(v12 + 8) & 0x7F;
    if ( v13 <= 0x12u )
    {
      if ( ((1LL << v13) & 0x40182) != 0 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( ((v13 + 94) & 0x7Fu) <= 5 )
      break;
LABEL_13:
    v17 = *(_QWORD *)(sub_B8C1B0(v12) + 16);
    if ( (v17 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v12 )
        goto LABEL_8;
    }
    else
    {
      v12 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        goto LABEL_8;
    }
  }
  if ( v12 != 72 )
  {
    *(_BYTE *)(v12 + 12) |= 0x10u;
    goto LABEL_9;
  }
LABEL_8:
  sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a3, 0x136Au, 0);
  sub_15F7200(v38);
LABEL_9:
  v14 = *(_QWORD **)(a1 + 248);
  v15 = v14[2181];
  if ( *(_DWORD *)(v15 + 260) != 15 || (v18 = *(_DWORD *)(v15 + 248), (unsigned int)(v18 - 37) > 1) && v18 != 3 )
  {
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a3, 0x136Bu, 0);
    sub_15F7200(v38);
    v14 = *(_QWORD **)(a1 + 248);
  }
  return sub_EEEBE0(v14, a2, a3, a4, a5, a6);
}
