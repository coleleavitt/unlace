__int64 __fastcall sub_1BD4060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // r15
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax

  v5 = a4;
  v8 = sub_B748A0(a2, a2, a3, a4);
  if ( v8 != sub_B748A0(a3, a2, v9, v10) || !(unsigned __int8)sub_1BD3F90(a1, a2, a3, nullptr, v5 ^ a5) )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 || (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 > 3 )
    return sub_1D3B1F0(a1, a2, a3);
  v12 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v12 & 4) != 0 )
    v13 = (_QWORD *)*v13;
  if ( v13 )
    v13 -= 8;
  v14 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  v15 = (v14 & 4) != 0 ? *(_QWORD **)(v14 & 0xFFFFFFFFFFFFFFF8LL) : (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15 )
    v15 -= 8;
  if ( v15 == v13
    && (sub_B979F0((_QWORD *)a2)
     || sub_B979F0((_QWORD *)a3)
     || (v16 = sub_B987D0((_QWORD *)a2, a2),
         v17 = sub_B987D0((_QWORD *)a2, a2),
         (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v17) & 7) == (*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v16) & 7))) )
  {
    return sub_1D3B1F0(a1, a2, a3);
  }
  else
  {
    return 0;
  }
}
