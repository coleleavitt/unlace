__int64 __fastcall sub_6A9F30(__int64 *a1, _BYTE *a2, int a3, unsigned int a4, unsigned int a5)
{
  int v7; // eax
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  int v10; // eax
  unsigned int v11; // ebp
  int v13; // eax
  __int64 v14; // rsi
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v7 = sub_6A9DD0(a1, a3, a5);
  v8 = *a1;
  v15 = v7;
  v9 = *(_QWORD **)(v8 + 1480);
  v10 = sub_79B3A0(&v15, v8, a4, 69);
  v11 = sub_3B9110(v9, v10 - 1);
  if ( v11 != -1 && a2 )
  {
    v13 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), v11);
    v14 = *a1;
    v15 = v13;
    *a2 = sub_79B3A0(&v15, v14, 4294967289LL, 65);
  }
  return v11;
}

