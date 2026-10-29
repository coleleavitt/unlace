__int64 __fastcall sub_625350(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rbp
  bool v5; // zf
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+10h] [rbp-A8h]
  void *v10; // [rsp+20h] [rbp-98h]
  __int128 v11; // [rsp+28h] [rbp-90h]
  __int64 v12; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+48h] [rbp-70h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  int v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int128 v18; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1672);
  v19 = __readfsqword(0x28u);
  v6 = a3;
  v8[1] = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v10 = nullptr;
  v12 = -1;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  v4 = *(_QWORD *)(a3 + 8);
  v8[0] = off_2B32A88;
  v17 = a3;
  v11 = 0;
  v14 = 0;
  v18 = 0;
  sub_630CA0(*v3, 26, &v18, 16);
  sub_624FA0((__int64)v8, 1);
  v5 = *(_QWORD *)(v6 + 8) == (int)v4;
  v8[0] = off_2B329D8;
  LOBYTE(v6) = v5;
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return (unsigned int)v6;
}
