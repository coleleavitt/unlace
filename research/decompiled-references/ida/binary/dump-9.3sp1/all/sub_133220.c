__int64 __fastcall sub_133220(__int128 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbp
  char v16; // al
  char v17; // dl
  char v18; // al
  __int16 v19; // dx
  __int16 v20; // ax
  int v21; // edx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r12d
  __int16 v31; // [rsp+10h] [rbp-58h] BYREF
  __int16 v32; // [rsp+12h] [rbp-56h]
  int v33; // [rsp+14h] [rbp-54h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v4 = *((_QWORD *)&a1 + 1);
  v35 = __readfsqword(0x28u);
  sub_1215C0(a1, a3, (_BYTE *)a4);
  sub_1217B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  if ( *(_BYTE *)a2 == 4 )
  {
    v15 = j__qalloc_or_throw(80, *((__int64 *)&a1 + 1), v8, v9);
    *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 72) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    sub_1253A0(v15, a4);
    if ( sub_132410((const __m128i *)a1, a3, a4, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), 0) )
    {
      v16 = *(_BYTE *)(v15 + 32);
      *(_BYTE *)(v15 + 32) = *(_BYTE *)(a4 + 32);
      v17 = *(_BYTE *)(a4 + 33);
      *(_BYTE *)(a4 + 32) = v16;
      v18 = *(_BYTE *)(v15 + 33);
      *(_BYTE *)(v15 + 33) = v17;
      v19 = *(_WORD *)(a4 + 34);
      *(_BYTE *)(a4 + 33) = v18;
      v20 = *(_WORD *)(v15 + 34);
      *(_WORD *)(v15 + 34) = v19;
      v21 = *(_DWORD *)(a4 + 36);
      *(_WORD *)(a4 + 34) = v20;
      v22 = *(_DWORD *)(v15 + 36);
      *(_DWORD *)(v15 + 36) = v21;
      v23 = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 36) = v22;
      v24 = *(_QWORD *)(v15 + 40);
      *(_QWORD *)(v15 + 40) = v23;
      LOBYTE(v23) = *(_BYTE *)(a4 + 48);
      *(_QWORD *)(a4 + 40) = v24;
      LOBYTE(v24) = *(_BYTE *)(v15 + 48);
      *(_BYTE *)(v15 + 48) = v23;
      LOBYTE(v23) = *(_BYTE *)(a4 + 49);
      *(_BYTE *)(a4 + 48) = v24;
      LOBYTE(v24) = *(_BYTE *)(v15 + 49);
      *(_BYTE *)(v15 + 49) = v23;
      LOWORD(v23) = *(_WORD *)(a4 + 50);
      *(_BYTE *)(a4 + 49) = v24;
      LOWORD(v24) = *(_WORD *)(v15 + 50);
      *(_WORD *)(v15 + 50) = v23;
      *(_WORD *)(a4 + 50) = v24;
      LODWORD(v24) = *(_DWORD *)(v15 + 52);
      *(_DWORD *)(v15 + 52) = *(_DWORD *)(a4 + 52);
      v25 = *(_QWORD *)(a4 + 56);
      *(_DWORD *)(a4 + 52) = v24;
      v26 = *(_QWORD *)(v15 + 56);
      *(_QWORD *)(v15 + 56) = v25;
      LOBYTE(v25) = *(_BYTE *)(a4 + 64);
      *(_QWORD *)(a4 + 56) = v26;
      LOBYTE(v26) = *(_BYTE *)(v15 + 64);
      *(_BYTE *)(v15 + 64) = v25;
      LOBYTE(v25) = *(_BYTE *)(a4 + 65);
      *(_BYTE *)(a4 + 64) = v26;
      LOBYTE(v26) = *(_BYTE *)(v15 + 65);
      *(_BYTE *)(v15 + 65) = v25;
      LOWORD(v25) = *(_WORD *)(a4 + 66);
      *(_BYTE *)(a4 + 65) = v26;
      LOWORD(v26) = *(_WORD *)(v15 + 66);
      *(_WORD *)(v15 + 66) = v25;
      LODWORD(v25) = *(_DWORD *)(a4 + 68);
      *(_WORD *)(a4 + 66) = v26;
      LODWORD(v26) = *(_DWORD *)(v15 + 68);
      *(_DWORD *)(v15 + 68) = v25;
      v27 = *(_QWORD *)(a4 + 72);
      *(_DWORD *)(a4 + 68) = v26;
      v28 = *(_QWORD *)(v15 + 72);
      *(_QWORD *)(v15 + 72) = v27;
      LODWORD(v27) = *(_DWORD *)a4;
      *(_QWORD *)(a4 + 72) = v28;
      LODWORD(v28) = *(_DWORD *)v15;
      *(_DWORD *)v15 = v27;
      *(_DWORD *)a4 = v28;
      v29 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 24) = *(_QWORD *)(a4 + 24);
      LODWORD(v27) = *(_DWORD *)(a4 + 4);
      *(_QWORD *)(a4 + 24) = v29;
      LODWORD(v29) = *(_DWORD *)(v15 + 4);
      *(_DWORD *)(v15 + 4) = v27;
      *(_DWORD *)(a4 + 4) = v29;
      v30 = *(_DWORD *)(v15 + 68);
      sub_11CDA0(v15 + 64);
      *(_DWORD *)(v15 + 68) = v30;
      sub_11CDA0(a2);
      *(_BYTE *)a2 = 4;
      *(_QWORD *)(a2 + 8) = v15;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v15 + 68);
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)a4 != 4 || *(_BYTE *)(a4 + 32) == 2 && *(_BYTE *)a2 != 2 )
    return 0;
  sub_123A40((__int64)&v31, (unsigned __int8 *)(a4 + 32), v8, v9);
  *((_QWORD *)&a1 + 1) = a3;
  if ( !(unsigned __int8)sub_132E20(a1, (__int64)&v31, v4, a2, 0) )
  {
    sub_11CDA0((__int64)&v31);
    return 0;
  }
  v11 = *(_WORD *)a2;
  *(_WORD *)a2 = v31;
  v31 = v11;
  v12 = *(_WORD *)(a2 + 2);
  *(_WORD *)(a2 + 2) = v32;
  v32 = v12;
  v13 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v33;
  v33 = v13;
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v34;
  v34 = v14;
  sub_11CDA0((__int64)&v31);
  return 1;
}
