__int64 __fastcall sub_C97A90(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  unsigned int v7; // r8d
  _QWORD *v8; // rsi
  _WORD *v9; // r11
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  _WORD *v17; // rax
  _WORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v24; // esi
  int v25; // ebp
  _WORD *v26; // r11
  __int64 v27; // [rsp+8h] [rbp-50h]
  __m128 v28[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
  {
    v3 = a2 | 4;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) + 144LL * *(unsigned int *)(a1 + 36);
    v5 = *(unsigned int **)v4;
    v6 = (unsigned int *)(*(_QWORD *)v4 + 16LL * *(unsigned int *)(v4 + 8));
    if ( *(unsigned int **)v4 != v6 )
    {
      while ( 1 )
      {
        v6 -= 4;
        v13 = sub_CCBC10(*((_QWORD *)v6 + 1));
        if ( !(_BYTE)v13 )
        {
          v28[0].m128_u64[0] = v3;
          if ( !(unsigned __int8)sub_CDB9E0(*(_QWORD *)(a1 + 8), *v6, v28) )
            return v13;
          v27 = *(_QWORD *)(a1 + 8);
          v14 = sub_CCBBF0(*((_QWORD *)v6 + 1));
          if ( !(unsigned __int8)sub_C92050(v27, *((_QWORD *)v6 + 1), v14) )
            return v13;
          v15 = *(_QWORD *)(a1 + 8);
          v28[0].m128_u64[0] = v3;
          if ( !(unsigned __int8)sub_CE3FA0(v15, v28) )
            return v13;
          v16 = **((_QWORD **)v6 + 1);
          if ( (v16 & 2) != 0 )
          {
            v17 = (_WORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            v18 = v17;
            if ( v17 )
            {
              if ( (*v17 & 0x1FF) == 0x1A )
                break;
            }
          }
        }
LABEL_8:
        if ( v5 == v6 )
          return 1;
      }
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v19 + 1304;
      v21 = *(_QWORD *)(v19 + 1304);
      v22 = *(unsigned int *)(v19 + 1320);
      if ( !(_DWORD)v22 )
        goto LABEL_17;
      v7 = (v22 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
      v8 = (_QWORD *)(v21 + 16LL * v7);
      v9 = (_WORD *)*v8;
      if ( v18 != (_WORD *)*v8 )
      {
        v24 = 1;
        if ( v9 == (_WORD *)-4096LL )
        {
LABEL_17:
          sub_C96D30(
            v28,
            (_QWORD *)(v21 + 16LL * (unsigned int)v22),
            (_QWORD *)(v21 + 16LL * (unsigned int)v22),
            v20,
            1);
          v10 = (_QWORD *)v28[0].m128_u64[0];
LABEL_6:
          v11 = *(_QWORD *)(a1 + 8);
          sub_C96D30(
            v28,
            (_QWORD *)(*(_QWORD *)(v11 + 1304) + 16LL * *(unsigned int *)(v11 + 1320)),
            (_QWORD *)(*(_QWORD *)(v11 + 1304) + 16LL * *(unsigned int *)(v11 + 1320)),
            v11 + 1304,
            1);
          if ( (_QWORD *)v28[0].m128_u64[0] != v10 )
          {
            v12 = *(_QWORD *)(a1 + 8);
            *v10 = -8192;
            --*(_DWORD *)(v12 + 1312);
            ++*(_DWORD *)(v12 + 1316);
          }
          goto LABEL_8;
        }
        while ( 1 )
        {
          v25 = v24 + 1;
          v7 = (v22 - 1) & (v24 + v7);
          v8 = (_QWORD *)(v21 + 16LL * v7);
          v26 = (_WORD *)*v8;
          if ( v18 == (_WORD *)*v8 )
            break;
          v24 = v25;
          if ( v26 == (_WORD *)-4096LL )
            goto LABEL_17;
        }
      }
      sub_C96D30(v28, v8, (_QWORD *)(16 * v22 + v21), v20, 1);
      v10 = (_QWORD *)v28[0].m128_u64[0];
      goto LABEL_6;
    }
  }
  return 1;
}

