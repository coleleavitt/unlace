__int64 __fastcall sub_31C730(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rsi
  char v26; // [rsp+0h] [rbp-28h]
  unsigned int v27; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v8 = sub_317FE0(1u, (__int64)"map", 0x3CBu);
  if ( !v8 )
    return 1;
  v9 = v8;
  v10 = sub_31C1D0(v8);
  result = 0;
  if ( !v10 )
    return result;
  v16 = sub_1E73C0(0x4Du, &v27, v10);
  if ( v16 )
  {
    qfclose(v10);
    if ( v16 == -1 )
    {
      sub_17CE30(1003);
LABEL_14:
      qunlink(v9);
      return 1;
    }
  }
  else
  {
    if ( !(unsigned int)sub_507F10(1000, (unsigned int)&word_8BC958, v12, v13, v14, v15) )
    {
      qfclose(v10);
      return 1;
    }
    v18 = itext(1015, &word_8BC958, v17);
    sub_1C76F0((int)"%s", v18);
    v27 = gen_file(0, v10, 0, -1, (unsigned __int16)word_8BC958);
    sub_1C78D0();
    qfclose(v10);
  }
  v25 = v27;
  if ( v27 == -1 )
  {
    sub_17CE30(1003);
    v25 = v27;
  }
  if ( (int)v25 <= 0 )
    goto LABEL_14;
  sub_28A960(1010, v25, v19, v20, v21, v22, a1, a2, a3, a4, v23, v24, a7, a8, v26);
  return 1;
}
