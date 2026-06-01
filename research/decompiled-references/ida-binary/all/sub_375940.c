__int64 __fastcall sub_375940(__int64 a1, _QWORD *a2, double a3)
{
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 i; // r12
  int *v7; // r13
  __int64 v8; // r15
  __int64 j; // rbx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  char v12; // al
  __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 func; // rax
  __int64 v22; // [rsp+8h] [rbp-60h]
  _DWORD *v23; // [rsp+10h] [rbp-58h]
  unsigned int v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-40h]

  result = *(_QWORD *)(a1 + 440);
  if ( result )
  {
    v4 = *(_QWORD **)(result + 8);
    if ( v4 )
    {
      v25 = v4[40];
      if ( v25 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v7 = (int *)(v4[39] + 40 * i);
          if ( (v7[3] & 1) == 0 )
          {
            v8 = *((_QWORD *)v7 + 3);
            if ( v8 )
            {
              j = 0;
              v22 = (__int64)(v4 + 34);
              do
              {
                v13 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 8 * j);
                v14 = sub_370670(v22, v13);
                if ( v14 )
                {
                  v15 = v4[34];
                  if ( (unsigned __int64)v14 < v15 || (v10 = v15 + 40LL * v4[35], (unsigned __int64)v14 >= v10) )
                  {
                    if ( under_debugger )
                      BUG();
                    interr(40329, v13, v15, v10, a3);
                    goto LABEL_17;
                  }
                  v23 = sub_2B49A0((__int64)(a2 + 39), -858993459 * (unsigned int)((__int64)((__int64)v14 - v15) >> 3));
                  if ( v23 )
                  {
                    v11 = sub_525030(*(_QWORD *)(a1 + 16) + 40LL, (unsigned int)v7[2]);
                    v12 = sub_2B47C0(a2, v11, a3);
                    *((_BYTE *)v23 + 69) = v12;
                    *((_BYTE *)v23 + 71) = v12;
                  }
                }
                ++j;
              }
              while ( j != v8 );
            }
          }
        }
      }
      result = a2[40];
      v22 = result;
      if ( result )
      {
        i = 0;
        for ( j = 0; j != v22; ++j )
        {
          v7 = (int *)(i + a2[39]);
          v18 = *v7;
          if ( v18 < v4[35] )
          {
            v19 = *(_QWORD *)(v4[34] + 40 * v18);
            v24 = calc_bg_color(v19);
            if ( v4[37] == v19 )
            {
LABEL_17:
              v16 = 4521813;
            }
            else
            {
              v20 = getseg(v19);
              if ( v20 && *(_BYTE *)(v20 + 184) == 1 )
              {
                v16 = 15728880;
              }
              else
              {
                func = get_func(v19);
                v16 = v24;
                if ( func && (*(_BYTE *)(func + 16) & 0x84) != 0 )
                {
                  v16 = 16773120;
                }
                else if ( v24 == -1 )
                {
                  goto LABEL_19;
                }
              }
            }
            v17 = sub_525030(*(_QWORD *)(a1 + 16) + 40LL, v16);
            *((_BYTE *)v7 + 69) = sub_2B47C0(a2, v17, a3);
          }
LABEL_19:
          result = v22;
          i += 152;
        }
      }
    }
  }
  return result;
}
