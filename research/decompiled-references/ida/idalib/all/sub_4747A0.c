unsigned __int64 __fastcall sub_4747A0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void *v5; // rdi
  int v7; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v8; // [rsp+4h] [rbp-1B4h]
  int v9; // [rsp+Ch] [rbp-1ACh]
  void *v10; // [rsp+10h] [rbp-1A8h]
  __int128 v11; // [rsp+18h] [rbp-1A0h]
  _BYTE v12[192]; // [rsp+28h] [rbp-190h] BYREF
  _QWORD v13[2]; // [rsp+E8h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-C0h]
  __int128 v15; // [rsp+108h] [rbp-B0h]
  __int64 v16; // [rsp+118h] [rbp-A0h]
  __int64 v17; // [rsp+120h] [rbp-98h]
  __int64 v18; // [rsp+128h] [rbp-90h]
  __int64 v19; // [rsp+130h] [rbp-88h]
  __int64 v20; // [rsp+138h] [rbp-80h]
  __int64 v21; // [rsp+140h] [rbp-78h]
  __int64 v22; // [rsp+148h] [rbp-70h]
  void *ptr; // [rsp+150h] [rbp-68h]
  __int128 v24; // [rsp+158h] [rbp-60h]
  char v25; // [rsp+178h] [rbp-40h]
  __int64 v26; // [rsp+179h] [rbp-3Fh]
  __int16 v27; // [rsp+181h] [rbp-37h]
  char v28; // [rsp+183h] [rbp-35h]
  unsigned __int64 v29; // [rsp+188h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v7 = -1;
  v3 = v13;
  v10 = nullptr;
  v4 = v12;
  v11 = 0;
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != v13 );
  v13[0] = -1;
  v19 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v13[1] = &loc_800000;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 2;
  v22 = -1;
  ptr = nullptr;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v8 = 0;
  v9 = 0;
  v26 = 0;
  v15 = -1;
  v24 = 0;
  sub_46B730((__int64)&v7, a2, a3);
  sub_4736C0((__int64)&v7, a1);
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  do
  {
    v5 = (void *)*(v3 - 3);
    v3 -= 3;
    if ( v5 )
    {
      v3[1] = 0;
      qfree(v5);
    }
  }
  while ( v3 != (_QWORD *)v12 );
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v29 - __readfsqword(0x28u);
}
