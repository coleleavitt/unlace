void __fastcall sub_F2CBE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // rbp
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  _BYTE v10[56]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 1096);
  if ( *(_BYTE *)(a1 + 1104) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 1096), 6, 1, 0);
    v3 = *(_QWORD *)(a1 + 1096);
    v4 = j__strlen(" ");
    v5 = sub_9954E0(v3, " ", v4);
    sub_BF83A0(&v8, a2);
    sub_227BF10(v5, v8, v9);
    if ( v8 != v10 )
      operator delete(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  else
  {
    v6 = j__strlen(" ");
    v7 = sub_9954E0(v2, " ", v6);
    sub_BF83A0(&v8, a2);
    sub_227BF10(v7, v8, v9);
    if ( v8 != v10 )
      operator delete(v8);
  }
}
