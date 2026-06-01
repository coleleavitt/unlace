__int64 __fastcall sub_4C450(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12
  int v13; // ebp
  __int64 v15; // r13
  int v16; // r13d
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d

  v9 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v9 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = v11 + 56 * v10;
    if ( 56 * v10 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v11 + 8) )
        {
          v13 = strcmp(*(const char **)v11, "GNU");
          if ( !v13 && *(_DWORD *)(v11 + 48) == 3 )
            break;
        }
        v11 += 56;
        if ( v11 == v12 )
          return 0;
      }
      v15 = *(_QWORD *)(v11 + 32);
      if ( v15 )
      {
        v16 = v15 - 1;
        a2[1] = 0;
        v17 = 2 * v16;
        if ( a2[2] < v17 )
          *a2 = qvector_reserve(a2, *a2, v17, 1);
        if ( v16 > 0 )
        {
          v18 = *(_QWORD *)(v11 + 32);
          if ( v18 )
          {
            v18 = 0;
            goto LABEL_15;
          }
          while ( 1 )
          {
            sub_2BDC0(a2, (__int64)"%02x", v13);
            if ( v16 <= (int)++v18 )
              break;
LABEL_15:
            v13 = *(unsigned __int8 *)(*(_QWORD *)(v11 + 24) + v18);
          }
        }
      }
      else
      {
        a2[1] = 0;
      }
    }
    else
    {
      return 0;
    }
    return v9;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(20082);
    return sub_4C590(20082, (_DWORD)a2, v19, v20, v21, v22, a7, a8, a9);
  }
}

