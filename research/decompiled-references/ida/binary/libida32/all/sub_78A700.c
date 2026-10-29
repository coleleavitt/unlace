__int64 __fastcall sub_78A700(__int64 a1, __int64 a2, __int64 a3, int a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v6 = *(_QWORD *)(a1 + 184);
  v7 = v6 + *(_QWORD *)(a1 + 48) + 16;
  if ( v6 < v7 )
    *(_QWORD *)(a1 + 168) = qvector_reserve(a1 + 168, *(_QWORD *)(a1 + 168), v7, 1);
  return sub_78A2C0((_QWORD *)(a1 + 168), (_WORD *)(a1 + 40), v7, a4, a5, a6);
}

