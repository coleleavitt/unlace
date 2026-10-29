__int64 __fastcall sub_102AC0(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int8 v2; // al
  __int64 v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rdx
  const char *v8; // rbp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  size_t v12; // r13
  const void *v13; // r12
  const char *v14; // rsi
  void *v15; // [rsp+0h] [rbp-48h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1248) )
    return v16 - __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1250) && !(unsigned __int8)sub_1023A0(a1, nullptr) )
  {
    v7 = *(_QWORD *)(a1 + 760);
    v8 = "float";
    v9 = *(_DWORD *)(v7 + 36);
    if ( v9 )
    {
      v8 = nullptr;
      if ( v9 == 1 )
      {
        v10 = *(_DWORD *)(v7 + 40);
        v8 = "signed integer";
        if ( v10 != 1 )
        {
          v8 = "unsigned integer";
          if ( v10 != 2 )
          {
            v8 = "hexadecimal integer";
            if ( v10 )
              v8 = nullptr;
          }
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 1216);
    if ( v11 )
    {
      v12 = v11 - 1;
      v13 = *(const void **)(a1 + 1208);
      v15 = nullptr;
      if ( (unsigned __int64)(v11 - 1) > 0x1D )
      {
        v12 = 30;
LABEL_21:
        v15 = (void *)qvector_reserve();
        memmove(v15, v13, v12);
        *((_BYTE *)v15 + v12) = 0;
        v14 = (const char *)v15;
LABEL_22:
        sub_8F740((__int64)"String \"%s\" cannot be converted to %s\n", v14, v8);
        if ( v15 )
          qfree();
        return TScreen::makeBeep(nullptr);
      }
      if ( v11 != 1 )
        goto LABEL_21;
    }
    else
    {
      v15 = nullptr;
    }
    v14 = s1;
    goto LABEL_22;
  }
  v1 = a1 + 1264;
  v2 = enable_auto();
  v3 = *(_QWORD *)(a1 + 1280);
  v4 = v2;
  if ( v3 != a1 + 1264 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v3 + 32);
        if ( (unsigned __int8)is_loaded() )
        {
          if ( *(_QWORD *)(v3 + 40) == get_wide_byte() )
            break;
        }
        patch_byte();
        sub_11A520(v5, 1);
        v3 = std::_Rb_tree_increment();
        if ( v3 == v1 )
          goto LABEL_9;
      }
      v3 = std::_Rb_tree_increment();
    }
    while ( v3 != v1 );
  }
LABEL_9:
  enable_auto();
  sub_154600(v4);
  sub_154630();
  return sub_FF850((__int64 *)a1);
}

