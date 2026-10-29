__int64 __fastcall sub_7AB4F0(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // rbp
  _QWORD *v3; // rbx
  void *v5; // rax
  const void *v6; // rsi
  int v7; // eax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD *vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = nullptr;
  v1 = operator new(0x18u);
  v2 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)v1 = 0;
  v3 = (_QWORD *)v1;
  *(_OWORD *)(v1 + 8) = 0;
  if ( v2 )
  {
    v5 = (void *)qalloc_or_throw(v2);
    v3[2] = v2;
    v6 = *(const void **)(a1 + 176);
    *v3 = v5;
    memcpy(v5, v6, v2);
    v7 = vars0;
    v3[1] = v2;
    if ( !v7 )
      goto LABEL_3;
LABEL_5:
    jvalue_t_clear(&vars0);
    goto LABEL_3;
  }
  if ( (_DWORD)vars0 )
    goto LABEL_5;
LABEL_3:
  LODWORD(vars0) = 2;
  vars8 = v3;
  sub_7AB330(a1, &vars0, 0);
  jvalue_t_clear(&vars0);
  return 0;
}
