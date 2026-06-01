__int64 __fastcall sub_78B160(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  size_t v3; // rbp
  _QWORD *v4; // rbx
  void *v6; // rax
  const void *v7; // rsi
  int v8; // eax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD *vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = nullptr;
  v2 = operator new(0x18u);
  v3 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)v2 = 0;
  v4 = (_QWORD *)v2;
  *(_OWORD *)(v2 + 8) = 0;
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw(v3, a2);
    v4[2] = v3;
    v7 = *(const void **)(a1 + 168);
    *v4 = v6;
    memcpy(v6, v7, v3);
    v8 = vars0;
    v4[1] = v3;
    if ( !v8 )
      goto LABEL_3;
LABEL_5:
    jvalue_t_clear(&vars0);
    goto LABEL_3;
  }
  if ( (_DWORD)vars0 )
    goto LABEL_5;
LABEL_3:
  LODWORD(vars0) = 2;
  vars8 = v4;
  sub_78AFA0(a1, &vars0, 0);
  jvalue_t_clear(&vars0);
  return 0;
}

