unsigned __int64 __fastcall sub_7CCAB0(__int64 a1)
{
  int v1; // ecx
  int v2; // edx
  unsigned int v3; // eax
  int v4; // edx
  int v6; // r12d
  void *ptr; // [rsp+0h] [rbp-8h] BYREF
  int vars0[4]; // [rsp+8h] [rbp+0h] BYREF
  char *s1; // [rsp+20h] [rbp+18h]
  void *vars20[2]; // [rsp+28h] [rbp+20h]
  int vars30[2]; // [rsp+38h] [rbp+30h]
  int *vars40; // [rsp+48h] [rbp+40h]

  vars40 = vars0;
  *(_QWORD *)vars30 = __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)vars0 = 0;
  reg_str_get(&ptr, "TlmHost", 0);
  v1 = reg_int_op("TlmTLS", 0, 1, 0);
  v2 = *(_DWORD *)(a1 + 168);
  v3 = v2 & 0xFFFFFFFE;
  v4 = v2 | 1;
  if ( !v1 )
    v3 = v4;
  *(_DWORD *)(a1 + 168) = v3;
  qgetenv("TLM_HOST");
  s1 = nullptr;
  *(_OWORD *)vars20 = 0;
  if ( (unsigned __int8)qgetenv("TLM_TLS") )
  {
    v6 = *(_DWORD *)(a1 + 168);
    if ( vars20[0] && !strcmp(s1, "YES") )
      *(_DWORD *)(a1 + 168) = v6 & 0xFFFFFFFE;
    else
      *(_DWORD *)(a1 + 168) = v6 | 1;
  }
  sub_7CBE80(a1 + 8, vars0, 1);
  if ( s1 )
  {
    vars20[0] = nullptr;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)vars0 = 0;
    qfree(ptr);
  }
  return *(_QWORD *)vars30 - __readfsqword(0x28u);
}
