__int64 __fastcall sub_76E8E0(int a1, char a2)
{
  __int64 v2; // rdi
  char *v3; // r8
  unsigned __int8 v4; // cl
  bool v5; // sf
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  char *v9; // rsi
  int v10; // edi
  __int64 v11; // rcx
  __int64 i; // rax

  v2 = 2LL * a1;
  v3 = (&off_2B393E0)[v2];
  v4 = LOBYTE((&off_2B393E0)[v2 + 1]) - a2;
  v5 = dword_2CD43F0 - 1 < 0;
  v6 = --dword_2CD43F0;
  if ( v5 )
    __longjmp_chk(env, 4294967288LL);
  HIWORD(v7) = 0;
  v8 = 16 * (v6 + 125LL);
  v9 = (char *)&unk_2CCCDE0 + v8;
  *(_QWORD *)v9 = v3;
  *((_WORD *)v9 + 4) = 0;
  *((_WORD *)v9 + 5) = v4;
  if ( v4 <= 8u )
  {
    v10 = v4 - 1;
    v11 = v10;
    for ( i = v10 - 1LL; ; --i )
    {
      v9[v11] = v3[v11];
      v11 = i;
      if ( i == v10 - 1LL - (unsigned int)v10 )
        break;
    }
  }
  LOWORD(v7) = v8;
  return v7;
}
