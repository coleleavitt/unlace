__int64 __fastcall sub_2153CB0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // rdi
  void **v6; // [rsp+0h] [rbp-58h] BYREF
  void **v7; // [rsp+8h] [rbp-50h]
  void **v8[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]

  v2 = *a1;
  v6 = nullptr;
  v7 = nullptr;
  v3 = (*(__int64 (__fastcall **)(__int64 *, void ***))(v2 + 160))(a1, &v6);
  if ( !(_BYTE)v3 )
  {
    v4 = a1[2];
    v9 = 261;
    v8[0] = v6;
    v8[1] = v7;
    *a2 = sub_21093A0(v4, v8);
  }
  return v3;
}
