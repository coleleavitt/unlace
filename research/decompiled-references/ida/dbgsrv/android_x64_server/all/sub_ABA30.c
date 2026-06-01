/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABA30
// Address: 0x00000000000ABA30

//----- (00000000000ABA30) ----------------------------------------------------
char __fastcall sub_ABA30(__int64 a1, unsigned int a2, int a3, int a4)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int optval; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v4 = socket(a2, a3, a4);
  *(_QWORD *)(a1 + 56) = v4;
  if ( v4 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(a2);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 100) = a2 == 10;
    optval = 1;
    if ( setsockopt(v4, 1, 2, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (debug & 0x100000) != 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_AB2A0((int)"%s", v5);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 1, 9, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug & 0x100000) != 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_AB2A0((int)"%s", v6);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (debug & 0x100000) != 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_AB2A0((int)"%s", v7);
      }
    }
    return 1;
  }
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B2C: using guessed type int debug;
