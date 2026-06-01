/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F690
// Address: 0x000000010005F690

//----- (000000010005F690) ----------------------------------------------------
bool __fastcall sub_10005F690(__int64 a1, int a2, int a3, int a4)
{
  int v6; // w0
  int v7; // w19
  int v9; // [xsp+14h] [xbp-2Ch] BYREF

  v6 = socket(a2, a3, a4);
  v7 = v6;
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *__error();
  }
  else
  {
    *(_BYTE *)(a1 + 100) = a2 == 30;
    v9 = 1;
    if ( setsockopt(v6, 0xFFFF, 4, &v9, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_100011BD4();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 0xFFFF, 8, &v9, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_100011BD4();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &v9, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_100011BD4();
      }
    }
  }
  return v7 != -1;
}
// 10009D908: using guessed type int debug;
