__int64 __fastcall sub_7542B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbx
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 i; // rax
  __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v20; // r12
  _BYTE *v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // r13

  if ( !a1 || (v3 = *(__int64 **)(a1 + 320)) == nullptr )
    return (unsigned int)-102;
  if ( !*v3 )
    return (unsigned int)-100;
  v4 = 0;
  if ( a3 )
  {
    v5 = *((unsigned int *)v3 + 4);
    v6 = v3[23];
    v3[4] = a2;
    v7 = v3[24];
    *((_DWORD *)v3 + 10) = a3;
    v8 = v5;
    v9 = v6 + v5;
    if ( a3 <= v7 )
    {
      if ( a3 <= v9 || !*((_DWORD *)v3 + 78) )
        goto LABEL_9;
    }
    else
    {
      if ( !*((_DWORD *)v3 + 78) )
      {
        a3 = v7;
        *((_DWORD *)v3 + 10) = v7;
        goto LABEL_9;
      }
      if ( a3 <= v9 )
      {
LABEL_9:
        v10 = 0;
        while ( 1 )
        {
          if ( !a3 )
            return v10;
          if ( *((_DWORD *)v3 + 4) )
            goto LABEL_18;
          v11 = v3[23];
          if ( v11 )
          {
            v12 = v3[23];
            if ( v11 > 0x3FFF )
            {
              v12 = 0x4000;
              v11 = 0x4000;
            }
            if ( sub_750CC0((__int64)(v3 + 25))
              || v11 != ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64))v3[26])(
                          v3[32],
                          v3[36],
                          *v3,
                          v11) )
            {
              return (unsigned int)-1;
            }
            v13 = *v3;
            v3[15] += v11;
            v3[23] -= v11;
            v3[1] = v13;
            *((_DWORD *)v3 + 4) = v12;
LABEL_18:
            v14 = v3[37];
            if ( !v14 )
            {
              v15 = *((_DWORD *)v3 + 4);
LABEL_20:
              if ( *((_DWORD *)v3 + 10) <= v15 )
                v15 = *((_DWORD *)v3 + 10);
              if ( v15 )
              {
                for ( i = 0; ; ++i )
                {
                  *(_BYTE *)(v3[4] + i) = *(_BYTE *)(v3[1] + i);
                  if ( v15 - 1 == i )
                    break;
                }
              }
              goto LABEL_26;
            }
            if ( !*((_DWORD *)v3 + 78) )
              goto LABEL_38;
            v15 = *((_DWORD *)v3 + 4);
            if ( v15 )
              goto LABEL_20;
LABEL_35:
            if ( !v3[23] )
              return v10;
            v15 = 0;
LABEL_26:
            v3[20] += v15;
            v10 += v15;
            v17 = sub_74AED0(v3[21], (_BYTE *)v3[4], v15);
            v18 = *((_DWORD *)v3 + 10);
            v3[24] -= v15;
            v3[21] = v17;
            a3 = v18 - v15;
            *((_DWORD *)v3 + 4) -= v15;
            *((_DWORD *)v3 + 10) = a3;
            v3[4] += v15;
            v3[1] += v15;
            v3[6] += v15;
          }
          else
          {
            v14 = v3[37];
            if ( !v14 )
              return v10;
            if ( *((_DWORD *)v3 + 78) )
              goto LABEL_35;
LABEL_38:
            if ( v14 != 12 )
            {
              v20 = v3[6];
              v21 = (_BYTE *)v3[4];
              v4 = sub_74E830((__int64)(v3 + 1), 2);
              if ( v4 >= 0 && v3[7] )
                v4 = -3;
              v22 = v3[6];
              v23 = v22;
              v24 = v3[21];
              if ( v20 > v22 )
                v23 = v22 + 0x100000000LL;
              v25 = v23;
              v3[20] += v23 - v20;
              v10 = v23 + v10 - v20;
              v3[21] = sub_74AED0(v24, v21, (int)v23 - (int)v20);
              v3[24] += v20 - v25;
              if ( v4 == 1 )
                return v10;
              if ( v4 )
                return (unsigned int)v4;
            }
            a3 = *((_DWORD *)v3 + 10);
          }
        }
      }
    }
    a3 = v8 + v6;
    *((_DWORD *)v3 + 10) = v8 + v6;
    goto LABEL_9;
  }
  return (unsigned int)v4;
}
