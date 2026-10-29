__int64 __fastcall sub_10DCF0(const char *src, char a2, __int64 a3)
{
  char v5; // al
  size_t v6; // r14
  size_t v7; // r8
  size_t v8; // r9
  char *v9; // rsi
  char *v11; // [rsp+10h] [rbp-78h]
  void *srca; // [rsp+30h] [rbp-58h]

  v5 = netnode_inited();
  if ( !a3 || v5 != 1 )
    return 0;
  v11 = (char *)qvector_reserve();
  strcpy(v11, "$ ");
  if ( src )
  {
    v6 = strlen(src);
    srca = (void *)qvector_reserve();
    memmove(srca, src, v6);
    *((_BYTE *)srca + v6) = 0;
    if ( v6 != -1 )
    {
      v7 = v6;
      if ( v6 )
      {
        v8 = v6 + 2;
        v9 = v11;
        if ( v6 != -3 )
        {
          v11 = (char *)qvector_reserve();
          v7 = v6;
          v9 = v11;
          v8 = v6 + 2;
        }
        v9[v8] = 0;
        memcpy(v11 + 2, srca, v7);
      }
    }
    if ( srca )
      qfree();
  }
  netnode_check();
  if ( a2 )
    netnode_supset();
  else
    netnode_supdel();
  if ( v11 )
    qfree();
  return 1;
}

