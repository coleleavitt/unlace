/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069250
// Address: 0x0000000100069250

//----- (0000000100069250) ----------------------------------------------------
__int64 __fastcall sub_100069250(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // r14
  int v5; // eax
  __int64 result; // rax
  _BYTE *v7; // rax

  *(_QWORD *)a1 = off_1000AA498;
  *(_QWORD *)(a1 + 136) = a2;
  v4 = (_QWORD *)(a1 + 144);
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  v5 = dword_1000ACCC0++;
  *(_DWORD *)(a1 + 168) = v5;
  *(_QWORD *)(a1 + 176) = qtime64();
  *(_BYTE *)(a1 + 184) = a3;
  result = sub_10006AB00(*(_QWORD *)(a1 + 136));
  if ( !(_BYTE)result )
  {
    v7 = *(_BYTE **)(a1 + 144);
    if ( *(_QWORD *)(a1 + 160) <= 9u )
    {
      v7 = qvector_reserve((__int64)v4, *(void **)(a1 + 144), 0xAu, 1u);
      *v4 = v7;
    }
    *(_QWORD *)(a1 + 152) = 10;
    *(_QWORD *)v7 = 0x6E776F6E6B6E7528LL;
    v7[8] = 41;
    result = *(_QWORD *)(a1 + 144);
    *(_BYTE *)(result + 9) = 0;
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
// 1000AA498: using guessed type void (__fastcall __noreturn *off_1000AA498[2])();
// 1000ACCC0: using guessed type int dword_1000ACCC0;
