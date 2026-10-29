__int64 __fastcall sub_2245EF0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  _DWORD *v9; // rbx
  unsigned __int64 v14; // r8
  _BYTE *v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // edx
  _BYTE *v23; // r10
  __int64 j; // rcx
  int v25; // edx
  unsigned int v26; // esi
  unsigned int v27; // r11d
  __int64 i; // rcx
  unsigned int v30; // esi
  unsigned int v31; // edx
  int v32; // [rsp+8h] [rbp-170h]
  _DWORD *v33; // [rsp+8h] [rbp-170h]
  unsigned __int64 v34; // [rsp+8h] [rbp-170h]
  _BYTE *v36; // [rsp+30h] [rbp-148h] BYREF
  __int64 v37; // [rsp+38h] [rbp-140h]
  _BYTE s[312]; // [rsp+40h] [rbp-138h] BYREF

  if ( !a6 )
    goto LABEL_5;
  v6 = a6 + 1;
  v7 = a4 - a2;
  if ( a2 > a4 )
    v7 = a2 - a4;
  if ( a6 >= v7 )
  {
LABEL_5:
    v9 = s;
    v36 = s;
    v37 = 0x4000000000LL;
    v14 = a4 + 1;
    if ( a4 != -1 )
    {
      v15 = s;
      if ( v14 > 0x40 )
      {
        v34 = a4 + 1;
        sub_2237220((__int64)&v36, s, a4 + 1, 4);
        v9 = v36;
        v14 = v34;
        v15 = &v36[4 * (unsigned int)v37];
      }
      v16 = &v9[v14];
      if ( v16 != v15 )
      {
        v32 = v14;
        memset(v15, 0, 4 * ((unsigned __int64)(v16 - v15 - 4) >> 2) + 4);
        LODWORD(v14) = v32;
      }
      LODWORD(v37) = v14;
      if ( (unsigned int)v14 > 1 )
      {
        v17 = 1;
        v18 = 1;
        do
        {
          v9[v17] = v18;
          v17 = (unsigned int)(v18 + 1);
          v18 = v17;
        }
        while ( (unsigned int)v37 > (unsigned int)v17 );
      }
    }
    if ( a2 )
    {
      v19 = 0;
      v20 = 1;
      v33 = v36;
      while ( 1 )
      {
        v21 = v20;
        *v9 = v20;
        v22 = v19;
        v23 = (_BYTE *)(v19 + a1);
        if ( a4 )
        {
          if ( a5 )
          {
            v27 = v20;
            for ( i = 1; ; ++i )
            {
              v30 = v9[i];
              v31 = (*(_BYTE *)(i + a3 - 1) != *v23) + v22;
              if ( v21 > v30 )
                v21 = v9[i];
              if ( v31 <= ++v21 )
                v21 = v31;
              v9[i] = v21;
              if ( v27 > v21 )
                v27 = v21;
              if ( a4 == i )
                break;
              v22 = v30;
            }
          }
          else
          {
            for ( j = 1; ; ++j )
            {
              v26 = v9[j];
              if ( *(_BYTE *)(j + a3 - 1) == *v23 )
              {
                v9[j] = v22;
              }
              else
              {
                v25 = v9[j];
                if ( v9[j - 1] <= v26 )
                  v25 = v9[j - 1];
                v22 = v25 + 1;
                v9[j] = v22;
              }
              if ( v22 < v21 )
                v21 = v22;
              if ( a4 == j )
                break;
              v22 = v26;
            }
            v27 = v21;
          }
        }
        else
        {
          v27 = v20;
        }
        if ( a6 && a6 < v27 )
          break;
        ++v20;
        v9 = v33;
        ++v19;
        if ( a2 < v20 )
          goto LABEL_31;
      }
      v6 = a6 + 1;
      v9 = v33;
    }
    else
    {
LABEL_31:
      v6 = v9[a4];
    }
    if ( v9 != (_DWORD *)s )
      free(v9);
  }
  return v6;
}
