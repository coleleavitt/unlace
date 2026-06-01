/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032E00
// Address: 0x0000000100032E00

//----- (0000000100032E00) ----------------------------------------------------
__int64 __fastcall sub_100032E00(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  bool v5; // cc
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 <= 2 )
  {
    if ( under_debugger == 1 )
      goto LABEL_7;
    interr(0x116u);
LABEL_6:
    if ( under_debugger != 1 )
    {
      interr(0x117u);
      return sub_100032E60((void **)0x117, a2);
    }
LABEL_7:
    BUG();
  }
  v3 = *(__int16 *)(*a1 + v2 - 2);
  v4 = v2 - 2;
  v5 = v4 <= v3;
  result = v4 - v3;
  a1[3] = result;
  if ( v5 )
    goto LABEL_6;
  return result;
}
// 1000AE23D: using guessed type char under_debugger;
