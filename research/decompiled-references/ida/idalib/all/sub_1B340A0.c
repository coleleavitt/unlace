unsigned __int64 __fastcall sub_1B340A0(
        __int64 *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        double a7,
        double a8)
{
  char v12; // al
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx

  v12 = sub_1B33C80(*a1, a2, a5, 109, a7, a8);
  v13 = 0;
  if ( v12 )
  {
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    v17 = v14[294];
    v14[304] += 32LL;
    v13 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14[295] >= v13 + 32 && v17 )
      v14[294] = v13 + 32;
    else
      v13 = sub_986170((__int64)(v14 + 294), 32, 32, 3, v15, v16);
    *(_DWORD *)v13 = a3;
    *(_DWORD *)(v13 + 4) = a6;
    *(_DWORD *)(v13 + 8) = 109;
    *(_DWORD *)(v13 + 12) = a4;
    *(_DWORD *)(v13 + 16) = a5;
    *(_QWORD *)(v13 + 24) = a2;
  }
  return v13;
}
