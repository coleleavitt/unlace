/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_767F0
// Address: 0x000767F0

//----- (000767F0) --------------------------------------------------------
_DWORD *__userpurge sub_767F0@<eax>(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned __int8 *v5; // edi
  bool v6; // cf
  unsigned int v7; // eax
  size_t v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned int v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // ebx
  int *v14; // ecx
  int v15; // edx
  unsigned int v16; // edi
  unsigned int v17; // edx
  int **v18; // eax
  int *v19; // esi
  unsigned int v20; // eax
  unsigned __int8 v21; // cl
  int v22; // edx
  int v23; // ecx
  size_t v25; // [esp+4h] [ebp-28h]
  unsigned int v26; // [esp+8h] [ebp-24h]
  unsigned __int8 *v27; // [esp+10h] [ebp-1Ch]
  unsigned int v28; // [esp+18h] [ebp-14h]

  v3 = *a3;
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_DWORD *)a3 + 1);
    v5 = *((unsigned __int8 **)a3 + 2);
  }
  else
  {
    v5 = a3 + 1;
    v4 = v3 >> 1;
  }
  v6 = v4 < 4;
  v7 = v4;
  v8 = v4;
  v9 = v5;
  v25 = v8;
  if ( !v6 )
  {
    v7 = v8;
    v10 = v8;
    v11 = v5;
    do
    {
      v7 = (1540483477 * ((1540483477 * *(_DWORD *)v11) ^ ((unsigned int)(1540483477 * *(_DWORD *)v11) >> 24)))
         ^ (1540483477 * v7);
      v11 += 4;
      v10 -= 4;
    }
    while ( v10 > 3 );
    v12 = (v25 - 4) & 0xFFFFFFFC;
    v9 = &v5[v12 + 4];
    v8 = v25 - 4 - v12;
  }
  switch ( v8 )
  {
    case 1u:
      goto LABEL_13;
    case 2u:
LABEL_12:
      v7 ^= v9[1] << 8;
LABEL_13:
      v7 = 1540483477 * (v7 ^ *v9);
      break;
    case 3u:
      v7 ^= v9[2] << 16;
      goto LABEL_12;
  }
  v13 = a2[1];
  v14 = nullptr;
  if ( v13 )
  {
    v27 = v5;
    v15 = v7 ^ (v7 >> 13);
    v16 = (1540483477 * v15) ^ ((unsigned int)(1540483477 * v15) >> 15);
    v28 = v13 - 1;
    if ( (v13 & (v13 - 1)) != 0 )
    {
      v17 = (1540483477 * v15) ^ ((unsigned int)(1540483477 * v15) >> 15);
      if ( v16 >= v13 )
        v17 = v16 % v13;
    }
    else
    {
      v17 = (v13 - 1) & v16;
    }
    v18 = *(int ***)(*a2 + 4 * v17);
    if ( v18 )
    {
      v19 = *v18;
      if ( *v18 )
      {
        v26 = v17;
        while ( 1 )
        {
          v20 = v19[1];
          if ( v20 == v16 )
          {
            v21 = *((_BYTE *)v19 + 8);
            v22 = v21 >> 1;
            if ( (v21 & 1) != 0 )
              v22 = v19[3];
            if ( v22 == v25 )
            {
              if ( (v21 & 1) != 0 )
              {
                if ( !v25 || !memcmp((const void *)v19[4], v27, v25) )
                {
LABEL_41:
                  v14 = v19;
                  break;
                }
              }
              else
              {
                if ( !v25 )
                  goto LABEL_41;
                v23 = 0;
                while ( *((_BYTE *)v19 + v23 + 9) == v27[v23] )
                {
                  if ( *((unsigned __int8 *)v19 + 8) >> 1 == ++v23 )
                    goto LABEL_41;
                }
              }
            }
          }
          else
          {
            if ( (v13 & v28) != 0 )
            {
              if ( v20 >= v13 )
                v20 %= v13;
            }
            else
            {
              v20 &= v28;
            }
            if ( v20 != v26 )
            {
LABEL_42:
              v14 = nullptr;
              break;
            }
          }
          v19 = (int *)*v19;
          if ( !v19 )
            goto LABEL_42;
        }
      }
    }
  }
  *a1 = v14;
  return a1;
}
