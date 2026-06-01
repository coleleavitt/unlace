void __fastcall sub_DB8A80(__int64 *dest, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 *a6, _QWORD *a7)
{
  __int64 *v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  size_t v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  signed __int64 v14; // rdx
  signed __int64 v15; // rdx
  __int64 *v16; // r15
  __int64 *v17; // rbx
  __int64 *v18; // r15
  __int64 v19; // r14
  __int64 *v20; // rsi
  __int64 *v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // [rsp+0h] [rbp-58h]
  __int64 *v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  _QWORD *v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = dest;
  v8 = a6;
  v9 = a3;
  v10 = a2;
  if ( a4 <= a5 )
  {
    v11 = (char *)a2 - (char *)dest;
    if ( (char *)a2 - (char *)dest <= 8 )
    {
      if ( (char *)a2 - (char *)dest == 8 )
        *a6 = *dest;
    }
    else
    {
      memmove(a6, dest, v11);
    }
    v26[0] = a7;
    v24 = (__int64 *)((char *)v8 + v11);
    if ( a2 != v9 && v8 != (__int64 *)((char *)v8 + v11) )
    {
      do
      {
        v12 = *v8;
        v13 = *v10;
        if ( sub_DB0E50(v26, *v10, *v8) )
        {
          *v7 = v13;
          ++v10;
          ++v7;
          if ( v24 == v8 )
            return;
        }
        else
        {
          *v7 = v12;
          ++v8;
          ++v7;
          if ( v24 == v8 )
            return;
        }
      }
      while ( v9 != v10 );
    }
    if ( v24 != v8 )
    {
      v15 = (char *)v24 - (char *)v8;
      if ( (char *)v24 - (char *)v8 > 8 )
      {
        v20 = v8;
        v21 = v7;
        goto LABEL_25;
      }
      if ( v15 == 8 )
        *v7 = *v8;
    }
    return;
  }
  v14 = (char *)a3 - (char *)a2;
  if ( v14 <= 8 )
  {
    if ( v14 == 8 )
    {
      v22 = *a2;
      v26[0] = a7;
      v16 = a6 + 1;
      *a6 = v22;
      if ( a2 == dest )
      {
        *(v9 - 1) = v22;
        return;
      }
    }
    else
    {
      v26[0] = a7;
      v16 = (__int64 *)((char *)a6 + v14);
      if ( a2 == dest )
        return;
    }
  }
  else
  {
    v23 = v14;
    memmove(a6, a2, v14);
    v15 = v23;
    v26[0] = a7;
    v16 = (__int64 *)((char *)v8 + v23);
    if ( a2 == dest )
    {
      v20 = v8;
      v21 = v10;
LABEL_25:
      memmove(v21, v20, v15);
      return;
    }
  }
  if ( v8 == v16 )
    return;
  v17 = a2 - 1;
  v18 = v16 - 1;
  while ( 1 )
  {
    v19 = *v18;
    v25 = *v17;
    if ( sub_DB0E50(v26, *v18, *v17) )
      break;
    *(v9 - 1) = v19;
    if ( v8 == v18 )
      return;
    --v18;
LABEL_18:
    --v9;
  }
  *(v9 - 1) = v25;
  if ( dest != v17 )
  {
    --v17;
    goto LABEL_18;
  }
  v15 = (char *)(v18 + 1) - (char *)v8;
  if ( v15 > 8 )
  {
    v21 = (__int64 *)((char *)v9 - v15 - 8);
    v20 = v8;
    goto LABEL_25;
  }
  if ( v15 == 8 )
    *(v9 - 2) = *v8;
}

