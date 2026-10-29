__int64 __fastcall sub_869520(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rcx
  float v9; // xmm3_4
  __int64 v10; // rax
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 904);
  if ( v3 )
  {
    v4 = 0.0;
    v5 = 0.0;
    v6 = v3 + 16LL * *(unsigned int *)(v3 - 4);
    if ( v6 != v3 )
    {
      v7 = 0;
      while ( 1 )
      {
        while ( *(_BYTE *)(v3 + 12) )
        {
LABEL_14:
          v3 += 16;
          if ( v3 == v6 )
            goto LABEL_15;
        }
        v8 = v3;
        if ( v7 )
          break;
        v8 = v3 + 16;
        v4 = *(float *)(v3 + 8);
        if ( v6 == v3 + 16 )
          goto LABEL_15;
        if ( !*(_BYTE *)(v3 + 28) )
          goto LABEL_10;
        v8 = v3 + 32;
        if ( v6 == v3 + 32 )
          goto LABEL_15;
        v7 = *(_BYTE *)(v3 + 44);
        if ( !v7 )
        {
LABEL_10:
          v5 = *(float *)(v3 + 8);
          break;
        }
        v5 = *(float *)(v3 + 8);
        v3 += 48;
        if ( v8 + 16 == v6 )
          goto LABEL_15;
      }
      v3 = v8;
      while ( 1 )
      {
        v9 = *(float *)(v3 + 8);
        v3 += 16;
        v5 = fminf(v9, v5);
        v4 = fmaxf(v9, v4);
        if ( v6 == v3 )
          break;
        v7 = *(_BYTE *)(v3 + 12);
        if ( v7 )
          goto LABEL_14;
      }
    }
  }
LABEL_15:
  sub_18183E0(a2, "q instantiations", *(unsigned int *)(a1 + 32));
  sub_18183E0(a2, "q lazy instantiations", *(unsigned int *)(a1 + 36));
  v10 = *(_QWORD *)(a1 + 904);
  if ( v10 )
    v11 = *(unsigned int *)(v10 - 4);
  else
    v11 = 0;
  sub_18183E0(a2, "q missed instantiations", v11);
  sub_1818270(a2, "q min missed cost");
  return sub_1818270(a2, "q max missed cost");
}

