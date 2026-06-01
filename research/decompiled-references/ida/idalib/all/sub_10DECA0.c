__int64 __fastcall sub_10DECA0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+10h] [rbp-38h]
  unsigned int v12; // [rsp+14h] [rbp-34h]

  v10[0] = __PAIR64__(a3, a2);
  v4 = sub_21B6DA0(a1, v10, 2);
  v5 = *(_QWORD *)(a1 + 8);
  v11 = a2;
  v12 = a3;
  v6 = v5 + 8LL * (unsigned int)v4;
  v7 = v5 + 8 * HIDWORD(v4);
  v10[1] = v6;
  v10[0] = v7;
  if ( v7 == v6 )
    return 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 - 8);
    if ( v8 )
    {
      if ( a2 && ((unsigned __int8)sub_21B9810(*(_QWORD *)(v7 - 8), a2) || a3 && (unsigned __int8)sub_21B9810(v8, a3)) )
        break;
    }
    v7 -= 8;
    v10[0] = v7;
    if ( v6 == v7 )
      return 0;
  }
  if ( v6 == v7 )
    return 0;
  else
    return *(_QWORD *)(v7 - 8);
}
