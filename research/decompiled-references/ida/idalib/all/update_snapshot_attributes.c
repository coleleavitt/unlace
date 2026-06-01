__int64 __fastcall update_snapshot_attributes(void *a1, _QWORD *a2, __int64 a3, char a4)
{
  void *v4; // r12
  __int64 v8; // r13
  int v9; // edx
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // r14
  void *v13; // rdi
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v18 = __readfsqword(0x28u);
  if ( a1 )
    return sub_72DA50(a1);
  if ( a3 )
  {
    v8 = *(_QWORD *)(qword_2CCB598 + 1544);
    if ( (a4 & 2) != 0 && a2 )
    {
      src = nullptr;
      v17 = 0;
      if ( (unsigned __int8)sub_590280(a2, (_QWORD *)a3, (__int64 *)&src) )
      {
        v12 = v17;
        if ( (_QWORD)v17 )
        {
          v4 = (void *)qalloc_or_throw(8 * v17);
          memcpy(v4, src, 8 * v12);
        }
        v13 = *(void **)(v8 + 216);
        v14 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
        if ( v13 )
        {
          *(_QWORD *)(v8 + 224) = 0;
          v15 = v14;
          qfree(v13);
          v14 = _mm_load_si128(&v15);
        }
        *(_QWORD *)(v8 + 216) = v4;
        *(__m128i *)(v8 + 224) = v14;
      }
      if ( src )
      {
        *(_QWORD *)&v17 = 0;
        qfree(src);
      }
    }
    if ( (a4 & 1) != 0 )
      qstrncpy(v8 + 88, a3 + 10, 128);
    if ( (a4 & 4) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 260);
      v10 = v9 | 4;
      v11 = v9 & 0xFFFFFFFB;
      if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        v10 = v11;
      *(_DWORD *)(v8 + 260) = v10;
    }
  }
  return 1;
}
