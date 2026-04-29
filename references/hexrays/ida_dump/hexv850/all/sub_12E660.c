__int64 __fastcall sub_12E660(__int128 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // r14
  __int16 v9; // ax
  __int16 v10; // ax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  char v14; // al
  char v15; // dl
  char v16; // al
  __int16 v17; // dx
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r12d
  __int16 v29; // [rsp+10h] [rbp-58h] BYREF
  __int16 v30; // [rsp+12h] [rbp-56h]
  int v31; // [rsp+14h] [rbp-54h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v4 = *((_QWORD *)&a1 + 1);
  v33 = __readfsqword(0x28u);
  sub_11CA00(a1, a3, (_BYTE *)a4);
  sub_11CBF0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  if ( *(_BYTE *)a2 == 4 )
  {
    v13 = j__qalloc_or_throw(80);
    *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 72) = 0;
    *(_OWORD *)(v13 + 8) = 0;
    sub_1207E0(v13, a4);
    if ( sub_12D850((const __m128i *)a1, a3, a4, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), 0) )
    {
      v14 = *(_BYTE *)(v13 + 32);
      *(_BYTE *)(v13 + 32) = *(_BYTE *)(a4 + 32);
      v15 = *(_BYTE *)(a4 + 33);
      *(_BYTE *)(a4 + 32) = v14;
      v16 = *(_BYTE *)(v13 + 33);
      *(_BYTE *)(v13 + 33) = v15;
      v17 = *(_WORD *)(a4 + 34);
      *(_BYTE *)(a4 + 33) = v16;
      v18 = *(_WORD *)(v13 + 34);
      *(_WORD *)(v13 + 34) = v17;
      v19 = *(_DWORD *)(a4 + 36);
      *(_WORD *)(a4 + 34) = v18;
      v20 = *(_DWORD *)(v13 + 36);
      *(_DWORD *)(v13 + 36) = v19;
      v21 = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 36) = v20;
      v22 = *(_QWORD *)(v13 + 40);
      *(_QWORD *)(v13 + 40) = v21;
      LOBYTE(v21) = *(_BYTE *)(a4 + 48);
      *(_QWORD *)(a4 + 40) = v22;
      LOBYTE(v22) = *(_BYTE *)(v13 + 48);
      *(_BYTE *)(v13 + 48) = v21;
      LOBYTE(v21) = *(_BYTE *)(a4 + 49);
      *(_BYTE *)(a4 + 48) = v22;
      LOBYTE(v22) = *(_BYTE *)(v13 + 49);
      *(_BYTE *)(v13 + 49) = v21;
      LOWORD(v21) = *(_WORD *)(a4 + 50);
      *(_BYTE *)(a4 + 49) = v22;
      LOWORD(v22) = *(_WORD *)(v13 + 50);
      *(_WORD *)(v13 + 50) = v21;
      *(_WORD *)(a4 + 50) = v22;
      LODWORD(v22) = *(_DWORD *)(v13 + 52);
      *(_DWORD *)(v13 + 52) = *(_DWORD *)(a4 + 52);
      v23 = *(_QWORD *)(a4 + 56);
      *(_DWORD *)(a4 + 52) = v22;
      v24 = *(_QWORD *)(v13 + 56);
      *(_QWORD *)(v13 + 56) = v23;
      LOBYTE(v23) = *(_BYTE *)(a4 + 64);
      *(_QWORD *)(a4 + 56) = v24;
      LOBYTE(v24) = *(_BYTE *)(v13 + 64);
      *(_BYTE *)(v13 + 64) = v23;
      LOBYTE(v23) = *(_BYTE *)(a4 + 65);
      *(_BYTE *)(a4 + 64) = v24;
      LOBYTE(v24) = *(_BYTE *)(v13 + 65);
      *(_BYTE *)(v13 + 65) = v23;
      LOWORD(v23) = *(_WORD *)(a4 + 66);
      *(_BYTE *)(a4 + 65) = v24;
      LOWORD(v24) = *(_WORD *)(v13 + 66);
      *(_WORD *)(v13 + 66) = v23;
      LODWORD(v23) = *(_DWORD *)(a4 + 68);
      *(_WORD *)(a4 + 66) = v24;
      LODWORD(v24) = *(_DWORD *)(v13 + 68);
      *(_DWORD *)(v13 + 68) = v23;
      v25 = *(_QWORD *)(a4 + 72);
      *(_DWORD *)(a4 + 68) = v24;
      v26 = *(_QWORD *)(v13 + 72);
      *(_QWORD *)(v13 + 72) = v25;
      LODWORD(v25) = *(_DWORD *)a4;
      *(_QWORD *)(a4 + 72) = v26;
      LODWORD(v26) = *(_DWORD *)v13;
      *(_DWORD *)v13 = v25;
      *(_DWORD *)a4 = v26;
      v27 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(a4 + 24);
      LODWORD(v25) = *(_DWORD *)(a4 + 4);
      *(_QWORD *)(a4 + 24) = v27;
      LODWORD(v27) = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = v25;
      *(_DWORD *)(a4 + 4) = v27;
      v28 = *(_DWORD *)(v13 + 68);
      sub_1181E0(v13 + 64);
      *(_DWORD *)(v13 + 68) = v28;
      sub_1181E0(a2);
      *(_BYTE *)a2 = 4;
      *(_QWORD *)(a2 + 8) = v13;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v13 + 68);
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)a4 != 4 || *(_BYTE *)(a4 + 32) == 2 && *(_BYTE *)a2 != 2 )
    return 0;
  sub_11EE80((__int64)&v29, (unsigned __int8 *)(a4 + 32));
  *((_QWORD *)&a1 + 1) = a3;
  if ( !(unsigned __int8)sub_12E260(a1, (unsigned __int64)&v29, v4, a2, 0) )
  {
    sub_1181E0((__int64)&v29);
    return 0;
  }
  v9 = *(_WORD *)a2;
  *(_WORD *)a2 = v29;
  v29 = v9;
  v10 = *(_WORD *)(a2 + 2);
  *(_WORD *)(a2 + 2) = v30;
  v30 = v10;
  v11 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v31;
  v31 = v11;
  v12 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v32;
  v32 = v12;
  sub_1181E0((__int64)&v29);
  return 1;
}
