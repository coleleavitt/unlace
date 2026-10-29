_QWORD *__fastcall sub_79EBC0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  void *v8; // rax
  const void *v9; // rsi
  char v10; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x38u);
  *v2 = 0;
  v3 = v2;
  v4 = *(_QWORD *)a1;
  v5 = (void *)(*(_QWORD *)a1 - 24LL);
  if ( *(int *)(v4 - 8) < 0 )
  {
    v4 = std::string::_Rep::_M_clone(v5, &v10, 0);
  }
  else if ( v5 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v4 - 8), 1u);
    else
      ++*(_DWORD *)(v4 - 8);
  }
  v6 = *(_QWORD *)(a1 + 16);
  v3[1] = v4;
  v3[2] = 0;
  *(_OWORD *)(v3 + 3) = 0;
  if ( v6 )
  {
    v8 = (void *)qalloc_or_throw(v6);
    v3[2] = v8;
    v9 = *(const void **)(a1 + 8);
    v3[4] = v6;
    memcpy(v8, v9, v6);
    v3[3] = v6;
  }
  *((_WORD *)v3 + 20) = *(_WORD *)(a1 + 32);
  return v3;
}
