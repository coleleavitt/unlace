unsigned __int64 __fastcall sub_18F40(__int64 a1, _DWORD *a2)
{
  __m128i v3; // xmm1
  __m128 v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *segm_by_name; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD v15[3]; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v16; // [rsp+18h] [rbp-B0h]
  __int64 (__fastcall **v17)(); // [rsp+30h] [rbp-98h] BYREF
  char v18; // [rsp+38h] [rbp-90h]
  __int128 v19; // [rsp+40h] [rbp-88h]
  int v20; // [rsp+50h] [rbp-78h]
  __m128i v21; // [rsp+78h] [rbp-50h]
  __m128 v22; // [rsp+88h] [rbp-40h]
  int v23; // [rsp+98h] [rbp-30h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 200) )
  {
    v8 = *(_QWORD *)(a1 + 728);
    v9 = *(unsigned int *)(v8 + 216);
    if ( (_DWORD)v9 && *(_DWORD *)(v8 + 220) )
    {
      v10 = *(_QWORD *)(a1 + 736);
      v11 = *(_QWORD *)(v10 + 16) & (qword_349D8 + v9);
      *(_QWORD *)(a1 + 768) = v11;
      *(_QWORD *)(a1 + 776) = *(_QWORD *)(v10 + 16) & (*(unsigned int *)(v8 + 220) + v11);
    }
    else
    {
      segm_by_name = (__int64 *)get_segm_by_name();
      if ( segm_by_name )
      {
        v13 = *segm_by_name;
        v14 = *(_QWORD *)(a1 + 728);
        if ( *(unsigned int *)(v14 + 128) >= (*(_QWORD *)(*(_QWORD *)(a1 + 736) + 16LL)
                                            & (unsigned __int64)(*segm_by_name - qword_349D8))
          && segm_by_name[1] - v13 >= (unsigned __int64)*(unsigned int *)(v14 + 132) )
        {
          *(_QWORD *)(a1 + 768) = v13;
          *(_QWORD *)(a1 + 776) = segm_by_name[1];
        }
      }
    }
  }
  v19 = 0;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 768));
  v4 = _mm_loadh_ps((const double *)(a1 + 616));
  v18 = 0;
  v22 = v4;
  v20 = 0;
  v17 = off_325E8;
  v23 = 0;
  v21 = v3;
  sub_E4B0(a1, a2, (unsigned int *)&v17);
  v5 = *(_QWORD *)(a1 + 616);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 768));
  v15[1] = a1 + 72;
  v15[0] = off_32628;
  v15[2] = v5;
  v16 = v6;
  sub_18140(a1, (__int64)a2, (__int64)v15);
  return v24 - __readfsqword(0x28u);
}
