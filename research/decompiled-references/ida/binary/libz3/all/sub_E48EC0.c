__int64 __fastcall sub_E48EC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD **v9; // rdi
  __int64 v10; // rax
  _BYTE v12[48]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a1;
  v5 = sub_186B270(0x88u);
  v6 = *(__int64 (__fastcall **)())(*a1 + 72LL);
  if ( v6 == sub_E4A320 )
  {
    v7 = (_QWORD *)a1[13];
    v8 = *(__int64 (**)(void))(*v7 + 72LL);
    if ( v8 != v6 )
    {
LABEL_9:
      v10 = v8();
      goto LABEL_6;
    }
    a1 = (_QWORD *)v7[13];
    v6 = *(__int64 (__fastcall **)())(*a1 + 72LL);
    if ( v6 == v8 )
    {
      v9 = (_QWORD **)a1[13];
      v8 = (__int64 (*)(void))(*v9)[9];
      if ( v8 == v6 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[13] + 72LL))(v9[13]);
        goto LABEL_6;
      }
      goto LABEL_9;
    }
  }
  v10 = ((__int64 (__fastcall *)(_QWORD *))v6)(a1);
LABEL_6:
  *(_QWORD *)(v5 + 8) = v10;
  *(_QWORD *)(v5 + 16) = v10;
  *(_QWORD *)(v5 + 40) = v10;
  *(_QWORD *)v5 = &off_1C76A78;
  ++*((_DWORD *)v4 + 12);
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 72) = off_1C76C68;
  *(_QWORD *)(v5 + 104) = v4;
  if ( a2 )
    ++*(_DWORD *)(a2 + 48);
  *(_QWORD *)(v5 + 112) = a2;
  sub_17F9A60(v12, "combined_solver");
  *(_DWORD *)(v5 + 128) = sub_1859980(a3, "solver2_timeout", v12, 0xFFFFFFFFLL);
  *(_BYTE *)(v5 + 120) = sub_1859630(a3, "ignore_solver1", v12, 0);
  *(_DWORD *)(v5 + 124) = sub_1859980(a3, "solver2_unknown", v12, 1);
  sub_18572D0(v12);
  *(_BYTE *)(v5 + 98) = 1;
  *(_WORD *)(v5 + 96) = 0;
  return v5;
}

