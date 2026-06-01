/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15D10
// Address: 0x00015D10

//----- (00015D10) --------------------------------------------------------
int __fastcall sub_15D10(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v4; // r4
  int v5; // r5
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r4
  unsigned int v12; // r3
  _DWORD *v13; // r2
  _DWORD *v15; // r4
  size_t v16; // r2
  const void *v17; // r1
  int v18; // r1
  int v19; // r5
  int v20; // r7
  __int64 v21; // kr00_8

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
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5) )
    return -1;
  v9 = *(_DWORD **)(a1 + 340);
  if ( a3 >= v9[3] )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(3258);
  }
  v10 = 5 * a3;
  v11 = v9[2];
  v10 *= 4;
  v12 = *(_DWORD *)(v11 + v10);
  v13 = (_DWORD *)(v10 + v11);
  if ( v12 == 3 )
  {
    ((void (*)(void))v13[3])();
    v9 = *(_DWORD **)(a1 + 340);
  }
  else
  {
    v15 = (_DWORD *)((char *)v9 + v13[2]);
    if ( v12 )
    {
      if ( v12 <= 2 )
      {
        v16 = v13[3];
        if ( (int)*a4 < -1 )
        {
          if ( *a4 == -2 )
          {
            if ( v16 != 8 )
              return -1;
          }
          else if ( v16 )
          {
            return -1;
          }
          v17 = a4 + 2;
        }
        else
        {
          if ( v16 != a4[3] )
            return -1;
          v17 = (const void *)a4[2];
        }
        memcpy(v15, v17, v16);
        v9 = *(_DWORD **)(a1 + 340);
      }
    }
    else
    {
      v18 = v13[4];
      v21 = *((_QWORD *)a4 + 1);
      v20 = a4[3];
      v19 = v21;
      switch ( v18 )
      {
        case 2:
          v19 = (unsigned __int16)v21;
          v20 = 0;
          break;
        case 4:
          v20 = 0;
          break;
        case 1:
          v19 = (unsigned __int8)v21;
          v20 = 0;
          break;
      }
      switch ( v13[3] )
      {
        case 1:
          *(_BYTE *)v15 = v19;
          v9 = *(_DWORD **)(a1 + 340);
          break;
        case 2:
          *(_WORD *)v15 = v19;
          v9 = *(_DWORD **)(a1 + 340);
          break;
        case 4:
          *v15 = v19;
          v9 = *(_DWORD **)(a1 + 340);
          break;
        case 8:
          *v15 = v19;
          v15[1] = v20;
          v9 = *(_DWORD **)(a1 + 340);
          break;
        default:
          break;
      }
    }
  }
  if ( (*(int (__fastcall **)(_DWORD *))(*v9 + 16))(v9) )
    return 1;
  return -1;
}
// D5C00: using guessed type char under_debugger;
