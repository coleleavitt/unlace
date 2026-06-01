__int64 __fastcall sub_1195C20(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  size_t v3; // rdx
  __int64 v4; // rbp
  _BYTE *v5; // r13
  size_t v6; // rbp
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbp
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  size_t v12; // [rsp+8h] [rbp-40h]
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE **)a1;
  if ( v3 == v4 && (!v3 || !memcmp(*(const void **)a2, v5, v3)) )
    return 1;
  v11 = v13;
  sub_1189220(&v11, v5, (__int64)&v5[v4]);
  v6 = v12;
  if ( v12 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v7 = v11;
  if ( v11 == v13 )
    v8 = 15;
  else
    v8 = v13[0];
  if ( v12 + 1 > v8 )
  {
    sub_998B30((__int64)&v11, v12, 0, nullptr, 1u);
    v7 = v11;
  }
  v7[v6] = 61;
  v12 = v6 + 1;
  *((_BYTE *)v11 + v6 + 1) = 0;
  v9 = v11;
  LOBYTE(v2) = sub_9983C0((__int64 *)a2, (char *)v11, 0, v12) != -1;
  if ( v9 != v13 )
    operator delete(v9);
  return v2;
}
