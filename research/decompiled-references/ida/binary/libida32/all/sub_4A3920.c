__int64 __fastcall sub_4A3920(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5, int a6)
{
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // ebp
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v8 = *a4;
  v13 = __readfsqword(0x28u);
  if ( v8 == -1 )
  {
    *a4 = 0;
    callui(187, (int)a4, a2, *(_QWORD *)(a1 + 16), (int)&callui, a6);
  }
  v9 = *(_QWORD *)a1;
  v12 = *(_DWORD *)(a1 + 24);
  if ( v8 < (unsigned int)sub_79B3A0(&v12, v9, 1, 65)
    && (v10 = sub_4A37F0(*(_QWORD *)a1, a2, *(_DWORD *)(a1 + 24), v8), (_BYTE)v10) )
  {
    if ( a3 )
      netnode_qsupstr(*(unsigned int *)(a1 + 24), a3, v8, 82);
  }
  else
  {
    return 0;
  }
  return v10;
}

