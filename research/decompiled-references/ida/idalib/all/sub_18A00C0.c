void __fastcall sub_18A00C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  size_t v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  size_t v33; // [rsp+8h] [rbp-170h]
  void *v34; // [rsp+10h] [rbp-168h] BYREF
  __int64 v35; // [rsp+18h] [rbp-160h]
  _BYTE v36[16]; // [rsp+20h] [rbp-158h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+30h] [rbp-148h] BYREF
  int v38; // [rsp+38h] [rbp-140h]
  __int128 v39; // [rsp+40h] [rbp-138h]
  void *dest; // [rsp+50h] [rbp-128h]
  char v41; // [rsp+58h] [rbp-120h]
  int v42; // [rsp+5Ch] [rbp-11Ch]
  void **v43; // [rsp+60h] [rbp-118h]
  __int64 v44[3]; // [rsp+70h] [rbp-108h] BYREF
  void *v45; // [rsp+88h] [rbp-F0h]
  __int64 v46; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v47[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v49[11]; // [rsp+D0h] [rbp-A8h] BYREF
  char v50; // [rsp+128h] [rbp-50h]
  unsigned int v51; // [rsp+130h] [rbp-48h]
  char v52; // [rsp+134h] [rbp-44h]

  if ( (unsigned int)sub_B90D60(a3, nullptr, nullptr, 0, 0, a6) == 3 )
    return;
  sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), a4, 0);
  if ( v50 )
  {
    sub_1894370(v49, a3);
LABEL_18:
    if ( a5 )
    {
      if ( v50 )
      {
        sub_1894370(v49, a5);
      }
      else if ( v52 )
      {
        v23 = sub_168B9E0(v47);
        v24 = v48;
        if ( v48 )
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v44[0] = v24;
        v25 = sub_1587BC0(v23, v44, v19, v20, v21, v22);
        sub_1894370((unsigned __int8 **)(*v25 + 32LL * v51 + 8), a5);
      }
    }
    goto LABEL_5;
  }
  if ( v52 )
  {
    v16 = sub_168B9E0(v47);
    v17 = v48;
    if ( v48 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
    v44[0] = v17;
    v18 = sub_1587BC0(v16, v44, v12, v13, v14, v15);
    sub_1894370((unsigned __int8 **)(*v18 + 32LL * v51 + 8), a3);
    goto LABEL_18;
  }
LABEL_5:
  v34 = v36;
  v39 = 0;
  v36[0] = 0;
  v37 = &off_2BEBE68;
  v35 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 1;
  dest = nullptr;
  v43 = &v34;
  sub_227B8B0(&v37, 0, 0, 0);
  v9 = sub_B8C330(a2);
  sub_BB7900(a3, (__int64)&v37, (const __m128i *)(v9 + 17464), 0, 0);
  v10 = j__strlen(" {\n}\n\n");
  if ( v10 > *((_QWORD *)&v39 + 1) - (_QWORD)dest )
  {
    sub_227BF10(&v37, " {\n}\n\n", v10);
  }
  else if ( v10 )
  {
    v33 = v10;
    memcpy(dest, " {\n}\n\n", v10);
    dest = (char *)dest + v33;
  }
  sub_9EC740((__int64)v44, *(_DWORD *)(a2 + 80), v34, v35, 0);
  sub_1589170((__int64)v47, v44);
  if ( v45 != &v46 )
    operator delete(v45);
  v37 = &off_2BEBE68;
  sub_227B7A0(&v37);
  if ( v34 != v36 )
    operator delete(v34);
  sub_15F7200(v47);
  v11 = *(_DWORD *)(a3 + 24);
  if ( v11 )
  {
    sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), v11, 0x17CAu, 0);
    if ( v50 )
    {
      sub_1894370(v49, a3);
    }
    else if ( v52 )
    {
      v28 = sub_168B9E0(v47);
      v31 = v48;
      if ( v48 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
      v44[0] = v31;
      v32 = sub_1587BC0(v28, v44, v26, v27, v29, v30);
      sub_1894370((unsigned __int8 **)(*v32 + 32LL * v51 + 8), a3);
    }
    sub_15F7200(v47);
  }
}
