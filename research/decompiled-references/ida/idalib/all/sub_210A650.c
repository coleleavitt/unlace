__int64 __fastcall sub_210A650(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  size_t v4; // r14
  size_t v5; // r15
  const void *v6; // r9
  const void *v7; // r8
  size_t v8; // r13
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rax
  bool v15; // zf
  __int64 result; // rax
  void *s2; // [rsp+8h] [rbp-50h]
  void *s1; // [rsp+10h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = v2 + 32;
      if ( sub_9C4B50(a2, v2 + 32) < 0 )
      {
LABEL_14:
        v12 = *(_QWORD *)(v2 + 16);
        v13 = 1;
        if ( !v12 )
          goto LABEL_20;
        goto LABEL_15;
      }
      if ( sub_9C4B50(v2 + 32, a2) < 0 )
        goto LABEL_18;
      v4 = *(_QWORD *)(a2 + 40);
      v5 = *(_QWORD *)(v2 + 72);
      v6 = *(const void **)(a2 + 32);
      v7 = *(const void **)(v2 + 64);
      v8 = v4;
      if ( v5 <= v4 )
        v8 = *(_QWORD *)(v2 + 72);
      if ( !v8 )
        break;
      s1 = *(void **)(v2 + 64);
      s2 = *(void **)(a2 + 32);
      v9 = memcmp(s2, s1, v8);
      v6 = s2;
      v7 = s1;
      if ( !v9 )
      {
        if ( v5 == v4 )
        {
          v10 = memcmp(s1, s2, v8);
          if ( !v10 )
            goto LABEL_13;
          goto LABEL_34;
        }
        goto LABEL_9;
      }
      if ( v9 < 0 )
        goto LABEL_14;
      v10 = memcmp(s1, s2, v8);
      if ( !v10 )
      {
        if ( v5 == v4 )
        {
LABEL_13:
          v11 = *(_DWORD *)(v2 + 80);
          if ( *(_DWORD *)(a2 + 48) < v11 || *(_DWORD *)(a2 + 48) == v11 && *(_DWORD *)(a2 + 52) < *(_DWORD *)(v2 + 84) )
            goto LABEL_14;
        }
        else
        {
LABEL_12:
          if ( v5 >= v4 )
            goto LABEL_13;
        }
LABEL_18:
        v12 = *(_QWORD *)(v2 + 24);
        v13 = 0;
        goto LABEL_19;
      }
LABEL_34:
      if ( v10 >= 0 )
        goto LABEL_13;
      v12 = *(_QWORD *)(v2 + 24);
      v13 = 0;
LABEL_19:
      if ( !v12 )
      {
LABEL_20:
        if ( v13 )
          goto LABEL_21;
LABEL_23:
        v15 = !sub_2103460(v3, a2);
        result = v2;
        if ( !v15 )
          return 0;
        return result;
      }
LABEL_15:
      v2 = v12;
    }
    if ( v5 == v4 )
      goto LABEL_13;
LABEL_9:
    if ( v5 > v4 )
      goto LABEL_14;
    if ( !v8 )
      goto LABEL_12;
    v10 = memcmp(v7, v6, v8);
    if ( !v10 )
      goto LABEL_12;
    goto LABEL_34;
  }
  v2 = a1 + 8;
LABEL_21:
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v14 = std::_Rb_tree_decrement(v2);
    v3 = v14 + 32;
    v2 = v14;
    goto LABEL_23;
  }
  return 0;
}
