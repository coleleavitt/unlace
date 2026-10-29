unsigned __int64 __fastcall sub_1E6EEC0(
        __int64 *a1,
        unsigned __int8 a2,
        _DWORD *a3,
        unsigned int a4,
        __m128 a5,
        __m128 a6)
{
  unsigned __int64 result; // rax
  void *v8; // rbp
  __int64 v9; // r14
  unsigned __int64 (__fastcall *v10)(__int64); // rax
  unsigned __int64 v11; // rax
  unsigned __int64 (__fastcall *v12)(__int64); // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-F0h]
  __int64 v29; // [rsp+18h] [rbp-E0h] BYREF
  void *v30; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-D0h]
  char v32; // [rsp+2Ch] [rbp-CCh]
  _QWORD v33[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v35[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v36; // [rsp+A8h] [rbp-50h]
  unsigned int v37; // [rsp+B0h] [rbp-48h]
  char v38; // [rsp+B4h] [rbp-44h]

  if ( (*a3 & 0x8000) != 0 )
    return sub_A77500(a1[31], a2, (__int64)a3);
  v31 = 32;
  v30 = nullptr;
  v32 = 1;
  if ( sub_1915F20(a1, (unsigned __int64)a3, (__int64)&v30, 1, a5, a6) == 1 )
    goto LABEL_23;
  v8 = v30;
  if ( v31 > 0x40 )
    v8 = *(void **)v30;
  if ( !a2 )
  {
    if ( (unsigned __int64)v8 > 1 )
      goto LABEL_9;
    sub_168B9F0((__int64)v33, a1 + 1, a4, 0xCFBu, 0);
    LODWORD(v29) = 0;
LABEL_29:
    sub_1587D10((__int64)v33, (int *)&v29);
LABEL_22:
    sub_15F7200(v33);
LABEL_23:
    result = 0;
    goto LABEL_24;
  }
  if ( !v8 )
  {
    sub_168B9F0((__int64)v33, a1 + 1, a4, 0xCFBu, 0);
    LODWORD(v29) = 1;
    goto LABEL_29;
  }
LABEL_9:
  v9 = *(_QWORD *)(a1[31] + 17448);
  v10 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL);
  if ( v10 == sub_102B7C0 )
  {
    v11 = 128;
    if ( *(_BYTE *)(v9 + 404) )
    {
      v11 = *(unsigned int *)(v9 + 400);
      if ( v11 > (unsigned __int64)&loc_800000 )
        v11 = (unsigned __int64)&loc_800000;
    }
  }
  else
  {
    v11 = v10(*(_QWORD *)(a1[31] + 17448));
  }
  if ( v11 < (unsigned __int64)v8 )
  {
    sub_168B9F0((__int64)v33, a1 + 1, a4, 0xCFCu, 0);
    if ( v36 )
    {
      sub_1E5E160(v35, a2);
    }
    else if ( v38 )
    {
      v16 = sub_168B9E0(v33);
      v19 = v34;
      if ( v34 )
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v29 = v19;
      v20 = sub_1587BC0(v16, &v29, v14, v15, v17, v18);
      sub_1E5E160((unsigned __int8 **)(*v20 + 32LL * v37 + 8), a2);
    }
    v12 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL);
    if ( v12 == sub_102B7C0 )
    {
      v13 = 128;
      if ( *(_BYTE *)(v9 + 404) )
      {
        v13 = *(unsigned int *)(v9 + 400);
        if ( v13 > (unsigned __int64)&loc_800000 )
          v13 = (unsigned __int64)&loc_800000;
      }
    }
    else
    {
      v13 = v12(v9);
    }
    if ( v36 )
    {
      sub_AE9DF0(v35, v13, 3u);
    }
    else if ( v38 )
    {
      v25 = sub_168B9E0(v33);
      v26 = v34;
      if ( v34 )
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v29 = v26;
      v27 = sub_1587BC0(v25, &v29, v21, v22, v23, v24);
      sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v37 + 8), v13, 3u);
    }
    goto LABEL_22;
  }
  result = sub_A70200(a1[31], a2, (unsigned int)v8);
LABEL_24:
  if ( v31 > 0x40 )
  {
    if ( v30 )
    {
      v28 = result;
      operator delete[](v30);
      return v28;
    }
  }
  return result;
}
