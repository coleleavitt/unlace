__int64 __fastcall sub_13090(unsigned int a1, __int64 a2)
{
  __m128i *v2; // rbx
  void (__fastcall **v3)(__int64, _QWORD, __int64 *); // rax
  unsigned __int32 v4; // r13d
  __int16 v6; // [rsp+6h] [rbp-62h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h] BYREF

  v10 = __readfsqword(0x28u);
  v2 = &si128;
  v9 = 0xD00000003LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23BC0);
  do
  {
    if ( v2->m128i_i32[0] == a1 )
    {
      (**(void (__fastcall ***)(__int64, _QWORD, __int64 *))a2)(a2, a1, &v7);
      v3 = *(void (__fastcall ***)(__int64, _QWORD, __int64 *))a2;
      v4 = v2->m128i_u32[1];
      if ( v7 == -1 )
      {
        v3[2](a2, v4, (__int64 *)((char *)&dword_0 + 1));
      }
      else
      {
        v6 = 1;
        v3[1](a2, v4, (__int64 *)&v6);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v4, 0);
      }
    }
    v2 = (__m128i *)((char *)v2 + 8);
  }
  while ( &v10 != (unsigned __int64 *)v2 );
  return 1;
}
