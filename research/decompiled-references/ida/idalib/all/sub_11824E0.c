__m128 *__fastcall sub_11824E0(__m128 *a1, __int64 a2)
{
  void **v3; // r12
  void **v4; // rbp
  void *v5[2]; // [rsp+10h] [rbp-118h] BYREF
  __int64 v6; // [rsp+20h] [rbp-108h]
  _BYTE *v7; // [rsp+30h] [rbp-F8h]
  __int64 v8; // [rsp+38h] [rbp-F0h]
  __int64 v9; // [rsp+40h] [rbp-E8h]
  _BYTE v10[216]; // [rsp+50h] [rbp-D8h] BYREF

  if ( *(_DWORD *)(a2 + 2184) )
  {
    *a1 = _mm_loadh_ps((const double *)(a2 + 2176));
    return a1;
  }
  else
  {
    if ( !(_BYTE)byte_2CD8890 && __cxa_guard_acquire(&byte_2CD8890) )
    {
      LOBYTE(v9) = 0;
      *(_OWORD *)v5 = 0;
      v6 = 0;
      sub_110B910((__int64)v10, nullptr, 0, 0, 0, (__int64 *)v5, nullptr, 0, nullptr, 0, v7, v8, 0);
      qword_2CD88A0 = (__int64)&unk_2CD88B0;
      qword_2CD88A8 = 0x100000000LL;
      sub_110AD80((__int64)&unk_2CD88B0, (__int64)v10);
      LODWORD(qword_2CD88A8) = qword_2CD88A8 + 1;
      __cxa_atexit((void (*)(void *))sub_117E6E0, &qword_2CD88A0, &off_2B25620);
      __cxa_guard_release(&byte_2CD8890);
      sub_110AEF0((__int64)v10);
      v3 = (void **)v5[1];
      v4 = (void **)v5[0];
      if ( v5[1] != v5[0] )
      {
        do
        {
          while ( *v4 != v4 + 2 )
          {
            operator delete(*v4);
            v4 += 4;
            if ( v4 == v3 )
              goto LABEL_9;
          }
          v4 += 4;
        }
        while ( v3 != v4 );
LABEL_9:
        v4 = (void **)v5[0];
      }
      if ( v4 )
        operator delete(v4);
    }
    *a1 = _mm_loadh_ps((const double *)&qword_2CD88A0);
    return a1;
  }
}
