/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051720
// Address: 0x0000000100051720

//----- (0000000100051720) ----------------------------------------------------
__int64 __fastcall sub_100051720(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  off_t v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10

  if ( a2 && *a2 == 3 )
  {
    v5 = a3;
    LOBYTE(v3) = 1;
  }
  else
  {
    v6 = a3;
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 32 * v7 - 32;
    while ( --v7 >= 0 )
    {
      v9 = v8;
      v8 -= 32;
      v10 = *(_QWORD *)(a1 + 8);
      if ( v6 >= *(_QWORD *)(v10 + v9) && *(_QWORD *)(v10 + v9 + 8) > v6 )
      {
        v5 = *(_QWORD *)(v10 + v8 + 48) + v6 - *(_QWORD *)(v10 + v9);
        LOBYTE(v3) = 1;
        if ( v5 != -1 )
          goto LABEL_10;
        break;
      }
    }
    v3 = 0;
    v5 = v6;
  }
LABEL_10:
  qlseek((__int64)a2, v5, 0);
  return v3;
}
// 10005178C: variable 'v3' is possibly undefined
