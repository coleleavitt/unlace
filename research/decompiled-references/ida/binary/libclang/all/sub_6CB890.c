__int64 __fastcall sub_6CB890(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebp
  int v11; // r12d
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 33)
         & 0x1FF )
  {
    case 0:
    case 4:
      v6 = *(_QWORD *)(a1[2161] + 80LL);
      break;
    case 1:
      v6 = *(_QWORD *)(a1[2161] + 96LL);
      break;
    case 2:
      v6 = *(_QWORD *)(a1[2161] + 104LL);
      break;
    case 3:
      v16 = a1[270];
      if ( *(_DWORD *)(v16 + 64) && (*(_BYTE *)(v16 + 68) & 8) != 0 )
        v6 = *(_QWORD *)(a1[2162] + 112LL);
      else
        v6 = *(_QWORD *)(a1[2161] + 112LL);
      break;
    case 5:
      v6 = *(_QWORD *)(a1[2161] + 88LL);
      break;
    case 6:
      v17 = a1[270];
      if ( *(_DWORD *)(v17 + 64) && (*(_BYTE *)(v17 + 68) & 8) != 0 )
        v6 = *(_QWORD *)(a1[2162] + 120LL);
      else
        v6 = *(_QWORD *)(a1[2161] + 120LL);
      break;
    case 7:
      v6 = *(_QWORD *)(a1[2161] + 128LL);
      break;
  }
  v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                           + 18LL);
  LOWORD(v7) = (unsigned __int16)v7 >> 3;
  v8 = (unsigned int)(v7 + 33);
  LOWORD(v8) = v8 & 0x1FF;
  switch ( v8 )
  {
    case 0LL:
    case 4LL:
      v9 = *(_QWORD *)(a1[2161] + 80LL);
      break;
    case 1LL:
      v9 = *(_QWORD *)(a1[2161] + 96LL);
      break;
    case 2LL:
      v9 = *(_QWORD *)(a1[2161] + 104LL);
      break;
    case 3LL:
      v15 = a1[270];
      if ( *(_DWORD *)(v15 + 64) && (*(_BYTE *)(v15 + 68) & 8) != 0 )
        v9 = *(_QWORD *)(a1[2162] + 112LL);
      else
        v9 = *(_QWORD *)(a1[2161] + 112LL);
      break;
    case 5LL:
      v9 = *(_QWORD *)(a1[2161] + 88LL);
      break;
    case 6LL:
      v14 = a1[270];
      if ( *(_DWORD *)(v14 + 64) && (*(_BYTE *)(v14 + 68) & 8) != 0 )
        v9 = *(_QWORD *)(a1[2162] + 120LL);
      else
        v9 = *(_QWORD *)(a1[2161] + 120LL);
      break;
    case 7LL:
      v9 = *(_QWORD *)(a1[2161] + 128LL);
      break;
    default:
      *(_QWORD *)&dword_0 = a3;
      BUG();
  }
  v10 = 0;
  if ( v9 != v6 )
  {
    v11 = sub_6B1490(a2);
    v12 = sub_6B1490(a3);
    if ( v11 != v12 )
      return 2 * (unsigned int)(v11 > v12) - 1;
  }
  return v10;
}

