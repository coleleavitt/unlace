__int64 __fastcall sub_1694D10(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, _WORD *a6, __m128 a7)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  _QWORD *v11; // rax

  result = 1;
  v8 = *(_DWORD *)(a3 + 4);
  if ( (_DWORD)a4 == 4 )
  {
    if ( *a2 )
    {
      v11 = (_QWORD *)sub_1A0B620(a2, a2, a3, a4, a5, a6);
      return sub_16910B0(a1, a5, a6, 4, v8, v11, a7, 1);
    }
  }
  return result;
}
