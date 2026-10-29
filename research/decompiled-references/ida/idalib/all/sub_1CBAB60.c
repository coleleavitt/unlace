__int64 __fastcall sub_1CBAB60(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int32 a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_F22A90(v13, *a3);
  v9 = *((_QWORD *)sub_F22E90(v13) + 1);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 7) != 0 )
    v10 = 0;
  *a6 = v10;
  result = sub_1CBA680(a1, a2, v13, a5, 0);
  if ( !(_BYTE)result )
  {
    result = v13[0];
    *a3 = v13[0];
    *a4 = 2;
  }
  return result;
}
