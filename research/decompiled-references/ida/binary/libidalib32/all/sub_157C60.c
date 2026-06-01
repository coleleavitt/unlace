__int64 __fastcall sub_157C60(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *(_QWORD *)(a1 + 752));
  v3 = *(__int16 *)(a1 + 736);
  result = v3
         * (unsigned int)(v2 - *(_DWORD *)(a1 + 740))
         / (unsigned int)(*(_DWORD *)(a1 + 744) - *(_DWORD *)(a1 + 740));
  if ( result < 0 )
    result = 0;
  if ( result > v3 )
    return *(__int16 *)(a1 + 736);
  return result;
}

