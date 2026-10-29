__int64 __fastcall sub_2C0FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // r14d
  int v16; // r12d
  int v17; // r11d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rbp
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-38h]

  result = a3 - 1;
  v8 = a2;
  v9 = a3 & 1;
  v11 = (a3 - 1) / 2;
  if ( a2 >= v11 )
  {
    v12 = (__int64 *)(a1 + 8 * a2);
    if ( v9 )
      goto LABEL_17;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_17;
    result = a2;
    goto LABEL_19;
  }
  v24 = a3 & 1;
  while ( 1 )
  {
    result = 2 * (a2 + 1);
    v12 = (__int64 *)(a1 + 16 * (a2 + 1));
    v13 = *(v12 - 1);
    v14 = *v12;
    v15 = *(_DWORD *)(v13 + 8);
    v16 = *(_DWORD *)(v13 + 12);
    v17 = *(_DWORD *)(*v12 + 12);
    if ( !a6 )
    {
      v17 = *(_DWORD *)(*v12 + 8);
      v16 = v15;
    }
    if ( v16 > v17 )
    {
      --result;
      v12 = (__int64 *)(a1 + 8 * result);
      v14 = *v12;
    }
    *(_QWORD *)(a1 + 8 * a2) = v14;
    if ( result >= v11 )
      break;
    a2 = result;
  }
  if ( !v24 && (a3 - 2) / 2 == result )
  {
LABEL_19:
    v22 = 2 * result + 2;
    v23 = *(_QWORD *)(a1 + 8 * v22 - 8);
    result = v22 - 1;
    *v12 = v23;
    v12 = (__int64 *)(a1 + 8 * result);
  }
  v18 = (result - 1) / 2;
  if ( result > v8 )
  {
    v19 = result;
    while ( 1 )
    {
      v20 = (__int64 *)(a1 + 8 * v18);
      v21 = *(_DWORD *)(a4 + 12);
      result = *(unsigned int *)(*v20 + 12);
      if ( !a6 )
      {
        result = *(unsigned int *)(*v20 + 8);
        v21 = *(_DWORD *)(a4 + 8);
      }
      v12 = (__int64 *)(a1 + 8 * v19);
      if ( v21 <= (int)result )
        break;
      *v12 = *v20;
      v19 = v18;
      result = (v18 - 1) / 2;
      if ( v8 >= v18 )
      {
        *v20 = a4;
        return result;
      }
      v18 = (v18 - 1) / 2;
    }
  }
LABEL_17:
  *v12 = a4;
  return result;
}
