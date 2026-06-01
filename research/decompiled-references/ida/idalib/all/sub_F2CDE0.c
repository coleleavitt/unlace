_BYTE *__fastcall sub_F2CDE0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rbx
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // r15
  _BYTE *result; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE *)(a1 + 1104);
  v5 = v3;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 1096), 6, 1, 0);
    v5 = *(_QWORD *)(a1 + 1096);
  }
  v6 = j__strlen(" ");
  v7 = *(void **)(v5 + 32);
  v8 = v6;
  if ( v6 > *(_QWORD *)(v5 + 24) - (_QWORD)v7 )
  {
    sub_227BF10(v5, " ", v6);
    result = sub_BF8A70(a2, *(_QWORD *)(a1 + 1096));
    if ( v4 )
      return (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else if ( v6 )
  {
    memcpy(v7, " ", v6);
    *(_QWORD *)(v5 + 32) += v8;
    result = sub_BF8A70(a2, *(_QWORD *)(a1 + 1096));
    if ( v4 )
      return (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    result = sub_BF8A70(a2, v5);
    if ( v4 )
      return (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  return result;
}
