__int64 __fastcall sub_2A6340(
        unsigned int a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rax
  char *v11; // rdi
  char v12; // dl
  _BYTE *v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  char v16; // dl
  __int64 result; // rax
  _BYTE v18[1023]; // [rsp+0h] [rbp-1428h] BYREF
  char v19; // [rsp+3FFh] [rbp-1029h] BYREF
  _BYTE v20[4104]; // [rsp+400h] [rbp-1028h] BYREF
  unsigned __int64 v21; // [rsp+1408h] [rbp-20h]

  v9 = "Call flow of ";
  v21 = __readfsqword(0x28u);
  v11 = v18;
  do
  {
    v12 = *v9++;
    *v11 = v12;
    if ( !v12 )
    {
      v13 = (_BYTE *)(v20 - v11);
      goto LABEL_5;
    }
    ++v11;
  }
  while ( v11 != &v19 );
  v19 = 0;
  v13 = (_BYTE *)(&dword_0 + 1);
LABEL_5:
  get_root_filename(v11, v13);
  v16 = sub_2A61A0(a1, (__int64)v20, a2, a3, a4, a5, v14, v15, a8, a9);
  result = 1;
  if ( v16 )
    return (unsigned __int8)gen_simple_call_chart(v20, "Generating the call chart...", v18, a1);
  return result;
}
