__int64 __fastcall sub_987040(__int64 a1, _WORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // r10d
  _QWORD *v6; // r9
  int v8; // eax
  __m128 v9; // [rsp+0h] [rbp-18h] BYREF

  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
    a2 = (_WORD *)sub_BFB9F0(a2);
  v2 = *(_QWORD *)(a1 + 112);
  v3 = *(unsigned int *)(v2 + 16);
  v4 = *(_QWORD *)v2;
  if ( (_DWORD)v3 )
  {
    v5 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (_QWORD *)(v4 + 16LL * v5);
    if ( a2 == (_WORD *)*v6 )
    {
LABEL_5:
      sub_986FD0(&v9, v6, (_QWORD *)(16 * v3 + v4), v2, 1);
      return *(_QWORD *)(v9.m128_u64[0] + 8);
    }
    if ( *v6 != -4096 )
    {
      v8 = 1;
      do
      {
        v5 = (v3 - 1) & (v8 + v5);
        v6 = (_QWORD *)(v4 + 16LL * v5);
        if ( a2 == (_WORD *)*v6 )
          goto LABEL_5;
        ++v8;
      }
      while ( *v6 != -4096 );
    }
  }
  sub_986FD0(&v9, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), v2, 1);
  return *(_QWORD *)(v9.m128_u64[0] + 8);
}
