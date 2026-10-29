__int64 __fastcall sub_10E2690(__int64 a1, __int64 a2)
{
  unsigned __int8 **v3; // rbp
  __int64 result; // rax
  unsigned __int8 **v5; // r12
  unsigned __int8 *v6; // r14
  _BYTE *v7; // rax
  __int64 i; // rsi
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  _WORD *v11; // rdx
  const char **v12; // rbp
  const char **v13; // r13
  const char *v14; // r12
  size_t v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdi
  size_t v18; // r14

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    v12 = *(const char ***)(a1 + 256);
    result = *(unsigned int *)(a1 + 264);
    v13 = &v12[result];
    if ( v12 != v13 )
    {
      v14 = *v12;
      if ( *v12 )
        goto LABEL_23;
LABEL_29:
      v17 = *(_BYTE **)(a2 + 32);
      result = a2;
      if ( (unsigned __int64)v17 >= *(_QWORD *)(a2 + 24) )
      {
LABEL_30:
        result = sub_2257CD0(result, 10);
        goto LABEL_27;
      }
      while ( 1 )
      {
        *(_QWORD *)(result + 32) = v17 + 1;
        *v17 = 10;
LABEL_27:
        if ( v13 == ++v12 )
          break;
        v14 = *v12;
        if ( !*v12 )
          goto LABEL_29;
LABEL_23:
        v15 = strlen(v14);
        v16 = *(_QWORD *)(a2 + 24);
        v17 = *(_BYTE **)(a2 + 32);
        v18 = v15;
        if ( v15 <= v16 - (unsigned __int64)v17 )
        {
          result = a2;
          if ( v18 )
          {
            memcpy(v17, v14, v18);
            v16 = *(_QWORD *)(a2 + 24);
            result = a2;
            v17 = (_BYTE *)(v18 + *(_QWORD *)(a2 + 32));
            *(_QWORD *)(a2 + 32) = v17;
          }
        }
        else
        {
          result = sub_22581D0(a2, v14, v15);
          v17 = *(_BYTE **)(result + 32);
          v16 = *(_QWORD *)(result + 24);
        }
        if ( (unsigned __int64)v17 >= v16 )
          goto LABEL_30;
      }
    }
  }
  else
  {
    v3 = *(unsigned __int8 ***)(a1 + 56);
    result = *(unsigned int *)(a1 + 64);
    v5 = &v3[result];
    while ( v5 != v3 )
    {
      v6 = *v3;
      v7 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v7 < *(_QWORD *)(a2 + 24) )
      {
LABEL_4:
        *(_QWORD *)(a2 + 32) = v7 + 1;
        *v7 = 34;
        goto LABEL_5;
      }
      while ( 1 )
      {
        sub_2257CD0(a2, 34);
LABEL_5:
        for ( i = *v6; (_BYTE)i; i = *v6 )
        {
          while ( 1 )
          {
            v9 = *(_BYTE **)(a2 + 32);
            v10 = *(_QWORD *)(a2 + 24);
            if ( (_BYTE)i == 34 || (_BYTE)i == 92 )
              break;
LABEL_8:
            if ( v10 <= (unsigned __int64)v9 )
              goto LABEL_15;
LABEL_9:
            ++v6;
            *(_QWORD *)(a2 + 32) = v9 + 1;
            *v9 = i;
            i = *v6;
            if ( !(_BYTE)i )
              goto LABEL_10;
          }
          if ( (unsigned __int64)v9 >= v10 )
          {
            sub_2257CD0(a2, 92);
            i = *v6;
            v9 = *(_BYTE **)(a2 + 32);
            v10 = *(_QWORD *)(a2 + 24);
            goto LABEL_8;
          }
          *(_QWORD *)(a2 + 32) = v9 + 1;
          *v9 = 92;
          v9 = *(_BYTE **)(a2 + 32);
          i = *v6;
          if ( *(_QWORD *)(a2 + 24) > (unsigned __int64)v9 )
            goto LABEL_9;
LABEL_15:
          ++v6;
          sub_2257CD0(a2, i);
        }
LABEL_10:
        v11 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v11 <= 1u )
          break;
        result = 8226;
        ++v3;
        *v11 = 8226;
        *(_QWORD *)(a2 + 32) += 2LL;
        if ( v5 == v3 )
          return result;
        v6 = *v3;
        v7 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v7 < *(_QWORD *)(a2 + 24) )
          goto LABEL_4;
      }
      ++v3;
      result = sub_22581D0(a2, "\" ", 2);
    }
  }
  return result;
}

