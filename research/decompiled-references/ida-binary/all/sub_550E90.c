unsigned __int64 __fastcall sub_550E90(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v4 = operator new(0x90u);
  *(_DWORD *)(v4 + 8) = 10;
  *(_DWORD *)(v4 + 12) = a3;
  *(_QWORD *)v4 = &forms::push_button_t___vtable;
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 112) = 0;
  v5 = (_BYTE *)qvector_reserve(v4 + 104, 0, 1, 1);
  *(_QWORD *)(v4 + 104) = v5;
  *(_QWORD *)(v4 + 112) = 1;
  *v5 = 0;
  v6 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)v4 = &forms::dialog_button_t___vtable;
  v7 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 132) = a2;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 8) = 14;
  if ( v6 < 0 && !v7 )
    *(_DWORD *)(a1 + 24) = 0;
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1, v8, v7 + 1, 8);
    *(_QWORD *)a1 = v10;
    v8 = v10;
    v7 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v8 + 8 * v7) = v4;
  ++*(_QWORD *)(a1 + 8);
  return v11 - __readfsqword(0x28u);
}
