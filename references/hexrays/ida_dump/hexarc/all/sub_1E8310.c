unsigned __int64 __fastcall sub_1E8310(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        __int64 a7)
{
  __int64 v9; // rsi
  char v11; // r8
  _BYTE v13[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v9 = *a5;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = a6;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 8) = a3;
  if ( (_BYTE)v9 && a4 == get_tinfo_size(0, v9, 0) )
  {
    sub_1E81B0(a1, a5);
    *(_DWORD *)(a1 + 88) = a4;
    return v14 - __readfsqword(0x28u);
  }
  if ( !sub_1163C0(a4) && a4 != *(_DWORD *)(a2 + 92) )
  {
    sub_324B50(v13, *(_QWORD *)(a2 + 96));
    if ( v13[0] )
    {
      clear_tinfo_t(v13);
      v11 = 1;
      goto LABEL_5;
    }
    clear_tinfo_t(v13);
  }
  v11 = 0;
LABEL_5:
  sub_1E8220((_DWORD *)a1, (_QWORD *)a2, a4, 0x10u, v11);
  return v14 - __readfsqword(0x28u);
}
