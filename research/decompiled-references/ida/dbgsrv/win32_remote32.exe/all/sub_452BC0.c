/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452BC0
// Address: 0x00452BC0

//----- (00452BC0) --------------------------------------------------------
unsigned int __userpurge sub_452BC0@<eax>(__m128i a1@<xmm0>, unsigned int a2, const char *a3, int a4)
{
  char *v5; // eax
  unsigned int v6; // esi
  char *v7; // [esp+8h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-4h]

  if ( a4 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( !a4 )
    return a2;
  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  sub_4528E0(a1, (int)&v7, a3, -1, a4);
  v5 = (char *)MultiByteStr;
  if ( v8 )
    v5 = v7;
  v6 = sub_45ACB0(a2, v5, a4);
  v10 = 1;
  if ( v7 )
  {
    v8 = 0;
    sub_453A20(v7);
  }
  return v6;
}
// 4B70F0: using guessed type char byte_4B70F0;
