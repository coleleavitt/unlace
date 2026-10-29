void __fastcall sub_E39390(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rax
  void (__fastcall *v6)(__int64, const char *); // rbp
  const char *v7; // r12
  size_t v8; // rax
  char *v9; // r14
  size_t v10; // rbp
  size_t v11; // rax
  __int64 v12; // r15
  void *v13; // rdi
  void *v14[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 8) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    sub_E38C90(a1, a2, v5);
    return;
  }
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 48LL))(v14, a1);
  if ( !v14[1] )
  {
    if ( v14[0] != v15 )
      operator delete(v14[0], v15[0] + 1LL);
    v6 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
    v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    if ( v6 != sub_DF1620 )
    {
      v6(a1, v7);
      return;
    }
    v8 = strlen(v7);
    v9 = *(char **)(a1 + 128);
    v10 = v8;
    if ( v9 == (char *)(a1 + 144) )
    {
      if ( v8 <= 0xF )
        goto LABEL_12;
      if ( v8 <= 0x1D )
      {
        v12 = 30;
        v9 = (char *)operator new(0x1Fu);
      }
      else
      {
        v12 = v8;
        v9 = (char *)operator new(v8 + 1);
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 144);
      if ( v11 >= v10 )
      {
LABEL_12:
        if ( v7 >= v9 && &v9[*(_QWORD *)(a1 + 136)] >= v7 )
        {
          std::string::_M_replace_cold();
          v9 = *(char **)(a1 + 128);
        }
        else if ( v10 )
        {
          if ( v10 == 1 )
            *v9 = *v7;
          else
            memcpy(*(void **)(a1 + 128), v7, v10);
          v9 = *(char **)(a1 + 128);
        }
LABEL_18:
        *(_QWORD *)(a1 + 136) = v10;
        v9[v10] = 0;
        return;
      }
      v12 = 2 * v11;
      if ( v10 < 2 * v11 )
      {
        if ( (v11 & 0x4000000000000000LL) != 0 )
          std::__throw_bad_alloc();
        v9 = (char *)operator new(v12 + 1);
      }
      else
      {
        v12 = v10;
        v9 = (char *)operator new(v10 + 1);
      }
      if ( v10 == 1 )
      {
        *v9 = *v7;
        goto LABEL_25;
      }
    }
    memcpy(v9, v7, v10);
LABEL_25:
    v13 = *(void **)(a1 + 128);
    if ( (void *)(a1 + 144) != v13 )
      operator delete(v13, *(_QWORD *)(a1 + 144) + 1LL);
    *(_QWORD *)(a1 + 128) = v9;
    *(_QWORD *)(a1 + 144) = v12;
    goto LABEL_18;
  }
  if ( v14[0] != v15 )
    operator delete(v14[0], v15[0] + 1LL);
}

