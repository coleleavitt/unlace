__int64 __fastcall sub_61C070(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 120);
  if ( (int)v2 <= 0 )
  {
    *a2 = 0;
    return 4;
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 112);
    v5 = (__int64)&v4[2 * (unsigned int)(v2 - 1) + 2];
    do
    {
      v6 = (unsigned int)*v4;
      if ( *(_DWORD *)(a1 + 64) < (unsigned int)v6 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 40LL))(a1, v6, a2, v5);
        *(_DWORD *)(a1 + 64) = *v4;
        return result;
      }
      v4 += 2;
    }
    while ( v4 != (_DWORD *)v5 );
    *a2 = 0;
    return 4;
  }
}
