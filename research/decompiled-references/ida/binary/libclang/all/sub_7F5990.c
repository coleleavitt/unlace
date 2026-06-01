__int64 __fastcall sub_7F5990(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r9
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(__int64 **)(a2 + 64);
  if ( v2 )
  {
    if ( (unsigned __int8)sub_7EEDC0((__int64)a1, *v2, (__int64)(v2 + 1)) )
    {
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      goto LABEL_4;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(a2 + 56)) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 1;
LABEL_4:
  v3 = nullptr;
  v4 = sub_79A2B0(a2);
  v5 = *v4 + 8LL * *((unsigned int *)v4 + 2);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v3 = (__int64 *)*sub_79A2B0(a2);
  if ( (__int64 *)v5 != v3 )
  {
    while ( 1 )
    {
      v6 = *a1;
      v8[0] = *v3;
      if ( !(unsigned __int8)sub_7F2380((__int64)a1, v8[0], v8[0], v8, a1, v6) )
        break;
      if ( (__int64 *)v5 == ++v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}

