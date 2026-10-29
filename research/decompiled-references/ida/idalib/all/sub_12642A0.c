unsigned __int64 __fastcall sub_12642A0(__int64 a1)
{
  int v1; // ebx
  char v2; // r9
  bool v3; // r14
  bool v4; // r13
  bool v5; // r15
  int v6; // ecx
  double v7; // rdx
  double v8; // rcx
  double v10[2]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+14h] [rbp-44h]
  char v12; // [rsp+19h] [rbp-3Fh]
  bool v13; // [rsp+1Ah] [rbp-3Eh]
  bool v14; // [rsp+1Bh] [rbp-3Dh]
  bool v15; // [rsp+1Ch] [rbp-3Ch]
  bool v16; // [rsp+1Dh] [rbp-3Bh]
  bool v17; // [rsp+1Eh] [rbp-3Ah]
  bool v18; // [rsp+1Fh] [rbp-39h]

  v1 = *(_DWORD *)(a1 + 48);
  v13 = v1 == 37;
  LOBYTE(v10[0]) = v1 == 32;
  v2 = v1 == 38 || v1 == 32;
  if ( v1 == 16 )
  {
    v4 = 0;
    v3 = 0;
    v5 = 0;
    v14 = 1;
    goto LABEL_4;
  }
  v14 = v1 == 17;
  if ( v1 == 18 )
  {
    v14 = 0;
    v3 = 1;
    v4 = 0;
    v5 = 0;
LABEL_4:
    v17 = v1 == 2 || (unsigned int)(v1 - 35) <= 1;
    goto LABEL_5;
  }
  v3 = v1 == 38 || v1 == 19;
  if ( v1 == 23 )
  {
    v2 = 1;
    v14 = 0;
    v4 = 0;
    v5 = 1;
    goto LABEL_4;
  }
  v5 = v1 == 24;
  v2 |= v1 == 24;
  if ( v1 == 3 )
  {
    v4 = 1;
    goto LABEL_4;
  }
  v4 = v1 == 4;
  if ( v1 != 1 )
    goto LABEL_4;
  v17 = 1;
LABEL_5:
  v6 = *(_DWORD *)(a1 + 64);
  v12 = v2;
  v15 = v1 == 14;
  v16 = v1 == 28;
  v18 = v1 == 12;
  v11 = v6;
  sub_112B370(a1);
  v8 = v7;
  if ( (v3 || (v13 || v4 || v17 || v5) && (v5 || v4) || ((v1 - 28) & 0xFFFFFFFB) == 0 || v15 || v12) && v3
    || v13
    || v4
    || v17
    || v14
    || v18
    || v5
    || v15
    || v16 )
  {
    v8 = v7;
    BYTE1(v8) = BYTE1(v7) | 2;
  }
  v10[0] = v8;
  return _mm_loadh_ps(v10).m128_u64[0];
}
