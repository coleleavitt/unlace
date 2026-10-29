__int64 __fastcall sub_B05E80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-68h]
  _QWORD v10[3]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+20h] [rbp-48h]
  _QWORD v12[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a1 + 72;
  v3 = *(_DWORD *)(a2 + 120);
  v9 = v2;
  v10[0] = 0;
  v10[1] = 0;
  v11 = v2;
  v12[0] = 0;
  v12[1] = 0;
  if ( v3 )
  {
    v4 = 0;
    while ( 1 )
    {
      sub_1839610(v2, v10, 40 * v4 + *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16) + 8);
      v6 = 40 * v4 + *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16);
      if ( (v12[0] & 0x100000000LL) == 0 && (*(_BYTE *)(v6 + 12) & 1) == 0 )
        break;
      if ( (int)sub_182EB00(v11, v12, v6 + 8) >= 0 )
        goto LABEL_5;
      v7 = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16) + 40 * v4;
      if ( (*(_BYTE *)(v7 + 12) & 1) == 0 )
      {
        v5 = *(_DWORD *)(v7 + 8);
LABEL_4:
        BYTE4(v12[0]) &= ~1u;
        LODWORD(v12[0]) = v5;
LABEL_5:
        if ( (unsigned int)++v4 >= *(_DWORD *)(a2 + 120) )
          goto LABEL_12;
        goto LABEL_6;
      }
      sub_182EA00(v11, v12, v7 + 8);
      if ( (unsigned int)++v4 >= *(_DWORD *)(a2 + 120) )
      {
LABEL_12:
        v2 = v11;
        goto LABEL_13;
      }
LABEL_6:
      v2 = v9;
    }
    v5 = *(_DWORD *)(v6 + 8);
    if ( SLODWORD(v12[0]) < v5 )
      goto LABEL_4;
    goto LABEL_5;
  }
LABEL_13:
  sub_182EF00(v2, v12);
  return sub_182EF00(v9, v10);
}

