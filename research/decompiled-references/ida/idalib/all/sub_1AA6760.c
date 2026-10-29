void __fastcall sub_1AA6760(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  const char *v13; // r14
  const char *v14; // rax
  size_t v15; // rdx
  __int64 v16; // r13
  int v17; // eax
  unsigned int v18; // eax
  unsigned int *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r14
  unsigned __int64 (__fastcall *v22)(__int64); // rax
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v37; // [rsp+28h] [rbp-98h] BYREF
  char v38; // [rsp+80h] [rbp-40h]
  unsigned int v39; // [rsp+88h] [rbp-38h]
  char v40; // [rsp+8Ch] [rbp-34h]

  v3 = a1[33];
  if ( v3 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v4 = (_QWORD *)*v4;
    v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      if ( *(_QWORD **)(v5 + 8) != v4 )
        return;
    }
    else if ( (_QWORD *)v5 != v4 )
    {
      return;
    }
    v8 = sub_1AA0A10(*(_QWORD *)(v3 + 64), a2);
    v9 = v8;
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 40) & 7) == 0 )
      {
        v10 = sub_995750(v8);
        v12 = v11;
        v13 = v10;
        v14 = sub_995750(a2);
        if ( v15 == v12 && (!v15 || !memcmp(v14, v13, v15)) )
        {
          v16 = *(_QWORD *)(*a1 + 272);
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
          v18 = sub_10228C0(v16, v17, nullptr);
          v19 = (unsigned int *)a1[33];
          v20 = v18;
          v21 = *(_QWORD *)(*a1 + 272);
          v22 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL);
          v23 = v22 == sub_BB0C60 ? v19[6] : ((unsigned int (*)(void))v22)();
          if ( v20 - (unsigned int)sub_10228C0(v21, v23, nullptr) <= 1 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
            if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) != v24 )
            {
              v25 = sub_EEB7E0(*(_QWORD *)(a1[33] + 64), v23, a3);
              sub_168B9F0((__int64)v35, a1, v25, 0x194Fu, 0);
              sub_15F7200(v35);
              v26 = sub_B73090(v9);
              sub_168B9F0((__int64)v35, a1, v26, 0x188Bu, 0);
              if ( v38 )
              {
                sub_AE9DF0(&v37, a2, 0xAu);
              }
              else if ( v40 )
              {
                v29 = sub_168B9E0(v35);
                v32 = v36;
                if ( v36 )
                  v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
                v34 = v32;
                v33 = sub_1587BC0(v29, &v34, v27, v28, v30, v31);
                sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v39 + 8), a2, 0xAu);
              }
              sub_15F7200(v35);
            }
          }
        }
      }
    }
  }
}
