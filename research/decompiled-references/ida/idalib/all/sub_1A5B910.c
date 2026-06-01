void __fastcall sub_1A5B910(__int64 a1, int a2, __int64 *a3, __int64 a4, double a5, double a6)
{
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // r9
  __int64 v11; // rax
  void *v12; // r14
  signed __int64 v13; // r12
  __int64 v14; // r13
  void *src; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  _OWORD _18[5]; // [rsp+18h] [rbp+10h] BYREF
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int64 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars70; // [rsp+78h] [rbp+70h]
  int vars78; // [rsp+80h] [rbp+78h]
  __int64 vars80; // [rsp+88h] [rbp+80h] BYREF
  __m128i vars88; // [rsp+90h] [rbp+88h]
  __int64 vars98; // [rsp+A0h] [rbp+98h]
  void **p_src; // [rsp+B8h] [rbp+B0h]

  p_src = &src;
  v8 = *(_QWORD *)(a1 + 248);
  vars68 = a1;
  _18[4] = 0;
  src = _18;
  vars70 = (v8 + 16LL * a2 + 17592) | 6;
  vars8 = 0x800000000LL;
  vars60 = 0;
  vars78 = 0;
  sub_B85890(&vars80, vars70);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  vars98 = 0x101010000LL;
  vars88 = si128;
  sub_1A395A0((__int64)&src);
  sub_1A49A10(a1, (__int64)&src, a3, 0, 0, v10, *(double *)si128.m128i_i64, a6);
  v11 = *(unsigned int *)(a4 + 8);
  v12 = src;
  v13 = 8LL * (unsigned int)vars8;
  v14 = v13 >> 3;
  if ( (v13 >> 3) + v11 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    sub_2237220(a4, a4 + 16, v14 + v11, 8);
    v11 = *(unsigned int *)(a4 + 8);
  }
  if ( v13 )
  {
    memcpy((void *)(*(_QWORD *)a4 + 8 * v11), v12, v13);
    LODWORD(v11) = *(_DWORD *)(a4 + 8);
  }
  *(_DWORD *)(a4 + 8) = v11 + v14;
  sub_169D230((__int64)&src);
}
