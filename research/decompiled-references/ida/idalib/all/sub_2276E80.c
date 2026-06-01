__int64 __fastcall sub_2276E80(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx

  result = 0;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    v4 = *(_QWORD **)(a1 + 672);
    if ( *(_DWORD *)(*v4 + 32LL) == 5 )
    {
      *a3 = v4;
      *(_QWORD *)(a1 + 672) = *(_QWORD *)(v4[1] + 8LL * a2);
      return 1;
    }
  }
  return result;
}
