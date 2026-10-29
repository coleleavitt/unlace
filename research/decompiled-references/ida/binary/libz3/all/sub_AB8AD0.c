__int64 __fastcall sub_AB8AD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int64 v12[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 432LL) == 0x7FFFFFFF )
  {
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a2 + 24);
    v3 = 0;
    while ( 1 )
    {
      v4 = a2;
      if ( v3 != v2 )
        v4 = *(_QWORD *)(a2 + 8LL * v3 + 32);
      v5 = sub_15D1F10(v4);
      v6 = sub_1673B10(a1 + 80, v5);
      if ( (_BYTE)v6 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v4) + 24) + 8LL);
        if ( *(_BYTE *)(v7 + 8) )
          sub_DBF6E(0);
        v8 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(*(_QWORD *)(v8 + 112) + 432LL) < *(_DWORD *)v7 )
          break;
      }
      if ( v2 < ++v3 )
        return 0;
    }
    if ( !*(_BYTE *)(a1 + 1160) )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v9 = sub_180C100(v8 + 8400, 24);
      *(_QWORD *)v9 = off_1C54EE8;
      *(_BYTE *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 8) = a1 + 1160;
      v12[0] = v9;
      sub_AB8A10((_QWORD *)(v11 + 9456), v12);
      *(_BYTE *)(a1 + 1160) = 1;
    }
  }
  return v6;
}

