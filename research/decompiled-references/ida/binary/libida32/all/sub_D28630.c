__int64 __fastcall sub_D28630(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rdi
  _BYTE v30[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(a1 + 1232);
        v11 = a1 + 384;
        *(_QWORD *)(v11 + 856) = *a4;
        v5 = sub_CF4180(v11, v10, a3);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(a1 + 1232);
        v13 = a1 + 384;
        *(_QWORD *)(v13 + 856) = *a4;
        v5 = sub_CF4240(v13, v12, a3);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(a1 + 1232);
        v15 = a1 + 384;
        *(_QWORD *)(v15 + 856) = *a4;
        v5 = sub_CF42F0(v15, v14, a3);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        v17 = a1 + 384;
        *(_QWORD *)(v17 + 856) = *a4;
        v5 = sub_CF43B0(v17, v16, a3);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        v19 = a1 + 384;
        *(_QWORD *)(v19 + 856) = *a4;
        v5 = sub_CF4460(v19, v18, a3);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        v21 = a1 + 384;
        *(_QWORD *)(v21 + 856) = *a4;
        v5 = sub_CF4520(v21, v20, a3);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 1232);
        v23 = a1 + 384;
        *(_QWORD *)(v23 + 856) = *a4;
        v5 = sub_CF45D0(v23, v22, a3);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v24 = *(_QWORD *)(a1 + 1232);
        v25 = a1 + 384;
        *(_QWORD *)(v25 + 856) = *a4;
        v5 = sub_CF46A0(v25, v24, a3);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v26 = *(_QWORD *)(a1 + 1232);
        v27 = (_QWORD *)(a1 + 384);
        v27[107] = *a4;
        v5 = sub_D25100(v27, v26, a3);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        v29 = (_QWORD *)(a1 + 384);
        v29[107] = *a4;
        v5 = sub_D284D0(v29, v28, a3);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a4;
        v7 = sub_CE52A0(*(_QWORD *)(a1 + 560));
        v8 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v9 = (unsigned int)(*(_DWORD *)v8 + *(_DWORD *)(a3 + 8));
        sub_DFF4E0(v30, *(_QWORD *)(v8 + 32), v9, (unsigned int)v9);
        sub_B54430(*(_QWORD *)a3);
        *(_BYTE *)sub_CEAA70((__int64)v30) = v7;
        sub_DFFFB0(v30);
        sub_E00FC0(v30);
        sub_DFF560(v30);
      }
      break;
  }
  return v5;
}

