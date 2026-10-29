void __fastcall sub_11E7860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, _QWORD *); // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-80h]
  void *v17[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v20; // [rsp+50h] [rbp-38h]

  (*(void (__fastcall **)(void **, __int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 304LL))(
    v17,
    a1,
    a2,
    a4,
    a5,
    (unsigned int)(a7 != 0) + 1,
    0);
  if ( (a6 & 1) == 0 )
  {
    v11 = sub_112C5D0(a1);
    v12 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 96LL);
    v20 = 260;
    v19[0] = v17;
    if ( !v12(v11, v19) )
    {
      if ( (a6 & 4) == 0 )
        goto LABEL_5;
      goto LABEL_10;
    }
  }
  v19[0] = v17;
  v20 = 260;
  v9 = sub_10DA6C0(a2, (__int64)v19);
  v10 = *(unsigned int *)(a3 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v16 = v9;
    sub_2237220(a3, a3 + 16, v10 + 1, 8);
    v10 = *(unsigned int *)(a3 + 8);
    v9 = v16;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = v9;
  ++*(_DWORD *)(a3 + 8);
  if ( (a6 & 4) != 0 )
  {
LABEL_10:
    sub_10DC5D0(a3, (__int64)"-rpath");
    sub_10DC5D0(a3, (__int64)"@executable_path");
    sub_10DC5D0(a3, (__int64)"-rpath");
    v13 = sub_228A4B0(v17[0], v17[1], 0);
    v20 = 261;
    v19[0] = v13;
    v19[1] = v14;
    v15 = sub_10DA6C0(a2, (__int64)v19);
    sub_10DC5D0(a3, v15);
  }
LABEL_5:
  if ( v17[0] != &v18 )
    operator delete(v17[0]);
}
