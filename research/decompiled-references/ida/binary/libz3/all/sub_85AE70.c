__int64 __fastcall sub_85AE70(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  char *v5; // rax
  unsigned int v7; // ebp
  __int64 v8; // r12
  __int64 v9; // rax
  _BOOL8 v10; // rdx
  _DWORD *v11; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v2 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) )
    {
      v4 = *(_QWORD *)(v2 + 8 * v3);
      if ( v4 )
      {
        v5 = (char *)(v4 + 88);
        if ( *(int *)(v4 + 88) >> 8 != -1 )
        {
          while ( *(_DWORD *)(a1 + 12) != *v5 )
          {
            v5 = *((char **)v5 + 1);
            if ( !v5 )
              goto LABEL_10;
          }
          if ( *(int *)v5 >> 8 != -1 )
            return 1;
        }
      }
    }
  }
LABEL_10:
  v7 = sub_859A80(a1, a2);
  if ( (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v7) != -1 )
    return 1;
  v8 = *(_QWORD *)(a1 + 496);
  v9 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v7));
  v10 = 0;
  v11 = *(_DWORD **)(v9 + 24);
  if ( v11 )
  {
    if ( *v11 == 5 )
      v10 = v11[1] == 1;
  }
  sub_1006C00(v8, v7, v10);
  return 1;
}

