unsigned __int64 __fastcall sub_1B117E0(__int64 *a1, _DWORD *a2, int a3, int a4, unsigned int a5, __m128 a6, __m128 a7)
{
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r9

  if ( !a2 )
    return 0;
  if ( (*a2 & 0x3C000) != 0 )
    v10 = (__int64)a2;
  else
    v10 = sub_1B10FC0(a1, (unsigned __int64)a2, 5u, 1, 0, a6, a7);
  if ( v10 == 1 )
    return 0;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_EBF9F0(v11, v10 & 0xFFFFFFFFFFFFFFFELL, a3, a4, a5, v12);
}
