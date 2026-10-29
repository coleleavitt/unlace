/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408730
// Address: 0x0000000000408730

//----- (0000000000408730) ----------------------------------------------------
__int64 __fastcall sub_408730(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned __int64 v4; // x20
  __int64 v5; // x4
  __int64 v6; // x4
  _DWORD *v7; // x22
  int v8; // w21
  __int64 v9; // x19
  _QWORD *v10; // x0
  __int64 v11; // x3
  unsigned int v12; // w1
  _WORD *v14; // x4
  size_t v15; // x2
  const void *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  unsigned __int64 v19; // x2

  if ( !a4 )
    return 0xFFFFFFFFLL;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 100) = a2;
  v6 = *(_QWORD *)(a1 + 664);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v6 + 24) )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = a4;
    v8 = a3;
    v9 = a1;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) )
      break;
    v10 = *(_QWORD **)(v9 + 664);
    if ( v4 < v10[3] )
    {
      v11 = v10[2] + 40LL * v8;
      v12 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 == 3 )
      {
        (*(void (**)(void))(v11 + 24))();
        v10 = *(_QWORD **)(v9 + 664);
      }
      else
      {
        v14 = (_WORD *)((char *)v10 + *(_QWORD *)(v11 + 16));
        if ( v12 )
        {
          if ( v12 <= 2 )
          {
            v15 = *(_QWORD *)(v11 + 24);
            if ( (int)*v7 < -1 )
            {
              if ( *v7 == -2 )
              {
                if ( v15 != 8 )
                  return 0xFFFFFFFFLL;
              }
              else if ( v15 )
              {
                return 0xFFFFFFFFLL;
              }
              v16 = v7 + 2;
            }
            else
            {
              if ( v15 != v7[4] )
                return 0xFFFFFFFFLL;
              v16 = *((const void **)v7 + 1);
            }
            memcpy(v14, v16, v15);
            v10 = *(_QWORD **)(v9 + 664);
          }
        }
        else
        {
          v17 = *(_QWORD *)(v11 + 32);
          v18 = *((_QWORD *)v7 + 1);
          switch ( v17 )
          {
            case 2LL:
              v18 = (unsigned __int16)*((_QWORD *)v7 + 1);
              break;
            case 4LL:
              v18 = (unsigned int)*((_QWORD *)v7 + 1);
              break;
            case 1LL:
              v18 = (unsigned __int8)*((_QWORD *)v7 + 1);
              break;
          }
          v19 = *(_QWORD *)(v11 + 24);
          if ( v19 == 2 )
          {
            *v14 = v18;
            v10 = *(_QWORD **)(v9 + 664);
          }
          else if ( v19 <= 2 )
          {
            if ( v19 == 1 )
            {
              *(_BYTE *)v14 = v18;
              v10 = *(_QWORD **)(v9 + 664);
            }
          }
          else if ( v19 == 4 )
          {
            *(_DWORD *)v14 = v18;
            v10 = *(_QWORD **)(v9 + 664);
          }
          else if ( v19 == 8 )
          {
            *(_QWORD *)v14 = v18;
            v10 = *(_QWORD **)(v9 + 664);
          }
        }
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 32LL))(v10) )
        return 1;
      return 0xFFFFFFFFLL;
    }
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3258);
    __break(0x3E8u);
LABEL_7:
    *(_DWORD *)(v6 + 96) |= *(unsigned __int8 *)(**(_QWORD **)(v6 + 8) + 32 * v4 + 12);
    v6 = *(_QWORD *)(a1 + 664);
  }
  return 0xFFFFFFFFLL;
}
// 408760: variable 'a4' is possibly undefined
// 408764: variable 'a3' is possibly undefined
// 4087A8: variable 'v6' is possibly undefined
// 52451C: using guessed type char under_debugger;
