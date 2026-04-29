char __fastcall sub_12E9D0(const __m128i *a1, _BYTE *a2, __int64 a3, _BYTE *a4, __int64 a5, char a6)
{
  char result; // al
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 v15; // dx
  __int16 v16; // dx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  _QWORD v24[6]; // [rsp+10h] [rbp-C0h] BYREF
  int v25; // [rsp+40h] [rbp-90h] BYREF
  int v26; // [rsp+44h] [rbp-8Ch]
  __int128 v27; // [rsp+48h] [rbp-88h]
  __int64 v28; // [rsp+58h] [rbp-78h]
  unsigned __int64 v29; // [rsp+60h] [rbp-70h] BYREF
  __int64 v30; // [rsp+68h] [rbp-68h]
  unsigned __int64 v31; // [rsp+70h] [rbp-60h] BYREF
  __int64 v32; // [rsp+78h] [rbp-58h]
  unsigned __int64 v33; // [rsp+80h] [rbp-50h] BYREF
  __int64 v34; // [rsp+88h] [rbp-48h]
  unsigned __int64 v35; // [rsp+98h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  sub_11DB80((__int64)a1, a2, (_BYTE *)a3);
  sub_11DB80((__int64)a1, a4, (_BYTE *)a5);
  if ( *(_DWORD *)a3 == 10
    && *(_DWORD *)(a3 + 68) == *(_DWORD *)(a3 + 36) / 2
    && *(_BYTE *)(a3 + 32) == 4
    && sub_12E590(a1, (__int64)a4, a5, (__int64)a2, *(unsigned int **)(a3 + 40)) )
  {
    v22 = *(_QWORD *)(a3 + 40);
    v29 = 0xFFFFFFFF00000000LL;
    v30 = 0;
    v31 = 0xFFFFFFFF00000000LL;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    v34 = 0;
    v27 = 0;
    sub_121960((__int64)&v25, v22);
    sub_119E50(a3, (__int64)&v25);
    sub_119360((__int64)&v33);
    sub_119360((__int64)&v31);
    sub_119360((__int64)&v29);
    return 1;
  }
  if ( *(_DWORD *)a5 == 11
    && *(_DWORD *)(a5 + 68) == *(_DWORD *)(a5 + 36) / 2
    && *(_BYTE *)(a5 + 32) == 4
    && (unsigned __int8)sub_12E600(a1, (__int64)a2, (int *)a3, (__int64)a4, *(unsigned int **)(a5 + 40)) )
  {
    sub_121960(a3, *(_QWORD *)(a5 + 40));
    return 1;
  }
  result = sub_12E930(a1, (__int64)a2, a3, (__int64)a4, a5, a6);
  if ( !result )
    return result;
  if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(51993);
    goto LABEL_22;
  }
  v24[0] = &off_4CAAB8;
  v24[1] = a1;
  v24[2] = a2;
  v24[3] = a3;
  v24[4] = a4;
  v24[5] = a5;
  if ( !(unsigned __int8)sub_11E6D0((_DWORD *)a3, a6, (__int64)v24) )
  {
    v29 = 0xFFFFFFFF00000000LL;
    v30 = 0;
    v31 = 0xFFFFFFFF00000000LL;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    v34 = 0;
    v27 = 0;
    sub_121960((__int64)&v25, a5);
    if ( (unsigned __int8)sub_12D5C0(
                            *(_QWORD *)(a1[30].m128i_i64[0] + 112),
                            a1,
                            (__int64)&v25,
                            2 * HIDWORD(v33),
                            (__int64)a4,
                            1u,
                            1,
                            a6) )
    {
      v10 = *(_WORD *)(a3 + 32);
      *(_WORD *)(a3 + 32) = v29;
      LOWORD(v29) = v10;
      v11 = *(_WORD *)(a3 + 34);
      *(_WORD *)(a3 + 34) = WORD1(v29);
      WORD1(v29) = v11;
      v12 = *(_DWORD *)(a3 + 36);
      *(_DWORD *)(a3 + 36) = HIDWORD(v29);
      HIDWORD(v29) = v12;
      v13 = *(_QWORD *)(a3 + 40);
      *(_QWORD *)(a3 + 40) = v30;
      v30 = v13;
      LOWORD(v13) = *(_WORD *)(a3 + 48);
      *(_WORD *)(a3 + 48) = v31;
      LOWORD(v31) = v13;
      LOWORD(v13) = *(_WORD *)(a3 + 50);
      *(_WORD *)(a3 + 50) = WORD1(v31);
      WORD1(v31) = v13;
      LODWORD(v13) = *(_DWORD *)(a3 + 52);
      *(_DWORD *)(a3 + 52) = HIDWORD(v31);
      HIDWORD(v31) = v13;
      v14 = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(a3 + 56) = v32;
      v32 = v14;
      v15 = v33;
      LOWORD(v33) = *(_WORD *)(a3 + 64);
      LOWORD(v14) = *(_WORD *)(a3 + 66);
      *(_WORD *)(a3 + 64) = v15;
      v16 = WORD1(v33);
      WORD1(v33) = v14;
      LODWORD(v14) = *(_DWORD *)(a3 + 68);
      *(_WORD *)(a3 + 66) = v16;
      v17 = HIDWORD(v33);
      HIDWORD(v33) = v14;
      v18 = *(_QWORD *)(a3 + 72);
      *(_DWORD *)(a3 + 68) = v17;
      v19 = v34;
      v34 = v18;
      LODWORD(v18) = *(_DWORD *)a3;
      *(_QWORD *)(a3 + 72) = v19;
      LODWORD(v19) = v25;
      v25 = v18;
      v20 = *(_QWORD *)(a3 + 24);
      *(_DWORD *)a3 = v19;
      v21 = v28;
      v28 = v20;
      LODWORD(v20) = *(_DWORD *)(a3 + 4);
      *(_QWORD *)(a3 + 24) = v21;
      LODWORD(v21) = v26;
      v26 = v20;
      *(_DWORD *)(a3 + 4) = v21;
      sub_119360((__int64)&v33);
      sub_119360((__int64)&v31);
      sub_119360((__int64)&v29);
      return 1;
    }
    if ( !under_debugger )
      sub_37EEE0(51994);
LABEL_22:
    BUG();
  }
  return 1;
}
