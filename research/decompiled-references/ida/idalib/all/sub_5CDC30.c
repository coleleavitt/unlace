__int64 __fastcall sub_5CDC30(__m128i *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  __int64 v6; // r15
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // r14
  unsigned __int64 *v14; // rax
  unsigned int v15; // r14d
  unsigned __int64 *v17; // rax
  unsigned int v18; // r14d
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 *v21; // rbx
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  char v27; // dl
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  unsigned __int64 v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v6 = (__int64)&a1[106].m128i_i64[1];
  v33 = __readfsqword(0x28u);
  v9 = sub_505D70((__int64)&a1[106].m128i_i64[1], a2);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = v9;
  if ( *((char *)v9 + 17) < 0 )
  {
    v17 = sub_505D70(v6, v9[3]);
    v11 = v17;
    if ( v17 )
    {
      if ( *((char *)v17 + 17) < 0 )
        v11 = sub_505D70(v6, v17[3]);
    }
  }
  v12 = a3;
  if ( (sub_3BE900(a1, a3, 4) & 0x600) == 0x200 )
  {
    v12 = a3;
    a3 = sub_3C1F00(a1, a3);
  }
  if ( v10[1] == a3 )
    return 0;
  if ( (get_merge_state(a1, v12) & 2) != 0 )
  {
    v28 = a3;
  }
  else
  {
    lock_func_range(v11, 1);
    v28 = sub_5CE580((int)a1);
    lock_func_range(v11, 0);
  }
  v13 = sub_505D70((__int64)&a1[101].m128i_i64[1], a2);
  v14 = sub_505D70((__int64)&a1[101].m128i_i64[1], v28 - 1);
  if ( !v13 || !v14 )
    return 0;
  if ( *v13 == *v14 )
  {
    v18 = sub_503EE0(v6, a2);
    if ( !(unsigned __int8)sub_503FB0(v6, v18, v28) )
    {
      if ( a3 == v28 )
        return 0;
      if ( !under_debugger )
        interr(1545);
LABEL_60:
      BUG();
    }
    lock_func_range(v10, 1);
    sub_39ADA0(0x23u, v10, v28);
    lock_func_range(v10, 0);
    v29 = v10[1];
    v15 = sub_5061A0(v6, v18, v28, a4, a5, a6);
    if ( !(_BYTE)v15 )
    {
      if ( !under_debugger )
        interr(1546);
      goto LABEL_60;
    }
    if ( *((char *)v10 + 17) < 0 )
    {
      v31 = 0;
      func_parent_iterator_set(&v31, v10);
      v19 = v10[3];
      v20 = v31;
      v32 = 0;
      v30 = v19;
      if ( v31 && *(char *)(v31 + 17) < 0 && *(int *)(v31 + 32) > 0 )
      {
        while ( 1 )
        {
          v21 = sub_505D70(v6, *(_QWORD *)(*(_QWORD *)(v20 + 40) + 8LL * v32));
          v22 = sub_5C93A0(a1, (__int64)v21, a2);
          if ( v22 )
          {
            v22[1] = v28;
            sub_5C7BB0(a1->m128i_i64, (__int64)v21, 1);
          }
          v20 = v31;
          if ( v32 + 1 >= *(_DWORD *)(v31 + 32) )
            break;
          ++v32;
        }
      }
      v23 = sub_505D70(v6, v30);
      v10 = v23;
      if ( !v23 || *((char *)v23 + 17) < 0 && (v10 = sub_505D70(v6, v23[3])) == nullptr )
      {
        if ( v31 )
          lock_func_range(v31, 0);
        return 0;
      }
      if ( v31 )
        lock_func_range(v31, 0);
    }
    v24 = v29;
    if ( v29 >= v28 )
    {
      sub_5C9B90((int)a1);
      if ( (get_merge_state(a1, v10) & 2) == 0 )
        sub_5B7F30(v28, v29);
      sub_5BAD80(a1, (__int64)v10, v28, v29);
      sub_5CE670((int)a1);
      sub_5CCCE0(a1, (__int64)v10);
      if ( v28 < v29 )
      {
        v27 = (get_merge_state(a1, v10) & 2) == 0;
        goto LABEL_43;
      }
LABEL_42:
      v27 = 0;
LABEL_43:
      sub_5CD980(a1, v10, v27);
      return v15;
    }
    if ( a3 >= v28 )
    {
      if ( *v10 == a3 )
        goto LABEL_39;
      if ( (int)sub_5C9B30(a1, v10, a3) < 0 )
        a3 = sub_5CDC00((__int64)a1, (__int64)v10, a3);
      if ( a3 == -1 )
        goto LABEL_39;
      v24 = v29;
    }
    else if ( a3 == v29 )
    {
LABEL_39:
      v25 = sub_3C2650(a1, v29);
      if ( v25 == -1 )
        v25 = v29;
      v26 = v25;
      auto_mark_range(v25, v28, 38);
      auto_mark_range(v26, v28, 40);
      goto LABEL_42;
    }
    sub_5BAF30(a1, (__int64)v10, a3, v24);
    goto LABEL_39;
  }
  if ( a3 != v28 )
  {
    if ( !under_debugger )
      interr(1544);
    goto LABEL_60;
  }
  return 0;
}
