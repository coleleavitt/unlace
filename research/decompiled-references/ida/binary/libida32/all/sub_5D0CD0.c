__int64 __fastcall sub_5D0CD0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  const char *v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v1 = a1[15];
  if ( !v1 )
  {
    v1 = a1[16];
    if ( !v1 )
      v1 = a1[13];
  }
  v2 = *(__int64 **)(v1 + 24);
  if ( !v2 )
  {
    if ( !under_debugger )
      interr(87);
    BUG();
  }
  v3 = haystack;
  if ( a1[6] )
  {
    v3 = (const char *)a1[5];
    if ( (unsigned __int8)parse_reg_name(v12, v3) )
      goto LABEL_5;
    return set_qerrno(1230, v3);
  }
  if ( !(unsigned __int8)parse_reg_name(v12, haystack) )
    return set_qerrno(1230, v3);
LABEL_5:
  v4 = v2[1];
  v5 = *v2;
  v6 = 1;
  if ( v4 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(_DWORD *)(v5 + 8 * v8) == LODWORD(v12[0]) )
        return set_qerrno(1232, v5);
      v8 = ++v7;
    }
    while ( v7 < v4 );
    v6 = v4 + 1;
  }
  v10 = v12[0];
  if ( v2[2] < v6 )
  {
    v11 = qvector_reserve(v2, v5, v6, 8);
    v4 = v2[1];
    *v2 = v11;
    v5 = v11;
  }
  *(_QWORD *)(v5 + 8 * v4) = v10;
  ++v2[1];
  return 0;
}

