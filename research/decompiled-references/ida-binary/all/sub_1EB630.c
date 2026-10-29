__int64 __fastcall sub_1EB630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __m128i v14; // xmm0
  __int16 v16; // ax
  struct _Unwind_Exception *v17; // rbx
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __m128i v19; // [rsp+10h] [rbp-48h] BYREF
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v4 = unk_8BCE18;
  if ( unk_8BCE18 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 40) + 8LL) == -1 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL))(a1);
      a3 = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a3 + 8) = v16;
    }
    v6 = *(_BYTE *)(a1 + 968) == 0;
    v19.m128i_i64[0] = 0;
    v19.m128i_i64[1] = -1;
    v20 = 0;
    v21 = 0;
    v18 = 0;
    if ( v6 )
    {
      v8 = 0;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        v17 = (struct _Unwind_Exception *)sub_1E69C0(0.0, a1, a2, a3, a4);
        _Unwind_Resume(v17);
      }
      v7 = *(_DWORD *)(a1 + 416);
      if ( v7 == 2 )
      {
        v8 = *(_QWORD *)(a1 + 896);
      }
      else if ( v7 == 3 )
      {
        v8 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v8 = 0;
        if ( v7 == 1 )
          v8 = *(_QWORD *)(a1 + 888);
      }
    }
    v4 = sub_174EF0(v8, (__int64)&v18);
    if ( (_BYTE)v4 )
    {
      v13 = v20;
      *(__m128i *)a2 = _mm_load_si128(&v18);
      v14 = _mm_load_si128(&v19);
      *(_DWORD *)(a2 + 32) = v13;
      *(__m128i *)(a2 + 16) = v14;
    }
    if ( v21 )
      qfree(v21, v18.m128i_i8, v9, v10, v11, v12, *(_OWORD *)&v18, *(_OWORD *)&v19);
  }
  return v4;
}
