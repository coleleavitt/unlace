__int64 __fastcall sub_F34760(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
  if ( ((v3 + 464) & 0x1FFu) > 0x37 )
    return sub_F34700(a1, a2);
  if ( v3 == 100 )
    return a2[2344];
  sub_A40CA0((__int64)v5, a2, v2);
  return v5[0];
}

