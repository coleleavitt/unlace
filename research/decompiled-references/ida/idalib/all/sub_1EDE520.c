char __fastcall sub_1EDE520(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r12
  char v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  __m128 v30[3]; // [rsp+10h] [rbp-38h] BYREF

  v7 = *(_BYTE *)(a2 + 28);
  v29 = a3;
  v8 = v7 & 0x7F;
  if ( (unsigned int)(v8 - 40) <= 6 )
  {
    v9 = sub_B8C330(a2);
    if ( (unsigned int)sub_B74100(a2, v9) )
      return 1;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
      return *(_BYTE *)(a2 + 97) & 1;
    return 0;
  }
  if ( (unsigned int)(v8 - 58) <= 4 )
  {
    if ( (*(_QWORD *)(a2 + 72) & 0x10000LL) != 0 )
      return 1;
    return (*(_QWORD *)(a2 + 72) & 0x400000LL) != 0;
  }
  if ( (unsigned int)(v8 - 34) <= 5 )
  {
    v11 = *(_QWORD *)(a2 + 80);
    if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 && (v11 & 0x2000000) == 0 )
      return 1;
    if ( (v11 & 0x2000000) != 0
      || (*(_BYTE *)(a2 + 83) & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128)) )
    {
      return 1;
    }
    if ( (*(_BYTE *)(a2 + 83) & 0x40) != 0 )
      return 1;
    v12 = HIDWORD(v11);
    if ( (v12 & 0x20) != 0 || (v12 & 0x40) != 0 || sub_B8CF80(a2, a2, *(_BYTE *)(a2 + 83) & 0x40, a4, a5, a6) )
      return 1;
    v13 = *a1;
    if ( (*(_BYTE *)(*a1 + 4064) & 1) != 0 )
    {
      v14 = v13 + 4072;
      v15 = 64;
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 4072);
      v15 = 16LL * *(unsigned int *)(v13 + 4080);
    }
    sub_1EDE4B0(v30, (_QWORD *)(v14 + v15), (_QWORD *)(v14 + v15), v13 + 4064, 1);
    v16 = v30[0].m128_u64[0];
    v17 = *(_BYTE *)(v13 + 4064) & 1;
    if ( v17 )
    {
      v18 = v13 + 4072;
      v19 = 64;
      v20 = ((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 3;
      v21 = (__int64 *)(v13
                      + 4072
                      + 16LL
                      * (((unsigned __int8)((unsigned int)a2 >> 9) ^ (unsigned __int8)((unsigned int)a2 >> 4)) & 3));
      v22 = *v21;
      if ( a2 == *v21 )
      {
LABEL_24:
        sub_1EDE4B0(v30, v21, (_QWORD *)(v18 + v19), v13 + 4064, 1);
        v23 = v30[0].m128_u64[0];
        return v16 != v23;
      }
      v28 = 64;
      v26 = 3;
      if ( v22 != -4096 )
        goto LABEL_40;
    }
    else
    {
      v24 = *(_DWORD *)(v13 + 4080);
      v18 = *(_QWORD *)(v13 + 4072);
      v25 = v24;
      if ( v24 )
      {
        v26 = v24 - 1;
        v20 = (v24 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
        v21 = (__int64 *)(v18 + 16LL * v20);
        if ( a2 == *v21 )
        {
LABEL_32:
          v19 = 16LL * v25;
          goto LABEL_24;
        }
        if ( *v21 != -4096 )
        {
LABEL_40:
          v27 = 1;
          while ( 1 )
          {
            v20 = v26 & (v27 + v20);
            v21 = (__int64 *)(v18 + 16LL * v20);
            if ( a2 == *v21 )
              break;
            ++v27;
            if ( *v21 == -4096 )
            {
              v28 = 64;
              if ( v17 )
                goto LABEL_38;
              v24 = *(_DWORD *)(v13 + 4080);
              goto LABEL_37;
            }
          }
          if ( !v17 )
          {
            v25 = *(_DWORD *)(v13 + 4080);
            goto LABEL_32;
          }
          v19 = 64;
          goto LABEL_24;
        }
      }
LABEL_37:
      v28 = 16LL * v24;
    }
LABEL_38:
    sub_1EDE4B0(v30, (_QWORD *)(v18 + v28), (_QWORD *)(v18 + v28), v13 + 4064, 1);
    v23 = v30[0].m128_u64[0];
    return v16 != v23;
  }
  if ( (unsigned int)(v8 - 69) > 3 )
    return 0;
  return sub_1EDE520(&v29, *(_QWORD *)(a2 + 48), v29);
}
