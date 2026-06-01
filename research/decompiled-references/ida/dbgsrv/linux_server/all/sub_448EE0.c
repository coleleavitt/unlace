/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448EE0
// Address: 0x0000000000448EE0

//----- (0000000000448EE0) ----------------------------------------------------
char *__fastcall sub_448EE0(char *a1, __int64 a2, const char *a3, __int64 a4, char a5)
{
  char *v7; // rax
  char *v8; // rbx
  char v9; // al
  unsigned __int8 v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a3 )
    sub_480530((char *)v11, 0x1000u, a3);
  else
    sub_480690((char *)v11, 0x1000u);
  v7 = sub_480480(a1, a2, v11, a4, 0);
  v8 = v7;
  if ( a5 )
    v9 = sub_448C90(a1, a2);
  else
    v9 = sub_480B00(v7);
  if ( !v9 )
    return nullptr;
  return v8;
}
