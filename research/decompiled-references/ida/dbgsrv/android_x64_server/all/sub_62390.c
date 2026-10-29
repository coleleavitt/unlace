/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62390
// Address: 0x0000000000062390

//----- (0000000000062390) ----------------------------------------------------
__int64 __fastcall sub_62390(__int64 a1, double a2, __m128 a3)
{
  char *v4; // rdi
  char **v5; // rax
  __int64 v6; // rcx
  const char *v7; // rsi
  bool v8; // al
  const char *v9; // rsi

  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(char **)(a1 + 40);
  else
    v4 = (char *)s1;
  v5 = sub_6CF60(v4);
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v5 )
  {
    v8 = v6 != 0 && (unsigned __int64)(v6 - 1) > 0x7F;
    if ( v6 )
    {
      v9 = *(const char **)(a1 + 40);
      if ( v8 )
      {
LABEL_9:
        set_error_string(0, v9);
        return set_qerrno(0x1Cu);
      }
    }
    else
    {
      v9 = s1;
      if ( v8 )
        goto LABEL_9;
    }
    return sub_60F40(a1, v9, a2, a3);
  }
  if ( v6 )
    v7 = *(const char **)(a1 + 40);
  else
    v7 = s1;
  set_error_string(0, v7);
  return set_qerrno(0x34u);
}
