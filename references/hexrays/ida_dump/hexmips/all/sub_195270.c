unsigned __int64 __fastcall sub_195270(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rbp
  int v4; // eax
  char v5; // al
  char v7; // bp
  __int64 abi_name; // rax
  char *v9; // r12
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_4CBDB0;
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4BC510, (__m128i)(unsigned __int64)off_4BC4F0);
  sub_CCEB0(a1 + 8, *(_QWORD *)(a2 + 1496), 0);
  sub_CCEB0(a1 + 144, *(_QWORD *)(a2 + 1496), 0);
  v2 = _mm_load_si128(&v10);
  *(_QWORD *)(a1 + 280) = a2;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = -1;
  *(_DWORD *)(a1 + 320) = -1;
  *(_QWORD *)(a1 + 328) = off_4BC4F0;
  *(_QWORD *)(a1 + 336) = -1;
  *(_DWORD *)(a1 + 344) = -1;
  *(__m128i *)(a1 + 296) = v2;
  sub_195060(a1, 0x40u);
  v3 = *(_QWORD *)(a2 + 1504);
  *(_DWORD *)(a1 + 352) = *(_DWORD *)(*(_QWORD *)(a1 + 280) + 120LL);
  if ( (unsigned __int8)getinf_flag(67, 16) )
    goto LABEL_6;
  v4 = *(_DWORD *)(v3 + 16);
  if ( v4 == 72 )
    goto LABEL_6;
  if ( v4 == 15 )
  {
    if ( (getinf(57) & 0xF) != 6 || (unsigned __int8)getinf_flag(3, 4) )
      goto LABEL_6;
    goto LABEL_10;
  }
  if ( v4 != 12 )
  {
    if ( (getinf(57) & 0xF) != 6 || !(unsigned __int8)getinf_flag(3, 4) )
      goto LABEL_6;
LABEL_10:
    v5 = *(_BYTE *)(a1 + 288) | 1;
    goto LABEL_7;
  }
  s1 = nullptr;
  v12 = 0;
  if ( (getinf(57) & 0xF) == 6 )
  {
    v7 = getinf_flag(3, 4);
    if ( !v7 )
    {
      abi_name = get_abi_name(&s1);
      v9 = s1;
      if ( !abi_name )
      {
        if ( !s1 )
          goto LABEL_6;
        goto LABEL_15;
      }
      if ( (_QWORD)v12 )
      {
        v7 = strcmp(s1, "eabi32") == 0;
        if ( !v9 )
          goto LABEL_22;
      }
      else if ( !s1 )
      {
        goto LABEL_6;
      }
      *(_QWORD *)&v12 = 0;
      qfree(v9);
LABEL_22:
      if ( v7 )
        goto LABEL_10;
      goto LABEL_6;
    }
  }
  if ( s1 )
  {
LABEL_15:
    *(_QWORD *)&v12 = 0;
    qfree(s1);
  }
LABEL_6:
  v5 = *(_BYTE *)(a1 + 288) & 0xFE;
LABEL_7:
  *(_BYTE *)(a1 + 288) = v5;
  return v13 - __readfsqword(0x28u);
}
