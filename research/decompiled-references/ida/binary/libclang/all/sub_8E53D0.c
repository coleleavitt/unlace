__int64 __fastcall sub_8E53D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  _DWORD v8[26]; // [rsp+0h] [rbp-68h] BYREF

  if ( *(_QWORD *)a2 )
  {
    sub_97DB00(v8, a2, a3);
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 8LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*(_QWORD *)a2 + 8LL) & 4) != 0 )
      v6 = 0;
    sub_6A3290(a1, (__int64)v8, a3, *(_QWORD *)(v6 + 48), v4, v5);
    if ( v8[0] > 1u )
      sub_69F740((__int64)v8);
    return a1;
  }
  else
  {
    strcpy((char *)(a1 + 16), "nullptr");
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 7;
    return a1;
  }
}

