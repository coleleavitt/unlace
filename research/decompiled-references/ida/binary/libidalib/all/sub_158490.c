__int64 __fastcall sub_158490(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *(_QWORD *)(a1 + 760));
  v3 = *(__int16 *)(a1 + 736);
  result = (unsigned __int64)(v3 * (v2 - *(_QWORD *)(a1 + 744))) / (*(_QWORD *)(a1 + 752) - *(_QWORD *)(a1 + 744));
  if ( result < 0 )
    result = 0;
  if ( result > v3 )
    return *(__int16 *)(a1 + 736);
  return result;
}

