__int64 __fastcall sub_5ECAD0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v1 = a1[16];
  if ( !v1 )
  {
    v1 = a1[17];
    if ( !v1 )
      v1 = a1[14];
  }
  v2 = *(__int64 **)(v1 + 24);
  if ( !v2 )
  {
    if ( !under_debugger )
      interr(87);
    BUG();
  }
  if ( a1[6] )
  {
    if ( (unsigned __int8)parse_reg_name(v11, a1[5]) )
      goto LABEL_5;
    return set_qerrno(1230);
  }
  if ( !(unsigned __int8)parse_reg_name(v11, haystack) )
    return set_qerrno(1230);
LABEL_5:
  v3 = v2[1];
  v4 = *v2;
  v5 = 1;
  if ( v3 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(_DWORD *)(v4 + 8 * v7) == LODWORD(v11[0]) )
        return set_qerrno(1232);
      v7 = ++v6;
    }
    while ( v6 < v3 );
    v5 = v3 + 1;
  }
  v9 = v11[0];
  if ( v2[2] < v5 )
  {
    v10 = qvector_reserve(v2, v4, v5, 8);
    v3 = v2[1];
    *v2 = v10;
    v4 = v10;
  }
  *(_QWORD *)(v4 + 8 * v3) = v9;
  ++v2[1];
  return 0;
}
