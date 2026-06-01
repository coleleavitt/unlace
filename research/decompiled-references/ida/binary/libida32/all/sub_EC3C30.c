__int64 __fastcall sub_EC3C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  unsigned int v7; // r14d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v12; // rax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ebp
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebp
  __int64 v21; // rax
  int v22; // edx
  unsigned int v25; // [rsp+18h] [rbp-50h]
  int v26; // [rsp+18h] [rbp-50h]
  int v27; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v28[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( a3 )
  {
    v7 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( a5 > v9 && (v14 = sub_B4F350(*(_QWORD *)(a4 + 8 * v9))) != 0 )
      {
        v28[0] = a1;
        v26 = v14 - 1;
        if ( (unsigned int)sub_FBABF0(v28) )
        {
          if ( v26 )
          {
            v15 = sub_FBAC20(v28, v7);
            v16 = 1;
            if ( v15 )
              v16 = **(_QWORD **)(v15 + 16) + 1;
            v13 = v26 - v16;
            goto LABEL_15;
          }
          goto LABEL_6;
        }
      }
      else
      {
        v28[0] = a1;
        if ( (unsigned int)sub_FBABF0(v28) )
          goto LABEL_6;
      }
      if ( a6 )
      {
        v12 = sub_FBAC20(v28, 0);
        v13 = a6;
        if ( v12 )
          v13 = a6 - **(_DWORD **)(v12 + 16);
LABEL_15:
        if ( *(_DWORD *)(a2 + 4 * v9) == v13 )
          goto LABEL_16;
LABEL_7:
        v25 = 0;
        v10 = 0;
        while ( 2 )
        {
          if ( a5 > v10 && (v19 = sub_B4F350(*(_QWORD *)(a4 + 8 * v10)), (v20 = v19) != 0) )
          {
            v28[0] = a1;
            v27 = v19 - 1;
            if ( (unsigned int)sub_FBABF0(v28) )
            {
              if ( v27 )
              {
                v21 = sub_FBAC20(v28, v25);
                v22 = 1;
                if ( v21 )
                  v22 = **(_QWORD **)(v21 + 16) + 1;
                v17 = v20 - 2 - v22;
                goto LABEL_26;
              }
LABEL_11:
              if ( *(_DWORD *)(a2 + 4 * v10) )
                return 0;
LABEL_27:
              v10 = ++v25;
              if ( v25 == a3 )
                return 2;
              continue;
            }
          }
          else
          {
            v28[0] = a1;
            if ( (unsigned int)sub_FBABF0(v28) )
              goto LABEL_11;
          }
          break;
        }
        if ( !a6 )
          goto LABEL_11;
        v17 = a6;
        v18 = sub_FBAC20(v28, 0);
        if ( v18 )
          v17 = a6 - **(_DWORD **)(v18 + 16);
LABEL_26:
        if ( *(_DWORD *)(a2 + 4 * v10) != v17 )
          return 0;
        goto LABEL_27;
      }
LABEL_6:
      if ( *(_DWORD *)(a2 + 4 * v9) )
        goto LABEL_7;
LABEL_16:
      v9 = ++v7;
      if ( v7 == a3 )
        return 1;
    }
  }
  return 1;
}

