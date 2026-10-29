__int64 __fastcall sub_13F0F0(int a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = a2;
  v14[0] = a1;
  v14[1] = HIDWORD(a2) - 1;
  v2 = operator new(0x58u);
  v3 = operator new(0x18u);
  *(_QWORD *)v3 = 0;
  v4 = v3;
  *(_QWORD *)(v3 + 8) = "~F10~ Menu";
  *(_DWORD *)(v3 + 16) = (_DWORD)&stru_34400;
  v5 = operator new(0x18u);
  *(_QWORD *)v5 = 0;
  v6 = unk_24DFCA;
  *(_QWORD *)(v5 + 8) = "~Alt-X~ Quit";
  *(_WORD *)(v5 + 16) = 11520;
  *(_WORD *)(v5 + 18) = v6;
  v7 = operator new(0x18u);
  *(_QWORD *)v7 = 0;
  v8 = v7;
  *(_QWORD *)(v7 + 8) = "~F1~ Help";
  *(_DWORD *)(v7 + 16) = 604928;
  v9 = (_QWORD *)operator new(0x18u);
  *v9 = 0;
  v9[1] = 4294901760LL;
  v9[2] = 0;
  v10 = operator+(v9, v8);
  v11 = operator+(v10, v5);
  v12 = operator+(v11, v4);
  TStatusLine::TStatusLine(v2, v14, v12);
  return v2;
}

