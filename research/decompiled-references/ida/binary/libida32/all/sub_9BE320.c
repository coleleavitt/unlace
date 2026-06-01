unsigned __int64 __fastcall sub_9BE320(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int16 v7; // ax
  double v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1;
  v3 = sub_B68470(a2);
  v4 = sub_B685F0(v3);
  if ( !a1 )
LABEL_11:
    BUG();
  v5 = v4;
  while ( 1 )
  {
    v6 = sub_BD9B60(v2, v5);
    v7 = *(_WORD *)v6 & 0x1FF;
    if ( ((v7 + 433) & 0x1FFu) > 9 )
      break;
    if ( ((*(_WORD *)(v6 + 2) >> 3) & 0x7F) != 2 )
      goto LABEL_7;
    v2 = *(_QWORD *)(v6 + 16);
    if ( !v2 )
      goto LABEL_11;
  }
  if ( v7 != 71
    || (*(_BYTE *)(*(_QWORD *)(v6 + 16) + 28LL) & 0x7Fu) - 40 > 6
    || !(unsigned __int8)sub_9BDB30(*(_QWORD *)(v6 + 16), a2) )
  {
LABEL_7:
    v6 = 0;
  }
  *(_QWORD *)&v9[0] = v6;
  return _mm_loadh_ps(v9).m128_u64[0];
}

