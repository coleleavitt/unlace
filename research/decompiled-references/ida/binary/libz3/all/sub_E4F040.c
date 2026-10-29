__int64 __fastcall sub_E4F040(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  unsigned int v7; // r15d
  unsigned int v9; // ebp
  __int64 v10; // rax
  _QWORD **v11; // r11
  __int64 v12; // r14
  __int64 (__fastcall *v13)(_DWORD, _DWORD, _DWORD, unsigned int, unsigned int, unsigned int, __int64); // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64); // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 (__fastcall *v21)(__int64); // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned int v25; // [rsp+10h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-58h]
  _BYTE v27[64]; // [rsp+30h] [rbp-40h] BYREF

  v7 = a6;
  v9 = a4;
  v25 = a5;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16)
                                                                                             + 16LL))(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7);
  v11 = *(_QWORD ***)(a1 + 8);
  v12 = v10;
  v13 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, unsigned int, unsigned int, unsigned int, __int64))(*v11)[2];
  if ( v13 != sub_E4F040 )
  {
    v16 = v13(v11, a2, a3, v9, v25, v7, a7);
    goto LABEL_10;
  }
  v26 = *(_QWORD *)(a1 + 8);
  v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))(*v11[2] + 16LL))(
          v11[2],
          a2,
          a3,
          v9,
          v25,
          v7,
          a7);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v26 + 8)
                                                                                             + 16LL))(
          *(_QWORD *)(v26 + 8),
          a2,
          a3,
          v9,
          v25,
          v7,
          a7);
  v16 = sub_186B270(0x88u);
  v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL);
  if ( v17 != sub_E4A320 )
  {
    v18 = (_QWORD *)v15;
LABEL_19:
    v19 = v17((__int64)v18);
    goto LABEL_7;
  }
  v18 = *(_QWORD **)(v15 + 104);
  v17 = *(__int64 (__fastcall **)(__int64))(*v18 + 72LL);
  if ( v17 != sub_E4A320 )
    goto LABEL_19;
  v18 = (_QWORD *)v18[13];
  v17 = *(__int64 (__fastcall **)(__int64))(*v18 + 72LL);
  if ( v17 != sub_E4A320 )
    goto LABEL_19;
  v18 = (_QWORD *)v18[13];
  v17 = *(__int64 (__fastcall **)(__int64))(*v18 + 72LL);
  if ( v17 != sub_E4A320 )
    goto LABEL_19;
  v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18[13] + 72LL))(v18[13]);
LABEL_7:
  *(_QWORD *)(v16 + 8) = v19;
  *(_QWORD *)(v16 + 16) = v19;
  *(_QWORD *)(v16 + 40) = v19;
  *(_QWORD *)v16 = &off_1C76A78;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_QWORD *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 88) = 0;
  ++*(_DWORD *)(v15 + 48);
  *(_QWORD *)(v16 + 72) = off_1C76C68;
  *(_QWORD *)(v16 + 104) = v15;
  if ( v14 )
    ++*(_DWORD *)(v14 + 48);
  *(_QWORD *)(v16 + 112) = v14;
  sub_17F9A60(v27, "combined_solver");
  *(_DWORD *)(v16 + 128) = sub_1859980(a3, "solver2_timeout", v27, 0xFFFFFFFFLL);
  *(_BYTE *)(v16 + 120) = sub_1859630(a3, "ignore_solver1", v27, 0);
  *(_DWORD *)(v16 + 124) = sub_1859980(a3, "solver2_unknown", v27, 1);
  sub_18572D0(v27);
  *(_BYTE *)(v16 + 98) = 1;
  *(_WORD *)(v16 + 96) = 0;
LABEL_10:
  v20 = sub_186B270(0x88u);
  v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL);
  if ( v21 == sub_E4A320 )
  {
    v22 = *(_QWORD **)(v16 + 104);
    v21 = *(__int64 (__fastcall **)(__int64))(*v22 + 72LL);
    if ( v21 == sub_E4A320 )
    {
      v22 = (_QWORD *)v22[13];
      v21 = *(__int64 (__fastcall **)(__int64))(*v22 + 72LL);
      if ( v21 == sub_E4A320 )
      {
        v22 = (_QWORD *)v22[13];
        v21 = *(__int64 (__fastcall **)(__int64))(*v22 + 72LL);
        if ( v21 == sub_E4A320 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22[13] + 72LL))(v22[13]);
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    v22 = (_QWORD *)v16;
  }
  v23 = v21((__int64)v22);
LABEL_15:
  *(_QWORD *)(v20 + 8) = v23;
  *(_QWORD *)(v20 + 16) = v23;
  *(_QWORD *)(v20 + 40) = v23;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)v20 = &off_1C76A78;
  *(_QWORD *)(v20 + 32) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_QWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 64) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_QWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 72) = off_1C76C68;
  ++*(_DWORD *)(v16 + 48);
  *(_QWORD *)(v20 + 104) = v16;
  if ( v12 )
    ++*(_DWORD *)(v12 + 48);
  *(_QWORD *)(v20 + 112) = v12;
  sub_17F9A60(v27, "combined_solver");
  *(_DWORD *)(v20 + 128) = sub_1859980(a3, "solver2_timeout", v27, 0xFFFFFFFFLL);
  *(_BYTE *)(v20 + 120) = sub_1859630(a3, "ignore_solver1", v27, 0);
  *(_DWORD *)(v20 + 124) = sub_1859980(a3, "solver2_unknown", v27, 1);
  sub_18572D0(v27);
  *(_BYTE *)(v20 + 98) = 1;
  *(_WORD *)(v20 + 96) = 0;
  return v20;
}

