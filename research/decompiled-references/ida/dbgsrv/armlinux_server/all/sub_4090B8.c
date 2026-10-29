/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4090B8
// Address: 0x00000000004090B8

//----- (00000000004090B8) ----------------------------------------------------
__int64 __fastcall sub_4090B8(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // x19
  __int64 v7; // x0
  _DWORD *v8; // x22
  __int64 v10; // x2
  __int64 v11; // x0
  unsigned __int64 v12; // x1
  unsigned __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x0
  __int64 v17; // x3
  unsigned int v18; // w1
  __int64 v19; // x1
  _WORD *v20; // x4
  __int64 v21; // x0
  size_t v22; // x2
  const void *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  unsigned __int64 v26; // x2

  if ( !a5 )
    return 0;
  v5 = a4;
  v7 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 100) = a2;
  if ( a4 )
  {
    v8 = a5;
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 664);
    do
    {
      v12 = a3 + (int)v10;
      if ( v12 < *(_QWORD *)(v11 + 24) )
      {
        *(_DWORD *)(v11 + 96) |= *(unsigned __int8 *)(**(_QWORD **)(v11 + 8) + 32 * v12 + 12);
        v11 = *(_QWORD *)(a1 + 664);
      }
      ++v10;
    }
    while ( v10 != a4 );
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      v13 = a3;
      v14 = 0;
      v15 = *(_QWORD *)(a1 + 664);
      if ( (unsigned __int64)a3 < *(_QWORD *)(v15 + 24) )
      {
        do
        {
          v17 = *(_QWORD *)(v15 + 16) + 40 * v13;
          v18 = *(_DWORD *)v17;
          if ( *(_DWORD *)v17 == 3 )
          {
            (*(void (**)(void))(v17 + 24))();
            v15 = *(_QWORD *)(a1 + 664);
          }
          else
          {
            v20 = (_WORD *)(v15 + *(_QWORD *)(v17 + 16));
            if ( v18 )
            {
              if ( v18 <= 2 )
              {
                v21 = *(_QWORD *)(v17 + 24);
                if ( (int)*v8 < -1 )
                {
                  if ( *v8 == -2 )
                  {
                    if ( v21 != 8 )
                      return 0;
                  }
                  else if ( v21 )
                  {
                    return 0;
                  }
                  v23 = v8 + 2;
                  v22 = *(_QWORD *)(v17 + 24);
                }
                else
                {
                  v22 = (int)v8[4];
                  if ( v22 != v21 )
                    return 0;
                  v23 = *((const void **)v8 + 1);
                }
                memcpy(v20, v23, v22);
                v15 = *(_QWORD *)(a1 + 664);
              }
            }
            else
            {
              v24 = *(_QWORD *)(v17 + 32);
              v25 = *((_QWORD *)v8 + 1);
              switch ( v24 )
              {
                case 2LL:
                  v25 = (unsigned __int16)*((_QWORD *)v8 + 1);
                  break;
                case 4LL:
                  v25 = (unsigned int)*((_QWORD *)v8 + 1);
                  break;
                case 1LL:
                  v25 = (unsigned __int8)*((_QWORD *)v8 + 1);
                  break;
              }
              v26 = *(_QWORD *)(v17 + 24);
              if ( v26 == 2 )
              {
                *v20 = v25;
                v15 = *(_QWORD *)(a1 + 664);
              }
              else if ( v26 <= 2 )
              {
                if ( v26 == 1 )
                {
                  *(_BYTE *)v20 = v25;
                  v15 = *(_QWORD *)(a1 + 664);
                }
              }
              else if ( v26 == 4 )
              {
                *(_DWORD *)v20 = v25;
                v15 = *(_QWORD *)(a1 + 664);
              }
              else if ( v26 == 8 )
              {
                *(_QWORD *)v20 = v25;
                v15 = *(_QWORD *)(a1 + 664);
              }
            }
          }
          ++v14;
          v8 += 8;
          v19 = v15;
          if ( v14 == v5 )
            return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
          v13 = a3 + (int)v14;
        }
        while ( v13 < *(_QWORD *)(v15 + 24) );
      }
      if ( !under_debugger )
        sub_492270(3258);
      __break(0x3E8u);
    }
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 24LL))(*(_QWORD *)(a1 + 664)) )
    return 0;
  v19 = *(_QWORD *)(a1 + 664);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
}
// 52451C: using guessed type char under_debugger;
