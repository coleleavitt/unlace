__int64 __fastcall sub_15EA20(__int64 a1, __m128i *a2)
{
  unsigned int v2; // ebp
  bool v4; // zf
  __int64 v5; // rdi
  __int32 v6; // eax
  __m128i v7; // xmm0
  struct _Unwind_Exception *v9; // rbx
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v2 = unk_245110;
  if ( unk_245110 )
  {
    if ( *(_DWORD *)(a2[2].m128i_i64[1] + 8) == -1 )
      *(_DWORD *)(a2[2].m128i_i64[1] + 8) = (*(__int16 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
    v4 = *(_BYTE *)(a1 + 992) == 0;
    v11.m128i_i64[0] = 0;
    v11.m128i_i64[1] = -1;
    v12 = 0;
    v13 = 0;
    v10 = 0;
    if ( v4 )
    {
      v5 = 0;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 480) )
      {
        v9 = (struct _Unwind_Exception *)sub_158B30(a1);
        _Unwind_Resume(v9);
      }
      v5 = 0;
      if ( *(_DWORD *)(a1 + 472) == 1 )
        v5 = *(_QWORD *)(a1 + 856);
    }
    v2 = sub_91180(v5, (__int64)&v10);
    if ( (_BYTE)v2 )
    {
      v6 = v12;
      *a2 = _mm_load_si128(&v10);
      v7 = _mm_load_si128(&v11);
      a2[2].m128i_i32[0] = v6;
      a2[1] = v7;
    }
    if ( v13 )
      qfree();
  }
  return v2;
}

