void __fastcall sub_796960(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r14
  const char *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbp
  size_t v11; // r15
  void *v12; // rax
  const char *v13; // rsi
  unsigned int v14; // [rsp+4h] [rbp-44h]

  if ( a3 != a2 )
  {
    v3 = a2;
    v4 = a1 + 1;
    while ( 1 )
    {
      v5 = (const char *)(a1 + 1);
      v6 = sub_7925C0(a1, v4, v3 + 32);
      v8 = v7;
      if ( v7 )
        break;
LABEL_4:
      v3 = std::_Rb_tree_increment(v3, v5);
      if ( v3 == a3 )
        return;
    }
    LOBYTE(v14) = v4 == (_QWORD *)v7 || v6 != nullptr;
    if ( (_BYTE)v14 )
    {
LABEL_7:
      v9 = operator new(0x58u);
      *(_QWORD *)(v9 + 32) = 0;
      v10 = v9;
      *(_OWORD *)(v9 + 40) = 0;
      v11 = *(_QWORD *)(v3 + 40);
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 40));
        *(_QWORD *)(v10 + 32) = v12;
        *(_QWORD *)(v10 + 48) = v11;
        memcpy(v12, *(const void **)(v3 + 32), v11);
        *(_QWORD *)(v10 + 40) = v11;
      }
      *(_BYTE *)(v10 + 56) = 2;
      *(_QWORD *)(v10 + 80) = 0;
      *(_OWORD *)(v10 + 64) = 0;
      copy_idcv(v10 + 56);
      v5 = (const char *)v10;
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v14, v10, v8, v4);
      ++a1[5];
      goto LABEL_4;
    }
    v13 = haystack;
    if ( *(_QWORD *)(v7 + 40) )
    {
      v13 = *(const char **)(v7 + 32);
      if ( !*(_QWORD *)(v3 + 40) )
        goto LABEL_12;
    }
    else if ( !*(_QWORD *)(v3 + 40) )
    {
LABEL_12:
      v14 = (unsigned int)strcmp(haystack, v13) >> 31;
      goto LABEL_7;
    }
    v14 = (unsigned int)strcmp(*(const char **)(v3 + 32), v13) >> 31;
    goto LABEL_7;
  }
}
