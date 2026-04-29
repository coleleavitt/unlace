unsigned __int64 __fastcall sub_3EF6D0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r13
  __m128i *v7; // rax
  __int32 v8; // edx
  int v9; // r9d
  unsigned __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v12; // [rsp+8h] [rbp-50h]
  _DWORD v13[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v11 = 0xFFFFFFFF00000000LL;
  v4 = *(_QWORD *)(a1 + 800);
  v12 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( (unsigned __int8)getinf() )
    LODWORD(v6) = (unsigned __int8)getinf();
  else
    v6 = *(_QWORD *)(v5 + 120);
  if ( a2 > 0x14 )
  {
    if ( !under_debugger )
      sub_37EA20(50516);
    BUG();
  }
  LOBYTE(v11) = 13;
  v7 = (__m128i *)j__qalloc_or_throw();
  *v7 = _mm_loadu_si128((const __m128i *)((char *)&unk_42F500 + 20 * (int)a2));
  v8 = *((_DWORD *)&unk_42F500 + 5 * (int)a2 + 4);
  v13[2] = a3;
  v7[1].m128i_i32[0] = v8;
  v13[0] = 1;
  v12 = v7;
  HIDWORD(v11) = v6;
  v13[1] = v6;
  sub_1D38D0(a1, 67, (unsigned int)&v11, 0, (unsigned int)v13, v9);
  sub_11A960((__int64)v13);
  sub_11A960((__int64)&v11);
  return v14 - __readfsqword(0x28u);
}
