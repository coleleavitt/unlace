__int64 __fastcall sub_3F2640(__int64 a1, __int64 a2)
{
  int v2; // eax
  int dword; // edx
  __int64 result; // rax
  __int64 v5; // [rsp+10h] [rbp-28h]

  v2 = sub_D3E80();
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  if ( v2 == 1 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == v5 )
      result = 0xFFFFFFFFLL;
    *(_BYTE *)(a1 + 896) = 1;
  }
  else
  {
    sub_3F2570(a1, a2, a2 + 40);
    dword = get_dword();
    result = 3;
    if ( dword != -1021043573 )
    {
      result = 1;
      if ( dword != -1021047669 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}
