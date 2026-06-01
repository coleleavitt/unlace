__int64 __fastcall sub_CB5CF0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = a3;
  if ( (*(_BYTE *)(*a2 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  v3 = sub_B97300(*a2);
  if ( !v3 || *(char *)(v3 + 82) < 0 )
    return 1;
  v4 = sub_CB4B10(a1);
  if ( v4 && (unsigned __int8)sub_D00AF0(a1, v6) )
    return sub_CFFC60(a1, v4, 0, v6);
  else
    return 0;
}
