/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000277A0
// Address: 0x00000001000277A0

//----- (00000001000277A0) ----------------------------------------------------
__int64 __fastcall sub_1000277A0(__int64 a1)
{
  char *v2; // rdi
  char **v3; // rax
  unsigned __int64 v4; // rcx
  const char *v5; // rsi
  const char *v7; // rsi

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = (char *)_s1;
  v3 = sub_100033D90(v2);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    if ( v4 )
      v5 = *(const char **)(a1 + 40);
    else
      v5 = _s1;
    set_error_string(0, v5);
    return set_qerrno();
  }
  if ( v4 >= 0x81 )
  {
    set_error_string(0, *(const char **)(a1 + 40));
    return set_qerrno();
  }
  if ( v4 )
    v7 = *(const char **)(a1 + 40);
  else
    v7 = _s1;
  return sub_100026210(a1, v7);
}
