__int64 __fastcall sub_21B7150(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  const char **v5; // r12
  __int64 v6; // rax
  const char **v7; // r15
  __int64 v8; // rbp
  char **v9; // rbx
  size_t v10; // rax
  size_t v11; // rbp
  char *v12; // rax
  const char *v13; // r15
  _BYTE *v14; // rdi
  const char **v16; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-C0h]
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  ptr = v19;
  v18 = 0x1000000000LL;
  sub_21B6F20(a2, (__int64)&ptr, a3, 0, 0);
  v4 = (unsigned int)v18;
  v5 = (const char **)ptr;
  *(_OWORD *)a1 = 0;
  v6 = 8 * v4;
  *(_QWORD *)(a1 + 16) = 0;
  v7 = &v5[(unsigned __int64)v6 / 8];
  v8 = 4 * v6;
  v16 = &v5[(unsigned __int64)v6 / 8];
  if ( v6 )
  {
    v9 = (char **)operator new(4 * v6);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = (char *)v9 + v8;
    if ( v5 == v7 )
    {
LABEL_14:
      v14 = ptr;
      goto LABEL_15;
    }
    while ( 1 )
    {
      v13 = *v5;
      *v9 = (char *)(v9 + 2);
      if ( !v13 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v10 = strlen(v13);
      v11 = v10;
      if ( v10 > 0xF )
        break;
      v12 = *v9;
      if ( v11 == 1 )
      {
        *v12 = *v13;
        v12 = *v9;
      }
      else if ( v11 )
      {
        goto LABEL_13;
      }
LABEL_7:
      v9[1] = (char *)v11;
      ++v5;
      v9 += 4;
      v12[v11] = 0;
      if ( v16 == v5 )
        goto LABEL_14;
    }
    v12 = (char *)operator new(v10 + 1);
    v9[2] = (char *)v11;
    *v9 = v12;
LABEL_13:
    memcpy(v12, v13, v11);
    v12 = *v9;
    goto LABEL_7;
  }
  v14 = v5;
  *(_QWORD *)a1 = 0;
  v9 = nullptr;
  *(_QWORD *)(a1 + 16) = v8;
LABEL_15:
  *(_QWORD *)(a1 + 8) = v9;
  if ( v14 != v19 )
    free(v14);
  return a1;
}
