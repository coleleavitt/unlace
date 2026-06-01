void __fastcall sub_E46B70(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(__int64, const char *); // rax
  size_t v4; // rax
  char *v5; // r14
  size_t v6; // r12
  size_t v7; // rax
  __int64 v8; // r15
  _BYTE *v9; // r14
  void *v10; // rdi
  unsigned __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 168);
  if ( !v2 )
    return;
  v3 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v2 + 56LL);
  if ( v3 != sub_DF1620 )
  {
    ((void (__fastcall *)(_QWORD))v3)(*(_QWORD *)(a1 + 168));
    return;
  }
  v4 = strlen(a2);
  v5 = *(char **)(v2 + 128);
  v6 = v4;
  if ( v5 == (char *)(v2 + 144) )
  {
    if ( v4 <= 0xF )
    {
LABEL_5:
      if ( a2 >= v5 )
      {
        if ( &v5[*(_QWORD *)(v2 + 136)] >= a2 )
        {
          std::string::_M_replace_cold();
          v5 = *(char **)(v2 + 128);
        }
        else if ( v6 )
        {
          goto LABEL_7;
        }
      }
      else if ( v6 )
      {
LABEL_7:
        if ( v6 == 1 )
          *v5 = *a2;
        else
          memcpy(*(void **)(v2 + 128), a2, v6);
        v5 = *(char **)(v2 + 128);
      }
      *(_QWORD *)(v2 + 136) = v6;
      v5[v6] = 0;
      return;
    }
    if ( v4 > 0x1D )
    {
      v8 = v4;
      v9 = (_BYTE *)operator new(v4 + 1);
    }
    else
    {
      v8 = 30;
      v9 = (_BYTE *)operator new(0x1Fu);
    }
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 144);
    if ( v7 >= v6 )
      goto LABEL_5;
    v8 = 2 * v7;
    if ( v6 < 2 * v7 )
    {
      v11 = v8 + 1;
      if ( (v7 & 0x4000000000000000LL) != 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v11 = v6 + 1;
      v8 = v6;
    }
    v9 = (_BYTE *)operator new(v11);
    if ( v6 == 1 )
    {
      *v9 = *a2;
      goto LABEL_19;
    }
  }
  memcpy(v9, a2, v6);
LABEL_19:
  v10 = *(void **)(v2 + 128);
  if ( (void *)(v2 + 144) != v10 )
    operator delete(v10, *(_QWORD *)(v2 + 144) + 1LL);
  *(_QWORD *)(v2 + 128) = v9;
  *(_QWORD *)(v2 + 144) = v8;
  *(_QWORD *)(v2 + 136) = v6;
  v9[v6] = 0;
}

