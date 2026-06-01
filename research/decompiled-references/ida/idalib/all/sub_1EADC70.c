__int64 __fastcall sub_1EADC70(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v6; // [rsp+Ch] [rbp-6Ch] BYREF
  void *v7[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  void *v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF

  v7[1] = nullptr;
  v8[0] = 0;
  v7[0] = v8;
  v6 = 0;
  sub_1EAC540((__m128i **)v9, a1, &v6);
  sub_A0AAD0((__int64)v7, v9);
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  v4 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, v7, a2);
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  return v4;
}
