/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DE01
// Address: 0x0047DE01

//----- (0047DE01) --------------------------------------------------------
LPVOID sub_47DE01()
{
  const unsigned __int16 *EnvironmentStringsW; // eax
  WCHAR *v1; // esi
  LPVOID v2; // edi
  SIZE_T v3; // ebx
  LPVOID v4; // eax

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = (WCHAR *)EnvironmentStringsW;
  if ( !EnvironmentStringsW )
    return nullptr;
  v3 = ((char *)sub_47DD46(EnvironmentStringsW) - (char *)EnvironmentStringsW) & 0xFFFFFFFE;
  v4 = sub_479531(v3);
  v2 = v4;
  if ( v4 )
    sub_464310((unsigned int)v4, (unsigned int)v1, v3);
  sub_479216(nullptr);
  FreeEnvironmentStringsW(v1);
  return v2;
}
