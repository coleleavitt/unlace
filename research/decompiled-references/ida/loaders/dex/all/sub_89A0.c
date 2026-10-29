__int64 __fastcall sub_89A0(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // r13d
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  struct _Unwind_Exception *v13; // rbx
  unsigned int v14[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __m128i v16; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v4 = (unsigned int)(a3 - 1);
  if ( v4 >= *(_QWORD *)(a1 + 56) )
  {
    v13 = (struct _Unwind_Exception *)sub_59F0();
    if ( v15 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v15);
    }
    _Unwind_Resume(v13);
  }
  v6 = 0;
  if ( netnode_supval(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v4), a4, v14, 24, 70) > 23 )
  {
    v16 = 0;
    v15 = 0;
    LOBYTE(v8) = sub_8910(a1, (__int64)&v15, a3, v14[1]);
    v6 = v8;
    if ( (_BYTE)v8 )
    {
      sub_57A0(&v15);
      v9 = *a2;
      v10 = a2[2];
      v11 = v15;
      v12 = _mm_loadu_si128(&v16);
      v15 = *a2;
      *a2 = v11;
      v16.m128i_i64[1] = v10;
      *(__m128i *)(a2 + 1) = v12;
    }
    else
    {
      v9 = v15;
    }
    if ( v9 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v9);
    }
  }
  return v6;
}

