__int64 __fastcall sub_722D10(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  _BYTE *v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  const char *v9; // rsi
  __int64 v10; // rbp
  __int64 *v11; // rbp
  __int64 result; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 *v16; // rbp
  __int64 v17; // rdx
  _QWORD *v18; // r15
  _DWORD *v19; // r12
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r10
  _QWORD *v23; // rdx
  __int64 v24; // r10
  size_t v25; // rdx
  char *v26; // rsi
  __int64 v27; // r11
  __int64 *v28; // r13
  __int64 v29; // rbp
  __int64 v30; // rax
  int v31[2]; // [rsp+28h] [rbp-80h]
  int v32[2]; // [rsp+28h] [rbp-80h]
  int v33[2]; // [rsp+28h] [rbp-80h]
  int v34[2]; // [rsp+28h] [rbp-80h]
  int v35[2]; // [rsp+28h] [rbp-80h]
  int v36[2]; // [rsp+28h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  __int64 v38; // [rsp+50h] [rbp-58h]
  int v39; // [rsp+50h] [rbp-58h]
  __int64 v40; // [rsp+50h] [rbp-58h]
  __int64 *v41; // [rsp+50h] [rbp-58h]

  v3 = a1;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(a2 + 24) )
    {
      v30 = sub_26239D0(a2, 32);
      v3 = a1;
      v7 = v30;
    }
    else
    {
      v7 = a2;
      *(_QWORD *)(a2 + 32) = v6 + 1;
      *v6 = 32;
    }
    v8 = *(_DWORD *)(v3 + 36);
    v9 = "inbranch";
    if ( v8 != 1 )
    {
      v9 = "notinbranch";
      if ( v8 != 2 )
        v9 = &byte_3B9466E;
    }
    *(_QWORD *)v31 = v3;
    sub_5FF0F0(v7, v9);
    v3 = *(_QWORD *)v31;
  }
  v10 = *(_QWORD *)(v3 + 40);
  if ( v10 )
  {
    *(_QWORD *)v32 = v3;
    sub_5FF0F0(a2, " simdlen(");
    sub_AE6C50(v10, a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, ")");
    v3 = *(_QWORD *)v32;
  }
  if ( *(_DWORD *)(v3 + 48) )
  {
    *(_QWORD *)v35 = v3;
    sub_5FF0F0(a2, " uniform");
    v24 = *(_QWORD *)v35;
    v25 = 1;
    v26 = "(";
    v27 = *(_QWORD *)(*(_QWORD *)v35 + 56LL);
    if ( v27 != v27 + 8LL * *(unsigned int *)(*(_QWORD *)v35 + 48LL) )
    {
      v41 = (__int64 *)(v27 + 8LL * *(unsigned int *)(*(_QWORD *)v35 + 48LL));
      v28 = *(__int64 **)(*(_QWORD *)v35 + 56LL);
      do
      {
        v29 = *v28++;
        sub_722320(a2, v26, v25);
        sub_AE6C50(v29, a2, 0, a3, 0, 0, "\n", 1u);
        v25 = 2;
        v26 = ", ";
      }
      while ( v41 != v28 );
      v24 = *(_QWORD *)v35;
    }
    *(_QWORD *)v36 = v24;
    sub_5FF0F0(a2, ")");
    v3 = *(_QWORD *)v36;
  }
  v11 = *(__int64 **)(v3 + 72);
  result = *(unsigned int *)(v3 + 64);
  v13 = *(_QWORD **)(v3 + 88);
  if ( v11 != &v11[result] )
  {
    *(_QWORD *)v33 = &v11[result];
    v37 = v3;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a2 + 32);
        v15 = *v11;
        if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v14) > 8 )
        {
          *(_BYTE *)(v14 + 8) = 40;
          *(_QWORD *)v14 = 0x64656E67696C6120LL;
          *(_QWORD *)(a2 + 32) += 9LL;
        }
        else
        {
          v38 = *v11;
          sub_26240F0(a2, " aligned(", 9);
          LODWORD(v15) = v38;
        }
        sub_AE6C50(v15, a2, 0, a3, 0, 0, "\n", 1u);
        if ( *v13 )
        {
          sub_5FF0F0(a2, ": ");
          sub_AE6C50(*v13, a2, 0, a3, 0, 0, "\n", 1u);
        }
        result = *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) == result )
          break;
        *(_BYTE *)result = 41;
        ++v13;
        ++v11;
        ++*(_QWORD *)(a2 + 32);
        if ( *(__int64 **)v33 == v11 )
          goto LABEL_21;
      }
      ++v13;
      ++v11;
      result = sub_26240F0(a2, ")", 1);
    }
    while ( *(__int64 **)v33 != v11 );
LABEL_21:
    v3 = v37;
  }
  v16 = *(__int64 **)(v3 + 104);
  v17 = *(unsigned int *)(v3 + 96);
  v18 = *(_QWORD **)(v3 + 136);
  v19 = *(_DWORD **)(v3 + 120);
  if ( v16 != &v16[v17] )
  {
    *(_QWORD *)v34 = &v16[v17];
    do
    {
      v23 = *(_QWORD **)(a2 + 32);
      v22 = *v16;
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v23 > 7u )
      {
        *v23 = 0x287261656E696C20LL;
        *(_QWORD *)(a2 + 32) += 8LL;
      }
      else
      {
        v40 = *v16;
        sub_26240F0(a2, " linear(", 8);
        LODWORD(v22) = v40;
      }
      if ( *v19 != 4 )
      {
        v39 = v22;
        v20 = (const char *)sub_CA0650(52);
        v21 = sub_5FF0F0(a2, v20);
        sub_5FF0F0(v21, "(");
        LODWORD(v22) = v39;
      }
      sub_AE6C50(v22, a2, 0, a3, 0, 0, "\n", 1u);
      if ( *v19 != 4 )
        sub_5FF0F0(a2, ")");
      if ( *v18 )
      {
        sub_5FF0F0(a2, ": ");
        sub_AE6C50(*v18, a2, 0, a3, 0, 0, "\n", 1u);
      }
      result = *(_QWORD *)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) == result )
      {
        result = sub_26240F0(a2, ")", 1);
      }
      else
      {
        *(_BYTE *)result = 41;
        ++*(_QWORD *)(a2 + 32);
      }
      ++v18;
      ++v19;
      ++v16;
    }
    while ( *(__int64 **)v34 != v16 );
  }
  return result;
}

