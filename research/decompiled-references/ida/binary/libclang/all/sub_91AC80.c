__int64 __fastcall sub_91AC80(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __m128i v22[2]; // [rsp+0h] [rbp-78h] BYREF
  void *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]

  v4 = *(_DWORD *)(a1 + 816);
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v7 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_915550(v7);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v8 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_915900(v8);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v9 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_915930(v9);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v10 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_915CE0(v10);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v11 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_915D10(v11);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v12 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_9160C0(v12);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v13 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_9160F0(v13);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v14 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_9164A0(v14);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v15 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_919FD0((__int64)&v23, v15);
        if ( v24 > 0x40 )
          goto LABEL_33;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v16 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_91A020((__int64)&v23, v16);
        if ( v24 > 0x40 )
          goto LABEL_33;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v17 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4170(v17);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v18 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5730((__int64)&v23, v18);
        if ( v24 > 0x40 )
        {
LABEL_33:
          if ( v23 )
            operator delete[](v23);
        }
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v19 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4110((__int64)&v23, v19);
        sub_5FF3B0((__int64 *)&v23);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v20 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F41A0((__int64)&v23, v20);
        sub_A1C0C0(&v23);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v21 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5130(v22, v21);
      }
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v6 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5170((__int64)&v23, v6);
        sub_A1C0C0(&v23);
      }
      break;
  }
  return 1;
}

