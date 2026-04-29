__int64 __fastcall sub_12D630(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 result; // rax
  int v5; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 != -1 )
    return sub_12D290(a2, nullptr, 0, a1, 2 * v3, 0, a3);
  result = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
  {
    LOBYTE(v5) = sub_117990((unsigned __int8 *)a1);
    return v5 ^ 1u;
  }
  return result;
}
