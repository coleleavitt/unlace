void __fastcall sub_10ACA20(int a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax

  if ( a1 == 15 )
  {
    v17 = *(unsigned int *)(a2 + 8);
    if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, v17 + 1, 16);
      v17 = *(unsigned int *)(a2 + 8);
    }
    v18 = (_QWORD *)(*(_QWORD *)a2 + 16 * v17);
    *v18 = "all";
    v18[1] = 3;
    ++*(_DWORD *)(a2 + 8);
  }
  else
  {
    if ( a1 )
    {
      if ( (a1 & 4) != 0 )
      {
        v10 = *(unsigned int *)(a2 + 8);
        if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_22134E0(a2, a2 + 16, v10 + 1, 16);
          v10 = *(unsigned int *)(a2 + 8);
        }
        v11 = (_QWORD *)(*(_QWORD *)a2 + 16 * v10);
        *v11 = "custom";
        v11[1] = 6;
        ++*(_DWORD *)(a2 + 8);
        if ( (a1 & 8) == 0 )
        {
LABEL_5:
          v3 = a1 & 2;
          if ( (a1 & 1) != 0 )
          {
LABEL_6:
            v4 = *(unsigned int *)(a2 + 8);
            v5 = *(unsigned int *)(a2 + 12);
            v6 = v4 + 1;
            if ( v3 )
            {
              if ( v5 < v6 )
              {
                sub_22134E0(a2, a2 + 16, v6, 16);
                v4 = *(unsigned int *)(a2 + 8);
              }
              v16 = (_QWORD *)(*(_QWORD *)a2 + 16 * v4);
              *v16 = "function";
              v16[1] = 8;
              ++*(_DWORD *)(a2 + 8);
            }
            else
            {
              if ( v5 < v6 )
              {
                sub_22134E0(a2, a2 + 16, v6, 16);
                v4 = *(unsigned int *)(a2 + 8);
              }
              v7 = (_QWORD *)(*(_QWORD *)a2 + 16 * v4);
              *v7 = "function-entry";
              v7[1] = 14;
              ++*(_DWORD *)(a2 + 8);
            }
            return;
          }
          goto LABEL_10;
        }
      }
      else if ( (a1 & 8) == 0 )
      {
        goto LABEL_5;
      }
      v8 = *(unsigned int *)(a2 + 8);
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v8 + 1, 16);
        v8 = *(unsigned int *)(a2 + 8);
      }
      v9 = (_QWORD *)(*(_QWORD *)a2 + 16 * v8);
      *v9 = "typed";
      v3 = a1 & 2;
      v9[1] = 5;
      ++*(_DWORD *)(a2 + 8);
      if ( (a1 & 1) != 0 )
        goto LABEL_6;
LABEL_10:
      if ( v3 )
      {
        v14 = *(unsigned int *)(a2 + 8);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_22134E0(a2, a2 + 16, v14 + 1, 16);
          v14 = *(unsigned int *)(a2 + 8);
        }
        v15 = (_QWORD *)(*(_QWORD *)a2 + 16 * v14);
        *v15 = "function-exit";
        v15[1] = 13;
        ++*(_DWORD *)(a2 + 8);
      }
      return;
    }
    v12 = *(unsigned int *)(a2 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, v12 + 1, 16);
      v12 = *(unsigned int *)(a2 + 8);
    }
    v13 = (_QWORD *)(*(_QWORD *)a2 + 16 * v12);
    *v13 = "none";
    v13[1] = 4;
    ++*(_DWORD *)(a2 + 8);
  }
}

