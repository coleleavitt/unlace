__int64 __fastcall sub_E3DD30(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = a2;
  v2 = sub_F22BD0(v6, 0);
  if ( v2 )
  {
    v3 = v2;
    result = sub_E3DA60(a1, v2);
    if ( !(_BYTE)result )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      return sub_E3D1B0((__int64)a1, v5);
    }
  }
  else
  {
    v6[0] = sub_AB62A0(*(_QWORD **)(*a1 + 8), v6[0], 0);
    return sub_E3D1B0((__int64)a1, v6[0]);
  }
  return result;
}
