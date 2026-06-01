__int64 __fastcall sub_5B2CC0(__int64 *a1, __int64 a2, unsigned int a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int *v9; // rax
  unsigned int *v10; // rbx
  unsigned int *v11; // r14
  __int64 v12; // rsi
  unsigned int *v13; // r14
  unsigned int *v14; // rax
  unsigned int v15; // r14d
  unsigned int *v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int *v21; // rbx
  unsigned int *v22; // rax
  unsigned int *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // r15d
  char v27; // dl
  unsigned int v28; // [rsp+8h] [rbp-70h]
  unsigned int v29; // [rsp+10h] [rbp-68h]
  unsigned int v30; // [rsp+14h] [rbp-64h]
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v6 = (__int64)(a1 + 203);
  v7 = a2;
  v33 = __readfsqword(0x28u);
  v9 = sub_4EE820((__int64)(a1 + 203), a2);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = v9;
  if ( *((char *)v9 + 9) < 0 )
  {
    v17 = sub_4EE820(v6, v9[4]);
    v11 = v17;
    if ( v17 )
    {
      if ( *((char *)v17 + 9) < 0 )
        v11 = sub_4EE820(v6, v17[4]);
    }
  }
  v12 = a3;
  if ( (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) == 0x200 )
  {
    v12 = a3;
    a3 = sub_3BCF60((__int64)a1, a3);
  }
  if ( v10[1] == a3 )
    return 0;
  if ( (get_merge_state(a1, v12) & 2) != 0 )
  {
    v29 = a3;
  }
  else
  {
    lock_func_range(v11, 1);
    v29 = sub_5B35B0((int)a1);
    lock_func_range(v11, 0);
  }
  v13 = sub_4EE820((__int64)(a1 + 194), v7);
  v14 = sub_4EE820((__int64)(a1 + 194), v29 - 1);
  if ( !v13 || !v14 )
    return 0;
  if ( *v13 == *v14 )
  {
    v18 = sub_4EC9F0(v6, v7);
    if ( !(unsigned __int8)sub_4ECAB0(v6, v18, v29) )
    {
      if ( a3 == v29 )
        return 0;
      if ( !under_debugger )
        interr(1545);
LABEL_60:
      BUG();
    }
    lock_func_range(v10, 1);
    sub_396090(0x23u, v10, v29);
    lock_func_range(v10, 0);
    v28 = v10[1];
    v15 = sub_4EEC40(v6, v18, v29, a4, a5, a6);
    if ( !(_BYTE)v15 )
    {
      if ( !under_debugger )
        interr(1546);
      goto LABEL_60;
    }
    if ( *((char *)v10 + 9) < 0 )
    {
      v31 = 0;
      func_parent_iterator_set(&v31, v10);
      v19 = v10[4];
      v20 = v31;
      v32 = 0;
      v30 = v19;
      if ( v31 && *(char *)(v31 + 9) < 0 && *(int *)(v31 + 20) > 0 )
      {
        while ( 1 )
        {
          v21 = sub_4EE820(v6, *(unsigned int *)(*(_QWORD *)(v20 + 24) + 4LL * v32));
          v22 = sub_5AE770(a1, (__int64)v21, v7);
          if ( v22 )
          {
            v22[1] = v29;
            sub_5AD0D0(a1, (__int64)v21, 1);
          }
          v20 = v31;
          if ( v32 + 1 >= *(_DWORD *)(v31 + 20) )
            break;
          ++v32;
        }
      }
      v23 = sub_4EE820(v6, v30);
      v10 = v23;
      if ( !v23 || *((char *)v23 + 9) < 0 && (v10 = sub_4EE820(v6, v23[4])) == nullptr )
      {
        if ( v31 )
          lock_func_range(v31, 0);
        return 0;
      }
      if ( v31 )
        lock_func_range(v31, 0);
    }
    v24 = v28;
    if ( v28 >= v29 )
    {
      sub_5AEEF0((int)a1);
      if ( (get_merge_state(a1, v10) & 2) == 0 )
        sub_59DCF0(v29, v28);
      sub_5A0860(a1, (__int64)v10, v29, v28);
      sub_5B36A0((int)a1);
      sub_5B1E60(a1, (__int64)v10);
      if ( v29 < v28 )
      {
        v27 = (get_merge_state(a1, v10) & 2) == 0;
        goto LABEL_43;
      }
LABEL_42:
      v27 = 0;
LABEL_43:
      sub_5B2A40(a1, v10, v27);
      return v15;
    }
    if ( a3 >= v29 )
    {
      if ( *v10 == a3 )
        goto LABEL_39;
      if ( (int)sub_5AEEA0(a1, (__int64)v10, a3) < 0 )
        a3 = sub_5B2CA0((__int64)a1, (__int64)v10, a3);
      if ( a3 == -1 )
        goto LABEL_39;
      v24 = v28;
    }
    else if ( a3 == v28 )
    {
LABEL_39:
      v25 = sub_3BD5D0((__int64)a1, v28);
      if ( v25 == -1 )
        v25 = v28;
      v26 = v25;
      auto_mark_range(v25, v29, 38);
      auto_mark_range(v26, v29, 40);
      goto LABEL_42;
    }
    sub_5A0A10(a1, (__int64)v10, a3, v24);
    goto LABEL_39;
  }
  if ( a3 != v29 )
  {
    if ( !under_debugger )
      interr(1544);
    goto LABEL_60;
  }
  return 0;
}

