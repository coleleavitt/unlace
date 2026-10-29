void __fastcall sub_591960(__int64 *a1, _BYTE *a2)
{
  _BYTE *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( *a2 )
  {
    v2 = a2;
    do
    {
      v4 = a1[1];
      v5 = *a1;
      if ( a1[2] < (unsigned __int64)(v4 + 1) )
      {
        v6 = qvector_reserve(a1, v5, v4 + 1, 268);
        v4 = a1[1];
        *a1 = v6;
        v5 = v6;
      }
      ++v2;
      v3 = v5 + 268 * v4;
      *(_QWORD *)v3 = 0;
      *(_QWORD *)(v3 + 124) = 0;
      memset(
        (void *)((v3 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v5 + 268 * (_DWORD)v4 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 132) >> 3));
      *(_QWORD *)(v3 + 132) = 0;
      *(_QWORD *)(v3 + 256) = 0;
      memset(
        (void *)((v3 + 140) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v3 - (((_DWORD)v3 + 140) & 0xFFFFFFF8) + 264) >> 3));
      *(_WORD *)(v3 + 264) = 0;
      ++a1[1];
      sub_788700(v3, (unsigned __int8)*(v2 - 1));
    }
    while ( *v2 );
  }
}

