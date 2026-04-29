__int64 __fastcall sub_11AF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rdx
  char v8; // cl
  __int64 ph; // rax
  __int32 v10; // edx
  unsigned __int64 v11; // rax
  int v12; // edx
  __int64 result; // rax
  __m128i *v14; // rax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int32 v16; // [rsp+10h] [rbp-58h]
  char v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  LODWORD(v5) = a4;
  if ( a4 < 0 )
  {
    v5 = -a4;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
    {
      if ( v5 > 0x10 )
      {
        if ( !under_debugger )
          sub_37EA20(52126);
        BUG();
      }
      v6 = a3 - a4;
      v7 = &v17;
      do
      {
        v8 = *(_BYTE *)--v6;
        *v7++ = v8;
      }
      while ( a3 != v6 );
    }
  }
  ph = get_ph();
  v10 = v5;
  v11 = *(_QWORD *)(ph + 120);
  if ( v11 )
  {
    v10 = v11;
    if ( v11 >= (int)v5 )
      v10 = v5;
  }
  v16 = v10;
  v12 = cpu2ieee();
  result = 0;
  if ( v12 == 1 )
  {
    sub_11A960(a1);
    *(_BYTE *)a1 = 13;
    v14 = (__m128i *)j__qalloc_or_throw();
    *v14 = _mm_load_si128(&v15);
    v14[1].m128i_i32[0] = v16;
    *(_QWORD *)(a1 + 8) = v14;
    result = 1;
    *(_DWORD *)(a1 + 4) = v5;
  }
  return result;
}
