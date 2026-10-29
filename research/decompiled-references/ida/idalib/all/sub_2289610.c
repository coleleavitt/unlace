__int64 __fastcall sub_2289610(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned int v5; // edx
  char *v6; // rdi
  char v7; // si
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char v15; // cl
  size_t v16; // rax
  unsigned __int64 v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_2288910(*(char **)a1, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = *(_DWORD *)(a1 + 40);
    v6 = *(char **)a1;
    if ( v2 == v3 - 1 )
    {
      v8 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( 1 )
      {
        v7 = v6[v4];
        v8 = v4 + 1;
        if ( v7 != 47 && (v7 != 92 || v5 <= 1) )
          break;
        if ( !v4 )
        {
          v8 = 0;
          break;
        }
        if ( v4 - 1 == v2 )
        {
          v8 = v4;
          break;
        }
        --v4;
      }
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 40);
    v6 = *(char **)a1;
    v8 = 0;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 && v3 == v9 && ((v15 = v6[v9 - 1], v15 == 47) || v15 == 92 && v5 > 1) && (v2 == -1 || v8 - 1 > v2) )
  {
    *(_QWORD *)(a1 + 32) = v3 - 1;
    v16 = j__strlen(".");
    *(_QWORD *)(a1 + 16) = ".";
    *(_QWORD *)(a1 + 24) = v16;
  }
  else
  {
    if ( v8 <= v9 )
      v9 = v8;
    v10 = sub_2288500(v6, v9, v5);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = v11;
    if ( v10 <= v11 )
      v12 = v10;
    if ( v8 >= v12 )
    {
      if ( v8 > v11 )
        v8 = *(_QWORD *)(a1 + 8);
      v17[0] = v8 - v12;
    }
    else
    {
      v17[0] = 0;
    }
    v13 = *(_QWORD *)a1 + v12;
    v17[0] = v10;
    *(_QWORD *)(a1 + 16) = v13;
    *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)v17);
  }
  return a1;
}
