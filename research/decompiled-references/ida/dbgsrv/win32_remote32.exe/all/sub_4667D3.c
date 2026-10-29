/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4667D3
// Address: 0x004667D3

//----- (004667D3) --------------------------------------------------------
void *sub_4667D3()
{
  DWORD LastError; // edi
  LPVOID v2; // eax
  void *v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dwTlsIndex == -1 )
    return nullptr;
  LastError = GetLastError();
  v2 = sub_467BEF(dwTlsIndex);
  v3 = v2;
  if ( v2 == (LPVOID)-1 )
  {
LABEL_6:
    v3 = nullptr;
    goto LABEL_12;
  }
  if ( !v2 )
  {
    if ( sub_467C2A(dwTlsIndex, (LPVOID)0xFFFFFFFF) )
    {
      v4 = sub_46C90D(1u, 0x28u);
      v5 = v4;
      if ( v4 && sub_467C2A(dwTlsIndex, v4) )
      {
        v3 = v5;
        v5 = nullptr;
      }
      else
      {
        v3 = nullptr;
        sub_467C2A(dwTlsIndex, nullptr);
      }
      sub_46C918(v5);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  SetLastError(LastError);
  return v3;
}
