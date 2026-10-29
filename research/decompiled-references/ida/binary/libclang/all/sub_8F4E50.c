__int64 __fastcall sub_8F4E50(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r13
  char v14; // bl
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r13
  __int16 v22; // bx
  __int64 v23; // r13
  int v24; // ebx
  __int64 v25[13]; // [rsp+0h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v11 = *(_QWORD *)(a1 + 792);
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v25, v12);
      v6 = sub_9DD130(a1 + 384, v11, v25, 8);
      if ( (_BYTE)v6 )
      {
        v13 = *(_QWORD *)(a1 + 568);
        v14 = sub_8E55C0(v25);
        *(_BYTE *)sub_A1A4E0(v13, 8) = v14;
      }
      goto LABEL_7;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v19 = *(_QWORD *)(a1 + 792);
      v20 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v25, v20);
      v6 = sub_9DD130(a1 + 384, v19, v25, 16);
      if ( (_BYTE)v6 )
      {
        v21 = *(_QWORD *)(a1 + 568);
        v22 = sub_8E55C0(v25);
        *(_WORD *)sub_A1A4E0(v21, 8) = v22;
      }
      goto LABEL_7;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v4 = *(_QWORD *)(a1 + 792);
      v5 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v25, v5);
      v6 = sub_9DD130(a1 + 384, v4, v25, 32);
      if ( (_BYTE)v6 )
      {
        v23 = *(_QWORD *)(a1 + 568);
        v24 = sub_8E55C0(v25);
        *(_DWORD *)sub_A1A4E0(v23, 8) = v24;
      }
      goto LABEL_7;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      v8 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v25, v8);
      v6 = sub_9DD130(a1 + 384, v7, v25, 64);
      if ( (_BYTE)v6 )
      {
        v9 = *(_QWORD *)(a1 + 568);
        v10 = sub_8E55C0(v25);
        *(_QWORD *)sub_A1A4E0(v9, 8) = v10;
      }
      goto LABEL_7;
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v15 = *(_QWORD *)(a1 + 792);
      v16 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v25, v16);
      v6 = sub_9DD130(a1 + 384, v15, v25, 1);
      if ( (_BYTE)v6 )
      {
        v17 = *(_QWORD *)(a1 + 568);
        v18 = sub_8E55C0(v25);
        *(_BYTE *)sub_A1A4E0(v17, 8) = v18 != 0;
      }
LABEL_7:
      sub_A1C0C0(v25);
      return v6;
  }
}

