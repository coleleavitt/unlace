__int64 __fastcall sub_A8E0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v3 == 2
    || v3 == 1 && (v7 = a3, v5 = getinf(5), (unsigned int)v5 <= 0xD) && (v6 = -8293, a3 = v7, !_bittest64(&v6, v5)) )
  {
    if ( a3 == 4 )
      sub_91C0(*(std::chrono::_V2::steady_clock **)(a1 + 8));
  }
  return a2;
}
