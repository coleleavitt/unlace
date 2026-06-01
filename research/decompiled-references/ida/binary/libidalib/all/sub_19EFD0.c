_QWORD *__fastcall sub_19EFD0(__int64 a1)
{
  __int16 v2; // ax
  __int16 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rbx
  const void *v9; // r12
  size_t v10; // rax
  size_t v11; // rbp
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax

  v2 = sub_19A9B0();
  if ( v2 == -1 )
    return nullptr;
  if ( !*(_QWORD *)(a1 + 24) )
    return nullptr;
  v3 = v2;
  if ( !TProgram::application )
    return nullptr;
  v4 = *(_QWORD *)(TProgram::application + 136LL);
  v5 = TProgram::application + 136LL;
  v6 = (__int64 *)((*(_BYTE *)(a1 + 60) & 0x10) != 0
                 ? (*(__int64 (__fastcall **)(__int64))(v4 + 24))(v5)
                 : (*(__int64 (__fastcall **)(__int64))(v4 + 32))(v5));
  v7 = sub_19E180(v6, a1);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return nullptr;
  *(_WORD *)(v7 + 168) = v3;
  v9 = *(const void **)(a1 + 16);
  if ( v9 && (v10 = strlen(*(const char **)(a1 + 16)), (v11 = v10) != 0) )
  {
    v13 = (void *)v8[22];
    v14 = v10 + 1;
    if ( v8[24] < v10 + 1 )
    {
      v15 = qvector_reserve();
      v8[22] = v15;
      v13 = (void *)v15;
    }
    v8[23] = v14;
    memmove(v13, v9, v11);
    *(_BYTE *)(v8[22] + v11) = 0;
  }
  else
  {
    v8[23] = 0;
  }
  sub_19EAE0(v6, (__int64)v8);
  return v8;
}

