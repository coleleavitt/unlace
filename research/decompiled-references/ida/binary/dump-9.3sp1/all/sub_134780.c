unsigned __int64 __fastcall sub_134780(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v11; // rax
  unsigned __int8 v12[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  while ( 1 )
  {
    v5 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 != 14 )
      break;
    sub_134780(a1, *(_QWORD *)(a2 + 8));
    a2 = *(_QWORD *)(a2 + 8) + 16LL;
  }
  if ( v5 > 0xEu )
  {
    if ( v5 != 15 )
    {
LABEL_5:
      if ( !under_debugger )
        sub_383060(51240);
      BUG();
    }
  }
  else if ( (v5 & 0xFB) != 1 )
  {
    goto LABEL_5;
  }
  sub_123A40((__int64)v12, (unsigned __int8 *)a2, a3, a4);
  v7 = a1[1];
  v8 = *a1;
  v9 = v7 + 1;
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v11 = qvector_reserve((__int64)a1, v8, v9, 16);
    *a1 = v11;
    v8 = v11;
    v7 = a1[1];
  }
  sub_123A40(v8 + 16 * v7, v12, v9, v6);
  ++a1[1];
  sub_11CDA0((__int64)v12);
  return v13 - __readfsqword(0x28u);
}
