__int64 __fastcall sub_2CD7A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v12 = *(unsigned __int8 *)(a1 + 1080);
  if ( !(_BYTE)v12 || *(_QWORD *)(a1 + 1064) == -1 )
  {
    v16 = sub_1EB5B0(a1, a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 240LL))(v16, 0);
  }
  else
  {
    if ( (unsigned __int8)sub_2CD5B0(a1, 1, a5, a6, a7, a8, a9, a10, a11, a12) )
    {
      v17 = sub_1EB5B0(a1, 1, v13, v14, a5);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 240LL))(v17, 0);
    }
    return v12;
  }
}
