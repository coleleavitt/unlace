__int64 __fastcall sub_764F10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v3; // eax
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 224);
  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 224) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 200);
  if ( v3 - 4 == (_DWORD)v2 )
  {
    if ( (unsigned __int8)sub_764060(a1, 5u) == 0xAB )
    {
      v5 = *(__int64 **)(a1 + 192);
      *(_BYTE *)(a1 + 204) = -85;
      v6 = v5[1];
      v7 = *v5;
      if ( v5[2] < (unsigned __int64)(v6 + 1) )
      {
        v8 = qvector_reserve(v5, v7, v6 + 1, 1);
        *v5 = v8;
        v7 = v8;
        v6 = v5[1];
      }
      *(_BYTE *)(v7 + v6) = -85;
      ++v5[1];
      ++*(_DWORD *)(a1 + 200);
      sub_764370(a1, 0);
      sub_764370(a1, 0);
      return 0;
    }
    else
    {
      sub_764130(a1);
      return 0;
    }
  }
  else
  {
    sub_76C240(*(_QWORD *)(a1 + 192), v2, (unsigned int)(v3 - 4 - v2));
    *(_BYTE *)(a1 + 204) = -1;
    return 0;
  }
}

