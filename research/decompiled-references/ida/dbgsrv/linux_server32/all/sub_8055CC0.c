/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055CC0
// Address: 0x08055CC0

//----- (08055CC0) --------------------------------------------------------
int __cdecl sub_8055CC0(int a1, int a2, unsigned int a3, int a4, int *a5)
{
  int *v5; // ebp
  int v6; // edx
  int v7; // edx
  int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // esi
  _DWORD *v11; // edx
  int v12; // eax
  int v13; // ebx
  size_t v14; // eax
  size_t v15; // edx
  const void *v16; // ebx
  int v18; // ebx
  unsigned int v19; // eax
  bool v20; // cc
  int v21; // [esp-18h] [ebp-48h]
  int *v22; // [esp-18h] [ebp-48h]
  int v23; // [esp-14h] [ebp-44h]
  int v24; // [esp-10h] [ebp-40h]
  __int64 v25; // [esp+4h] [ebp-2Ch]
  _BYTE *dest; // [esp+Ch] [ebp-24h]

  v5 = a5;
  if ( !a5 )
    return 0;
  v6 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v6 + 52) = a2;
  *(_DWORD *)(v6 + 48) = 0;
  v7 = *(_DWORD *)(a1 + 340);
  if ( a4 )
  {
    v8 = a4 + a3;
    v9 = a3;
    do
    {
      if ( v9 < *(_DWORD *)(v7 + 12) )
      {
        *(_DWORD *)(v7 + 48) |= *(unsigned __int8 *)(**(_DWORD **)(v7 + 4) + 20 * v9 + 8);
        v7 = *(_DWORD *)(a1 + 340);
      }
      ++v9;
    }
    while ( v8 != v9 );
    v10 = a3;
    if ( (*(unsigned __int8 (__cdecl **)(int))(*(_DWORD *)v7 + 12))(v7) )
    {
      v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v10 >= v11[3] )
            {
              if ( !byte_811F8A1 )
                sub_80CFF40(3258, v21, v23, v24);
              BUG();
            }
            v12 = v11[2] + 20 * v10;
            v13 = *(_DWORD *)v12;
            if ( *(_DWORD *)v12 != 3 )
              break;
            ++v10;
            v22 = v5;
            v5 += 4;
            (*(void (__cdecl **)(_DWORD *, int *, _DWORD))(v12 + 12))(v11, v22, *(_DWORD *)(v12 + 16));
            v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
            if ( v8 == v10 )
              return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
          }
          dest = (char *)v11 + *(_DWORD *)(v12 + 8);
          if ( v13 )
          {
            if ( (unsigned int)(v13 - 1) <= 1 )
            {
              v14 = *(_DWORD *)(v12 + 12);
              if ( *v5 < -1 )
              {
                if ( *v5 == -2 )
                {
                  if ( v14 != 8 )
                    return 0;
                }
                else if ( v14 )
                {
                  return 0;
                }
                v16 = v5 + 1;
                v15 = v14;
              }
              else
              {
                v15 = v5[2];
                if ( v15 != v14 )
                  return 0;
                v16 = (const void *)v5[1];
              }
              memcpy(dest, v16, v15);
              v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
            }
            goto LABEL_17;
          }
          v25 = *(_QWORD *)(v5 + 1);
          v18 = *(_DWORD *)(v12 + 16);
          if ( v18 != 2 )
            break;
          v25 = (unsigned __int16)v25;
LABEL_27:
          v19 = *(_DWORD *)(v12 + 12);
          v20 = v19 <= 4;
          if ( v19 == 4 )
            goto LABEL_34;
LABEL_28:
          if ( v20 )
          {
            if ( v19 == 1 )
            {
              ++v10;
              v5 += 4;
              *dest = v25;
              v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
              if ( v8 == v10 )
                return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
            }
            else if ( v19 == 2 )
            {
              ++v10;
              v5 += 4;
              *(_WORD *)dest = v25;
              v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
              if ( v8 == v10 )
                return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
            }
            else
            {
LABEL_17:
              ++v10;
              v5 += 4;
              if ( v8 == v10 )
                return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
            }
          }
          else
          {
            if ( v19 != 8 )
              goto LABEL_17;
            ++v10;
            v5 += 4;
            *(_QWORD *)dest = v25;
            v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
            if ( v8 == v10 )
              return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
          }
        }
        if ( v18 == 4 )
        {
          HIDWORD(v25) = 0;
          goto LABEL_27;
        }
        if ( v18 != 1 )
          goto LABEL_27;
        v19 = *(_DWORD *)(v12 + 12);
        v25 = (unsigned __int8)v25;
        v20 = v19 <= 4;
        if ( v19 != 4 )
          goto LABEL_28;
LABEL_34:
        ++v10;
        v5 += 4;
        *(_DWORD *)dest = v25;
        v11 = *(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076);
        if ( v8 == v10 )
          return (*(int (__cdecl **)(_DWORD *))(*v11 + 16))(v11);
      }
    }
    return 0;
  }
  if ( !(*(unsigned __int8 (__cdecl **)(_DWORD))(*(_DWORD *)v7 + 12))(*(_DWORD *)(a1 + 340)) )
    return 0;
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)((char *)&off_811D148 + a1 - 135385076) + 16))(*(_UNKNOWN **)((char *)&off_811D148 + a1 - 135385076));
}
// 8056012: variable 'v21' is possibly undefined
// 8056012: variable 'v23' is possibly undefined
// 8056012: variable 'v24' is possibly undefined
// 811D148: using guessed type _UNKNOWN *off_811D148;
// 811F8A1: using guessed type char byte_811F8A1;
