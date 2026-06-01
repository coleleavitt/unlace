__int64 __fastcall sub_1C37220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128 a6, __m128 a7)
{
  __int64 v9; // rsi
  __int64 v11; // r12
  __int32 v12; // r12d
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rsi
  signed __int64 v16; // rcx
  int v17; // edx
  char *v18; // rdi
  int v19; // edx
  int v20; // edx
  char *v21; // rdx
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // rax
  __int64 v25; // [rsp+10h] [rbp-2028h]
  __int64 v26; // [rsp+10h] [rbp-2028h]
  unsigned __int64 v27; // [rsp+18h] [rbp-2020h] BYREF
  _QWORD *v28; // [rsp+28h] [rbp-2010h] BYREF
  __m128i v29; // [rsp+30h] [rbp-2008h] BYREF
  _QWORD v30[4]; // [rsp+40h] [rbp-1FF8h] BYREF
  char v31[8]; // [rsp+60h] [rbp-1FD8h] BYREF
  char *v32; // [rsp+68h] [rbp-1FD0h]
  unsigned int v33; // [rsp+70h] [rbp-1FC8h]
  int v34; // [rsp+11Ch] [rbp-1F1Ch]

  v9 = *(_QWORD *)(a1 + 232);
  v27 = a4;
  if ( (*(_BYTE *)(v9 + 1) & 8) == 0 || (*(_BYTE *)(v9 + 2) & 1) != 0 && !a5 || !*(_BYTE *)(a3 + 8) )
    return sub_1A24E20(a1, a2, 0, a4, 0, 0, a6, a7);
  v11 = *(_QWORD *)(a4 + 8);
  LOWORD(v30[0]) = v30[0] & 0xFE00 | 0x4F;
  if ( unk_2CD7484 )
  {
    v26 = a4;
    sub_EE9B50(79);
    a4 = v26;
  }
  v30[2] = a4;
  v30[1] = v11;
  *(_WORD *)((char *)v30 + 1) = *(_WORD *)((_BYTE *)v30 + 1) & 0xF801 | 4;
  v30[0] = v30[0] & 0xF007FFFF | 0x280000LL;
  v28 = v30;
  v12 = sub_EEB7E0(v27, v9, *(double *)a6.m128_u64);
  v29.m128i_i16[0] = 2;
  v29.m128i_i32[1] = sub_EEB7E0(v27, v9, *(double *)a6.m128_u64);
  v29.m128i_i32[2] = v12;
  v29.m128i_i32[3] = v12;
  sub_1A19220((__int64)v31, a1, a2, &v29, (__int64)&v28, 1, a6, a7, 0, 1u);
  if ( v34 && v34 != 3 )
  {
LABEL_10:
    sub_1A0BB10((__int64)v31);
    a4 = v27;
    return sub_1A24E20(a1, a2, 0, a4, 0, 0, a6, a7);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 )
  {
    v13 = v32;
    v14 = 40LL * v33;
    v15 = &v32[v14];
    v16 = 0xCCCCCCCCCCCCCCCDLL * (v14 >> 3);
    if ( v16 >> 2 )
    {
      if ( *(_DWORD *)v32 == 8 || *(_DWORD *)v32 == 19 )
      {
        v21 = v32;
      }
      else
      {
        v17 = *((_DWORD *)v32 + 10);
        if ( v17 == 8 || v17 == 19 )
        {
          v21 = v32 + 40;
        }
        else
        {
          v18 = &v32[160 * (v16 >> 2)];
          while ( 1 )
          {
            v19 = *((_DWORD *)v13 + 20);
            if ( v19 == 19 || v19 == 8 )
            {
              v21 = v13 + 80;
              goto LABEL_34;
            }
            v20 = *((_DWORD *)v13 + 30);
            if ( v20 == 19 || v20 == 8 )
            {
              v21 = v13 + 120;
              goto LABEL_34;
            }
            v21 = v13 + 160;
            if ( v18 == v13 + 160 )
            {
              v16 = 0xCCCCCCCCCCCCCCCDLL * ((v15 - v21) >> 3);
              goto LABEL_29;
            }
            v16 = *((unsigned int *)v13 + 40);
            if ( (_DWORD)v16 == 19 || (_DWORD)v16 == 8 )
              goto LABEL_34;
            v16 = *((unsigned int *)v13 + 50);
            if ( (_DWORD)v16 == 19 || (_DWORD)v16 == 8 )
              break;
            v13 += 160;
          }
          v21 = v13 + 200;
        }
      }
LABEL_34:
      if ( v15 != v21 )
      {
        v22 = *((_QWORD *)v21 + 3);
        if ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x26 )
        {
          v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 120) + 48LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL) != 44;
        }
        else
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v24 + 16) != 26 )
            v24 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL), v15, v22, v16);
          v23 = (*(_BYTE *)(v24 + 18) & 0x18) == 0;
        }
        if ( v23 )
          goto LABEL_10;
      }
      goto LABEL_38;
    }
    v21 = v32;
LABEL_29:
    if ( v16 != 2 )
    {
      if ( v16 != 3 )
      {
        if ( v16 != 1 )
          goto LABEL_38;
        goto LABEL_32;
      }
      if ( *(_DWORD *)v21 == 19 || *(_DWORD *)v21 == 8 )
        goto LABEL_34;
      v21 += 40;
    }
    if ( *(_DWORD *)v21 == 19 || *(_DWORD *)v21 == 8 )
      goto LABEL_34;
    v21 += 40;
LABEL_32:
    if ( *(_DWORD *)v21 != 19 && *(_DWORD *)v21 != 8 )
      goto LABEL_38;
    goto LABEL_34;
  }
LABEL_38:
  v27 = sub_C0A3E0(*(_QWORD **)(a1 + 248), *(_QWORD *)(v27 + 8), 5, v27, 0, 2, 0);
  v25 = sub_1A1D600((unsigned int)v31, a1, a2, (unsigned int)&v29, (unsigned int)&v27, 1, 0);
  sub_1A0BB10((__int64)v31);
  return v25;
}
