__int64 __fastcall sub_339670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // esi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 *v16; // rdi
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v19; // [rsp+20h] [rbp-48h] BYREF
  __m128i v20; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( (unsigned int)(*(_DWORD *)a4 - 56) > 1 )
  {
    sub_127A20((__int64)v18, a3, a4, 0);
    sub_648D0((__int64 *)a1, v18);
    v12 = *(_QWORD *)(a1 + 16);
    v13 = v19;
    v19 = nullptr;
    v14 = _mm_loadu_si128(&v20);
    v20 = 0;
    if ( v12 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v17 = v14;
      qfree(v12);
      v15 = _mm_load_si128(&v17);
      v16 = v19;
      *(_QWORD *)(a1 + 16) = v13;
      *(__m128i *)(a1 + 24) = v15;
      if ( v16 )
      {
        v20.m128i_i64[0] = 0;
        qfree(v16);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v13;
      *(__m128i *)(a1 + 24) = v14;
    }
    qfree(v18[0]);
  }
  else
  {
    if ( *(_BYTE *)(a4 + 64) != 8 )
    {
      if ( !under_debugger )
        sub_383060(52823);
      BUG();
    }
    v5 = *(_QWORD *)(a4 + 72);
    if ( *(_QWORD *)(v5 + 56) )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(_QWORD *)(v5 + 48) + 16 * v7;
        v9 = *(_DWORD *)(v8 + 4);
        v10 = *(_DWORD *)(v8 + 8);
        v18[0] = 0;
        v18[1] = 0;
        sub_63E80(v18, v10, v9);
        v19 = nullptr;
        v20 = 0;
        sub_64280((__int64 *)a1, v18);
        sub_316CB0((__int64 *)(a1 + 16), &v19);
        if ( v19 )
        {
          v20.m128i_i64[0] = 0;
          qfree(v19);
        }
        ++v6;
        qfree(v18[0]);
        v7 = v6;
      }
      while ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 56) );
    }
    else
    {
      sub_1C67F0(a2, a1, (_DWORD *)(v5 + 80), (_QWORD *)(v5 + 72));
    }
  }
  return a1;
}
