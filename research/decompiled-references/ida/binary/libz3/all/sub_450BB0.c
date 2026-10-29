__int64 __fastcall sub_450BB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  _DWORD *v12; // r14
  void (__fastcall **v14)(_QWORD *, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v16; // [rsp-8h] [rbp-38h]

  v4 = a1 + 120;
  *(_QWORD *)(v4 - 64) = 0;
  v5 = *(_BYTE *)(a2 + 662);
  *(_QWORD *)(v4 - 112) = a2;
  v6 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(v4 - 120) = &off_1C4E958;
  *(_QWORD *)(v4 - 56) = v6;
  *(_QWORD *)(v4 - 8) = v6;
  *(_QWORD *)(v4 - 88) = 0;
  *(_BYTE *)(v4 - 16) = 0;
  *(_QWORD *)(v4 - 48) = 0;
  *(_DWORD *)(v4 - 40) = 0;
  *(_OWORD *)(v4 - 104) = 0;
  *(_OWORD *)(v4 - 80) = 0;
  *(_OWORD *)(v4 - 32) = 0;
  sub_16669D0(v4, v6);
  sub_16744A0(a1 + 136, *(_QWORD *)(a1 + 112));
  v7 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 160) = v7;
  *(_QWORD *)(a1 + 184) = v7;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_BYTE *)(a1 + 208) = v5;
  *(_QWORD *)(a1 + 216) = 0;
  v8 = sub_3743C0((__int64 *)&qword_18D6CD0);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64, _QWORD, const int *))(*v8 + 16LL))(
          v8,
          v9,
          &qword_1C7F4C8,
          0,
          1,
          0,
          &qword_18D6CD0);
  v11 = v16;
  if ( v10 )
    ++*(_DWORD *)(v10 + 48);
  v12 = *(_DWORD **)(a1 + 216);
  if ( v12 )
  {
    if ( v12[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *, __int64))v12)(v12, v9);
      sub_186B220(v12);
    }
  }
  v14 = (void (__fastcall **)(_QWORD *, __int64, __int64))*v8;
  *(_QWORD *)(a1 + 216) = v10;
  (*v14)(v8, v9, v11);
  sub_186B220(v8);
  result = *(unsigned __int8 *)(a2 + 672);
  *(_BYTE *)(a1 + 224) = result;
  return result;
}

