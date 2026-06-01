__int64 __fastcall emovi(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdx
  __int16 v3; // ax
  _WORD *v4; // rax
  __int16 v5; // cx

  v2 = a1 + 14;
  *a2 = *(__int16 *)(a1 + 14) >> 15;
  v3 = *(_WORD *)(a1 + 14);
  a2[2] = 0;
  a2[1] = v3 & 0x7FFF;
  v4 = a2 + 3;
  do
  {
    v5 = *(_WORD *)(v2 - 2);
    ++v4;
    v2 -= 2;
    *(v4 - 1) = v5;
  }
  while ( a2 + 10 != v4 );
  a2[10] = 0;
  return 0;
}
