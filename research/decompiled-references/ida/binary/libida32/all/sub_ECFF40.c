unsigned __int64 __fastcall sub_ECFF40(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int16 v13; // ax
  void *v14; // rcx

  v6 = a2;
  v8 = a3;
  v10 = 8 * (a3 + (unsigned __int64)a2) + 56;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
    a1[294] = v10 + v12;
  else
    v12 = sub_962430((__int64)(a1 + 294), v10, v10, 3, a5, a6);
  v13 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v13) = -116;
  *(_WORD *)v12 = v13;
  if ( unk_2CAD564 )
    sub_EC5E10(140);
  *(_BYTE *)(v12 + 8) = 18;
  *(_QWORD *)(v12 + 12) = 0;
  *(_QWORD *)(v12 + 20) = 0;
  *(_QWORD *)(v12 + 28) = 0;
  *(_QWORD *)(v12 + 36) = 0;
  *(_QWORD *)(v12 + 44) = 0;
  *(_DWORD *)(v12 + 52) = a2;
  if ( a2 )
    memset((void *)(v12 + 56), 0, 8LL * (a2 - 1) + 8);
  v14 = (void *)(v12 + 8 * v6 + 56);
  if ( a3 )
    v14 = memset((void *)(v12 + 8 * v6 + 56), 0, 8LL * (a3 - 1) + 8);
  *(_QWORD *)(v12 + 24) = v14;
  *(_QWORD *)(v12 + 32) = v8;
  return v12;
}

