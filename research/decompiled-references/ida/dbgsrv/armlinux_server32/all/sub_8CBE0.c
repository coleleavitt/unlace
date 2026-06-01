/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CBE0
// Address: 0x0008CBE0

//----- (0008CBE0) --------------------------------------------------------
unsigned int *__fastcall sub_8CBE0(unsigned int *a1, int a2, int a3, char *a4, size_t a5)
{
  unsigned int v5; // r2
  size_t v6; // r4
  size_t v7; // r1
  unsigned int v8; // r4
  size_t v10; // [sp+10h] [bp+10h]

  v5 = a3 - a2;
  v6 = a1[1];
  v7 = a2 - *a1;
  if ( v7 > v6 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v7, a1[1]);
  v8 = v6 - v7;
  v10 = a5 - (_DWORD)a4;
  if ( v5 >= v8 )
    v5 = v8;
  return sub_8C79C(a1, v7, v5, a4, v10);
}
