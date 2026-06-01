__int64 __fastcall sub_3DFA40(
        unsigned int *a1,
        signed int *a2,
        unsigned int a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v14; // rsi
  __int64 v15; // rdx
  const char *v16; // rdi
  signed int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  signed int v20; // r12d
  unsigned int v21; // ebp
  int v23; // [rsp+4h] [rbp-4Ch] BYREF
  const char *v24; // [rsp+8h] [rbp-48h] BYREF
  __int128 v25; // [rsp+10h] [rbp-40h]
  unsigned __int64 v26; // [rsp+20h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v14 = (const char *)a3;
  v24 = nullptr;
  v25 = 0;
  if ( get_reg_name(&v24, a3, a4, 0xFFFFFFFFLL) == -1 )
    goto LABEL_5;
  v23 = 0;
  v16 = &s1;
  if ( (_QWORD)v25 )
    v16 = v24;
  v14 = (const char *)&v23;
  v17 = sub_2383E0(v16, (__int64)&v23, v15);
  v20 = v17;
  if ( v17 < 0
    || (v14 = (const char *)&v23,
        v21 = sub_23F7A0(v17, (unsigned __int16 *)&v23, a1, (__m128)0LL, a6, a7, a8, v18, v19, a11, a12),
        !(_BYTE)v21) )
  {
LABEL_5:
    v21 = 0;
  }
  else if ( a2 )
  {
    *a2 = v20;
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v14);
  }
  return v21;
}
