__int64 __fastcall sub_E4EBA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // r13
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // rdi
  __int64 (*v13)(void); // rax
  _QWORD *v14; // rdi
  _QWORD **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 (__fastcall *v19)(__int64); // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  _BYTE v25[64]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 80LL))(*(_QWORD *)(a1 + 104));
  v6 = *(_QWORD *)(a1 + 112);
  v7 = (_QWORD *)v5;
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v6 + 80LL);
  if ( v8 == sub_E4EBA0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v6 + 104) + 80LL))(
           *(_QWORD *)(v6 + 104),
           a2,
           a3);
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v6 + 112) + 80LL))(
            *(_QWORD *)(v6 + 112),
            a2,
            a3);
    v10 = sub_186B270(0x88u);
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL);
    if ( v11 == sub_E4A320 )
    {
      v12 = *(_QWORD **)(v9 + 104);
      v13 = *(__int64 (**)(void))(*v12 + 72LL);
      if ( (char *)v13 == (char *)sub_E4A320
        && (v14 = (_QWORD *)v12[13], v13 = *(__int64 (**)(void))(*v14 + 72LL), (char *)v13 == (char *)sub_E4A320)
        && (v15 = (_QWORD **)v14[13], v13 = (__int64 (*)(void))(*v15)[9], (char *)v13 == (char *)sub_E4A320) )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v15[13] + 72LL))(v15[13], a2, v24);
        v17 = v24;
      }
      else
      {
        v16 = v13();
        v17 = v24;
      }
    }
    else
    {
      v16 = v11(v9);
      v17 = v24;
    }
    *(_QWORD *)(v10 + 8) = v16;
    *(_QWORD *)(v10 + 16) = v16;
    *(_QWORD *)(v10 + 40) = v16;
    *(_QWORD *)v10 = &off_1C76A78;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_QWORD *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 64) = 0;
    *(_QWORD *)(v10 + 80) = 0;
    *(_QWORD *)(v10 + 88) = 0;
    ++*(_DWORD *)(v9 + 48);
    *(_QWORD *)(v10 + 72) = off_1C76C68;
    *(_QWORD *)(v10 + 104) = v9;
    if ( v17 )
      ++*(_DWORD *)(v17 + 48);
    *(_QWORD *)(v10 + 112) = v17;
    sub_17F9A60(v25, "combined_solver");
    *(_DWORD *)(v10 + 128) = sub_1859980(a3, "solver2_timeout", v25, 0xFFFFFFFFLL);
    *(_BYTE *)(v10 + 120) = sub_1859630(a3, "ignore_solver1", v25, 0);
    *(_DWORD *)(v10 + 124) = sub_1859980(a3, "solver2_unknown", v25, 1);
    sub_18572D0(v25);
    *(_BYTE *)(v10 + 98) = 1;
    *(_WORD *)(v10 + 96) = 0;
    *(_WORD *)(v10 + 96) = *(_WORD *)(v6 + 96);
    *(_BYTE *)(v10 + 98) = *(_BYTE *)(v6 + 98);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v8)(*(_QWORD *)(a1 + 112), a2, a3);
  }
  v18 = sub_186B270(0x88u);
  v19 = *(__int64 (__fastcall **)(__int64))(*v7 + 72LL);
  if ( v19 == sub_E4A320 )
  {
    v20 = (_QWORD *)v7[13];
    v19 = *(__int64 (__fastcall **)(__int64))(*v20 + 72LL);
    if ( v19 == sub_E4A320 )
    {
      v20 = (_QWORD *)v20[13];
      v19 = *(__int64 (__fastcall **)(__int64))(*v20 + 72LL);
      if ( v19 == sub_E4A320 )
      {
        v20 = (_QWORD *)v20[13];
        v19 = *(__int64 (__fastcall **)(__int64))(*v20 + 72LL);
        if ( v19 == sub_E4A320 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20[13] + 72LL))(v20[13]);
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    v20 = v7;
  }
  v21 = v19((__int64)v20);
LABEL_15:
  *(_QWORD *)(v18 + 8) = v21;
  *(_QWORD *)(v18 + 16) = v21;
  *(_QWORD *)(v18 + 40) = v21;
  *(_QWORD *)(v18 + 24) = 0;
  *(_QWORD *)v18 = &off_1C76A78;
  *(_QWORD *)(v18 + 32) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_QWORD *)(v18 + 56) = 0;
  *(_QWORD *)(v18 + 64) = 0;
  *(_QWORD *)(v18 + 80) = 0;
  *(_QWORD *)(v18 + 88) = 0;
  *(_QWORD *)(v18 + 72) = off_1C76C68;
  ++*((_DWORD *)v7 + 12);
  *(_QWORD *)(v18 + 104) = v7;
  if ( v10 )
    ++*(_DWORD *)(v10 + 48);
  *(_QWORD *)(v18 + 112) = v10;
  sub_17F9A60(v25, "combined_solver");
  *(_DWORD *)(v18 + 128) = sub_1859980(a3, "solver2_timeout", v25, 0xFFFFFFFFLL);
  *(_BYTE *)(v18 + 120) = sub_1859630(a3, "ignore_solver1", v25, 0);
  *(_DWORD *)(v18 + 124) = sub_1859980(a3, "solver2_unknown", v25, 1);
  sub_18572D0(v25);
  *(_WORD *)(v18 + 96) = *(_WORD *)(a1 + 96);
  *(_BYTE *)(v18 + 98) = *(_BYTE *)(a1 + 98);
  return v18;
}

