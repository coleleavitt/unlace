/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc_or_throw
// Address: 0x00000000000BE3D0

//----- (00000000000BE3D0) ----------------------------------------------------
void *__fastcall qalloc_or_throw(signed __int64 a1)
{
  void *result; // x0

  if ( !a1 )
    goto LABEL_8;
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *(_DWORD *)__errno(a1) = 12;
    goto LABEL_7;
  }
  result = malloc(a1);
  if ( !result )
  {
LABEL_7:
    set_qerrno(1u);
LABEL_8:
    sub_BE418();
    return sub_BE418();
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
