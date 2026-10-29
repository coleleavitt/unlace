__int64 __fastcall sub_156E250(__int64 a1, unsigned int *a2, __m128i a3, __m128 a4)
{
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int v8; // r12d
  const char *v9; // rsi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int16 v25; // [rsp+Eh] [rbp-CAh] BYREF
  _BYTE *v26; // [rsp+10h] [rbp-C8h] BYREF
  char v27; // [rsp+18h] [rbp-C0h]
  __int64 v28; // [rsp+20h] [rbp-B8h]
  int v29; // [rsp+28h] [rbp-B0h]
  __int16 v30; // [rsp+2Ch] [rbp-ACh]
  __int64 (__fastcall *v31)(__int64); // [rsp+30h] [rbp-A8h]
  __int64 v32; // [rsp+38h] [rbp-A0h]
  __int64 v33; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v34[17]; // [rsp+50h] [rbp-88h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  *((_BYTE *)a2 + 4) = *(_WORD *)(a1 + 32) == 395;
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_WORD *)(a1 + 32) == 22;
  v28 = a1;
  *a2 = v6;
  v26 = (_BYTE *)(a1 + 1952);
  LOBYTE(v6) = *(_BYTE *)(a1 + 1952);
  v29 = 1507350;
  v27 = v6;
  *(_BYTE *)(a1 + 1952) = 1;
  v30 = 63;
  v31 = sub_146A990;
  v32 = 0;
  v33 = 0;
  if ( !v7 )
    goto LABEL_2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800((__int64)&v26) )
    {
LABEL_2:
      v8 = 1;
      sub_FC70B0((__int64)v34, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1625);
      v9 = "__if_exists";
      if ( !*((_BYTE *)a2 + 4) )
        v9 = "__if_not_exists";
      sub_AE9DF0(v34, (__int64)v9, 1u);
      sub_AEA040((__int64)v34);
      goto LABEL_5;
    }
  }
  else
  {
    LODWORD(v33) = sub_146A990(a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    sub_14D0170((const __m128i *)a1, (__int64)(a2 + 2), 0, 0, 0, nullptr, a3, 0, nullptr, 0, 0, 0);
  if ( a2[2] && a2[3] && !*((_QWORD *)a2 + 2) )
  {
    v8 = 1;
    LOWORD(v34[0]) = HIWORD(v29);
    sub_1566E40(v28, v34, 1, 2);
    sub_14808E0((__int64)&v26, (__int64 *)v34, v21, v22, v23, v24);
  }
  else
  {
    LODWORD(v34[0]) = 0;
    v11 = (__int64 *)(a2 + 2);
    v8 = sub_14D1670(
           (const __m128i *)a1,
           (__int64)(a2 + 2),
           0,
           0,
           0,
           1,
           a3,
           a4,
           1,
           0,
           (__int32 *)v34,
           (__int64)(a2 + 14));
    if ( (_BYTE)v8 )
    {
      v25 = HIWORD(v29);
      sub_1566E40(v28, &v25, 1, 2);
      sub_14808E0((__int64)&v26, (__int64 *)&v25, v17, v18, v19, v20);
    }
    else
    {
      v8 = sub_14808E0((__int64)&v26, v11, v12, v13, v14, v15);
      if ( !(_BYTE)v8 )
      {
        v16 = sub_19A48F0(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                *a2,
                *((unsigned __int8 *)a2 + 4),
                a2 + 2,
                a2 + 14);
        if ( v16 == 1 )
        {
          a2[22] = *((unsigned __int8 *)a2 + 4);
        }
        else if ( v16 <= 1 )
        {
          if ( !v16 )
            a2[22] = *((_BYTE *)a2 + 4) ^ 1;
        }
        else if ( v16 == 2 )
        {
          a2[22] = 2;
        }
        else
        {
          LOBYTE(v8) = v16 == 3;
        }
      }
    }
  }
LABEL_5:
  *v26 = v27;
  return v8;
}
