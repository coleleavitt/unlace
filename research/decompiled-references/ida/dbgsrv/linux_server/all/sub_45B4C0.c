/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B4C0
// Address: 0x000000000045B4C0

//----- (000000000045B4C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_45B4C0(__int64 a1, unsigned int a2, char a3, int a4, unsigned __int64 *a5)
{
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx

  v6 = (unsigned __int64 *)(a1 + 16LL * a2);
  v7 = *v6;
  if ( a3 == 1 )
  {
    *a5 = sub_47F890(v7);
    v8 = sub_47F890(v6[1]);
LABEL_7:
    v11 = (unsigned int)v8;
    result = HIDWORD(v8);
    v9 = result;
    goto LABEL_5;
  }
  *a5 = v7;
  v8 = v6[1];
  if ( a4 != 8 || a3 != 2 )
    goto LABEL_7;
  v9 = (unsigned int)v8;
  result = HIBYTE(v8);
  v11 = result;
LABEL_5:
  a5[2] = v9;
  a5[1] = v11;
  a5[3] = 0;
  return result;
}
