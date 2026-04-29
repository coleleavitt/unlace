__int64 __fastcall sub_78F0(_QWORD *a1, char *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  size_t v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdi

  v4 = a1[3];
  v6 = a1[1];
  if ( v4 >= v6 || (v7 = a3 + v4, v4 >= v7) )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    if ( v6 >= v7 )
    {
      v9 = a3;
      if ( a3 <= 0 )
        return v9;
      v8 = a3;
    }
    else
    {
      v8 = v6 - v4;
      v9 = v6 - v4;
      if ( (__int64)(v6 - v4) <= 0 )
        goto LABEL_7;
    }
    memcpy(a2, (const void *)(*a1 + v4), v8);
    a1[3] += v8;
  }
LABEL_7:
  if ( a3 != v8 )
  {
    if ( !byte_136E0 && (int)sub_55B0() <= 0 )
      sub_58B0((__int64)"Read error", "HIDECANCEL\nFile read error at %08zuX (may be bad file structure), continue?");
    v10 = 0;
    byte_136E0 = 1;
    if ( v9 >= 0 )
      v10 = v9;
    memset(&a2[v10], 0, a3 - v10);
  }
  return v9;
}
