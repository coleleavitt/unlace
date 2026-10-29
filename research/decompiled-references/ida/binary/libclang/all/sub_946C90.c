__int64 __fastcall sub_946C90(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD **v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 v19; // rax
  bool v20; // sf
  __int64 v21; // rdx
  unsigned __int8 **v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+8h] [rbp-A0h] BYREF
  void *v26; // [rsp+10h] [rbp-98h] BYREF
  size_t v27; // [rsp+18h] [rbp-90h]
  _QWORD v28[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall **v29)(); // [rsp+30h] [rbp-78h] BYREF
  int v30; // [rsp+38h] [rbp-70h]
  __int128 v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  char v33; // [rsp+58h] [rbp-50h]
  int v34; // [rsp+5Ch] [rbp-4Ch]
  void **v35; // [rsp+60h] [rbp-48h]

  v5 = 0;
  if ( *a3 )
  {
    _BitScanReverse64(&v10, *a3);
    v5 = v10 + 1;
  }
  v11 = *(_QWORD **)(a1 + 24);
  v12 = *(__int64 (__fastcall **)(__int64))(*v11 + 104LL);
  if ( v12 != sub_8D7E60 )
    goto LABEL_12;
  v13 = (_QWORD *)v11[3];
  v14 = *(__int64 (**)(void))(*v13 + 104LL);
  if ( (char *)v14 != (char *)v12 )
  {
    v16 = v14();
    goto LABEL_7;
  }
  v15 = (_QWORD **)v13[3];
  v12 = (__int64 (__fastcall *)(__int64))(*v15)[13];
  if ( (char *)v12 == (char *)v14 )
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15[3] + 104LL))(v15[3]);
  else
LABEL_12:
    v16 = ((__int64 (*)(void))v12)();
LABEL_7:
  if ( (unsigned int)sub_B064C0(v16) < v5 || (v17 = 1, 0xFFFFFFCF / a4 < (__int64)*a3) )
  {
    if ( a5 )
      return 0;
    v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v20 = (*a3 & 0x8000000000000000LL) != 0LL;
    v25 = v19;
    v21 = 2246;
    if ( !v20 )
      v21 = 2250;
    v22 = (unsigned __int8 **)sub_A2E0C0(a1, &v25, v21, 0);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v31 = 0;
    v35 = &v26;
    v26 = v28;
    v27 = 0;
    LOBYTE(v28[0]) = 0;
    v30 = 0;
    v33 = 0;
    v34 = 1;
    v32 = 0;
    v29 = &off_49DA2C8;
    sub_2623850(&v29, 0, 0, 0, v23, v24);
    sub_26238C0(&v29, *a3);
    v29 = &off_49DA2C8;
    sub_2623770(&v29);
    if ( v22 )
      sub_838D50(v22, v26, v27);
    if ( v26 == v28 )
    {
      return 0;
    }
    else
    {
      operator delete(v26, v28[0] + 1LL);
      return 0;
    }
  }
  return v17;
}

