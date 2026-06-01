__int64 __fastcall sub_CD4D80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  unsigned __int8 **v8; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v8 = (unsigned __int8 **)sub_E0FF50(a1, v4, 2464, 0);
  if ( v8 )
  {
    sub_CD4D00(&v8, a3);
    if ( v8 )
      sub_AC60B0(v8, *(_QWORD *)(v4 + 8), 8u);
  }
  v5 = *(_QWORD ***)(a1 + 24);
  v6 = (__int64 (*)(void))(*v5)[4];
  if ( (char *)v6 == (char *)sub_CCC520 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 32LL))(v5[3]);
  else
    return v6();
}

