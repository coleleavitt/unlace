__int64 __fastcall sub_67BEB0(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // r15d
  unsigned int **v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // esi
  unsigned int **v11; // rbx

  v4 = sub_678600(*a2, a2[1]);
  if ( !v4 )
  {
    sub_396090(0x2Du, a2);
    v6 = (unsigned int **)*a2;
    v7 = *a2 + 96 * a2[1];
    if ( *a2 != v7 )
    {
LABEL_10:
      v9 = *a1;
      v10 = **v6;
      if ( v10 != -1 && (*(_BYTE *)(v9 + 772) & 8) != 0 )
        v10 &= ~1u;
      v11 = v6;
      while ( 1 )
      {
        v11 += 12;
        if ( (unsigned int **)v7 == v11 )
          break;
        v8 = **v11;
        if ( v8 != -1 && (*(_BYTE *)(v9 + 772) & 8) != 0 )
          v8 &= ~1u;
        if ( v10 != v8 )
        {
          sub_67B700(a1, v10, (__int64)v6, (__int64)v11);
          a1[8] = -1;
          v6 = v11;
          goto LABEL_10;
        }
      }
      sub_67B700(a1, v10, (__int64)v6, v7);
      a1[8] = -1;
      sub_396090(0x2Eu, a2);
    }
  }
  return v4;
}

