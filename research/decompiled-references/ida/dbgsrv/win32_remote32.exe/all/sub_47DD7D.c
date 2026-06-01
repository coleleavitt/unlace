/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DD7D
// Address: 0x0047DD7D

//----- (0047DD7D) --------------------------------------------------------
CHAR *sub_47DD7D()
{
  const unsigned __int16 *EnvironmentStringsW; // eax
  WCHAR *v1; // esi
  int v2; // ebx
  SIZE_T v3; // eax
  CHAR *v4; // edi
  CHAR *v5; // ebx
  int cbMultiByte; // [esp+Ch] [ebp-4h]

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = (WCHAR *)EnvironmentStringsW;
  if ( EnvironmentStringsW
    && (v2 = sub_47DD46(EnvironmentStringsW) - EnvironmentStringsW,
        v3 = sub_47B467(0, 0, v1, v2, nullptr, 0, nullptr, nullptr),
        (cbMultiByte = v3) != 0) )
  {
    v4 = (CHAR *)sub_479531(v3);
    if ( v4 && sub_47B467(0, 0, v1, v2, v4, cbMultiByte, nullptr, nullptr) )
    {
      v5 = v4;
      v4 = nullptr;
    }
    else
    {
      v5 = nullptr;
    }
    sub_479216(v4);
  }
  else
  {
    v5 = nullptr;
  }
  if ( v1 )
    FreeEnvironmentStringsW(v1);
  return v5;
}
