__int64 __fastcall sub_11187A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void **v5; // rdx
  void **v6; // r15
  void *v7; // rdi
  void **v9; // [rsp+18h] [rbp-130h]
  __int64 i; // [rsp+20h] [rbp-128h]
  _BYTE *v11; // [rsp+30h] [rbp-118h]
  __int64 v12; // [rsp+38h] [rbp-110h]
  void *v13[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-E8h] BYREF
  void *v15; // [rsp+70h] [rbp-D8h]
  __int64 v16; // [rsp+80h] [rbp-C8h] BYREF
  void *v17; // [rsp+90h] [rbp-B8h]
  __int64 v18; // [rsp+A0h] [rbp-A8h] BYREF
  void *v19; // [rsp+B0h] [rbp-98h]
  void **v20; // [rsp+B8h] [rbp-90h]
  void *v21; // [rsp+C8h] [rbp-80h]
  __int64 v22; // [rsp+D8h] [rbp-70h] BYREF
  void *v23; // [rsp+E8h] [rbp-60h]
  _BYTE v24[80]; // [rsp+F8h] [rbp-50h] BYREF

  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  v3 = *a2;
  *(_QWORD *)(a1 + 32) = 0x100000000LL;
  *(_QWORD *)(a1 + 104) = 0x100000000LL;
  v4 = a2[1];
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  for ( i = v4; i != v3; v3 += 120 )
  {
    while ( 1 )
    {
      sub_110B910(
        (__int64)v13,
        *(_BYTE **)v3,
        *(_QWORD *)(v3 + 8),
        *(_QWORD *)(v3 + 32),
        *(_QWORD *)(v3 + 40),
        (__int64 *)(v3 + 96),
        *(_BYTE **)(v3 + 64),
        *(_QWORD *)(v3 + 72),
        nullptr,
        0,
        v11,
        v12,
        0);
      sub_110E210((char **)a1, (__int64)v13);
      if ( v24[16] && v23 != v24 )
        operator delete(v23);
      if ( v21 != &v22 )
        operator delete(v21);
      v5 = v20;
      v6 = (void **)v19;
      if ( v20 != v19 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *v6;
            if ( *v6 == v6 + 2 )
              break;
            v9 = v5;
            v6 += 4;
            operator delete(v7);
            v5 = v9;
            if ( v9 == v6 )
              goto LABEL_10;
          }
          v6 += 4;
        }
        while ( v5 != v6 );
LABEL_10:
        v6 = (void **)v19;
      }
      if ( v6 )
        operator delete(v6);
      if ( v17 != &v18 )
        operator delete(v17);
      if ( v15 != &v16 )
        operator delete(v15);
      if ( v13[0] == &v14 )
        break;
      operator delete(v13[0]);
      v3 += 120;
      if ( i == v3 )
        return a1;
    }
  }
  return a1;
}
