__m128 *__fastcall sub_115E7A0(__m128 *a1, __int64 a2)
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
    if ( !(_BYTE)byte_2CAE970 && __cxa_guard_acquire(&byte_2CAE970) )
    {
      LOBYTE(v9) = 0;
      *(_OWORD *)v5 = 0;
      v6 = 0;
      sub_10E7BD0((__int64)v10, nullptr, 0, 0, 0, (__int64 *)v5, nullptr, 0, nullptr, 0, v7, v8, 0);
      qword_2CAE980 = (__int64)&unk_2CAE990;
      qword_2CAE988 = 0x100000000LL;
      sub_10E7040((__int64)&unk_2CAE990, (__int64)v10);
      LODWORD(qword_2CAE988) = qword_2CAE988 + 1;
      __cxa_atexit((void (*)(void *))sub_115A9A0, &qword_2CAE980, &off_2AFC540);
      __cxa_guard_release(&byte_2CAE970);
      sub_10E71B0((__int64)v10);
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
    *a1 = _mm_loadh_ps((const double *)&qword_2CAE980);
    return a1;
  }
}

