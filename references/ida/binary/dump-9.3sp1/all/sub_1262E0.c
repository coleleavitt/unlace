void __fastcall sub_1262E0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12

  if ( *(_BYTE *)a1 != 4 || *(unsigned __int8 **)(a1 + 8) != a2 )
  {
    v3 = *(unsigned int *)a2;
    if ( (_DWORD)v3 == 4 )
    {
      if ( a2 + 32 != (unsigned __int8 *)a1 )
      {
        sub_11CDA0(a1);
        sub_123A40(a1, a2 + 32, v4, v5);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_32ED70(v3) )
      {
        if ( !under_debugger )
          sub_383060(50278);
        BUG();
      }
      v8 = j__qalloc_or_throw(80, (__int64)a2, v6, v7);
      *(_OWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 56) = 0;
      *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 72) = 0;
      sub_1253A0(v8, (__int64)a2);
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v8;
      *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 17);
      *(_BYTE *)(a1 + 1) = a2[65];
      if ( a2[64] != 8 )
      {
        sub_11CDA0(v8 + 64);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) = *(_BYTE *)(a1 + 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) = *(_DWORD *)(a1 + 4);
      }
    }
    if ( (a2[65] & 0x20) != 0 )
      *(_BYTE *)(a1 + 1) |= 0x20u;
  }
}
