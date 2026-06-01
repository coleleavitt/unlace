/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419070
// Address: 0x00419070

//----- (00419070) --------------------------------------------------------
bool __userpurge sub_419070@<al>(int a1@<ebx>, int a2@<edi>, _BYTE *a3)
{
  unsigned __int8 *v3; // edx
  bool v4; // cl
  char *v5; // eax

  v3 = sub_456590(a3);
  v4 = byte_4B6ABC && VersionInformation.dwPlatformId == 2;
  v5 = "ntdll.dll";
  if ( !v4 )
    v5 = "kernel32.dll";
  return sub_468261(a1, a2, v3, (unsigned __int8 *)v5) == 0;
}
// 4B6ABC: using guessed type char byte_4B6ABC;
