__int64 __fastcall sub_76FAC0(const char *a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  _BYTE *v6; // rsi
  int v7; // edi
  __int64 v8; // rcx
  __int64 i; // rax

  v2 = strlen(a1);
  v3 = (unsigned int)(dword_2CD43F0 - 1);
  dword_2CD43F0 = v3;
  if ( (int)v3 < 0 )
    __longjmp_chk(env, 4294967288LL);
  v4 = 16 * (v3 + 125);
  HIWORD(v5) = 0;
  v6 = &byte_2CCCDE0[v4];
  *(_QWORD *)v6 = a1;
  *((_WORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 5) = v2;
  if ( v2 <= 8u )
  {
    v7 = v2 - 1;
    v8 = v7;
    for ( i = v7 - 1LL; ; --i )
    {
      v6[v8] = a1[v8];
      v8 = i;
      if ( i == v7 - 1LL - (unsigned int)v7 )
        break;
    }
  }
  LOWORD(v5) = v4;
  return v5;
}
