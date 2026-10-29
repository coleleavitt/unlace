unsigned __int64 __fastcall sub_7E0F0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbp
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  __int64 v8; // rdi

  if ( *a2 >= a2[1] )
    goto LABEL_8;
  v3 = a1;
  a1 = a2;
  v5 = unpack_dd();
  v6 = 0;
  if ( v5 > 0 )
    v6 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * (unsigned int)v5);
  *v3 = v6;
  if ( *a2 >= a2[1] )
LABEL_8:
    sub_79930(a1);
  *((_DWORD *)v3 + 2) = unpack_dd();
  v3[4] = sub_7C2C0((__int64)a2, 1u);
  *((_DWORD *)v3 + 10) = sub_7BFC0(a2) - 1;
  v3[7] = sub_7C2C0((__int64)a2, 1u);
  *((_DWORD *)v3 + 16) = sub_7BFC0(a2) - 1;
  v3[9] = sub_7C2C0((__int64)a2, 1u);
  v3[10] = sub_7C2C0((__int64)a2, 1u);
  result = sub_7C2C0((__int64)a2, 1u);
  v8 = v3[12];
  v3[11] = result;
  if ( v8 )
  {
    v3[13] = 0;
    result = qfree();
    v3[12] = 0;
    v3[14] = 0;
  }
  v3[15] = 0;
  return result;
}
