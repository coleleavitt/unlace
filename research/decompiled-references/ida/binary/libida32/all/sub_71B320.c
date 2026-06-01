__int64 __fastcall sub_71B320(__m128i **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __m128i **v6; // rbx
  int v7; // ebp
  char *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  char *v14; // r12
  int v15; // edx

  if ( !(_DWORD)a2 )
    goto LABEL_11;
  v6 = a1;
  v7 = a2;
  v8 = sub_7188E0(a1[1], a2, 0, a4, a5, a6);
  if ( v8 )
  {
    v9 = memset(v8, 0, *(unsigned int *)a1);
    *v9 = 0;
    v9[1] = *((_DWORD *)a1 + 8);
    sub_718590((__int64)a1[1], (__int64)v9);
    a2 = *((unsigned int *)a1 + 8);
    --*((_DWORD *)a1 + 6);
    if ( !(_DWORD)a2 )
      goto LABEL_4;
    a1 = (__m128i **)a1[1];
    v14 = sub_7188E0((__m128i *)a1, a2, 0, v10, v11, v12);
    if ( v14 )
    {
      if ( (unsigned int)((*(_DWORD *)v6 >> 2) - 4) >= *(_DWORD *)v14 )
      {
        sub_718590((__int64)v6[1], (__int64)v14);
        v15 = *(_DWORD *)v14;
        if ( (*(_DWORD *)v6 >> 2) - 4 != *(_DWORD *)v14 )
        {
          *(_DWORD *)&v14[4 * v15 + 8] = v7;
          *(_DWORD *)v14 = v15 + 1;
          return 1;
        }
LABEL_4:
        *((_DWORD *)v6 + 8) = v7;
        return 1;
      }
LABEL_11:
      sub_722BF0(a1, a2, a3);
    }
  }
  return 0;
}

