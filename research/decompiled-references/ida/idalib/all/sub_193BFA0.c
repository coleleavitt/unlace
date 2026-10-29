unsigned __int64 __fastcall sub_193BFA0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  else
    return sub_190C990(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v4 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
}
