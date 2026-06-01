__int64 __fastcall sub_946E70(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rdx
  _QWORD *v15; // rdi
  _QWORD **v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // edx
  unsigned __int8 **v20; // r12
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  void *v24; // [rsp+10h] [rbp-98h] BYREF
  size_t v25; // [rsp+18h] [rbp-90h]
  _QWORD v26[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+30h] [rbp-78h] BYREF
  int v28; // [rsp+38h] [rbp-70h]
  __int128 v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  char v31; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+5Ch] [rbp-4Ch]
  void **v33; // [rsp+60h] [rbp-48h]

  v5 = 0;
  if ( *a3 )
  {
    _BitScanReverse64(&v10, *a3);
    v5 = v10 + 1;
  }
  v11 = *(_QWORD **)(a1 + 24);
  v12 = *(__int64 (__fastcall **)(__int64))(*v11 + 104LL);
  if ( v12 != sub_8D7E60 )
    goto LABEL_14;
  v13 = (_QWORD *)v11[3];
  v14 = *(__int64 (**)(void))(*v13 + 104LL);
  if ( (char *)v14 != (char *)v12 )
  {
LABEL_13:
    v17 = v14();
    goto LABEL_8;
  }
  v15 = (_QWORD *)v13[3];
  v12 = *(__int64 (__fastcall **)(__int64))(*v15 + 104LL);
  if ( (char *)v12 != (char *)v14 )
  {
LABEL_14:
    v17 = ((__int64 (*)(void))v12)();
    goto LABEL_8;
  }
  v16 = (_QWORD **)v15[3];
  v14 = (__int64 (*)(void))(*v16)[13];
  if ( (char *)v14 != (char *)v12 )
    goto LABEL_13;
  v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
LABEL_8:
  if ( (unsigned int)sub_B064C0(v17) < v5 || (v18 = 1, 0xFFFFFFCF / a4 < *a3) )
  {
    if ( !a5 )
    {
      v23 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v20 = (unsigned __int8 **)sub_A2E0C0(a1, &v23, 2250, 0);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      v29 = 0;
      v33 = &v24;
      v24 = v26;
      v25 = 0;
      LOBYTE(v26[0]) = 0;
      v28 = 0;
      v31 = 0;
      v32 = 1;
      v30 = 0;
      v27 = &off_49DA2C8;
      sub_2623850(&v27, 0, 0, 0, v21, v22);
      sub_26238A0(&v27, *a3);
      v27 = &off_49DA2C8;
      sub_2623770(&v27);
      if ( v20 )
        sub_838D50(v20, v24, v25);
      if ( v24 != v26 )
        operator delete(v24, v26[0] + 1LL);
    }
    return 0;
  }
  return v18;
}

