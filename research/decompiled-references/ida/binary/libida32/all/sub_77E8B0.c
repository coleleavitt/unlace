_QWORD *__fastcall sub_77E8B0(__int64 a1, const char *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  void *v6; // rdi
  size_t v7; // r12
  void *v9; // rax
  const void *v10; // rsi
  char v11; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = (_QWORD *)operator new(0x38u);
  *v3 = 0;
  v4 = v3;
  v5 = *(_QWORD *)a1;
  v6 = (void *)(*(_QWORD *)a1 - 24LL);
  if ( *(int *)(v5 - 8) < 0 )
  {
    a2 = &v11;
    v5 = std::string::_Rep::_M_clone();
  }
  else if ( v6 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v5 - 8), 1u);
    else
      ++*(_DWORD *)(v5 - 8);
  }
  v7 = *(_QWORD *)(a1 + 16);
  v4[1] = v5;
  v4[2] = 0;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v7 )
  {
    v9 = (void *)qalloc_or_throw(v7, a2);
    v4[2] = v9;
    v10 = *(const void **)(a1 + 8);
    v4[4] = v7;
    memcpy(v9, v10, v7);
    v4[3] = v7;
  }
  *((_WORD *)v4 + 20) = *(_WORD *)(a1 + 32);
  return v4;
}

