__int64 __fastcall sub_A55F80(__int64 a1, double a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  __int64 v6; // r12
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // r8
  _DWORD *v10; // rcx
  unsigned int *v11; // r8
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r11
  int v16; // edx
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r12
  int v20; // r9d
  unsigned int v21; // esi
  unsigned int i; // r8d
  int v23; // r14d
  __int64 v24; // rdx
  _DWORD *v25; // r10
  _DWORD *v26; // rsi
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r13
  int v30; // r10d
  unsigned int v31; // esi
  unsigned int j; // r9d
  int v33; // r15d
  __int64 v34; // rdx
  _DWORD *v35; // r11
  _DWORD *v36; // rsi
  unsigned int v37; // ecx

  v3 = *(_DWORD *)(a1 + 944) + 1;
  *(_DWORD *)(a1 + 944) = v3;
  if ( v3 == -1 )
    sub_98ACA0(a1 + 944);
  *(_BYTE *)(a1 + 960) = 0;
  v4 = 0;
  do
  {
    v14 = *(_QWORD *)(a1 + 928);
    if ( v14 )
    {
      if ( *(_DWORD *)(v14 - 4) == 1 )
        break;
    }
    if ( *(_BYTE *)(a1 + 960) )
    {
      v15 = *(_QWORD *)(a1 + 936);
      v16 = *(_DWORD *)(v14 - 4);
      v8 = *(unsigned int *)(v14 + 4);
      v17 = (_DWORD *)(v15 + 4 * v8);
      if ( v16 == 2 )
      {
        *v17 = 0;
        --*(_DWORD *)(v14 - 4);
      }
      else
      {
        v18 = *(unsigned int *)(v14 + 4LL * (unsigned int)(v16 - 1));
        *(_DWORD *)(v14 + 4) = v18;
        *(_DWORD *)(v15 + 4 * v18) = 1;
        *v17 = 0;
        v19 = *(unsigned int *)(v14 + 4);
        v20 = *(_DWORD *)(v14 - 4) - 1;
        *(_DWORD *)(v14 - 4) = v20;
        if ( v20 <= 2 )
        {
          v26 = (_DWORD *)(v14 + 4);
          i = 1;
LABEL_36:
          *v26 = v19;
          *(_DWORD *)(v15 + 4 * v19) = i;
        }
        else
        {
          v21 = 2;
          for ( i = 1; ; i = v27 )
          {
            v27 = v21 + 1;
            v25 = (_DWORD *)(v14 + 4LL * v21);
            v24 = (unsigned int)*v25;
            if ( v20 <= (int)(v21 + 1) || (v23 = *(_DWORD *)(v14 + 4LL * v27), v23 >= (int)v24) )
            {
              v27 = v21;
              v26 = (_DWORD *)(v14 + 4LL * i);
              if ( (int)v19 <= (int)v24 )
                goto LABEL_36;
            }
            else
            {
              v24 = (unsigned int)v23;
              v25 = (_DWORD *)(v14 + 4LL * v27);
              v26 = (_DWORD *)(v14 + 4LL * i);
              if ( (int)v19 <= v23 )
                goto LABEL_36;
            }
            *v26 = v24;
            v21 = 2 * v27;
            *(_DWORD *)(v15 + 4 * v24) = i;
            if ( v20 <= (int)(2 * v27) )
              break;
          }
          *v25 = v19;
          *(_DWORD *)(v15 + 4 * v19) = v27;
        }
      }
      if ( (_DWORD)v8 == -1 )
        return 1;
      goto LABEL_12;
    }
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 104LL);
    if ( v5 == 1 )
    {
      LODWORD(v8) = sub_9FBBC0(a1, 0);
    }
    else
    {
      if ( v5 != 2 )
      {
        v6 = *(_QWORD *)(a1 + 936);
        v7 = *(_DWORD *)(v14 - 4);
        v8 = *(unsigned int *)(v14 + 4);
        v9 = 4 * v8;
        v10 = (_DWORD *)(v6 + 4 * v8);
        if ( v7 == 2 )
        {
          *v10 = 0;
          --*(_DWORD *)(v14 - 4);
        }
        else
        {
          v28 = *(unsigned int *)(v14 + 4LL * (unsigned int)(v7 - 1));
          *(_DWORD *)(v14 + 4) = v28;
          *(_DWORD *)(v6 + 4 * v28) = 1;
          *v10 = 0;
          v29 = *(unsigned int *)(v14 + 4);
          v30 = *(_DWORD *)(v14 - 4) - 1;
          *(_DWORD *)(v14 - 4) = v30;
          if ( v30 <= 2 )
          {
            v36 = (_DWORD *)(v14 + 4);
            j = 1;
LABEL_45:
            *v36 = v29;
            *(_DWORD *)(v6 + 4 * v29) = j;
          }
          else
          {
            v31 = 2;
            for ( j = 1; ; j = v37 )
            {
              v37 = v31 + 1;
              v35 = (_DWORD *)(v14 + 4LL * v31);
              v34 = (unsigned int)*v35;
              if ( v30 <= (int)(v31 + 1) || (v33 = *(_DWORD *)(v14 + 4LL * v37), v33 >= (int)v34) )
              {
                v37 = v31;
                v36 = (_DWORD *)(v14 + 4LL * j);
                if ( (int)v29 <= (int)v34 )
                  goto LABEL_45;
              }
              else
              {
                v34 = (unsigned int)v33;
                v35 = (_DWORD *)(v14 + 4LL * v37);
                v36 = (_DWORD *)(v14 + 4LL * j);
                if ( (int)v29 <= v33 )
                  goto LABEL_45;
              }
              *v36 = v34;
              v31 = 2 * v37;
              *(_DWORD *)(v6 + 4 * v34) = j;
              if ( v30 <= (int)(2 * v37) )
                break;
            }
            *v35 = v29;
            *(_DWORD *)(v6 + 4 * v29) = v37;
          }
        }
        if ( (_DWORD)v8 == -1 )
          return 1;
        goto LABEL_9;
      }
      LODWORD(v8) = sub_9FBBC0(a1, 1);
    }
    if ( (_DWORD)v8 == -1 )
      return 1;
    if ( *(_BYTE *)(a1 + 960) )
      goto LABEL_12;
    v9 = 4LL * (unsigned int)v8;
LABEL_9:
    v11 = (unsigned int *)(*(_QWORD *)(a1 + 952) + v9);
    v12 = *(_DWORD *)(a1 + 944);
    if ( v12 >= *v11 )
    {
      *v11 = v12 + 1;
    }
    else if ( *(_DWORD *)(*(_QWORD *)(a1 + 464) + 12LL) < (unsigned int)++v4 )
    {
      *(_BYTE *)(a1 + 960) = 1;
    }
LABEL_12:
    result = sub_A55DA0(a1, v8, a2);
    if ( !(_BYTE)result )
      return result;
  }
  while ( !(unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) );
  return 1;
}

