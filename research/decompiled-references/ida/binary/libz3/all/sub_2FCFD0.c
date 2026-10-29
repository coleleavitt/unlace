void __fastcall sub_2FCFD0(__int64 a1, const char *a2)
{
  __int64 v2; // r13
  size_t v4; // rax
  char *v5; // r12
  size_t v6; // rbp
  size_t v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rdi

  v2 = a1 + 776;
  v4 = strlen(a2);
  v5 = *(char **)(a1 + 776);
  v6 = v4;
  if ( v5 == (char *)(a1 + 792) )
  {
    if ( v4 <= 0xF )
      goto LABEL_3;
    if ( v4 > 0x1D )
    {
      v8 = v4;
      v5 = (char *)operator new(v4 + 1);
    }
    else
    {
      v8 = 30;
      v5 = (char *)operator new(0x1Fu);
    }
    goto LABEL_18;
  }
  v7 = *(_QWORD *)(a1 + 792);
  if ( v7 < v6 )
  {
    v8 = 2 * v7;
    if ( v6 < 2 * v7 )
    {
      v9 = v8 + 1;
      if ( (v7 & 0x4000000000000000LL) != 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v9 = v6 + 1;
      v8 = v6;
    }
    v5 = (char *)operator new(v9);
    if ( v6 == 1 )
    {
      *v5 = *a2;
      goto LABEL_19;
    }
LABEL_18:
    memcpy(v5, a2, v6);
LABEL_19:
    sub_233E40(v2);
    *(_QWORD *)(a1 + 776) = v5;
    *(_QWORD *)(a1 + 792) = v8;
    goto LABEL_8;
  }
LABEL_3:
  if ( a2 < v5 || &v5[*(_QWORD *)(a1 + 784)] < a2 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
        *v5 = *a2;
      else
        memcpy(*(void **)(a1 + 776), a2, v6);
      v5 = *(char **)(a1 + 776);
    }
  }
  else
  {
    std::string::_M_replace_cold();
    v5 = *(char **)(a1 + 776);
  }
LABEL_8:
  *(_QWORD *)(a1 + 784) = v6;
  v5[v6] = 0;
}

