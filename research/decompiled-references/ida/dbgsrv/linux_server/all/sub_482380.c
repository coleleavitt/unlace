/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482380
// Address: 0x0000000000482380

//----- (0000000000482380) ----------------------------------------------------
const char *__fastcall sub_482380(int a1)
{
  int v1; // ebx
  bool v2; // cc
  const char *result; // rax
  unsigned __int64 v4; // rbp

  v1 = a1;
  if ( a1 == -1 )
  {
    v1 = sub_479E90();
    v2 = v1 <= 2;
    if ( v1 != 2 )
      goto LABEL_3;
    return "Disk is full";
  }
  v2 = a1 <= 2;
  if ( a1 == 2 )
    return "Disk is full";
LABEL_3:
  if ( !v2 )
  {
    result = "Read attempt past file end";
    if ( v1 == 3 )
      return result;
    goto LABEL_8;
  }
  if ( v1 )
  {
    if ( v1 == 1 )
      return (const char *)sub_47A200(-1);
LABEL_8:
    v4 = sub_47A1A0();
    sub_4172B0(v4, "Unknown error code %d", v1);
    return *(const char **)v4;
  }
  return "No error";
}
