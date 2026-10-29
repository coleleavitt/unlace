__int64 __fastcall sub_157A0E0(__int64 a1, __int64 a2, unsigned int a3, __m128i a4, double a5)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 *v10; // rsi
  bool v11; // zf
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int16 v14; // cx
  __int64 v15; // rax
  __int64 *v17; // rdi
  unsigned __int16 v18; // si
  __int64 *v19; // rdi
  unsigned __int16 v20; // si
  unsigned int v21; // eax
  unsigned __int16 v22; // cx
  __int64 v23; // rdx
  unsigned __int16 v24; // si
  unsigned int v25; // eax
  unsigned __int16 v26; // cx
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v31; // rdi

  v6 = a1 + 16;
  v8 = 0;
  v10 = (__int64 *)(a1 + 16);
  v11 = *(_WORD *)(a2 + 32) == 451;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( !v11 )
  {
    while ( 1 )
    {
      v12 = sub_15785B0(a2, v10, v8, a3, a4, a5);
      v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        break;
      v15 = *(unsigned int *)(a1 + 8);
      if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, v6, v15 + 1, 8);
        v15 = *(unsigned int *)(a1 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v15) = v13;
      v14 = *(_WORD *)(a2 + 32);
      ++*(_DWORD *)(a1 + 8);
      if ( v14 == 451 )
        return a1;
LABEL_5:
      if ( v14 == 66 )
      {
        v17 = *(__int64 **)(a2 + 8);
        *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
        sub_14634E0(v17, (int *)(a2 + 16));
      }
      v10 = *(__int64 **)a1;
      v8 = *(unsigned int *)(a1 + 8);
    }
    v14 = *(_WORD *)(a2 + 32);
    if ( v12 >> 2 )
    {
      if ( v14 == 451 )
        return a1;
      goto LABEL_5;
    }
    if ( v14 == 451 )
      return a1;
    while ( 2 )
    {
      if ( (unsigned __int16)(v14 - 22) > 1u )
      {
        if ( (unsigned __int16)(v14 - 20) <= 1u )
        {
          v20 = *(_WORD *)(a2 + 90);
          if ( v14 == 20 )
          {
            *(_WORD *)(a2 + 90) = v20 + 1;
          }
          else if ( v20 )
          {
            v21 = *(_DWORD *)(a2 + 2792);
            if ( v21 )
            {
              v22 = *(_WORD *)(a2 + 88);
              v23 = *(_QWORD *)(a2 + 2784) + 24LL * v21 - 24;
              do
              {
                if ( v22 == *(_WORD *)(v23 + 14) )
                {
                  if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(a2 + 90) )
                    goto LABEL_25;
                }
                else if ( v22 > *(_WORD *)(v23 + 14) )
                {
                  goto LABEL_25;
                }
                if ( v20 <= *(_WORD *)(v23 + 16) && *(_WORD *)(a2 + 92) <= *(_WORD *)(v23 + 18) )
                  break;
LABEL_25:
                --v21;
                v23 -= 24;
                *(_DWORD *)(a2 + 2792) = v21;
              }
              while ( v21 );
            }
            *(_WORD *)(a2 + 90) = v20 - 1;
          }
          goto LABEL_16;
        }
        if ( (unsigned __int16)(v14 - 24) > 1u )
        {
          if ( (unsigned __int16)(v14 - 14) <= 1u || (unsigned __int16)(v14 - 17) <= 2u )
            goto LABEL_16;
          if ( v14 == 3 )
          {
            sub_1566D30(a2);
          }
          else
          {
            if ( !sub_10CCDE0(v14) )
              goto LABEL_16;
            v30 = *(_DWORD *)(a2 + 20);
            v31 = *(__int64 **)(a2 + 8);
            if ( !v30 )
              v30 = *(_DWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 40) = v30;
            sub_14634E0(v31, (int *)(a2 + 16));
          }
LABEL_17:
          v14 = *(_WORD *)(a2 + 32);
          if ( v14 == 451 )
            return a1;
          continue;
        }
        v24 = *(_WORD *)(a2 + 92);
        if ( v14 == 24 )
        {
          *(_WORD *)(a2 + 92) = v24 + 1;
        }
        else if ( v24 )
        {
          v25 = *(_DWORD *)(a2 + 2792);
          if ( v25 )
          {
            v26 = *(_WORD *)(a2 + 88);
            v27 = *(_QWORD *)(a2 + 2784) + 24LL * v25 - 24;
            do
            {
              if ( v26 == *(_WORD *)(v27 + 14) )
              {
                if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a2 + 90) )
                  goto LABEL_38;
              }
              else if ( v26 > *(_WORD *)(v27 + 14) )
              {
                goto LABEL_38;
              }
              if ( *(_WORD *)(a2 + 90) <= *(_WORD *)(v27 + 16) && v24 <= *(_WORD *)(v27 + 18) )
                break;
LABEL_38:
              --v25;
              v27 -= 24;
              *(_DWORD *)(a2 + 2792) = v25;
            }
            while ( v25 );
          }
          *(_WORD *)(a2 + 92) = v24 - 1;
        }
        goto LABEL_16;
      }
      break;
    }
    v18 = *(_WORD *)(a2 + 88);
    if ( v14 == 22 )
    {
      *(_WORD *)(a2 + 88) = v18 + 1;
      goto LABEL_16;
    }
    if ( !v18 )
    {
LABEL_16:
      v19 = *(__int64 **)(a2 + 8);
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
      sub_14634E0(v19, (int *)(a2 + 16));
      goto LABEL_17;
    }
    v28 = *(_DWORD *)(a2 + 2792);
    if ( !v28 )
    {
LABEL_52:
      *(_WORD *)(a2 + 88) = v18 - 1;
      goto LABEL_16;
    }
    v29 = *(_QWORD *)(a2 + 2784) + 24LL * v28 - 24;
    while ( 1 )
    {
      if ( *(_WORD *)(v29 + 14) == v18 )
      {
        if ( *(_DWORD *)(v29 + 16) == *(_DWORD *)(a2 + 90) )
          goto LABEL_47;
      }
      else if ( *(_WORD *)(v29 + 14) < v18 )
      {
        goto LABEL_47;
      }
      if ( *(_WORD *)(a2 + 90) <= *(_WORD *)(v29 + 16) && *(_WORD *)(a2 + 92) <= *(_WORD *)(v29 + 18) )
        goto LABEL_52;
LABEL_47:
      --v28;
      v29 -= 24;
      *(_DWORD *)(a2 + 2792) = v28;
      if ( !v28 )
        goto LABEL_52;
    }
  }
  return a1;
}
