__int64 __fastcall sub_144C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  __int16 v8; // si
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  __int16 v13; // si
  int v14; // edx
  __int16 v15; // si
  int v16; // edx

  v4 = *(unsigned __int16 *)(a3 + 12);
  switch ( (__int16)v4 )
  {
    case 0:
      v8 = 13;
      v9 = *(unsigned __int8 *)(a3 + 14) + 1;
      if ( v9 > 8 )
      {
        v8 = 1;
        if ( v9 > 16 )
          v8 = 8 * (v9 >= 33) + 4;
      }
      *(_WORD *)a2 = v8;
      *(_DWORD *)(a2 + 4) = 0;
      goto LABEL_9;
    case 1:
      v12 = *(unsigned __int8 *)(a3 + 14) + 1;
      if ( v12 <= 8 )
      {
        LOWORD(v4) = 13;
      }
      else if ( v12 > 16 )
      {
        LOWORD(v4) = 8 * (v12 >= 33) + 4;
      }
      *(_WORD *)a2 = v4;
      *(_DWORD *)(a2 + 4) = 0;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        -a1[5],
        *(unsigned __int8 *)(a3 + 14),
        1,
        1);
      goto LABEL_4;
    case 2:
      v13 = 13;
      v14 = *(unsigned __int8 *)(a3 + 14) + 1;
      if ( v14 > 8 )
      {
        v13 = 1;
        if ( v14 > 16 )
          v13 = 8 * (v14 >= 33) + 4;
      }
      *(_WORD *)a2 = v13;
      *(_DWORD *)(a2 + 4) = 4;
LABEL_9:
      v10 = *(unsigned __int8 *)(a3 + 14);
      v11 = a1[5];
      goto LABEL_10;
    case 3:
      v15 = 13;
      v16 = *(unsigned __int8 *)(a3 + 14) + 1;
      if ( v16 > 8 )
      {
        v15 = 1;
        if ( v16 > 16 )
          v15 = 8 * (v16 >= 33) + 4;
      }
      *(_WORD *)a2 = v15;
      *(_DWORD *)(a2 + 4) = 0;
      v10 = *(unsigned __int8 *)(a3 + 14);
      v11 = a1[7] - a1[6];
LABEL_10:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        v11,
        v10,
        *(unsigned __int8 *)(a3 + 15),
        1);
      goto LABEL_4;
    case 6:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 7;
      v6 = a1[5] >> 16;
      goto LABEL_3;
    case 7:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 9;
      v6 = *((unsigned __int16 *)a1 + 20);
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], v6, 15, 0, 1);
LABEL_4:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, v4, a3);
      result = 0;
      break;
  }
  return result;
}

