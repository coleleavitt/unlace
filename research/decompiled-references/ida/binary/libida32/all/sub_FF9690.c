__int64 __fastcall sub_FF9690(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 result; // rax
  unsigned int *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // r10
  int v14; // edx
  int v15; // edx
  int v16; // ecx

  v2 = *(_DWORD *)(a1 + 208);
  v3 = *(unsigned int *)(a1 + 472);
  v4 = v2;
  if ( *(_DWORD *)(a1 + 476) >= a2 )
  {
    v4 = (unsigned int)v3;
    v3 = 0;
  }
  v5 = *(_QWORD *)(a1 + 200);
  result = (unsigned int)(v4 - 1);
  v7 = (unsigned int *)(v5 + 4 * result);
  if ( a2 >= *v7 )
  {
    v15 = 0;
LABEL_19:
    *(_DWORD *)(a1 + 472) = result;
    *(_DWORD *)(a1 + 476) = *v7;
    if ( v2 > (unsigned int)v4 )
      v16 = *(_DWORD *)(v5 + 4 * v4);
    else
      v16 = *(_DWORD *)(a1 + 312);
    *(_DWORD *)(a1 + 480) = v16;
    *(_DWORD *)(a1 + 528) += v15 + 1;
    return result;
  }
  v8 = (unsigned int)(v4 - 2);
  v7 = (unsigned int *)(v5 + 4 * v8);
  if ( *v7 <= a2 )
  {
    v4 = (unsigned int)result;
    v15 = 1;
    result = (unsigned int)v8;
    goto LABEL_19;
  }
  result = (unsigned int)(v4 - 3);
  v7 = (unsigned int *)(v5 + 4 * result);
  if ( a2 >= *v7 )
  {
    v4 = (unsigned int)v8;
    v15 = 2;
    goto LABEL_19;
  }
  v9 = (unsigned int)(v4 - 4);
  v7 = (unsigned int *)(v5 + 4 * v9);
  if ( a2 >= *v7 )
  {
    v4 = (unsigned int)result;
    v15 = 3;
    result = (unsigned int)v9;
    goto LABEL_19;
  }
  result = (unsigned int)(v4 - 5);
  v7 = (unsigned int *)(v5 + 4 * result);
  if ( a2 >= *v7 )
  {
    v4 = (unsigned int)v9;
    v15 = 4;
    goto LABEL_19;
  }
  v10 = (unsigned int)(v4 - 6);
  v7 = (unsigned int *)(v5 + 4 * v10);
  if ( *v7 <= a2 )
  {
    v4 = (unsigned int)result;
    v15 = 5;
    result = (unsigned int)v10;
    goto LABEL_19;
  }
  result = (unsigned int)(v4 - 7);
  v7 = (unsigned int *)(v5 + 4 * result);
  if ( a2 >= *v7 )
  {
    v4 = (unsigned int)v10;
    v15 = 6;
    goto LABEL_19;
  }
  v11 = (unsigned int)(v4 - 8);
  v7 = (unsigned int *)(v5 + 4 * v11);
  if ( *v7 <= a2 )
  {
    v4 = (unsigned int)result;
    v15 = 7;
    result = (unsigned int)v11;
    goto LABEL_19;
  }
  if ( (unsigned int)v3 < (unsigned int)v11 )
  {
    v12 = *(_DWORD *)(a1 + 532) + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        *(_DWORD *)(a1 + 532) = v12;
        v13 = ((unsigned int)(v11 - v3) >> 1) + (unsigned int)v3;
        if ( a2 < *(_DWORD *)(v5 + 4 * v13) )
          break;
        v3 = (unsigned int)(v13 + 1);
        ++v12;
        if ( (unsigned int)v3 >= (unsigned int)v11 )
          goto LABEL_15;
      }
      ++v12;
      if ( (unsigned int)v13 <= (unsigned int)v3 )
        break;
      LODWORD(v11) = ((unsigned int)(v11 - v3) >> 1) + v3;
    }
  }
LABEL_15:
  result = (unsigned int)(v3 - 1);
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(v5 + 4 * result);
  v14 = *(_DWORD *)(v5 + 4 * v3);
  *(_DWORD *)(a1 + 472) = result;
  *(_DWORD *)(a1 + 480) = v14;
  return result;
}

