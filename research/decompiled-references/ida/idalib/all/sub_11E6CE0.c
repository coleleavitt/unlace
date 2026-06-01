unsigned __int64 __fastcall sub_11E6CE0(_DWORD *a1)
{
  int v1; // r12d
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v7; // eax
  int v8; // edx
  double v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[12];
  v2 = sub_112B370((__int64)a1);
  v3 = a1[983];
  v4 = v2 | 0x63007;
  *(_QWORD *)&v9[0] = v5 | 0x40;
  if ( !v3 )
  {
LABEL_9:
    if ( (unsigned __int8)sub_11E6860((__int64)a1, 10, 9, 0) )
      goto LABEL_5;
    if ( (unsigned int)(a1[983] - 1) > 1 )
      goto LABEL_4;
    goto LABEL_24;
  }
  if ( v3 == 1 )
  {
    if ( a1[984] != 2 )
      goto LABEL_24;
    goto LABEL_9;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
  {
LABEL_4:
    v4 = v2 | 0x100000063007LL;
    goto LABEL_5;
  }
LABEL_24:
  if ( a1[984] )
    goto LABEL_4;
  v11[0] = 0x8000000000000005LL;
  v11[1] = 0x80000000LL;
  if ( !(unsigned __int8)sub_A09E20(a1 + 985, (unsigned int *)v11) )
    goto LABEL_4;
LABEL_5:
  if ( v1 != 38 && v1 != 3 )
    goto LABEL_7;
  v7 = a1[983];
  switch ( v7 )
  {
    case 0:
      BYTE1(v4) |= 0x80u;
LABEL_14:
      BYTE1(v4) |= 0x40u;
      goto LABEL_15;
    case 1:
      v8 = a1[984];
      if ( v8 == 2 )
      {
LABEL_31:
        BYTE1(v4) |= 0x80u;
        goto LABEL_21;
      }
      break;
    case 2:
      v8 = a1[984];
      break;
    default:
      goto LABEL_20;
  }
  if ( v8 == 1 )
    goto LABEL_31;
  if ( v7 == 2 )
  {
LABEL_30:
    if ( a1[984] != 1 )
      goto LABEL_15;
    goto LABEL_31;
  }
LABEL_20:
  if ( v7 == 3 )
    goto LABEL_30;
LABEL_21:
  if ( v7 == 1 && a1[984] == 2 )
    goto LABEL_14;
LABEL_15:
  if ( v1 == 38 )
    v4 |= 0x10000uLL;
LABEL_7:
  v10 = v4;
  return _mm_loadh_ps(v9).m128_u64[0];
}
