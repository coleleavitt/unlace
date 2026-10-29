__int64 __fastcall sub_EFA1F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-10h] BYREF

  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 &= 0xFFFFFFFE00000000LL;
      result = a1;
      break;
    case 1:
      v6 = *(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v6 + 16) == 38 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v7;
      }
      else
      {
        v9 = sub_F3F310(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL), a2, *(_DWORD *)a2 & 0x7FFFFFFF, a4);
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v9 + 32);
      }
      result = a1;
      break;
    case 7:
      sub_EFED50(&v10, a2[1]);
      v4 = v10;
      *(_QWORD *)a1 = 6;
      *(_QWORD *)(a1 + 8) = v4;
      result = a1;
      break;
    case 8:
      v8 = *a2;
      *(_DWORD *)a1 = 8;
      LOBYTE(v8) = *(_BYTE *)(a1 + 4) & 0xFE;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2[1] + 24);
      *(_BYTE *)(a1 + 4) = BYTE4(v8) & 1 | v8;
      result = a1;
      break;
  }
  return result;
}

