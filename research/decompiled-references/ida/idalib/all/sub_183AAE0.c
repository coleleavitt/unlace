unsigned __int64 **__fastcall sub_183AAE0(unsigned __int64 **a1, char a2)
{
  unsigned __int64 **result; // rax
  unsigned __int64 *v3; // rdi
  unsigned int v4; // r8d
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx

  result = a1;
  v3 = *a1;
  v4 = *((_DWORD *)result + 2);
  v5 = *v3;
  v6 = *v3 & 1;
  if ( a2 )
  {
    if ( v6 )
    {
      v7 = v5 >> 58;
      v8 = ~(-1LL << (v5 >> 58));
      v9 = v8 & (v5 >> 1) | (1LL << v4);
LABEL_4:
      *v3 = 2 * ((v7 << 57) | v8 & v9) + 1;
      return result;
    }
    *(_QWORD *)(*(_QWORD *)v5 + 8LL * (v4 >> 6)) |= 1LL << v4;
  }
  else
  {
    if ( v6 )
    {
      v7 = v5 >> 58;
      v9 = (v5 >> 1) & ~(1LL << v4);
      v8 = ~(-1LL << v7);
      goto LABEL_4;
    }
    *(_QWORD *)(*(_QWORD *)v5 + 8LL * (v4 >> 6)) &= ~(1LL << v4);
  }
  return result;
}
