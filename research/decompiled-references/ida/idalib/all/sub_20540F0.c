__int64 __fastcall sub_20540F0(_QWORD *a1)
{
  __int64 **v1; // rax
  __int64 v2; // r12
  __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // rbp
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 *v29[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = (__int64 **)a1[1];
  v2 = **v1;
  if ( *((_BYTE *)v1 + 8) == 16 )
    v3 = v1[4];
  else
    v3 = (__int64 *)*((unsigned int *)v1 + 8);
  v4 = sub_2051EA0((__int64)a1);
  v5 = a1[3];
  v6 = v4 * (_QWORD)v3;
  v7 = sub_2244B30(v5, v6);
  v8 = sub_2244E60(v2 + 1584, v5, v6, v7);
  if ( v8 == -1 )
    sub_20540B0(v29, (__int64 *)(*(_QWORD *)(v2 + 1584) + 8LL * *(unsigned int *)(v2 + 1592)), 1);
  else
    sub_20540B0(v29, (__int64 *)(*(_QWORD *)(v2 + 1584) + 8LL * v8), 1);
  v9 = v29[0];
  v10 = *(_QWORD **)(*v29[0] + 8);
  result = v10[4];
  if ( result )
  {
    if ( a1 == v10 )
    {
      v27 = (__int64 *)(*v29[0] + 8);
      v28 = result;
    }
    else
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(result + 32);
        if ( (_QWORD *)result == a1 )
          break;
        v10 = (_QWORD *)result;
        result = *(_QWORD *)(result + 32);
      }
      v27 = v10 + 4;
    }
    a1[4] = 0;
    v12 = *v27;
    *v27 = v28;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 32);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 32);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 32);
            if ( v16 )
            {
              sub_20510B0(*(_QWORD *)(v15 + 32));
              sub_20C9BF0(v16);
            }
            sub_20CC0C0(v15);
            sub_20C9BF0(v15);
          }
          sub_20CC0C0(v14);
          sub_20C9BF0(v14);
        }
        sub_20CC0C0(v13);
        sub_20C9BF0(v13);
      }
      sub_20CC0C0(v12);
      return sub_20C9BF0(v12);
    }
  }
  else
  {
    v17 = (_QWORD *)sub_20CB0D0(a1);
    v18 = (_QWORD *)*v9;
    sub_2244F90(*v17 + 1584LL, *v9, v19, v20, v21, v22);
    v23 = v18[1];
    v24 = *v18 + 17LL;
    if ( v23 )
    {
      v25 = *(_QWORD *)(v23 + 32);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 32);
        if ( v26 )
        {
          sub_20510B0(*(_QWORD *)(v25 + 32));
          sub_20C9BF0(v26);
        }
        sub_20CC0C0(v25);
        sub_20C9BF0(v25);
      }
      sub_20CC0C0(v23);
      sub_20C9BF0(v23);
    }
    return operator delete(v18, v24, 8);
  }
  return result;
}
