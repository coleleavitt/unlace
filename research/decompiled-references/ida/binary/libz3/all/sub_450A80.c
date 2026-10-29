__int64 __fastcall sub_450A80(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  _DWORD *v11; // r13
  void (__fastcall **v13)(_QWORD *, __int64, __int64); // rax
  __int64 v15; // [rsp-8h] [rbp-28h]

  v5 = a1 + 48;
  *(_QWORD *)(v5 - 8) = a2;
  *(_BYTE *)(v5 - 16) = 0;
  *(_QWORD *)(v5 - 48) = 0;
  *(_DWORD *)(v5 - 40) = 0;
  *(_OWORD *)(v5 - 32) = 0;
  sub_16669D0(v5, a2);
  sub_16744A0(a1 + 64, *(_QWORD *)(a1 + 40));
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 112) = v6;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 136) = a3;
  *(_QWORD *)(a1 + 144) = 0;
  v7 = sub_3743C0((__int64 *)&qword_18D6CD0);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64, _QWORD, const int *))(*v7 + 16LL))(
         v7,
         v8,
         &qword_1C7F4C8,
         0,
         1,
         0,
         &qword_18D6CD0);
  v10 = v15;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  v11 = *(_DWORD **)(a1 + 144);
  if ( v11 )
  {
    if ( v11[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *, __int64))v11)(v11, v8);
      sub_186B220(v11);
    }
  }
  v13 = (void (__fastcall **)(_QWORD *, __int64, __int64))*v7;
  *(_QWORD *)(a1 + 144) = v9;
  (*v13)(v7, v8, v10);
  return sub_186B220(v7);
}

