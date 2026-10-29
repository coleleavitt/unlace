__int64 __fastcall sub_14F3760(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 16);
  v4 = v2 + 8 * result;
  if ( v2 != v4 )
  {
    v7 = a1 + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v4 - 8);
        if ( (*(_BYTE *)(v8 + 58) & 2) == 0 )
          break;
        v4 -= 8;
        if ( v2 == v4 )
          return result;
      }
      v9 = *(_QWORD **)(a2 + 8);
      v10 = *(unsigned int *)(a2 + 16);
      v11 = &v9[v10];
      v12 = (8 * v10) >> 3;
      if ( (8 * v10) >> 5 )
      {
        v13 = v9 + 1;
        if ( *v9 == v8 )
        {
          v14 = *(_QWORD **)(a2 + 8);
        }
        else
        {
          v14 = v9 + 1;
          v13 = v9 + 2;
          if ( v8 != v9[1] )
          {
            v14 = v9 + 2;
            v13 = v9 + 3;
            if ( v8 != v9[2] )
            {
              v14 = v9 + 3;
              v13 = v9 + 4;
              v15 = &v9[4 * ((8 * v10) >> 5)];
              if ( v8 != v9[3] )
              {
                while ( 1 )
                {
                  v14 = v9 + 4;
                  if ( v15 == v9 + 4 )
                  {
                    v12 = v11 - v14;
                    goto LABEL_18;
                  }
                  if ( v8 == v9[4] )
                  {
                    v13 = v9 + 5;
                    goto LABEL_22;
                  }
                  if ( v8 == v9[5] )
                  {
                    v14 = v9 + 5;
                    v13 = v9 + 6;
                    goto LABEL_22;
                  }
                  if ( v8 == v9[6] )
                  {
                    v14 = v9 + 6;
                    v13 = v9 + 7;
                    goto LABEL_22;
                  }
                  if ( v8 == v9[7] )
                    break;
                  v9 += 4;
                }
                v14 = v9 + 7;
                v13 = v9 + 8;
              }
            }
          }
        }
        goto LABEL_22;
      }
      v14 = *(_QWORD **)(a2 + 8);
LABEL_18:
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        v13 = v14 + 1;
        if ( v8 == *v14 )
          goto LABEL_22;
LABEL_33:
        v14 = v13 + 1;
        if ( v8 == *v13 )
        {
          v14 = v13++;
          goto LABEL_22;
        }
LABEL_34:
        v13 = v14 + 1;
        if ( v8 == *v14 )
          goto LABEL_22;
        goto LABEL_21;
      }
      if ( v12 == 1 )
        goto LABEL_34;
LABEL_21:
      v13 = v11 + 1;
      v14 = v11;
LABEL_22:
      if ( v11 != v13 )
      {
        memmove(v14, v13, (char *)v11 - (char *)v13);
        LODWORD(v10) = *(_DWORD *)(a2 + 16);
      }
      *(_DWORD *)(a2 + 16) = v10 - 1;
      result = *(unsigned int *)(a1 + 16);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
      {
        sub_2237220(a1 + 8, v7, result + 1, 8);
        result = *(unsigned int *)(a1 + 16);
      }
      v4 -= 8;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * result) = v8;
      ++*(_DWORD *)(a1 + 16);
      if ( v2 == v4 )
        return result;
    }
    v13 = v14;
    goto LABEL_33;
  }
  return result;
}
