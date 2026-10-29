/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003220
// Address: 0x0000000100003220

//----- (0000000100003220) ----------------------------------------------------
__int64 __fastcall sub_100003220(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  int v9; // ecx
  __int64 v10; // rsi
  unsigned __int128 v11; // rax
  void *v12; // rdi

  sub_100064B10();
  if ( !*((_QWORD *)&xmmword_1000AD0D0 + 1) )
  {
LABEL_7:
    v8 = qwait_timed(a2, *(_DWORD *)(a1 + 528), a3 ^ 1u, -a3);
    v9 = *(_DWORD *)(a1 + 528);
    if ( v8 != v9 && v8 - 1 < 0xFFFFFFFE )
    {
      v10 = *((_QWORD *)&xmmword_1000AD0D0 + 1);
      v11 = xmmword_1000AD0D0 + __PAIR128__(1, 0);
      if ( qword_1000AD0E0 < (unsigned __int64)(*((_QWORD *)&xmmword_1000AD0D0 + 1) + 1LL) )
      {
        *(_QWORD *)&v11 = qvector_reserve(
                            (__int64)&xmmword_1000AD0D0,
                            (void *)xmmword_1000AD0D0,
                            *((unsigned __int64 *)&v11 + 1),
                            8u);
        *(_QWORD *)&xmmword_1000AD0D0 = v11;
        v10 = *((_QWORD *)&xmmword_1000AD0D0 + 1);
        *((_QWORD *)&v11 + 1) = *((_QWORD *)&xmmword_1000AD0D0 + 1) + 1LL;
        v9 = *(_DWORD *)(a1 + 528);
      }
      *((_QWORD *)&xmmword_1000AD0D0 + 1) = *((_QWORD *)&v11 + 1);
      *(_DWORD *)(v11 + 8 * v10) = v9;
      *(_DWORD *)(v11 + 8 * v10 + 4) = *a2;
    }
    goto LABEL_12;
  }
  sub_100064B10();
  if ( !(8LL * *((_QWORD *)&xmmword_1000AD0D0 + 1)) )
  {
LABEL_6:
    sub_100064B30();
    goto LABEL_7;
  }
  v6 = xmmword_1000AD0D0;
  v7 = 0;
  while ( *(_DWORD *)(xmmword_1000AD0D0 + v7) != *(_DWORD *)(a1 + 528) )
  {
    v7 += 8;
    if ( 8LL * *((_QWORD *)&xmmword_1000AD0D0 + 1) == v7 )
      goto LABEL_6;
  }
  v12 = (void *)(xmmword_1000AD0D0 + v7);
  *a2 = *(_DWORD *)(xmmword_1000AD0D0 + v7 + 4);
  memmove(v12, (const void *)(v6 + v7 + 8), xmmword_1000AD0D0 + 8LL * *((_QWORD *)&xmmword_1000AD0D0 + 1) - v6 - v7 - 8);
  --*((_QWORD *)&xmmword_1000AD0D0 + 1);
  sub_100064B30();
  v8 = *(_DWORD *)(a1 + 528);
LABEL_12:
  sub_100064B30();
  return v8;
}
// 1000AD0D0: using guessed type __int128 xmmword_1000AD0D0;
// 1000AD0E0: using guessed type __int64 qword_1000AD0E0;
