/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411940
// Address: 0x0000000000411940

//----- (0000000000411940) ----------------------------------------------------
__int64 __fastcall sub_411940(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  unsigned __int8 *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a4 )
  {
    v4 = a4;
    v5 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(v5 + 100) = a2;
    *(_DWORD *)(v5 + 96) = a3;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 24LL))(*(_QWORD *)(a1 + 664)) )
      return 0xFFFFFFFFLL;
    v7 = *(_QWORD *)(a1 + 664);
    v8 = 0;
    if ( !*(_QWORD *)(v7 + 24) )
      return 1;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v7 + 96) & *(unsigned __int8 *)(**(_QWORD **)(v7 + 8) + 32 * v8 + 12)) != 0 )
      {
        v9 = *(_QWORD *)(v7 + 16) + 40 * v8;
        v10 = *(_DWORD *)v9;
        if ( *(_DWORD *)v9 == 3 )
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v9 + 16))(v7, v4, *(_QWORD *)(v9 + 32));
        }
        else
        {
          v11 = (unsigned __int8 *)(v7 + *(_QWORD *)(v9 + 16));
          switch ( v10 )
          {
            case 1:
              sub_411860(v4, v11, *(_QWORD *)(v9 + 24), -1);
              break;
            case 2:
              sub_411860(v4, v11, *(_QWORD *)(v9 + 24), 0);
              break;
            case 0:
              v12 = *(_QWORD *)(v9 + 24);
              if ( v12 != 4 )
              {
                if ( v12 > 4 )
                {
                  if ( v12 == 8 )
                  {
                    v13 = *(_QWORD *)v11;
                    goto LABEL_17;
                  }
                }
                else
                {
                  if ( v12 == 1 )
                  {
                    v13 = *v11;
                    goto LABEL_17;
                  }
                  if ( v12 == 2 )
                  {
                    v13 = *(unsigned __int16 *)v11;
LABEL_17:
                    v14 = *(_QWORD *)(v9 + 32);
                    switch ( v14 )
                    {
                      case 2LL:
                        v13 = (unsigned __int16)v13;
                        break;
                      case 4LL:
                        v13 = (unsigned int)v13;
                        break;
                      case 1LL:
                        v13 = (unsigned __int8)v13;
                        break;
                    }
                    *(_QWORD *)(v4 + 8) = v13;
                    break;
                  }
                }
                v13 = 0;
                goto LABEL_17;
              }
              v13 = *(unsigned int *)v11;
              goto LABEL_17;
          }
        }
      }
      ++v8;
      v4 += 32;
      if ( v8 >= *(_QWORD *)(v7 + 24) )
        return 1;
    }
  }
  return 0xFFFFFFFFLL;
}
