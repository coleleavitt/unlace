/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BE30
// Address: 0x000000010006BE30

//----- (000000010006BE30) ----------------------------------------------------
bool __fastcall sub_10006BE30(__int64 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+Ch] [rbp-24h] BYREF

  v4 = socket(a2, a3, a4);
  v5 = v4;
  *(_QWORD *)(a1 + 56) = v4;
  if ( v4 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *__error();
  }
  else
  {
    *(_BYTE *)(a1 + 100) = a2 == 30;
    v10 = 1;
    if ( setsockopt(v4, 0xFFFF, 4, &v10, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (debug[2] & 0x10) != 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_1000139E0((int)"%s", v6);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 0xFFFF, 8, &v10, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug[2] & 0x10) != 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_1000139E0((int)"%s", v7);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &v10, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (debug[2] & 0x10) != 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_1000139E0((int)"%s", v8);
      }
    }
  }
  return v5 != -1;
}
