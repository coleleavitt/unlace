/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80559A0
// Address: 0x080559A0

//----- (080559A0) --------------------------------------------------------
int __cdecl sub_80559A0(int a1, int a2, unsigned int a3, int *a4)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int *v10; // ebp
  size_t v11; // edx
  size_t v12; // eax
  const void *v13; // ebx
  int v14; // edi
  int v15; // ecx
  int v16; // ebx
  unsigned int v17; // edx
  int v18; // [esp-20h] [ebp-28h]
  int v19; // [esp-1Ch] [ebp-24h]
  int v20; // [esp-18h] [ebp-20h]

  if ( !a4 )
    return -1;
  v4 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 52) = a2;
  v5 = *(_DWORD *)(a1 + 340);
  if ( a3 < *(_DWORD *)(v5 + 12) )
  {
    *(_DWORD *)(v5 + 48) |= *(unsigned __int8 *)(**(_DWORD **)(v5 + 4) + 20 * a3 + 8);
    v5 = *(_DWORD *)(a1 + 340);
  }
  if ( !(*(unsigned __int8 (__cdecl **)(int))(*(_DWORD *)v5 + 12))(v5) )
    return -1;
  v7 = *(_DWORD **)(a1 + 340);
  if ( a3 >= v7[3] )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(3258, v18, v19, v20);
    JUMPOUT(0x804BFFE);
  }
  v8 = v7[2] + 20 * a3;
  v9 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 == 3 )
  {
    (*(void (__cdecl **)(_DWORD *, int *, _DWORD))(v8 + 12))(v7, a4, *(_DWORD *)(v8 + 16));
    v7 = *(_DWORD **)(a1 + 340);
  }
  else
  {
    v10 = (_DWORD *)((char *)v7 + *(_DWORD *)(v8 + 8));
    if ( v9 )
    {
      if ( (unsigned int)(v9 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(v8 + 12);
        if ( *a4 < -1 )
        {
          if ( *a4 == -2 )
          {
            if ( v11 != 8 )
              return -1;
          }
          else if ( v11 )
          {
            return -1;
          }
          v13 = a4 + 1;
          v12 = v11;
        }
        else
        {
          v12 = a4[2];
          if ( v12 != v11 )
            return -1;
          v13 = (const void *)a4[1];
        }
        memcpy(v10, v13, v12);
        v7 = *(_DWORD **)(a1 + 340);
      }
    }
    else
    {
      v14 = *(_DWORD *)(v8 + 16);
      v15 = a4[1];
      v16 = a4[2];
      switch ( v14 )
      {
        case 2:
          v15 = (unsigned __int16)a4[1];
          v16 = 0;
          break;
        case 4:
          v16 = 0;
          break;
        case 1:
          v15 = (unsigned __int8)a4[1];
          v16 = 0;
          break;
      }
      v17 = *(_DWORD *)(v8 + 12);
      if ( v17 == 4 )
      {
        *v10 = v15;
        v7 = *(_DWORD **)(a1 + 340);
      }
      else if ( v17 > 4 )
      {
        if ( v17 == 8 )
        {
          *v10 = v15;
          v10[1] = v16;
          v7 = *(_DWORD **)(a1 + 340);
        }
      }
      else if ( v17 == 1 )
      {
        *(_BYTE *)v10 = v15;
        v7 = *(_DWORD **)(a1 + 340);
      }
      else if ( v17 == 2 )
      {
        *(_WORD *)v10 = v15;
        v7 = *(_DWORD **)(a1 + 340);
      }
    }
  }
  if ( !(*(unsigned __int8 (__cdecl **)(_DWORD *))(*v7 + 16))(v7) )
    return -1;
  return 1;
}
// 8055BB2: control flows out of bounds to 804BFFE
// 8055BC2: variable 'v18' is possibly undefined
// 8055BC2: variable 'v19' is possibly undefined
// 8055BC2: variable 'v20' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
