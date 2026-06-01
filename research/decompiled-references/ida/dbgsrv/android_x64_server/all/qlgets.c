/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgets
// Address: 0x00000000000BE870

//----- (00000000000BE870) ----------------------------------------------------
char *__fastcall qlgets(char *a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  char *i; // r12
  char v6; // al
  unsigned __int8 ptr; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  result = nullptr;
  if ( !a1 || !a3 )
    return result;
  if ( *(int *)a3 < 2 )
    return qfgets(a1, a2, *(FILE **)(a3 + 8));
  if ( a2 <= 0 )
    return nullptr;
  for ( i = a1; ; ++i )
  {
    if ( i >= &a1[a2 - 1] )
      goto LABEL_23;
    if ( *(int *)a3 < 2 )
      break;
    if ( sub_BE3E0(a3, &ptr, 1) != 1 )
      goto LABEL_14;
LABEL_10:
    if ( ptr == -1 )
      goto LABEL_14;
    if ( ptr == 10 )
    {
      if ( i > a1 && *(i - 1) == 13 )
        --i;
      *i++ = 10;
LABEL_23:
      *i = 0;
      return a1;
    }
    *i = ptr;
  }
  if ( qfread(*(FILE **)(a3 + 8), &ptr, 1) == 1 )
    goto LABEL_10;
LABEL_14:
  v6 = 1;
  if ( i != a1 )
    v6 = 7;
  if ( v6 == 7 )
    goto LABEL_23;
  return nullptr;
}
// BE94C: conditional instruction was optimized away because al.1 is in (==1|==7)
// 158B40: using guessed type __int64 under_debugger;
