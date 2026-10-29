__int64 __fastcall sub_7235D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 *v10; // rdx
  __int64 *v11; // r15
  __int64 v12; // rdi
  _QWORD *v13; // r12
  __int64 v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // rdx
  _BYTE *v18; // r12
  _BYTE *v19; // rbp
  _BYTE *v20; // r14
  unsigned __int64 v21; // rdx
  char *v22; // rsi
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdi
  char *v25; // rax
  char *v26; // rsi
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30[2]; // [rsp+0h] [rbp-58h]
  int v31; // [rsp+0h] [rbp-58h]
  __int64 *v32; // [rsp+8h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    sub_5FF0F0(a2, "(");
    sub_AE6C50(v6, a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, ")");
  }
  v7 = sub_5FF0F0(a2, " match(");
  v8 = sub_A97DD0(v7, *(_QWORD *)(a1 + 48));
  sub_5FF0F0(v8, ")");
  if ( *(_DWORD *)(a1 + 56) )
  {
    sub_5FF0F0(a2, " adjust_args(nothing:");
    v10 = *(__int64 **)(a1 + 64);
    *(_QWORD *)v30 = v10;
    v32 = &v10[*(unsigned int *)(a1 + 56)];
    if ( v32 != v10 )
    {
      v11 = *(__int64 **)(a1 + 64);
      do
      {
        if ( *(__int64 **)v30 == v11 )
          v11 = *(__int64 **)v30;
        else
          sub_5FF0F0(a2, ",");
        v12 = *v11++;
        sub_AE6C50(v12, a2, 0, a3, 0, 0, "\n", 1u);
      }
      while ( v32 != v11 );
    }
    sub_5FF0F0(a2, ")");
    if ( !*(_DWORD *)(a1 + 72) )
    {
LABEL_5:
      result = *(unsigned int *)(a1 + 88);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_19;
    }
  }
  else if ( !*(_DWORD *)(a1 + 72) )
  {
    goto LABEL_5;
  }
  sub_5FF0F0(a2, " adjust_args(need_device_ptr:");
  v13 = *(_QWORD **)(a1 + 80);
  v14 = *(unsigned int *)(a1 + 72);
  if ( v13 != &v13[v14] )
  {
    v15 = *(_QWORD **)(a1 + 80);
    v31 = a3;
    v16 = &v13[v14];
    do
    {
      while ( v13 != v15 )
      {
        ++v15;
        sub_5FF0F0(a2, ",");
        sub_AE6C50(*(v15 - 1), a2, 0, v31, 0, 0, "\n", 1u);
        if ( v16 == v15 )
          goto LABEL_18;
      }
      v15 = v13 + 1;
      sub_AE6C50(*v13, a2, 0, v31, 0, 0, "\n", 1u);
    }
    while ( v16 != v13 + 1 );
  }
LABEL_18:
  sub_5FF0F0(a2, ")");
  result = *(unsigned int *)(a1 + 88);
  if ( (_DWORD)result )
  {
LABEL_19:
    sub_5FF0F0(a2, " append_args(");
    v17 = *(unsigned int *)(a1 + 88);
    v18 = *(_BYTE **)(a1 + 96);
    v19 = v18;
    v20 = &v18[56 * v17];
    if ( v18 != v20 )
    {
      while ( 1 )
      {
        sub_5FF0F0(a2, "interop(");
        v21 = 10;
        v22 = "targetsync";
        if ( *v19 )
        {
          v21 = 17;
          v22 = "target,targetsync";
          if ( !v19[1] )
          {
            v21 = 6;
            v22 = "target";
          }
        }
        v23 = *(_QWORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v23 < v21 )
        {
          sub_26240F0(a2, v22, v21);
        }
        else
        {
          if ( (unsigned int)v21 >= 8 )
          {
            v24 = (unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            *v23 = *(_QWORD *)v22;
            *(_QWORD *)((char *)v23 + v21 - 8) = *(_QWORD *)&v22[v21 - 8];
            v25 = (char *)v23 - v24;
            v26 = (char *)(v22 - v25);
            if ( (((_DWORD)v21 + (_DWORD)v25) & 0xFFFFFFF8) >= 8 )
            {
              v27 = (v21 + (_DWORD)v25) & 0xFFFFFFF8;
              v28 = 0;
              do
              {
                v29 = v28;
                v28 += 8;
                *(_QWORD *)(v24 + v29) = *(_QWORD *)&v26[v29];
              }
              while ( v28 < v27 );
            }
          }
          else
          {
            *(_DWORD *)v23 = *(_DWORD *)v22;
            *(_DWORD *)((char *)v23 + (unsigned int)v21 - 4) = *(_DWORD *)&v22[(unsigned int)v21 - 4];
          }
          *(_QWORD *)(a2 + 32) += v21;
        }
        v19 += 56;
        sub_5FF0F0(a2, ")");
        if ( v20 == v19 )
          break;
        if ( v19 != v18 )
          sub_5FF0F0(a2, ", ");
      }
    }
    return sub_5FF0F0(a2, ")");
  }
  return result;
}

