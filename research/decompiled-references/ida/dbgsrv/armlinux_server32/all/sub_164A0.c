/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_164A0
// Address: 0x000164A0

//----- (000164A0) --------------------------------------------------------
int __fastcall sub_164A0(__int64 a1, unsigned int a2, int a3, int *a4)
{
  int *v4; // r8
  int v6; // r2
  int v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r6
  unsigned int v11; // r4
  int v12; // r3
  int v13; // r0
  unsigned int i; // r10
  int v16; // r3
  unsigned int v17; // r1
  _DWORD *v18; // r3
  int v19; // r3
  int *v20; // r7
  size_t v21; // r2
  const void *v22; // r1
  int v23; // lr
  int v24; // r2
  int v25; // r12

  v4 = a4;
  if ( !a4 )
    return 0;
  v6 = *(_DWORD *)(a1 + 340);
  v7 = a1;
  LODWORD(a1) = 0;
  *(_QWORD *)(v6 + 48) = a1;
  if ( a3 )
  {
    v8 = *(_DWORD *)(v7 + 340);
    v9 = a3 + a2;
    v10 = 20 * a2;
    v11 = a2;
    v12 = 20 * a2;
    do
    {
      if ( v11 < *(_DWORD *)(v8 + 12) )
      {
        *(_DWORD *)(v8 + 48) |= *(unsigned __int8 *)(**(_DWORD **)(v8 + 4) + v12 + 8);
        v8 = *(_DWORD *)(v7 + 340);
      }
      ++v11;
      v12 += 20;
    }
    while ( v11 != v9 );
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8) )
    {
      v13 = *(_DWORD *)(v7 + 340);
      if ( *(_DWORD *)(v13 + 12) > a2 )
      {
        for ( i = a2 + 1; ; ++i )
        {
          v16 = *(_DWORD *)(v13 + 8);
          v17 = *(_DWORD *)(v16 + v10);
          v18 = (_DWORD *)(v16 + v10);
          if ( v17 == 3 )
          {
            ((void (*)(void))v18[3])();
            v13 = *(_DWORD *)(v7 + 340);
          }
          else
          {
            v20 = (int *)(v13 + v18[2]);
            if ( v17 )
            {
              if ( v17 <= 2 )
              {
                v21 = v18[3];
                if ( *v4 < -1 )
                {
                  if ( *v4 == -2 )
                  {
                    if ( v21 != 8 )
                      return 0;
                  }
                  else if ( v21 )
                  {
                    return 0;
                  }
                  v22 = v4 + 2;
                }
                else
                {
                  if ( v21 != v4[3] )
                    return 0;
                  v22 = (const void *)v4[2];
                }
                memcpy(v20, v22, v21);
                v13 = *(_DWORD *)(v7 + 340);
              }
            }
            else
            {
              v23 = v18[4];
              v25 = v4[3];
              v24 = v4[2];
              switch ( v23 )
              {
                case 2:
                  v24 = (unsigned __int16)v24;
                  v25 = 0;
                  break;
                case 4:
                  v25 = 0;
                  break;
                case 1:
                  v24 = (unsigned __int8)v4[2];
                  v25 = 0;
                  break;
              }
              switch ( v18[3] )
              {
                case 1:
                  *(_BYTE *)v20 = v24;
                  v13 = *(_DWORD *)(v7 + 340);
                  break;
                case 2:
                  *(_WORD *)v20 = v24;
                  v13 = *(_DWORD *)(v7 + 340);
                  break;
                case 4:
                  *v20 = v24;
                  v13 = *(_DWORD *)(v7 + 340);
                  break;
                case 8:
                  *v20 = v24;
                  v20[1] = v25;
                  v13 = *(_DWORD *)(v7 + 340);
                  break;
                default:
                  break;
              }
            }
          }
          v4 += 6;
          v19 = v13;
          if ( v11 == i )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 16))(v19);
          v10 += 20;
          if ( *(_DWORD *)(v13 + 12) <= i )
            break;
        }
      }
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(3258);
    }
    return 0;
  }
  if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v7 + 340) + 12))(*(_DWORD *)(v7 + 340)) )
    return 0;
  v19 = *(_DWORD *)(v7 + 340);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 16))(v19);
}
// D6C20: using guessed type char under_debugger;
