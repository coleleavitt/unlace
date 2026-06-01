void __fastcall sub_9E73F0(_QWORD *a1, unsigned int **a2, __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned int *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx

  sub_9B1B90(a1, a2, a3);
  v4 = *a2;
  if ( *a2 )
  {
    v5 = &v4[*(v4 - 1)];
    while ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( (_DWORD)v6 != -1 )
        {
          v7 = a1[90] + 4 * v6;
          if ( ((*(_BYTE *)(v7 + 3) >> 4) & 3) == 1 )
            sub_9E70E0((__int64)a1, (__int64 *)(a1[87] + 24LL * (*(_DWORD *)v7 & 0xFFFFFFF)), a3);
        }
        if ( (unsigned __int8)sub_98ACD0(**(_QWORD **)(a1[4] + 8 * v6))
          && *(char *)(a1[90] + 4 * v6 + 3) >= 0
          && sub_9B1230((__int64)a1, v6) )
        {
          break;
        }
        if ( v5 == ++v4 )
          return;
      }
      ++v4;
      sub_9E69C0(a1, v6, a3);
    }
  }
}

