__int64 __fastcall sub_963160(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbp
  __int64 v4; // r12
  void *v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 *i; // rbp
  __int64 v9; // rax
  void *v10; // rax
  void *v11; // rax
  _BYTE v12[25]; // [rsp+Fh] [rbp-19h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
  {
    v3 = sub_9607F0((__int64 *)a1, v12);
    v4 = operator new(8u);
    sub_EA5A50(v4, v3);
    v5 = *(void **)(a1 + 128);
    *(_QWORD *)(a1 + 128) = v4;
    if ( v5 )
    {
      sub_EA1E10(v5);
      operator delete(v5, 8u);
    }
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v6 + 28) & 0x7F) == 0x26 )
    {
      v7 = sub_B751E0(*(_QWORD *)(a1 + 8)) + 8LL * (unsigned __int16)(*(_DWORD *)(v6 + 84) >> 13);
      for ( i = (__int64 *)sub_B751E0(v6); (__int64 *)v7 != i; ++i )
      {
        v9 = *i;
        sub_EA5AB0(*(_QWORD *)(a1 + 128), *(_QWORD *)(v9 + 8));
      }
    }
    v1 = *(_QWORD *)(a1 + 128);
    if ( *(_BYTE *)(a1 + 120) )
    {
      v11 = sub_962E30(a1);
      if ( v11 )
        sub_9625D0((__int64)v11, v1);
      v1 = *(_QWORD *)(a1 + 128);
    }
    if ( *(_BYTE *)(a1 + 121) )
    {
      v10 = sub_962700(a1);
      if ( v10 )
        sub_9625D0((__int64)v10, v1);
      return *(_QWORD *)(a1 + 128);
    }
  }
  return v1;
}

