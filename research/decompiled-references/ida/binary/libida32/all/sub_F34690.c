__int64 __fastcall sub_F34690(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( ((*(_WORD *)(v2 + 18) >> 3) & 0x1FF) == 0x64 )
    return a2[2344];
  sub_A40CA0((__int64)v4, a2, v2);
  return v4[0];
}

