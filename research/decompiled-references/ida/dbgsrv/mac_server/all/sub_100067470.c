/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067470
// Address: 0x0000000100067470

//----- (0000000100067470) ----------------------------------------------------
__int64 __fastcall sub_100067470(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-21h] BYREF

  sub_100060800(a1);
  *(_QWORD *)a1 = off_1000A9E68;
  v2 = a1 + 408;
  *(_OWORD *)(a1 + 792) = -1;
  *(_OWORD *)(a1 + 804) = -1;
  v3 = *(_QWORD *)(a1 + 416);
  v4 = v3 + 1;
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v3 != -1 )
    v5 = *(_QWORD *)(a1 + 416) + 1LL;
  if ( v3 >= v5 )
  {
    v8 = 0;
    sub_10001CE90(v2, v5, &v8);
  }
  else
  {
    v6 = *(char **)(a1 + 408);
    if ( *(_QWORD *)(a1 + 424) < v4 )
    {
      v6 = (char *)qvector_reserve(v2, *(void **)(a1 + 408), v4, 1u);
      *(_QWORD *)(a1 + 408) = v6;
    }
    __bzero(&v6[*(_QWORD *)(a1 + 416)], v4 - *(_QWORD *)(a1 + 416));
    *(_QWORD *)(a1 + 416) = v4;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 408) + v3) = -52;
  *(_OWORD *)(a1 + 752) = -1;
  *(_OWORD *)(a1 + 736) = -1;
  *(_OWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 784) = 0x10000000000LL;
  sub_100063FD0(a1, "macosx");
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A9E68: using guessed type __int64 (__fastcall *off_1000A9E68[4])();
