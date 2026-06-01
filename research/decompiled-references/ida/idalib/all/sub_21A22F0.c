__int64 __fastcall sub_21A22F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8,
        __int128 a9,
        __int128 a10)
{
  int v10; // eax
  unsigned __int8 v11; // bp
  __int64 (__fastcall ***v12)(); // rax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  char v19; // [rsp+8h] [rbp-20h]

  v10 = a2;
  v11 = a3;
  if ( !a2 )
    v10 = sub_201F550(a9, *((unsigned __int64 *)&a9 + 1));
  switch ( v10 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 9:
    case 21:
    case 23:
    case 24:
    case 28:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
      v12 = sub_2195B10();
      sub_2220500(&v18, 2, v12);
      v13 = v18;
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v13;
      result = a1;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      sub_2188F10(a1, v11, a3, a4, a5, a6, a7, a8);
      result = a1;
      break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 22:
      sub_21A1BC0((__int64)&v18, 0, 0, 0, a5, a6, a9, a10);
      *(_BYTE *)(a1 + 8) = v19 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
      v16 = v18;
      v18 = 0;
      *(_QWORD *)a1 = v16;
      sub_21A1F60(&v18);
      result = a1;
      break;
    case 25:
    case 26:
    case 27:
      sub_2162710(
        (__int64)&v18,
        *((__int64 *)&a9 + 1),
        a3,
        a4,
        a5,
        a6,
        a9,
        *((__int64 *)&a9 + 1),
        a10,
        *((__int64 *)&a10 + 1));
      *(_BYTE *)(a1 + 8) = v19 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
      v17 = v18;
      v18 = 0;
      *(_QWORD *)a1 = v17;
      sub_21A22B0(&v18);
      result = a1;
      break;
    case 29:
      sub_21B5340(a1, 11, a3, a4, a5, a6, a9, *((__int64 *)&a9 + 1), a10, *((__int64 *)&a10 + 1));
      result = a1;
      break;
    case 30:
      sub_21B5340(a1, 12, a3, a4, a5, a6, a9, *((__int64 *)&a9 + 1), a10, *((__int64 *)&a10 + 1));
      result = a1;
      break;
    case 31:
      sub_21B1030((unsigned int)&v18, DWORD2(a9), a3, a4, a5, a6, a9, a10);
      *(_BYTE *)(a1 + 8) = v19 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
      v15 = v18;
      v18 = 0;
      *(_QWORD *)a1 = v15;
      sub_21A22D0(&v18);
      result = a1;
      break;
  }
  return result;
}
