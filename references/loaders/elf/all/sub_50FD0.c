unsigned __int64 __fastcall sub_50FD0(_QWORD *a1, _QWORD *a2, int a3, double a4, double a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // r12
  char *v7; // r13
  unsigned int v8; // r15d
  unsigned __int64 result; // rax
  unsigned int v10; // edx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  char *v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // [rsp-10h] [rbp-60h]
  unsigned __int64 v17; // [rsp+0h] [rbp-50h]
  __int64 v18; // [rsp+8h] [rbp-48h]

  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result > 2 )
  {
    if ( under_debugger )
      BUG();
    interr(20098);
    goto LABEL_38;
  }
  v18 = 10;
  v6 = a2;
  v8 = 0;
  while ( a3 != 1 )
  {
    result = v6[37];
    v10 = result;
    if ( a3 != 2 )
      goto LABEL_18;
    v11 = v6[39];
    result = (unsigned int)(result - v11);
    if ( v8 >= (unsigned int)result )
      return result;
LABEL_5:
    result = v11 + v8;
    v5 = v6[36] + 96 * result;
    v12 = *(_QWORD *)(v5 + 32);
    if ( v12 > 1 && *(_BYTE *)(v5 + 93) != 0xFD )
    {
      if ( --v18 )
      {
        v13 = *(unsigned __int16 *)(v5 + 54);
        a4 = 0.0;
        v14 = *(char **)(v5 + 24);
        *(_QWORD *)(v5 + 24) = 0;
        *(_OWORD *)(v5 + 32) = 0;
        if ( !(_WORD)v13 || (unsigned __int16)(v13 + 15) <= 1u )
        {
          v7 = v14;
          goto LABEL_11;
        }
LABEL_25:
        v17 = v12;
        v15 = sub_41070((__int64)a1, *(_QWORD *)(v5 + 80), "set label", a4);
        result = (unsigned __int64)a1;
        if ( v15 < a1[39] )
        {
          result = getseg(v15);
          if ( result )
          {
            if ( !v6[68]
              || (result = *(unsigned int *)(v5 + 88), *(_BYTE *)(v5 + 55) == 0xFF) && !(_DWORD)result
              || result < v6[170] && (result = v6[169] + 32 * result, *(_QWORD *)(result + 16) != -1) )
            {
              *(_BYTE *)(v5 + 93) = 0;
              if ( v17 > 1 )
              {
                sub_4EE50(a1, v15, *(unsigned __int8 *)(v5 + 92), 1, v14, nullptr, 0);
                result = v16;
              }
            }
          }
        }
        v7 = v14;
      }
      else
      {
        show_auto(*(_QWORD *)(v5 + 80), 0);
        v13 = *(unsigned __int16 *)(v5 + 54);
        a5 = 0.0;
        v7 = *(char **)(v5 + 24);
        v12 = *(_QWORD *)(v5 + 32);
        *(_QWORD *)(v5 + 24) = 0;
        *(_OWORD *)(v5 + 32) = 0;
        if ( (_WORD)v13 && (unsigned __int16)(v13 + 15) > 1u )
        {
          v18 = 10;
          v14 = v7;
          goto LABEL_25;
        }
        if ( v12 )
        {
LABEL_38:
          v18 = 10;
          v14 = v7;
        }
        else
        {
          v18 = 10;
          v14 = (char *)&s1;
        }
LABEL_11:
        result = sub_4F510(
                   a1,
                   (__int64)v6,
                   v13,
                   *(_QWORD *)(v5 + 80),
                   0,
                   *(unsigned __int8 *)(v5 + 92),
                   a4,
                   a5,
                   0,
                   v14,
                   nullptr,
                   0);
        *(_QWORD *)(v5 + 80) = result;
        if ( result )
          *(_BYTE *)(v5 + 93) = 0;
      }
      if ( v7 )
        result = qfree(v7);
    }
    ++v8;
  }
  v10 = *((_DWORD *)v6 + 78);
LABEL_18:
  if ( v8 < v10 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  return result;
}
