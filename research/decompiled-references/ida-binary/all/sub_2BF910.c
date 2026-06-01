__int64 __fastcall sub_2BF910(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v4; // al
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 224) == -1;
  v11 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = *(_BYTE *)(a1 + 264);
    v5 = *(_DWORD *)(a1 + 268);
    v6 = *(_DWORD *)(a1 + 276);
    v7 = *(_DWORD *)(a1 + 280);
    if ( v4 == byte_8CCA80 )
    {
      if ( v4 )
      {
        if ( v5 == (_DWORD)xmmword_8CCA84 )
          return v11 - __readfsqword(0x28u);
        ++*(_DWORD *)(a2 + 100);
        v9 = 0;
        v10 = 0;
        goto LABEL_4;
      }
      if ( DWORD2(xmmword_8CCA84) == v6
        && SHIDWORD(xmmword_8CCA84) <= v7
        && SHIDWORD(xmmword_8CCA84) >= v7
        && *(_DWORD *)(a1 + 272) == DWORD1(xmmword_8CCA84) )
      {
        return v11 - __readfsqword(0x28u);
      }
      ++*(_DWORD *)(a2 + 100);
      v9 = 0;
      v10 = 0;
    }
    else
    {
      ++*(_DWORD *)(a2 + 100);
      v9 = 0;
      v10 = 0;
      if ( v4 )
      {
LABEL_4:
        sub_169A50(&v9, (__int64)"node %d", v5);
        goto LABEL_5;
      }
    }
    sub_169A50(&v9, (__int64)"edge(%d, %d)", v6, v7);
LABEL_5:
    sub_2D4060(a2, &v9);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9, (const char *)&v9);
    }
    return v11 - __readfsqword(0x28u);
  }
  return sub_2D1400(a2, a2);
}
