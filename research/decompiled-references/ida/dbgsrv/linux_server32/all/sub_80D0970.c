/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0970
// Address: 0x080D0970

//----- (080D0970) --------------------------------------------------------
const char *__cdecl sub_80D0970(int a1)
{
  int v1; // esi
  bool v2; // cc
  const char *result; // eax
  _DWORD *v4; // edi

  v1 = a1;
  if ( a1 != -1 )
  {
    v2 = a1 <= 2;
    if ( a1 != 2 )
      goto LABEL_3;
    return "Disk is full";
  }
  v1 = sub_80C7850();
  v2 = v1 <= 2;
  if ( v1 == 2 )
    return "Disk is full";
LABEL_3:
  if ( v2 )
  {
    result = "No error";
    if ( !v1 )
      return result;
    if ( v1 == 1 )
      return (const char *)sub_80C7C30(-1);
LABEL_9:
    v4 = (_DWORD *)sub_80C7B90();
    sub_805ED10(v4, "Unknown error code %d", v1);
    return (const char *)*v4;
  }
  result = "Read attempt past file end";
  if ( v1 != 3 )
    goto LABEL_9;
  return result;
}
