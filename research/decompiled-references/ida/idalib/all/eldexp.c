__int64 __fastcall eldexp(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _WORD v7[12]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  emovi(a1, v7);
  if ( (unsigned __int8)emdnorm(v7, 0, 0, a2 + (unsigned int)v7[1], 112) )
  {
    emovo(v7, a3, v4, v5);
    return 1;
  }
  else
  {
    *a3 = 0;
    return 2;
  }
}
