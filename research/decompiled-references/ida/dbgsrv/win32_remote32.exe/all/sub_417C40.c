/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417C40
// Address: 0x00417C40

//----- (00417C40) --------------------------------------------------------
bool __stdcall sub_417C40(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // ebp
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // edx
  _DWORD *v10; // esi
  unsigned int v11; // edi
  int *v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _DWORD *v23; // [esp+18h] [ebp+8h]
  int v24; // [esp+24h] [ebp+14h]

  if ( !a5 )
    return 0;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 260);
  *(_DWORD *)(v6 + 56) = a2;
  *(_DWORD *)(v6 + 52) = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = 20 * a3;
    do
    {
      v9 = *(_DWORD *)(a1 + 260);
      if ( v7 + a3 < *(_DWORD *)(v9 + 12) )
        *(_DWORD *)(v9 + 52) |= *(unsigned __int8 *)(**(_DWORD **)(v9 + 4) + v8 + 8);
      ++v7;
      v8 += 20;
    }
    while ( v7 < a4 );
    v10 = (_DWORD *)(a1 + 260);
  }
  else
  {
    v10 = (_DWORD *)(a1 + 260);
  }
  v23 = v10;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 260) + 8))(*(_DWORD *)(a1 + 260)) )
    return 0;
  v11 = 0;
  if ( a4 )
  {
    v12 = (int *)(a5 + 8);
    v13 = 20 * a3;
    v24 = 20 * a3;
    while ( 1 )
    {
      v14 = *v10;
      if ( v11 + v5 >= *(_DWORD *)(*v10 + 12) )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3258);
      }
      v15 = v13 + *(_DWORD *)(v14 + 8);
      if ( *(_DWORD *)v15 == 3 )
      {
        (*(void (__cdecl **)(int, int *, _DWORD))(v15 + 12))(v14, v12 - 2, *(_DWORD *)(v15 + 16));
      }
      else
      {
        v16 = v14 + *(_DWORD *)(v15 + 8);
        switch ( *(_DWORD *)v15 )
        {
          case 0:
            v17 = sub_4175C0((_DWORD *)v15, *v12, v12[1]);
            switch ( *(_DWORD *)(v15 + 12) )
            {
              case 1:
                *(_BYTE *)v16 = v17;
                break;
              case 2:
                *(_WORD *)v16 = v17;
                break;
              case 4:
                *(_DWORD *)v16 = v17;
                break;
              case 8:
                *(_DWORD *)v16 = v17;
                *(_DWORD *)(v16 + 4) = v18;
                break;
              default:
                goto LABEL_30;
            }
            goto LABEL_30;
          case 1:
          case 2:
            v19 = *(v12 - 2);
            if ( v19 < -1 )
            {
              v20 = 0;
              if ( v19 == -2 )
                v20 = 8;
            }
            else
            {
              v20 = v12[1];
            }
            if ( v20 != *(_DWORD *)(v15 + 12) )
              return 0;
            if ( v19 < -1 )
              v21 = (unsigned int)v12;
            else
              v21 = *v12;
            sub_464310(v16, v21, v20);
LABEL_30:
            v5 = a3;
            break;
          case 3:
            if ( byte_4B70F0 )
              __debugbreak();
            sub_4533F0(3257);
          default:
            goto LABEL_30;
        }
      }
      v24 += 20;
      ++v11;
      v12 += 6;
      if ( v11 >= a4 )
        break;
      v13 = v24;
      v10 = v23;
    }
    v10 = (_DWORD *)(a1 + 260);
  }
  return (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 12))(*v10) != 0;
}
// 417D5C: variable 'v18' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
