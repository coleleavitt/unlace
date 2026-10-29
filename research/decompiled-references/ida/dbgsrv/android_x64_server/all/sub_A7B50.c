/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7B50
// Address: 0x00000000000A7B50

//----- (00000000000A7B50) ----------------------------------------------------
__int64 __fastcall sub_A7B50(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // r14
  int v5; // eax
  __int64 result; // rax
  size_t v7; // r15
  __int64 v8; // r12
  void *v9; // rax

  *(_QWORD *)a1 = &off_14F490;
  *(_QWORD *)(a1 + 136) = a2;
  v4 = (_QWORD *)(a1 + 144);
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  v5 = dword_155610++;
  *(_DWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = qtime64();
  *(_BYTE *)(a1 + 184) = a3;
  result = sub_A9670(*(_QWORD *)(a1 + 136));
  if ( !(_BYTE)result )
  {
    result = __strlen_chk("(unknown)", 10);
    v7 = result;
    if ( result )
    {
      v8 = result + 1;
      v9 = *(void **)(a1 + 144);
      if ( *(_QWORD *)(a1 + 160) < v7 + 1 )
      {
        v9 = qvector_reserve((__int64)v4, *(char **)(a1 + 144), v7 + 1, 1u);
        *v4 = v9;
      }
      *(_QWORD *)(a1 + 152) = v8;
      memmove(v9, "(unknown)", v7);
      result = *(_QWORD *)(a1 + 144);
      *(_BYTE *)(result + v7) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = 0;
    }
  }
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  return result;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 14F490: using guessed type __int64 (__fastcall *off_14F490)();
// 155610: using guessed type int dword_155610;
