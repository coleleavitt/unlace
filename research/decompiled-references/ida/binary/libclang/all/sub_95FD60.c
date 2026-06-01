__int64 __fastcall sub_95FD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r13d
  int v15; // eax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // r14d
  unsigned __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r14d
  unsigned int v28; // eax
  unsigned int v29; // eax
  void *v30; // rdx
  unsigned int v31; // esi
  unsigned int v32; // [rsp+4h] [rbp-94h]
  char v33; // [rsp+8h] [rbp-90h]
  void *v34; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+18h] [rbp-80h]
  void *v36; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-70h]
  void *v38; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-60h]
  void *v40; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-50h]
  char v42; // [rsp+4Ch] [rbp-4Ch]
  void *v43; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-40h]

  v32 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v40, *(_DWORD *)(a3 + 8) - 1, *(_DWORD *)(a4 + 8));
    v44 = *(_DWORD *)(a4 + 8);
    if ( v44 > 0x40 )
      sub_2585B30(&v43);
    else
      v43 = *(void **)a4;
    sub_8CC340((__int64)&v43, &v40, a4);
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
  }
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  if ( v8 > 0x40 )
    v9 = *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6));
  if ( (v9 & (1LL << ((unsigned __int8)v8 - 1))) != 0 )
  {
    v36 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v10 = (void *)sub_A2E1B0(a1, &v36, 2242, 0);
    v11 = *(unsigned int *)(a4 + 8);
    v38 = v10;
    sub_2587BE0(&v43, a4, v11);
    v12 = v44;
    v42 = 0;
    v41 = v44;
    v40 = v43;
    if ( v38 )
    {
      sub_8DF340((unsigned __int8 ***)&v38, (__int64)&v40);
      v12 = v41;
    }
    if ( v12 > 0x40 && v40 )
      operator delete[](v40);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v13 )
    {
      sub_938B60((__int64)&v43, a4);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      *(_QWORD *)a4 = v43;
      *(_DWORD *)(a4 + 8) = v44;
      return (unsigned int)sub_95F6F0(a1, a2, a3, a4);
    }
    return v13;
  }
  v13 = sub_955F60(a1, a2, a3, a4, v32);
  if ( !(_BYTE)v13 )
    return v13;
  v15 = *(_DWORD *)(a3 + 8);
  v16 = *(_DWORD *)(a4 + 8);
  v35 = 3;
  v34 = &byte_7;
  sub_92DD40((__int64)&v43, v15 - 1, v16);
  v17 = sub_922490(a4, (__int64)&v43);
  if ( v44 > 0x40 && v43 )
  {
    v33 = v17;
    operator delete[](v43);
    v17 = v33;
  }
  v18 = *(_DWORD *)(a3 + 8);
  v19 = *(_QWORD *)a3;
  v20 = v18 - 1;
  v21 = 1LL << ((unsigned __int8)v18 - 1);
  if ( v17 == 3 )
  {
    if ( v18 > 0x40 )
      v19 = *(_QWORD *)(v19 + 8LL * (v20 >> 6));
    if ( (v21 & v19) == 0 )
    {
      v27 = *(_DWORD *)(a4 + 8);
      v28 = sub_831980(a3);
      sub_92DD40((__int64)&v43, v28, v27);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v29 = v44;
      v30 = v43;
      *(_DWORD *)(a4 + 8) = v44;
      *(_QWORD *)a4 = v30;
      v41 = v29;
      if ( v29 <= 0x40 )
      {
        v40 = v30;
        sub_91FE00((__int64)&v43, (__int64)&v40, v32);
        goto LABEL_73;
      }
      goto LABEL_94;
    }
    sub_8F62E0((__int64)&v43, v18);
    goto LABEL_91;
  }
  if ( v18 > 0x40 )
  {
    if ( (*(_QWORD *)(v19 + 8LL * (v20 >> 6)) & v21) == 0 )
    {
LABEL_71:
      v41 = *(_DWORD *)(a4 + 8);
      if ( v41 <= 0x40 )
      {
        v40 = *(void **)a4;
        sub_91FE00((__int64)&v43, (__int64)&v40, v32);
        goto LABEL_73;
      }
LABEL_94:
      sub_2585B30(&v40);
      sub_91FE00((__int64)&v43, (__int64)&v40, v32);
LABEL_73:
      v37 = *(_DWORD *)(a3 + 8);
      if ( v37 > 0x40 )
        sub_2585B30(&v36);
      else
        v36 = *(void **)a3;
      sub_8CC270((__int64)&v38, (__int64)&v36);
      sub_8CC680((__int64)&v38, (__int64)&v43, (__int64)&v34);
      if ( v39 > 0x40 && v38 )
        operator delete[](v38);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      if ( v44 > 0x40 && v43 )
        operator delete[](v43);
      if ( v41 <= 0x40 )
        goto LABEL_41;
      v23 = v40;
      if ( !v40 )
        goto LABEL_41;
      goto LABEL_40;
    }
    v31 = sub_2587400(a3);
    if ( v31 != v18 )
      goto LABEL_19;
    sub_8F62E0((__int64)&v43, v31);
LABEL_91:
    v34 = v43;
    v22 = v44;
    v35 = v44;
    goto LABEL_42;
  }
  if ( (v21 & v19) == 0 )
    goto LABEL_71;
LABEL_19:
  sub_938B60((__int64)&v43, a3);
  sub_8CC270((__int64)&v36, (__int64)&v43);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  v39 = *(_DWORD *)(a4 + 8);
  if ( v39 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = *(void **)a4;
  sub_91FE00((__int64)&v40, (__int64)&v38, v32);
  v44 = v37;
  if ( v37 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = v36;
  sub_8CC680((__int64)&v43, (__int64)&v40, (__int64)&v34);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  sub_938170((__int64)&v43, (__int64)&v34);
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  v34 = v43;
  v22 = v44;
  v35 = v44;
  if ( v37 <= 0x40 )
    goto LABEL_42;
  v23 = v36;
  if ( !v36 )
    goto LABEL_42;
LABEL_40:
  operator delete[](v23);
LABEL_41:
  v22 = v35;
LABEL_42:
  v41 = v22;
  v24 = *(_QWORD *)(a1 + 184);
  if ( v22 > 0x40 )
    sub_2585B30(&v40);
  else
    v40 = v34;
  sub_8CC190((__int64)&v43, (__int64)&v40);
  v25 = sub_A1A4E0(v24, 16);
  v26 = v44;
  v44 = 0;
  *(_DWORD *)(v25 + 8) = v26;
  *(_QWORD *)v25 = v43;
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  return v13;
}

