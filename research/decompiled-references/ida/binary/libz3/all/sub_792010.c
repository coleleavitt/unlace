__int64 __fastcall sub_792010(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rdx
  unsigned int v9; // ebp
  size_t v10; // rbx
  _OWORD *v11; // rcx
  _OWORD *v12; // rdx
  unsigned int ***v13; // rbx
  unsigned int ***i; // r15
  unsigned int *v15; // rbp
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int v22; // esi
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 8388) || (result = *(unsigned int *)(a1 + 8392), (_DWORD)result) )
  {
    v5 = *(char **)(a1 + 8376);
    v6 = 0;
    v7 = *(unsigned int *)(a1 + 8384);
    result = (__int64)v5;
    v8 = &v5[16 * v7];
    if ( v5 == v8 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v8 == (char *)result )
          goto LABEL_8;
      }
      result += 16;
      ++v6;
    }
    while ( v8 != (char *)result );
LABEL_8:
    if ( (unsigned int)v7 <= 0x10 )
      goto LABEL_16;
    result = (unsigned int)(3 * v7);
    if ( (unsigned int)result >= 4 * v6 )
      goto LABEL_16;
    if ( v5 )
    {
      sub_186B220(v5);
      v9 = *(_DWORD *)(a1 + 8384);
      *(_QWORD *)(a1 + 8376) = 0;
      v9 >>= 1;
      *(_DWORD *)(a1 + 8384) = v9;
      v10 = 16LL * v9;
      result = sub_186B270(v10);
      if ( !v9 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 8376) = result;
LABEL_16:
        *(_QWORD *)(a1 + 8388) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8376) = 0;
      v22 = (unsigned int)v7 >> 1;
      *(_DWORD *)(a1 + 8384) = v22;
      v10 = 16LL * v22;
      result = sub_186B270(v10);
    }
    v11 = (_OWORD *)(result + v10);
    v12 = (_OWORD *)result;
    if ( (v10 & 0x10) == 0 || (v12 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v11 != (_OWORD *)(result + 16)) )
    {
      do
      {
        *v12 = 0;
        v12 += 2;
        *(v12 - 1) = 0;
      }
      while ( v11 != v12 );
    }
    goto LABEL_15;
  }
LABEL_17:
  v13 = *(unsigned int ****)(a1 + 1768);
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    for ( i = &v13[result]; i != v13; ++v13 )
    {
      while ( 1 )
      {
        v15 = (unsigned int *)*v13;
        if ( v15 == *((unsigned int **)v15 + 8) )
        {
          result = *(_QWORD *)(a1 + 8368);
          if ( *(_QWORD *)(result + 8LL * **(unsigned int **)v15) )
          {
            sub_1374250(v23, *a2, *(_QWORD *)v15);
            v16 = (__int64 *)(*(_QWORD *)(a1 + 8368) + 8LL * **(unsigned int **)v15);
            v17 = *v16;
            if ( *v16 )
            {
              v18 = *(_QWORD *)(a1 + 8360);
              v19 = (*(_DWORD *)(v17 + 8))-- == 1;
              if ( v19 )
                sub_15D7BC0(v18, v17);
            }
            result = v23[0];
            v23[0] = 0;
            *v16 = result;
            v20 = v23[0];
            if ( v23[0] )
            {
              v21 = v23[1];
              v19 = (*(_DWORD *)(v23[0] + 8LL))-- == 1;
              if ( v19 )
                break;
            }
          }
        }
        if ( i == ++v13 )
          return result;
      }
      result = sub_15D7BC0(v21, v20);
    }
  }
  return result;
}

