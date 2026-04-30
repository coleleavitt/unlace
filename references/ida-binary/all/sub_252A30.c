__int64 __fastcall sub_252A30(
        __int64 a1,
        int a2,
        __int64 a3,
        char *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v13; // r12d
  char v14; // bl
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // rsi
  int v19; // eax
  __int64 nsec_stamp; // rax
  int v22; // ebx
  int v23; // eax
  unsigned int v24; // [rsp+0h] [rbp-44h]
  unsigned __int64 v25; // [rsp+4h] [rbp-40h]

  if ( !dword_8CC5F0 )
    return 4294967294LL;
  v13 = ((unsigned int)a1 >> 2) & 1;
  v14 = a1;
  if ( (a1 & 8) != 0 )
  {
    if ( !dbg )
      return 0xFFFFFFFFLL;
    if ( dword_8CC5E8 )
    {
      byte_8CC5EC = 1;
      byte_8CC2A8 = 0;
      goto LABEL_3;
    }
    if ( dword_8CC5F0 < 0 )
    {
      a1 = (a1 & 4) != 0;
      if ( (int)sub_243000(a1, (const void *)(unsigned __int8)byte_8CC5E0, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4) <= 0 )
        return 0xFFFFFFFFLL;
    }
  }
LABEL_3:
  if ( (v14 & 0x10) != 0 )
    return 0;
  v25 = 0;
  if ( a2 != -1 )
  {
    a3 = ((__int64 (*)(void))get_nsec_stamp)();
    v25 = ((v14 & 0x20) == 0 ? 1000000000LL : 1000LL) * a2 + a3;
  }
  v15 = dword_8CC5F0;
  v16 = v14 & 2;
  v24 = v14 & 2;
  if ( (v14 & 2) != 0 )
  {
LABEL_14:
    if ( v15 < 0 )
      return HIDWORD(qword_8CC350) & 0xFFFFFFF;
  }
  if ( v15 )
  {
    v17 = 8 * (unsigned __int8)v13;
    if ( a2 == -1 )
    {
      v22 = v14 & 1;
      while ( 1 )
      {
        v23 = sub_252810(v17, 0xFFFFFFFFLL, a3, v16, a5, a6, a7, a8, a9, a10, a11, a12);
        if ( !v23 )
          break;
        if ( v23 == 1 )
        {
          if ( v22 )
            return HIDWORD(qword_8CC350) & 0xFFFFFFF;
        }
        else if ( v23 == -1 )
        {
          return 0xFFFFFFFFLL;
        }
        sub_541EF0();
        v16 = v24;
        if ( v24 )
        {
          if ( dword_8CC5F0 < 0 )
            return HIDWORD(qword_8CC350) & 0xFFFFFFF;
          if ( !dword_8CC5F0 )
            return 4294967294LL;
          v17 = 8 * (unsigned __int8)v13;
        }
        else if ( !dword_8CC5F0 )
        {
          return 4294967294LL;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = 0xFFFFFFFFLL;
        if ( (*(_BYTE *)(dbg + 34) & 8) != 0 )
        {
          nsec_stamp = get_nsec_stamp(a1, 0xFFFFFFFFLL);
          v18 = 0;
          if ( (__int64)(v25 - nsec_stamp) >= 0 )
          {
            a3 = (__int64)((unsigned __int128)((__int64)(v25 - nsec_stamp) * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18;
            v18 = (unsigned int)(((int)v25 - (int)nsec_stamp) / 1000000);
          }
        }
        a1 = v17;
        v19 = sub_252810(v17, v18, a3, v16, a5, a6, a7, a8, a9, a10, a11, a12);
        if ( !v19 )
          break;
        if ( v19 == 1 )
        {
          if ( (v14 & 1) != 0 )
            return HIDWORD(qword_8CC350) & 0xFFFFFFF;
        }
        else if ( v19 == -1 )
        {
          return 0xFFFFFFFFLL;
        }
        sub_541EF0();
        if ( v25 < get_nsec_stamp(v17, v18) )
          return 0;
        a3 = v14 & 2;
        v15 = dword_8CC5F0;
        if ( (v14 & 2) != 0 )
          goto LABEL_14;
        if ( !dword_8CC5F0 )
          return 4294967294LL;
        v17 = 8 * (unsigned __int8)v13;
      }
    }
    return HIDWORD(qword_8CC350) & 0xFFFFFFF;
  }
  return 4294967294LL;
}
