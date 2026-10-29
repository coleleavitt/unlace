__int64 __fastcall sub_21F9DB0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  bool v7; // cc
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 16) - *(_DWORD *)(a2 + 16);
  if ( v2 )
  {
    result = 0;
    if ( v2 > 0 )
      return 2;
  }
  else
  {
    v3 = a2 + 8;
    v4 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) >> 6;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) <= 0x7F )
      v4 = 1;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
      v3 = *(_QWORD *)(a2 + 8);
    v5 = a1 + 8;
    if ( (_DWORD)v4 != 1 )
      v5 = *(_QWORD *)(a1 + 8);
    v6 = sub_220BA00(v5, v3, v4);
    v7 = v6 <= 0;
    result = v6 == 0;
    if ( !v7 )
      return 2;
  }
  return result;
}
