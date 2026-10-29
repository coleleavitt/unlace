__int64 __fastcall sub_1C8CE10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v4; // rax

  v4 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v4 )
    return sub_19D2DA0(*(__int64 **)(*a1 + 736), *(unsigned int *)(a2 + 24), v4, *(_DWORD *)(a2 + 28));
  else
    return 1;
}
