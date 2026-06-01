__int64 __fastcall sub_1A881F0(__int64 a1, unsigned __int64 a2, const double *a3)
{
  unsigned __int64 v4; // rbx
  __int16 v5; // ax
  double v6; // rsi
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rsi
  size_t v11; // r13
  const void *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __m128 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h]
  char v21; // [rsp+18h] [rbp-30h]

  v4 = sub_BFD550(a2);
  v5 = *(_WORD *)v4 & 0x1FF;
  if ( v5 == 33 )
  {
    v19.m128_u64[0] = sub_C9AC10(v4);
    if ( (v19.m128_i8[0] & 3) == 1 )
    {
      v11 = j__strlen("copy");
      v12 = (const void *)sub_FDE9A0((__int64 *)&v19, 0);
      if ( v11 == v13 && (!v11 || !memcmp(v12, "copy", v11)) )
      {
        if ( *(_BYTE *)(v4 + 26) != 1 )
          return 0;
        v14 = *(_QWORD *)(v4 + 40);
        if ( !v14 )
          return 0;
        v4 = sub_BFD550(v14);
      }
    }
LABEL_3:
    v5 = *(_WORD *)v4 & 0x1FF;
    goto LABEL_4;
  }
  if ( ((v5 + 423) & 0x1FFu) <= 4 )
  {
    if ( *(_DWORD *)(v4 + 16) != 1 )
      return 0;
    v15 = sub_BFBC70(*(_QWORD *)(v4 + 32));
    if ( !v15 )
      goto LABEL_3;
    if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 34 > 5 )
      goto LABEL_3;
    v16 = *(_QWORD *)(v15 + 40);
    if ( (v16 & 7) != 0 )
      goto LABEL_3;
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      goto LABEL_3;
    v18 = *(_QWORD *)(v17 + 16);
    if ( *(_DWORD *)v18 != 11
      || *(_QWORD *)(v18 + 16) != 0x635F6B636F6C425FLL
      || *(_WORD *)(v18 + 24) != 28783
      || *(_BYTE *)(v18 + 26) != 121 )
    {
      goto LABEL_3;
    }
    v4 = sub_BFD550(*(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32));
    v5 = *(_WORD *)v4 & 0x1FF;
  }
LABEL_4:
  if ( v5 == 117 )
  {
    v6 = *a3;
    if ( (unsigned __int8)sub_B79030(*(_QWORD *)(v4 + 16), *(_QWORD *)a3) )
    {
      v21 = 0;
      v20 = 0;
      v19 = _mm_loadh_ps(a3);
      v7 = *(_QWORD **)(v4 + 16);
      v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 64LL);
      v9 = v8 == sub_6EE8D0 ? v7[11] : ((__int64 (__fastcall *)(_QWORD *, _QWORD))v8)(v7, *(_QWORD *)&v6);
      sub_1A86E50((__int64)&v19, v9);
      if ( !v21 )
        return v20;
    }
  }
  return 0;
}
