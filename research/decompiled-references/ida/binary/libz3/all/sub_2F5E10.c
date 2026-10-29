__int64 __fastcall sub_2F5E10(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  _DWORD *v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 v12; // rsi
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rbx
  void (__fastcall ***v17)(void *); // rbp
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  _DWORD *v25; // [rsp+28h] [rbp-40h] BYREF

  result = a2[1];
  if ( !result )
    return result;
  v5 = nullptr;
  v6 = 0;
  while ( v6 < *(_DWORD *)(result - 4) )
  {
    v7 = *(_QWORD *)(result + 8LL * v6);
    v8 = 8LL * v6;
    v23 = a1[1];
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    if ( !(unsigned __int8)sub_2F55C0((__int64)a1, v7) )
    {
      v25 = v5;
      v18 = sub_2F4DC0(a1, (__int64)&v25, v7);
      v19 = (__int64 *)(a2[1] + v8);
      v20 = *a2;
      v21 = *v19;
      ++*(_DWORD *)(v18 + 8);
      v5 = v25;
      if ( v21 )
      {
        v14 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v14 )
        {
          v24 = v18;
          sub_15D7BC0(v20, v21);
          v18 = v24;
        }
      }
      *v19 = v18;
      if ( !v7 )
      {
        v9 = a2[1];
LABEL_31:
        result = v9;
        goto LABEL_13;
      }
LABEL_25:
      v22 = *(_DWORD *)(v7 + 8) - 1;
      *(_DWORD *)(v7 + 8) = v22;
      if ( !v22 )
        goto LABEL_26;
      goto LABEL_12;
    }
    v9 = a2[1];
    v10 = *a2;
    v11 = (__int64 *)(v9 + v8);
    result = v9;
    v12 = *v11;
    if ( v7 )
    {
      v13 = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v7 + 8) = v13 + 1;
      if ( v12 )
      {
        v14 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v14 )
        {
          sub_15D7BC0(v10, v12);
          *v11 = v7;
          goto LABEL_25;
        }
        v15 = *(_DWORD *)(v7 + 8);
        *v11 = v7;
        v13 = v15 - 1;
      }
      else
      {
        *v11 = v7;
      }
      *(_DWORD *)(v7 + 8) = v13;
      if ( !v13 )
LABEL_26:
        sub_15D7BC0(v23, v7);
LABEL_12:
      result = a2[1];
      goto LABEL_13;
    }
    if ( v12 )
    {
      v14 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v14 )
      {
        sub_15D7BC0(v10, v12);
        *v11 = 0;
        v9 = a2[1];
      }
      else
      {
        *v11 = 0;
      }
      goto LABEL_31;
    }
LABEL_13:
    ++v6;
    if ( !result )
      break;
  }
  if ( !v5 )
    return result;
  result = sub_1336AB0(a1[78], v5);
  v16 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v17 = (void (__fastcall ***)(void *))a1[78];
  if ( !v17 || (v14 = *((_DWORD *)v17 + 2) == 1, --*((_DWORD *)v17 + 2), !v14) )
  {
    a1[78] = result;
    v14 = v5[2]-- == 1;
    if ( !v14 )
      return result;
LABEL_34:
    (**(void (__fastcall ***)(_DWORD *))v5)(v5);
    return sub_186B220(v5);
  }
  (**v17)(v17);
  result = sub_186B220(v17);
  a1[78] = v16;
  v14 = v5[2]-- == 1;
  if ( v14 )
    goto LABEL_34;
  return result;
}

