__int64 __fastcall sub_3B0770(
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
  __int64 result; // rax
  __int64 tinfo_property4; // rdx
  __int64 v15; // rbx
  __int64 v16; // r13
  double v17; // xmm0_8
  unsigned int v18; // eax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  double v22; // xmm4_8
  double v23; // xmm5_8

  if ( *(_DWORD *)a3 == 2 )
  {
    tinfo_property4 = get_tinfo_property4(*(_QWORD *)(a3 + 64), 300, 0, 0, 0, 0);
    result = 0;
    if ( tinfo_property4 == -1 )
    {
      v15 = a3 + 64;
      v16 = *(_QWORD *)(a2 + 208);
      v17 = (*(double (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 1000) + 48LL))(
              *(_QWORD *)(a1 + 1000),
              v15,
              0);
      v19 = v18;
      if ( *(_DWORD *)(*(_QWORD *)(sub_1EA680(a1 + 384, v15, v20, v21, v17) + 40) + 12LL) == v18
        && *(_QWORD *)(v16 + 16) == -2 )
      {
        sub_3A9A00(v19, 0, v17, a6, a7, a8, v22, v23, a11, a12);
        return 1;
      }
      else
      {
        return (unsigned __int8)sub_3CE6D0(v15, 0, 1);
      }
    }
  }
  else if ( *(_DWORD *)a3 == 3 )
  {
    return sub_3B01E0(a2, a3 + 64, *(int *)(a3 + 72), a5, a6, a7, a8, a9, a10, a11, a12);
  }
  else
  {
    return sub_2010D0((const __m128i *)a1, (const char *)a2, (_DWORD *)a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  return result;
}
