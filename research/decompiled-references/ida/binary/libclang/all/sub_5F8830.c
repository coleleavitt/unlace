__int64 __fastcall sub_5F8830(int a1, int a2, char a3, char a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  int v8; // ebp
  _QWORD *v10; // [rsp+8h] [rbp-40h]

  if ( !getenv("LIBCLANG_DISABLE_CRASH_RECOVERY") )
    sub_25A1800();
  if ( !qword_4AD20F0 )
    sub_25CC930(&qword_4AD20F0, sub_5F7E20, sub_5F8220);
  sub_23C5870();
  sub_1F8D280();
  sub_23AE860();
  sub_1F6B490();
  sub_237F530();
  v6 = operator new(0x98u);
  v7 = (_QWORD *)operator new(0x80u);
  v7[1] = 0x100000001LL;
  *v7 = off_47CFE90;
  v10 = v7 + 2;
  sub_1F45310(v7 + 2);
  *(_QWORD *)(v6 + 48) = v7;
  *(_BYTE *)v6 = a1 != 0;
  v8 = 1;
  *(_BYTE *)(v6 + 2) = 0;
  *(_QWORD *)(v6 + 40) = v10;
  *(_QWORD *)(v6 + 56) = v6 + 72;
  *(_QWORD *)(v6 + 88) = v6 + 104;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 8) = v6 + 24;
  *(_QWORD *)(v6 + 16) = 0;
  *(_BYTE *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_BYTE *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_BYTE *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 120) = v6 + 136;
  *(_QWORD *)(v6 + 128) = 0;
  *(_BYTE *)(v6 + 136) = 0;
  *(_BYTE *)(v6 + 1) = a2 != 0;
  if ( a3 != 1 )
  {
    v8 = 0;
    if ( a3 != 2 )
    {
      v8 = getenv("LIBCLANG_BGPRIO_INDEX") != nullptr;
      if ( a4 != 1 )
        goto LABEL_8;
LABEL_13:
      v8 |= 2u;
      goto LABEL_11;
    }
  }
  if ( a4 == 1 )
    goto LABEL_13;
LABEL_8:
  if ( a4 != 2 && getenv("LIBCLANG_BGPRIO_EDIT") )
    v8 |= 2u;
LABEL_11:
  *(_DWORD *)(v6 + 4) = v8;
  return v6;
}

