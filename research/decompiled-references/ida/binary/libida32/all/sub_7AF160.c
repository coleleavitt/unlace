__int64 __fastcall sub_7AF160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rdx
  int v9; // eax
  bool v10; // cc
  int v11; // ebp
  int v13; // ebp
  __int64 v14; // rbp
  int v15; // ebp

  v2 = sub_7AE370(a1);
  if ( v2 )
  {
    v3 = *(int *)(a1 + 72);
    v4 = v2;
    v5 = (_QWORD *)sub_7AF050(a1 + 32, *(_DWORD *)(a1 + 72));
    if ( v5 )
    {
      *(_DWORD *)(a2 + 8) = lreadbytes(v4, *v5, v3, *(_DWORD *)(a1 + 104) != 0);
      v6 = deref_idcv(a1 + 32, 0);
      v7 = v6;
      if ( !v6 || *(_BYTE *)v6 != 7 )
      {
        if ( !under_debugger )
          interr(281);
        BUG();
      }
      v8 = haystack;
      if ( *(_QWORD *)(v6 + 16) )
      {
        v8 = *(const char **)(v6 + 8);
        v9 = *(_DWORD *)(a1 + 72);
        v10 = v9 <= 4;
        if ( v9 != 4 )
        {
LABEL_7:
          if ( v10 )
          {
            if ( v9 == 1 )
            {
              v15 = *(unsigned __int8 *)v8;
              free_idcv(v7);
              *(_BYTE *)v7 = 2;
              *(_DWORD *)(v7 + 8) = v15;
            }
            else if ( v9 == 2 )
            {
              v11 = *(unsigned __int16 *)v8;
              free_idcv(v7);
              *(_BYTE *)v7 = 2;
              *(_DWORD *)(v7 + 8) = v11;
            }
          }
          else if ( v9 == 8 )
          {
            v14 = *(_QWORD *)v8;
            free_idcv(v7);
            *(_BYTE *)v7 = 9;
            *(_QWORD *)(v7 + 8) = v14;
          }
          return 0;
        }
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 72);
        v10 = v9 <= 4;
        if ( v9 != 4 )
          goto LABEL_7;
      }
      v13 = *(_DWORD *)v8;
      free_idcv(v7);
      *(_BYTE *)v7 = 2;
      *(_DWORD *)(v7 + 8) = v13;
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}

