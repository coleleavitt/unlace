/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D0F0
// Address: 0x000000000046D0F0

//----- (000000000046D0F0) ----------------------------------------------------
__int64 __fastcall sub_46D0F0(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r12
  char *v7; // rsi
  char *v8; // rax
  char *v10; // rax

  v4 = (unsigned __int64)a4[1];
  v6 = v4 + 3;
  if ( v4 >= 0xFFFFFFFFFFFFFFFDLL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v7 = *a4;
    if ( (unsigned __int64)a4[2] < v6 )
    {
      v10 = (char *)sub_481540((__int64)a4, v7, v6, 1u);
      *a4 = v10;
      memset(&a4[1][(_QWORD)v10], 0, v6 - (_QWORD)a4[1]);
    }
    else
    {
      memset(&a4[1][(_QWORD)v7], 0, 3u);
    }
  }
  v8 = *a4;
  a4[1] = (char *)v6;
  *(_WORD *)&v8[v4] = -5172;
  v8[v4 + 2] = -2;
  return 0;
}
