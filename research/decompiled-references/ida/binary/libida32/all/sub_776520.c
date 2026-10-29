void __fastcall sub_776520(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r14
  const char *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  size_t v10; // r15
  void *v11; // rax

  if ( a3 != a2 )
  {
    v3 = a2;
    v4 = a1 + 1;
    while ( 1 )
    {
      v5 = (const char *)(a1 + 1);
      v6 = sub_772180(a1, v4, v3 + 32);
      if ( v7 )
        break;
LABEL_4:
      v3 = std::_Rb_tree_increment();
      if ( v3 == a3 )
        return;
    }
    if ( v4 == (_QWORD *)v7 || v6 != nullptr )
    {
LABEL_7:
      v8 = operator new(0x58u);
      *(_QWORD *)(v8 + 32) = 0;
      v9 = v8;
      *(_OWORD *)(v8 + 40) = 0;
      v10 = *(_QWORD *)(v3 + 40);
      if ( v10 )
      {
        v11 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 40), v5);
        *(_QWORD *)(v9 + 32) = v11;
        *(_QWORD *)(v9 + 48) = v10;
        memcpy(v11, *(const void **)(v3 + 32), v10);
        *(_QWORD *)(v9 + 40) = v10;
      }
      *(_BYTE *)(v9 + 56) = 2;
      *(_QWORD *)(v9 + 80) = 0;
      *(_OWORD *)(v9 + 64) = 0;
      copy_idcv(v9 + 56);
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
      goto LABEL_4;
    }
    v5 = haystack;
    if ( *(_QWORD *)(v7 + 40) )
    {
      v5 = *(const char **)(v7 + 32);
      if ( !*(_QWORD *)(v3 + 40) )
        goto LABEL_12;
    }
    else if ( !*(_QWORD *)(v3 + 40) )
    {
LABEL_12:
      strcmp(haystack, v5);
      goto LABEL_7;
    }
    strcmp(*(const char **)(v3 + 32), v5);
    goto LABEL_7;
  }
}

