__int64 __fastcall sub_1FA4E0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  unsigned int v3; // ebp
  _QWORD v5[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_BYTE *)(a1 + 80) == 0;
  v2 = *(_QWORD *)(a1 + 32);
  v6[3] = __readfsqword(0x28u);
  if ( v1 )
  {
    sub_11DFC0((__int64)v5, *(_QWORD *)(a1 + 16), v2, 0);
  }
  else
  {
    if ( *(char *)(v2 + 4) < 0 )
      return 0;
    sub_121360((__int64)v5, *(_QWORD *)(a1 + 16), v2, 0x101u);
  }
  v3 = 1;
  if ( !(unsigned __int8)sub_5E200((_QWORD *)(a1 + 40), v5) )
    v3 = (unsigned __int8)sub_3110F0(a1 + 56, v6);
  if ( v6[0] )
  {
    v6[1] = 0;
    qfree(v6[0]);
  }
  qfree(v5[0]);
  return v3;
}
