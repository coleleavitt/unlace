__int64 __fastcall sub_F7C1A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  _OWORD *v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  bool v12; // cl
  bool v13; // cl
  bool v14; // zf
  _QWORD *v15; // [rsp+8h] [rbp-20h]
  _QWORD *v16; // [rsp+8h] [rbp-20h]

  v4 = a1;
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3);
  v6 = v5 >> 2;
  if ( v5 >> 2 > 0 )
  {
    v7 = *a3;
    v8 = 7 * v6;
    v9 = a3 + 1;
    v10 = a1 + 32 * v8;
    do
    {
      if ( *(_QWORD *)v4 == v7
        && *v9 == *(_OWORD *)(v4 + 8)
        && *(_QWORD *)(v4 + 24) == a3[3]
        && a3[4] == *(_QWORD *)(v4 + 32)
        && *(_QWORD *)(v4 + 40) == a3[5]
        && *(_QWORD *)(v4 + 48) == a3[6] )
      {
        return v4;
      }
      if ( v7 == *(_QWORD *)(v4 + 56)
        && *v9 == *(_OWORD *)(v4 + 64)
        && *(_QWORD *)(v4 + 80) == a3[3]
        && a3[4] == *(_QWORD *)(v4 + 88)
        && *(_QWORD *)(v4 + 96) == a3[5]
        && *(_QWORD *)(v4 + 104) == a3[6] )
      {
        return v4 + 56;
      }
      if ( v7 == *(_QWORD *)(v4 + 112)
        && *v9 == *(_OWORD *)(v4 + 120)
        && *(_QWORD *)(v4 + 136) == a3[3]
        && *(_QWORD *)(v4 + 144) == a3[4]
        && *(_QWORD *)(v4 + 152) == a3[5]
        && *(_QWORD *)(v4 + 160) == a3[6] )
      {
        return v4 + 112;
      }
      if ( v7 == *(_QWORD *)(v4 + 168)
        && *v9 == *(_OWORD *)(v4 + 176)
        && *(_QWORD *)(v4 + 192) == a3[3]
        && *(_QWORD *)(v4 + 200) == a3[4]
        && *(_QWORD *)(v4 + 208) == a3[5]
        && *(_QWORD *)(v4 + 216) == a3[6] )
      {
        return v4 + 168;
      }
      v4 += 224;
    }
    while ( v10 != v4 );
    v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - v4) >> 3);
  }
  if ( v5 != 2 )
  {
    if ( v5 != 3 )
    {
      if ( v5 != 1 )
        return a2;
      goto LABEL_42;
    }
    v15 = a3;
    v12 = sub_F7C150(v4, (__int64)a3);
    result = v4;
    if ( v12 )
      return result;
    a3 = v15;
    v4 += 56;
  }
  v16 = a3;
  v13 = sub_F7C150(v4, (__int64)a3);
  result = v4;
  if ( v13 )
    return result;
  a3 = v16;
  v4 += 56;
LABEL_42:
  v14 = !sub_F7C150(v4, (__int64)a3);
  result = v4;
  if ( v14 )
    return a2;
  return result;
}
