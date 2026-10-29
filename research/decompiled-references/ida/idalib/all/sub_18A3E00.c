void __fastcall sub_18A3E00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r9
  char v10; // dl
  char v11; // r14
  __int64 *v12; // r12
  int v13; // edx
  char v14; // al
  unsigned int v15; // edx
  char *v16; // rax
  __int64 v17; // rbx
  size_t v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+8h] [rbp-C8h] BYREF
  size_t v31; // [rsp+10h] [rbp-C0h]
  _QWORD v32[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-A8h]
  unsigned __int8 *v34; // [rsp+38h] [rbp-98h] BYREF
  char v35; // [rsp+90h] [rbp-40h]
  unsigned int v36; // [rsp+98h] [rbp-38h]
  char v37; // [rsp+9Ch] [rbp-34h]

  if ( !a2 )
    return;
  v7 = a2;
  v30 = 0;
  v31 = 0;
  v8 = sub_B90D60(a2, nullptr, nullptr, 0, (__int64)&v30, a6);
  if ( v8 == 2 )
  {
    v11 = 0;
LABEL_7:
    v12 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), a3, 0x1AAEu, 0);
    v13 = 0;
    v14 = *(_BYTE *)(v7 + 28) & 0x7F;
    if ( v14 != 18 )
    {
      if ( v14 == 23 || (v13 = 1, v11) )
        v13 = 2;
    }
    LODWORD(v29) = v13;
    sub_1587D10((__int64)v32, (int *)&v29);
    sub_15F7200(v32);
    v15 = *(_DWORD *)(v7 + 24);
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x12 )
    {
      sub_168B9F0((__int64)v32, v12, v15, 0x17CAu, 0);
      v29 = *(_QWORD *)(v7 + 40);
      sub_15894B0((__int64)v32, &v29);
      sub_15F7200(v32);
    }
    else
    {
      sub_168B9F0((__int64)v32, v12, v15, 0x188Bu, 0);
      v16 = "class";
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x17 )
        v16 = "category";
      v17 = (__int64)v16;
      if ( v35 )
      {
        sub_AE9DF0(&v34, (__int64)v16, 1u);
      }
      else if ( v37 )
      {
        v26 = sub_168B9E0(v32);
        v27 = v33;
        if ( v33 )
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
        v29 = v27;
        v28 = sub_1587BC0(v26, &v29, v22, v23, v24, v25);
        sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v36 + 8), v17, 1u);
      }
      sub_15F7200(v32);
    }
    return;
  }
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v10 != 18 )
  {
    if ( v10 != 23 || (unsigned int)sub_B90D60(*(_QWORD *)(a2 + 88), nullptr, nullptr, 0, 0, v9) != 2 )
      return;
    v7 = *(_QWORD *)(a2 + 88);
    v11 = 1;
    goto LABEL_7;
  }
  if ( v8 == 3 )
  {
    v18 = v31;
    if ( !v31 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
      v18 = *(_QWORD *)(v19 + 368);
      v20 = *(_QWORD *)(v19 + 360);
      v31 = v18;
      v30 = v20;
    }
    v21 = j__strlen("_app_extension");
    if ( v21 > v18 || v21 && memcmp((const void *)(v18 - v21 + v30), "_app_extension", v21) )
    {
      sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), a3, 0x1D26u, 0);
      sub_15F7200(v32);
      sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x17CAu, 0);
      v29 = *(_QWORD *)(a2 + 40);
      sub_15894B0((__int64)v32, &v29);
      sub_15F7200(v32);
    }
  }
}
