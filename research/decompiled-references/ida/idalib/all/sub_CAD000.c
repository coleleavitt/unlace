__int64 __fastcall sub_CAD000(__int64 a1, int *a2)
{
  int v2; // esi
  int v3; // r12d
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int8 v10; // [rsp+Bh] [rbp-3Dh] BYREF
  unsigned int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *a2;
  v12 = 0;
  v3 = sub_CAC940(a1, v2);
  v11 = 1093;
  v10 = 1;
  sub_C9FC00((__int64 *)(a1 + 440), &v11, &v10);
  if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v13[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v13, &v12);
  }
  v4 = *(_QWORD *)(a1 + 440);
  result = 0;
  v6 = *(_QWORD *)(a1 + 448) - v4;
  if ( v6 + 4 <= 0xFFFFFFFF )
  {
    v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v7 + 8;
    if ( v6 < v7 + 8 )
    {
      sub_C9FA60(a1 + 440, v8 - v6);
      result = v10;
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + v7) = v3;
    }
    else
    {
      if ( v6 > v7 + 8 )
      {
        v9 = v4 + v8;
        if ( *(_QWORD *)(a1 + 448) != v9 )
          *(_QWORD *)(a1 + 448) = v9;
      }
      *(_DWORD *)(v4 + v7) = v3;
      return v10;
    }
  }
  return result;
}
