unsigned int *__fastcall sub_8A1B60(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  unsigned int *v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD *v9; // r15

  v3 = 1705691;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = sub_79E220(a1, a2, a3);
      v6 = (unsigned int *)v5;
      if ( v5 )
        break;
      if ( !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a1 + 256) || !(unsigned __int8)sub_8A1470(a1) )
        return v6;
    }
    if ( !*(_BYTE *)(a1 + 69) )
      break;
    v7 = *(unsigned __int8 *)(v5 + 4);
    if ( (_BYTE)v7 != 12 )
    {
      v8 = (unsigned int)(v7 - 91);
      if ( (unsigned __int8)v8 > 0x14u || !_bittest64(&v3, v8) )
        break;
    }
    v9 = (_QWORD *)sub_79E760(a1, v6);
    if ( !v9 )
      break;
    qfree(v6);
    sub_8A0120((__int64 *)a1, v9);
    *(_QWORD *)(a3 + 8) = 0;
  }
  return v6;
}

