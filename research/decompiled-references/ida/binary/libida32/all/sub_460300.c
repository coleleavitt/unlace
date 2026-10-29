unsigned __int64 __fastcall sub_460300(__int64 *a1, unsigned int a2, __int64 a3)
{
  int *v3; // rbx
  int *v4; // rax
  void *v5; // rdi
  int v7; // [rsp+0h] [rbp-188h] BYREF
  __int64 v8; // [rsp+4h] [rbp-184h]
  int v9; // [rsp+Ch] [rbp-17Ch]
  void *v10; // [rsp+10h] [rbp-178h]
  __int128 v11; // [rsp+18h] [rbp-170h]
  _BYTE v12[192]; // [rsp+28h] [rbp-160h] BYREF
  int v13; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-98h]
  __m128i si128; // [rsp+F8h] [rbp-90h]
  __int64 v16; // [rsp+108h] [rbp-80h]
  unsigned __int64 v17; // [rsp+110h] [rbp-78h]
  __int64 v18; // [rsp+118h] [rbp-70h]
  unsigned __int64 v19; // [rsp+120h] [rbp-68h]
  void *ptr; // [rsp+128h] [rbp-60h]
  __int128 v21; // [rsp+130h] [rbp-58h]
  char v22; // [rsp+148h] [rbp-40h]
  __int64 v23; // [rsp+149h] [rbp-3Fh]
  __int16 v24; // [rsp+151h] [rbp-37h]
  char v25; // [rsp+153h] [rbp-35h]
  unsigned __int64 v26; // [rsp+158h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v7 = -1;
  v3 = &v13;
  v10 = nullptr;
  v4 = (int *)v12;
  v11 = 0;
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &v13 != v4 );
  v13 = -1;
  v17 = 0xFFFFFFFF00000000LL;
  v19 = 0xFFFFFFFF00000002LL;
  v14 = 0x800000;
  v16 = 0;
  v18 = 0;
  ptr = nullptr;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v8 = 0;
  v9 = 0;
  v23 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
  v21 = 0;
  sub_457330((__int64)&v7, a2, a3);
  sub_45F240((__int64)&v7, a1);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  do
  {
    v5 = *((void **)v3 - 3);
    v3 -= 6;
    if ( v5 )
    {
      *((_QWORD *)v3 + 1) = 0;
      qfree(v5);
    }
  }
  while ( v3 != (int *)v12 );
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v26 - __readfsqword(0x28u);
}

