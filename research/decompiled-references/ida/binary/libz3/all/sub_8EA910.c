__int64 __fastcall sub_8EA910(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r12
  int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  char v11; // [rsp+0h] [rbp-28h]

  v2 = *(_QWORD **)(a2 + 8);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v3 != v2 )
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = *(_QWORD *)(a1 + 104);
        if ( !(unsigned __int8)sub_15D2CB0(v5, *v2) || *(_WORD *)(v4 + 4) )
        {
LABEL_5:
          sub_1875640("an assumption must be a propositional variable or the negation of one", v11);
          return 0;
        }
        v7 = *(_DWORD *)(v4 + 24);
        v8 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
        if ( !v7 )
          break;
        if ( v8 )
        {
          if ( *v8 )
            goto LABEL_10;
          if ( v8[1] != 8 )
            goto LABEL_23;
          if ( v7 != 1 )
            goto LABEL_23;
          v9 = *(_QWORD *)(v4 + 32);
          if ( *(_WORD *)(v9 + 4) )
            goto LABEL_23;
          if ( *(_DWORD *)(v9 + 24) )
          {
            if ( v4 == *(_QWORD *)(v5 + 856) || *(_QWORD *)(v5 + 864) == v4 )
              goto LABEL_14;
            goto LABEL_12;
          }
          v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
          if ( !v10 || *v10 == -1 || *(_QWORD *)(v5 + 856) == v4 )
            goto LABEL_14;
LABEL_24:
          if ( v4 == *(_QWORD *)(v5 + 864) )
          {
            if ( v3 == ++v2 )
              return 1;
          }
          else
          {
LABEL_12:
            if ( !*v8 || v7 )
              goto LABEL_5;
LABEL_14:
            if ( v3 == ++v2 )
              return 1;
          }
        }
        else
        {
          if ( v4 == *(_QWORD *)(v5 + 856) )
            goto LABEL_14;
          if ( v4 != *(_QWORD *)(v5 + 864) )
            goto LABEL_5;
          if ( v3 == ++v2 )
            return 1;
        }
      }
      if ( !v8 || *v8 == -1 )
        goto LABEL_14;
      if ( *v8 || v8[1] == 8 )
      {
LABEL_10:
        if ( v4 == *(_QWORD *)(v5 + 856) || v4 == *(_QWORD *)(v5 + 864) )
          goto LABEL_14;
        goto LABEL_12;
      }
LABEL_23:
      if ( v4 == *(_QWORD *)(v5 + 856) )
        goto LABEL_14;
      goto LABEL_24;
    }
  }
  return 1;
}

