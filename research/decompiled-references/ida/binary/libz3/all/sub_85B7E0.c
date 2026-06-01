__int64 __fastcall sub_85B7E0(__int64 a1, __int64 a2)
{
  unsigned int **v2; // rbx
  __int64 result; // rax
  unsigned int **v4; // r13
  unsigned int *v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  char *v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // r14
  _DWORD *v13; // rax

  v2 = (unsigned int **)(a2 + 32);
  result = 8LL * *(unsigned int *)(a2 + 24);
  v4 = (unsigned int **)(a2 + 32 + result);
  if ( result )
  {
    while ( 1 )
    {
      v5 = *v2;
      v6 = *(_DWORD **)(sub_15D1F10(*v2) + 24);
      if ( !v6 || *v6 != 5 || v6[1] )
      {
        result = *(_QWORD *)(sub_15D1F10(v5) + 24);
        if ( !result || *(_DWORD *)result != 5 || *(_DWORD *)(result + 4) != 1 )
          goto LABEL_5;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
      if ( v7 )
      {
        v8 = *v5;
        if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
        {
          v9 = *(_QWORD *)(v7 + 8 * v8);
          if ( v9 )
          {
            v10 = (char *)(v9 + 88);
            if ( *(int *)(v9 + 88) >> 8 != -1 )
            {
              while ( *(_DWORD *)(a1 + 12) != *v10 )
              {
                v10 = *((char **)v10 + 1);
                if ( !v10 )
                  goto LABEL_17;
              }
              result = (unsigned int)(*(int *)v10 >> 8);
              if ( (_DWORD)result != -1 )
                goto LABEL_5;
            }
          }
        }
      }
LABEL_17:
      v11 = sub_859A80(a1, v5);
      result = sub_FF9FB0(*(_QWORD *)(a1 + 496), v11);
      if ( (_DWORD)result == -1 )
      {
        v12 = *(_QWORD *)(a1 + 496);
        v13 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v11)) + 24);
        if ( v13 && *v13 == 5 )
          result = sub_1006C00(v12, v11, v13[1] == 1);
        else
          result = sub_1006C00(v12, v11, 0);
        if ( v4 == ++v2 )
          return result;
      }
      else
      {
LABEL_5:
        if ( v4 == ++v2 )
          return result;
      }
    }
  }
  return result;
}

