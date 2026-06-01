__int64 __fastcall sub_8D91E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  bool v9; // zf
  char v11; // al
  __int64 v12; // rcx
  int v13; // ecx
  _QWORD v14[3]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-90h]
  __int64 v16; // [rsp+20h] [rbp-88h]
  int v17; // [rsp+30h] [rbp-78h]
  int v18[14]; // [rsp+40h] [rbp-68h] BYREF
  char v19; // [rsp+78h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v14, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9A0D60(a1 + 672, a1 + 384, *(_QWORD *)(a1 + 368), v14, a2);
  if ( !(_BYTE)v4 )
    goto LABEL_21;
  v5 = v4;
  if ( *(_BYTE *)(a1 + 761) )
  {
    if ( !(unsigned __int8)sub_9A0B70(a1 + 672, a1 + 384, v14) )
      goto LABEL_21;
  }
  if ( !*(_BYTE *)(a1 + 760) )
  {
    sub_A1E120(v18, v14, **(_QWORD **)(a1 + 368));
    v11 = *(_BYTE *)(a1 + 736);
    if ( v11 == 3 )
    {
      sub_6A63E0(a1 + 680, (__int64)v18);
    }
    else
    {
      if ( v11 != -1 )
      {
        if ( v11 == 1 )
          sub_A1C0C0(a1 + 680);
        *(_BYTE *)(a1 + 736) = -1;
      }
      sub_6A4260(a1 + 680, v18);
      *(_BYTE *)(a1 + 736) = 3;
    }
    *(_DWORD *)(a1 + 744) = 2;
    if ( v18[0] > 1u )
      goto LABEL_33;
    goto LABEL_22;
  }
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      if ( v15 )
        goto LABEL_21;
    }
    else if ( v17 == 3 || v14[0] | v16 )
    {
      goto LABEL_21;
    }
  }
  else if ( v15 && (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v15 + 32) + 20LL) < v14[0] )
  {
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 1) & 0x10) != 0 )
  {
    if ( v17 )
    {
LABEL_10:
      v6 = *(_QWORD *)(a1 + 368);
      goto LABEL_11;
    }
    if ( !(unsigned __int8)sub_9E4480(a1 + 384, *(_QWORD *)(a1 + 792), v14) )
      goto LABEL_21;
  }
  if ( v17 || !v15 )
    goto LABEL_10;
  v12 = *(_QWORD *)(v15 + 32);
  if ( (_DWORD)v16 != *(_DWORD *)(v12 + 16) && (_DWORD)v16 )
    v13 = *(_BYTE *)(v15 + (unsigned int)v16 + 28) & 1;
  else
    v13 = *(unsigned __int8 *)(v12 + 48);
  v6 = *(_QWORD *)(a1 + 368);
  if ( !v13 && *(_DWORD *)v15 != *(_DWORD *)(v6 + 32) )
    goto LABEL_21;
LABEL_11:
  v7 = *(_QWORD *)(a1 + 752);
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 >> 1;
  if ( (v7 & 2) == 0 )
  {
    v7 &= 0xFFFFFFFFFFFFFFFCLL;
    if ( !v7 )
      goto LABEL_16;
    if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 24 <= 0x1A )
    {
      v7 = *(_QWORD *)(v7 + 48);
      goto LABEL_16;
    }
    if ( (v8 & 1) == 0 )
      goto LABEL_50;
LABEL_45:
    v7 = *(_QWORD *)(v7 + 8);
    goto LABEL_16;
  }
  if ( (v8 & 1) != 0 )
  {
    v7 &= 0xFFFFFFFFFFFFFFFCLL;
    if ( !v7 )
      goto LABEL_16;
    goto LABEL_45;
  }
LABEL_50:
  v7 = 0;
LABEL_16:
  sub_A24290(v18, v14, v6, v7);
  if ( !v19 )
  {
LABEL_21:
    v5 = 0;
    goto LABEL_22;
  }
  sub_8CC9C0(a1 + 680, v18);
  v9 = v19 == 0;
  *(_DWORD *)(a1 + 744) = 2;
  if ( !v9 )
  {
    v19 = 0;
    if ( v18[0] > 1u )
LABEL_33:
      sub_69F740((__int64)v18);
  }
LABEL_22:
  sub_A1C0C0(v14);
  return v5;
}

