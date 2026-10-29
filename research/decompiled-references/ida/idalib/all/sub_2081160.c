__int64 __fastcall sub_2081160(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // r13
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  _QWORD *v15; // rdi

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a1;
    v8 = v3 - 1;
    v9 = sub_100C420(*(_QWORD **)(*a2 + 16), *(_QWORD *)(*a2 + 24));
    v10 = *a2;
    v11 = v8 & v9;
    v12 = (_QWORD *)(v5 + 8LL * v11);
    v13 = *v12;
    if ( *a2 == *v12 )
    {
LABEL_12:
      *a3 = v12;
      return 1;
    }
    else
    {
      if ( v13 != -4096 )
      {
        v14 = 1;
        v15 = nullptr;
        while ( 1 )
        {
          if ( v13 != -8192 || v15 )
            v12 = v15;
          v11 = v8 & (v14 + v11);
          v13 = *(_QWORD *)(v5 + 8LL * v11);
          if ( v13 == v10 )
          {
            v12 = (_QWORD *)(v5 + 8LL * v11);
            goto LABEL_12;
          }
          if ( v13 == -4096 )
            break;
          ++v14;
          v15 = v12;
          v12 = (_QWORD *)(v5 + 8LL * v11);
        }
        if ( !v12 )
          v12 = (_QWORD *)(v5 + 8LL * v11);
      }
      *a3 = v12;
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
