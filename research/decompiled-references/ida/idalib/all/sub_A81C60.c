__int64 __fastcall sub_A81C60(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  char v12; // cl
  __int64 result; // rax

  v8 = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2432) += 32LL;
  v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2360) >= v9 + 32 && v8 )
  {
    *(_QWORD *)(a1 + 2352) = v9 + 32;
    v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v11 = v9;
  }
  else
  {
    v10 = sub_986170(a1 + 2352, 32, 32, 4, a5, a6);
    v9 = v10;
    v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v12 = 0;
  *(_QWORD *)v10 = v10;
  if ( a3 == 497 )
    v12 = 6;
  *(_BYTE *)(v10 + 18) &= 0xF8u;
  *(_QWORD *)(v10 + 8) = v10 & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE *)(v10 + 17) = v12 | *(_BYTE *)(v10 + 17) & 0xE0;
  *(_WORD *)(v10 + 16) = *(_WORD *)(v10 + 16) & 0x1F00 | 0xD;
  *(_WORD *)(v10 + 18) = *(_WORD *)(v10 + 18) & 0xF007 | (8 * (a3 & 0x1FF));
  *a2 = v11;
  result = *(unsigned int *)(a1 + 16);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    sub_2237220(a1 + 8, a1 + 24, result + 1, 8);
    result = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * result) = v9;
  ++*(_DWORD *)(a1 + 16);
  return result;
}
