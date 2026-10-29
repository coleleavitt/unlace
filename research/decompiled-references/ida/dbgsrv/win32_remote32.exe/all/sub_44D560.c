/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D560
// Address: 0x0044D560

//----- (0044D560) --------------------------------------------------------
char *__cdecl sub_44D560(char a1)
{
  char *result; // eax

  if ( a1 )
  {
    result = (char *)sub_4627C2(0x80u);
    if ( result )
    {
      *((_DWORD *)result + 1) = 0;
      *((_DWORD *)result + 2) = 0;
      *((_DWORD *)result + 3) = -1;
      *(_DWORD *)result = &off_48FD2C;
      *((_DWORD *)result + 5) = 0;
      *((_DWORD *)result + 6) = 0;
      *((_DWORD *)result + 7) = 0;
      *((_DWORD *)result + 10) = 0;
      *((_DWORD *)result + 11) = 0;
      *((_DWORD *)result + 12) = 0;
      *((_DWORD *)result + 18) = 0;
      *((_DWORD *)result + 19) = 0;
      *((_DWORD *)result + 20) = 0;
      *((_DWORD *)result + 21) = 0;
      *((_DWORD *)result + 22) = 0;
      *((_DWORD *)result + 23) = 0;
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 8) = pNodeName;
      *((_DWORD *)result + 9) = 0;
      *(_OWORD *)(result + 52) = 0;
      *((_DWORD *)result + 17) = 0;
      *((_DWORD *)result + 24) = 573712;
      *((_DWORD *)result + 25) = 0;
      *(_OWORD *)(result + 104) = 0;
      *((_DWORD *)result + 30) = 0;
      result[124] = 0;
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    result = (char *)sub_4627C2(0x38u);
    if ( result )
    {
      *((_DWORD *)result + 1) = 0;
      *((_DWORD *)result + 2) = 0;
      *((_DWORD *)result + 3) = -1;
      *(_DWORD *)result = &off_48F9F4;
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 5) = 0;
      *((_DWORD *)result + 6) = 0;
      *((_DWORD *)result + 7) = -1;
      *((_DWORD *)result + 8) = 0;
      *((_DWORD *)result + 9) = 0;
      *((_DWORD *)result + 10) = 0;
      *((_DWORD *)result + 11) = pNodeName;
      *((_DWORD *)result + 12) = 0;
      result[52] = 0;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
// 48F9F4: using guessed type int (__stdcall *off_48F9F4)(char);
// 48FD2C: using guessed type int (__stdcall *off_48FD2C)(char);
