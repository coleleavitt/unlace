__int64 __fastcall sub_E0B9D0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r9
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // r10
  __int64 v16; // rdi
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // r14d
  _QWORD *v23; // rax
  _QWORD *v24; // r12
  _QWORD *v25; // r13
  void *v26; // rdi
  __int64 v27; // r12
  int v29; // edx
  int v30; // edx

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 592);
  result = *(unsigned int *)(a1 + 600);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v6 = v2 >> 3;
    else
      LODWORD(v6) = *(_DWORD *)(v2 - 8);
  }
  else
  {
    LODWORD(v6) = -1640531495;
  }
  v7 = result - 1;
  v8 = 24 * result;
  v9 = v4 + 24 * result;
  v10 = 24LL * ((unsigned int)v6 & ((_DWORD)result - 1));
  v11 = v4 + v10;
  if ( v10 != 24 * result )
  {
    for ( result = v4 + v10; v9 != result; result += 24 )
    {
      v12 = *(_DWORD *)(result + 4);
      if ( v12 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v2 )
        {
LABEL_11:
          v13 = *(_QWORD *)(result + 16);
          if ( v2 )
          {
            if ( (v2 & 7) == 1 )
              v14 = v2 >> 3;
            else
              LODWORD(v14) = *(_DWORD *)(v2 - 8);
          }
          else
          {
            LODWORD(v14) = -1640531495;
          }
          v15 = (unsigned int)v14 & v7;
          result = 24 * v15;
          v16 = v4 + 24 * v15;
          if ( v8 != 24 * v15 )
          {
            for ( result = v4 + 24 * v15; v9 != result; result += 24 )
            {
              v17 = *(_DWORD *)(result + 4);
              if ( v17 == 2 )
              {
                if ( (_DWORD)v14 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v2 )
                {
LABEL_21:
                  v18 = result + 24;
                  v19 = *(unsigned int *)(a1 + 604);
                  if ( v9 == result + 24 )
                    v18 = v4;
                  v20 = v19 - 1;
                  if ( *(_DWORD *)(v18 + 4) )
                  {
                    *(_DWORD *)(result + 4) = 1;
                    v21 = *(_DWORD *)(a1 + 608);
                    *(_DWORD *)(a1 + 604) = v20;
                    result = (unsigned int)(v21 + 1);
                    if ( v20 < 0x40 )
                      v20 = 64;
                    *(_DWORD *)(a1 + 608) = result;
                    if ( v20 < (unsigned int)result )
                    {
                      result = sub_186AF10(v19);
                      if ( !(_BYTE)result )
                      {
                        v22 = *(_DWORD *)(a1 + 600);
                        v23 = (_QWORD *)sub_186B270(24LL * v22);
                        v24 = v23;
                        v25 = &v23[3 * v22];
                        if ( v22 )
                        {
                          do
                          {
                            *v23 = 0;
                            v23 += 3;
                            *(v23 - 2) = 0;
                          }
                          while ( v23 != v25 );
                        }
                        result = sub_E104E0(
                                   *(_QWORD *)(a1 + 592),
                                   *(unsigned int *)(a1 + 600),
                                   v24,
                                   *(unsigned int *)(a1 + 600));
                        v26 = *(void **)(a1 + 592);
                        if ( v26 )
                          result = sub_186B220(v26);
                        *(_QWORD *)(a1 + 592) = v24;
                        *(_DWORD *)(a1 + 608) = 0;
                      }
                    }
                  }
                  else
                  {
                    *(_DWORD *)(result + 4) = 0;
                    *(_DWORD *)(a1 + 604) = v20;
                  }
                  goto LABEL_33;
                }
              }
              else if ( !v17 )
              {
                goto LABEL_33;
              }
            }
          }
          if ( v4 != v16 )
          {
            for ( result = v4; v16 != result; result += 24 )
            {
              v30 = *(_DWORD *)(result + 4);
              if ( v30 == 2 )
              {
                if ( (_DWORD)v14 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v2 )
                  goto LABEL_21;
              }
              else if ( !v30 )
              {
                break;
              }
            }
          }
LABEL_33:
          v27 = *(_QWORD *)(a1 + 320);
          if ( !v27 )
          {
            v27 = sub_186B270(0x210u);
            result = sub_17F71C0(v27);
            *(_QWORD *)(a1 + 320) = v27;
          }
          if ( (*(_DWORD *)(v13 + 4))-- == 1 )
            return sub_17F9000(v27);
          return result;
        }
      }
      else if ( !v12 )
      {
        return result;
      }
    }
  }
  if ( v4 != v11 )
  {
    for ( result = v4; v11 != result; result += 24 )
    {
      v29 = *(_DWORD *)(result + 4);
      if ( v29 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v2 )
          goto LABEL_11;
      }
      else if ( !v29 )
      {
        return result;
      }
    }
  }
  return result;
}

