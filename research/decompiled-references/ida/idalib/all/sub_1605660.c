__int64 __fastcall sub_1605660(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned int v11; // r13d
  int v13; // esi
  int v14; // r10d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  unsigned __int8 v21; // al
  __int64 v22; // rax
  unsigned int v23; // r13d
  unsigned int v24; // esi
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // r11d
  __int64 v31; // r10
  int v32; // edi
  bool v33; // zf
  __int64 v34; // [rsp+8h] [rbp-40h] BYREF
  __m128 v35[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  v34 = a1;
  if ( (_DWORD)v3 )
  {
    v6 = (v3 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v7 = (__int64 *)(v4 + 16LL * v6);
    v8 = *v7;
    if ( a1 == *v7 )
    {
LABEL_3:
      sub_15F6A90(v35, v7, (_QWORD *)(16 * v3 + v4), a2, 1);
      v9 = v35[0].m128_u64[0];
      goto LABEL_4;
    }
    v13 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v6 = (v3 - 1) & (v13 + v6);
        v7 = (__int64 *)(v4 + 16LL * v6);
        v15 = *v7;
        if ( a1 == *v7 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
  }
  sub_15F6A90(v35, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), a2, 1);
  v9 = v35[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  sub_15F6A90(v35, v10, v10, a2, 1);
  if ( v9 != v35[0].m128_u64[0] )
    return *(unsigned __int8 *)(v9 + 8);
  v11 = 0;
  if ( (*(_BYTE *)(v34 + 74) & 1) == 0 )
    return v11;
  v20 = sub_B8E970(v34 + 64);
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = *(_BYTE *)(v20 + 28) & 0x7F;
      v16 = v21;
      v17 = (unsigned int)v21 - 35;
      if ( (unsigned int)v17 <= 3 )
        break;
      if ( v21 == 71 )
      {
        v28 = *(_QWORD *)(v20 + 48);
        if ( (*(_BYTE *)(v28 + 83) & 0x40) != 0 || !(unsigned __int8)sub_B7D390(v28, (__int64)v35, 0, v17) )
          goto LABEL_17;
LABEL_22:
        v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v20 )
          goto LABEL_23;
      }
      else
      {
        v16 = (unsigned int)v21 - 59;
        if ( (unsigned int)v16 > 2 || sub_B97450(v20) )
          goto LABEL_22;
        v29 = *(_QWORD *)(v20 + 128);
        if ( !v29 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v20 + 104) + 96LL), *(_QWORD *)(v20 + 104), v16, v17, v18, v19);
          v29 = *(_QWORD *)(v20 + 128);
          if ( !v29 )
            goto LABEL_17;
        }
        v23 = sub_1605660(*(_QWORD *)(v29 + 88), a2);
        v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v20 )
          goto LABEL_18;
        if ( !(_BYTE)v23 )
        {
LABEL_17:
          v23 = 0;
          goto LABEL_18;
        }
      }
    }
    if ( !(unsigned __int8)sub_B7D390(v20, (__int64)v35, 0, v17) )
    {
      v22 = *(_QWORD *)(v20 + 80);
      if ( (v22 & 0x2000000) == 0 && ((v22 & 0x80000) == 0 || (*(_BYTE *)(v20 + 28) & 0x7F) == 0x24) )
        goto LABEL_17;
    }
    goto LABEL_22;
  }
LABEL_23:
  v23 = 1;
LABEL_18:
  v24 = *(_DWORD *)(a2 + 16);
  if ( !v24 )
  {
    v35[0].m128_u64[0] = 0;
    goto LABEL_41;
  }
  v17 = v34;
  v19 = v24 - 1;
  v25 = v19 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
  v26 = *(_QWORD *)a2 + 16LL * v25;
  v27 = *(_QWORD *)v26;
  if ( v34 != *(_QWORD *)v26 )
  {
    v30 = 1;
    v31 = 0;
    if ( v27 != -4096 )
    {
      while ( 1 )
      {
        if ( v27 == -8192 && !v31 )
          v31 = v26;
        v25 = v19 & (v30 + v25);
        v26 = *(_QWORD *)a2 + 16LL * v25;
        v27 = *(_QWORD *)v26;
        if ( v34 == *(_QWORD *)v26 )
          goto LABEL_20;
        if ( v27 == -4096 )
        {
          if ( v31 )
            v26 = v31;
          break;
        }
        ++v30;
      }
    }
    v32 = *(_DWORD *)(a2 + 8);
    v35[0].m128_u64[0] = v26;
    v16 = (unsigned int)(v32 + 1);
    v18 = (unsigned int)(4 * v16);
    if ( (unsigned int)v18 < 3 * v24 )
    {
      v18 = v24 >> 3;
      if ( v24 - *(_DWORD *)(a2 + 12) - (unsigned int)v16 > (unsigned int)v18 )
      {
LABEL_37:
        v33 = *(_QWORD *)v26 == -4096;
        *(_DWORD *)(a2 + 8) = v16;
        if ( !v33 )
          --*(_DWORD *)(a2 + 12);
        *(_QWORD *)v26 = v17;
        *(_BYTE *)(v26 + 8) = 0;
        goto LABEL_20;
      }
LABEL_42:
      sub_16051E0((__int64 *)a2, v24, v16, v17, v18, v19);
      sub_15F3C50((__int64 *)a2, &v34, v35);
      v17 = v34;
      LODWORD(v16) = *(_DWORD *)(a2 + 8) + 1;
      v26 = v35[0].m128_u64[0];
      goto LABEL_37;
    }
LABEL_41:
    v24 *= 2;
    goto LABEL_42;
  }
LABEL_20:
  *(_BYTE *)(v26 + 8) = v23;
  return v23;
}
