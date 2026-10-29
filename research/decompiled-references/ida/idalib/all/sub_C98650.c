unsigned __int64 __fastcall sub_C98650(
        _QWORD *a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        const void *a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  int v10; // r14d
  size_t v11; // r13
  __int64 v12; // rsi
  __int64 v15; // rax
  char v16; // r8
  unsigned __int64 v17; // rbx
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // r12
  unsigned __int8 v21; // dl
  char v22; // al
  unsigned __int8 v23; // al
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-88h]
  __int64 v27; // [rsp+0h] [rbp-88h]
  _BYTE v28[56]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int8 v29; // [rsp+48h] [rbp-40h]

  v10 = a6;
  v11 = 8 * a6;
  v12 = 8 * a6 + 24;
  v15 = a1[294];
  v16 = a8;
  a1[304] += v12;
  v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v12 + v17 && v15 )
  {
    a1[294] = v12 + v17;
  }
  else
  {
    v27 = a2;
    v25 = sub_986170((__int64)(a1 + 294), v12, 8 * a6 + 24, 3, a8, a6);
    v16 = a8;
    a2 = v27;
    v17 = v25;
  }
  v29 = 0;
  v18 = *(_WORD *)v17;
  v28[0] = v16;
  *(_WORD *)v17 = v18 & 0xFE00 | 6;
  if ( unk_2CD7484 )
  {
    v26 = a2;
    sub_EE9B50(6);
    a2 = v26;
  }
  *(_WORD *)(v17 + 1) &= 0xF801u;
  *(_QWORD *)(v17 + 8) = a2;
  *(_DWORD *)(v17 + 20) = a7;
  v19 = 8 * a4;
  v20 = *(_WORD *)(v17 + 2);
  *(_DWORD *)(v17 + 16) = a3;
  *(_WORD *)(v17 + 2) = v19 | v20 & 0xF807;
  v21 = v29;
  if ( v29 == 0xFF )
  {
    *(_BYTE *)(v17 + 3) &= ~8u;
    goto LABEL_19;
  }
  v22 = (8 * (v29 == 0)) | *(_BYTE *)(v17 + 3) & 0xF7;
  *(_BYTE *)(v17 + 3) = v22;
  if ( (v22 & 8) == 0 )
  {
    if ( v21 == 1 )
    {
      sub_A4F8A0(v17 + 24, (__int64)v28);
      goto LABEL_10;
    }
LABEL_19:
    abort();
  }
  if ( v21 )
    goto LABEL_19;
  *(_BYTE *)(v17 + 3) = (16 * (v28[0] & 1)) | v22 & 0xEF;
LABEL_10:
  *(_DWORD *)(v17 + 4) = v10;
  if ( v11 )
    memmove((void *)(v17 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)v17) >> 3) ^ 1) & 1) + 24), a5, v11);
  v23 = sub_B659F0(v17);
  *(_BYTE *)(v17 + 1) = (v23 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v23 >> 2) & 7;
  if ( v29 != 0xFF )
    funcs_C987CF[v29]();
  return v17;
}
