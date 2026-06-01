__int64 __fastcall sub_52A620(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, __m128 a7)
{
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  __int64 *v15; // rcx
  __int64 **v16; // r9
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 result; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // r15d
  __int64 *v25; // r12
  __int64 *i; // r13
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r14

  v10 = *(__int64 **)a2;
  v11 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v11 )
  {
    v29 = *v10;
  }
  else
  {
    while ( 1 )
    {
      v29 = *v10;
      v12 = v10;
      if ( (unsigned __int64)*v10 > 1 )
        break;
      if ( (__int64 *)v11 == ++v10 )
      {
        v29 = v12[1];
        break;
      }
    }
  }
  v13 = sub_63BA90(a1[1], v29);
  v14 = *(_DWORD *)(v29 + 12);
  v15 = *(__int64 **)a4;
  v16 = (__int64 **)v13;
  v17 = *(unsigned int *)(a4 + 8);
  v18 = v17 - 1;
  result = 16 * v17;
  v20 = *(_QWORD *)a4 + result;
  v21 = 16LL * (v14 & v18);
  v22 = (__int64 *)(*(_QWORD *)a4 + v21);
  if ( v21 != result )
  {
    for ( result = *(_QWORD *)a4 + v21; v20 != result; result += 16 )
    {
      v23 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v23 + 12) == v14 && v23 == v29 )
        {
LABEL_19:
          v24 = *(_DWORD *)(result + 8);
          goto LABEL_13;
        }
      }
      else if ( !v23 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v22 != v15; v15 += 2 )
  {
    result = *v15;
    if ( (unsigned __int64)*v15 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v14 && result == v29 )
      {
        result = (__int64)v15;
        goto LABEL_19;
      }
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_12:
  v24 = -1;
LABEL_13:
  v25 = *v16;
  if ( *v16 )
  {
    for ( i = &v25[*((unsigned int *)v25 - 1)]; v25 != i; result = sub_528610(a1, v27, a3, v24, 0, a6, a7) )
      v27 = *v25++;
  }
  if ( a5 )
  {
    v28 = sub_4DB350(**a1, v29);
    return sub_52C6B0(a6, v28);
  }
  return result;
}

