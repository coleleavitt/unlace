__int64 __fastcall sub_F2CD00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbx
  size_t v5; // rax
  void *v6; // rdi
  size_t v7; // r12
  double v8; // xmm0_8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE *)(a1 + 1104);
  v4 = v2;
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 1096), 6, 1, 0);
    v4 = *(_QWORD *)(a1 + 1096);
  }
  v5 = j__strlen(" ");
  v6 = *(void **)(v4 + 32);
  v7 = v5;
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    v4 = sub_227BF10(v4, " ", v5);
  }
  else if ( v5 )
  {
    memcpy(v6, " ", v5);
    *(_QWORD *)(v4 + 32) += v7;
  }
  v8 = sub_BF88F0(a2);
  result = sub_227B9D0(v4, v8);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return result;
}
