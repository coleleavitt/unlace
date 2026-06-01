void __fastcall sub_1EDA230(__int64 a1, __int64 a2)
{
  char v2; // dl
  char v3; // al
  __int64 *v4; // rbp
  int v5; // r12d
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v18[6]; // [rsp+18h] [rbp-30h] BYREF

  v16 = a2;
  if ( a2 )
  {
    v2 = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a2 + 4) = v2 & 0xEF;
    v3 = 1;
    if ( (*(_BYTE *)(a2 + 3) & 0x3A) == 0 )
      v3 = (v2 & 0x20) != 0;
    *(_BYTE *)(a2 + 3) = (v3 << 7) | *(_BYTE *)(a2 + 3) & 0x7F;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 2320LL) + 21LL) & 2) != 0 )
    {
      v4 = (__int64 *)(a1 + 10376);
      v5 = *(_DWORD *)(a1 + 36);
      v6 = (unsigned __int8)sub_1EB0D20((__int64 *)(a1 + 10376), &v16, &v17) == 0;
      v8 = v17;
      if ( !v6 )
      {
        *(_DWORD *)(v17 + 8) = v5;
        return;
      }
      v9 = *(_DWORD *)(a1 + 10384);
      v18[0] = v17;
      v10 = (unsigned int)(v9 + 1);
      v11 = *(unsigned int *)(a1 + 10392);
      v12 = (unsigned int)(4 * v10);
      v13 = 2 * v11;
      if ( (unsigned int)v12 < 3 * (int)v11 )
      {
        if ( (int)v11 - *(_DWORD *)(a1 + 10388) - (int)v10 > (unsigned int)v11 >> 3 )
        {
LABEL_10:
          v6 = *(_QWORD *)v8 == -4096;
          *(_DWORD *)(a1 + 10384) = v10;
          if ( !v6 )
            --*(_DWORD *)(a1 + 10388);
          v14 = v16;
          *(_DWORD *)(v8 + 8) = 0;
          v15 = (_DWORD *)(v8 + 8);
          *((_QWORD *)v15 - 1) = v14;
          *v15 = v5;
          return;
        }
        v13 = *(_DWORD *)(a1 + 10392);
      }
      sub_1EDA030(v4, v13, v10, v11, v12, v7);
      sub_1EB0D20(v4, &v16, v18);
      LODWORD(v10) = *(_DWORD *)(a1 + 10384) + 1;
      v8 = v18[0];
      goto LABEL_10;
    }
  }
}
