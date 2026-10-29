__int64 __fastcall sub_6295F0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  char *v9; // rdx
  __m128i v10; // xmm1
  __m128 v11; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // [rsp+0h] [rbp-88h] BYREF
  __int128 v16; // [rsp+8h] [rbp-80h]
  void *v17; // [rsp+20h] [rbp-68h] BYREF
  __m128i v18; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+50h] [rbp-38h]
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v4 = *a1;
  v22 = __readfsqword(0x28u);
  v21 = -1;
  v6 = *(_QWORD **)(v4 + 1672);
  v17 = nullptr;
  ptr = nullptr;
  v18 = 0;
  v20 = 0;
  v7 = sub_628DD0(v6, (__m128i *)&v17, a3);
  v8 = v7;
  if ( a2 && (_BYTE)v7 )
  {
    if ( v18.m128i_i64[0] <= 1uLL )
    {
      if ( get_ea_name(a2, a3, 0, 0) <= 0 )
      {
        v13 = *a1;
        v15 = nullptr;
        v16 = 0;
        v14 = *(_QWORD *)(v13 + 1672);
        if ( (unsigned int)v21 < *(_DWORD *)(v14 + 2392) )
          sub_7BEA80(v14 + 2328, *(_QWORD *)v14, &v15, v21, 83);
        sub_35A790((char **)a2);
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(v15);
        }
      }
    }
    else
    {
      v9 = *(char **)a2;
      v10 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v11 = _mm_loadh_ps((const double *)&v18.m128i_i64[1]);
      *(_QWORD *)a2 = v17;
      v17 = v9;
      *(__m128 *)(a2 + 8) = v11;
      v18 = v10;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v17);
  }
  return v8;
}
