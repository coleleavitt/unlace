__int64 __fastcall sub_914830(
        _BYTE *a1,
        unsigned __int64 a2,
        _WORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _BYTE *a8,
        unsigned __int64 a9,
        __int16 *a10,
        int a11,
        unsigned int a12,
        void *src,
        size_t n,
        __int16 *a15,
        unsigned __int64 a16)
{
  unsigned __int64 v17; // rbx
  unsigned int v20; // r14d
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx

  if ( a5 == 1 )
  {
    v17 = sub_904A60((__int64)a3, a7);
    if ( v17 > 0xFFFFFFFFFFFFFF88LL )
      return v17;
    v17 = -70;
    if ( !a2 )
      return v17;
    *a1 = *a8;
    return 1;
  }
  else
  {
    if ( a5 )
    {
      if ( a5 == 2 )
      {
        v20 = sub_904610(a4, a9, a7);
        v21 = (_DWORD *)(a6 + 4LL * (unsigned __int8)a8[a9 - 1]);
        if ( *v21 > 1u )
        {
          --a9;
          --*v21;
        }
        v17 = sub_904690((__int64)a15, v20, a6, a9, a7, a9 > 0x7FF);
        if ( v17 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v17 = sub_904530(a1, a2, (__int64)a15, a7, v20);
          if ( v17 <= 0xFFFFFFFFFFFFFF88LL )
          {
            v22 = sub_9041D0(a3, a15, a7, v20, a15 + 54, 0x474u);
            if ( v22 >= 0xFFFFFFFFFFFFFF89LL )
              return v22;
          }
        }
      }
      else
      {
        v17 = -1;
        if ( a5 == 3 )
        {
          v17 = 0;
          memcpy(a3, src, n);
        }
      }
      return v17;
    }
    v23 = sub_9041D0(a3, a10, a12, a11, a15, a16);
    if ( v23 <= 0xFFFFFFFFFFFFFF88LL )
      return 0;
    return v23;
  }
}
