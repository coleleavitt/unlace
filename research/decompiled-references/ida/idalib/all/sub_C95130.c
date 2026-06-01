unsigned __int64 __fastcall sub_C95130(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  double v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(v1 + 128) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 128) & 4) != 0 )
      {
        v3 = 0;
        if ( *(_DWORD *)(v2 + 8) )
          v3 = **(_QWORD **)v2;
      }
      else
      {
        v3 = *(_QWORD *)(v1 + 128) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v1 = v3 + 16LL * ((*(_DWORD *)(v1 + 104) >> 5) & 0x7FFF);
    }
    else
    {
      v1 = 0;
    }
  }
  sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  *(_QWORD *)&v5[0] = v1;
  return _mm_loadh_ps(v5).m128_u64[0];
}
