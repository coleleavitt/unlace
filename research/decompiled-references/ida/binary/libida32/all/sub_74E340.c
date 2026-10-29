__int64 __fastcall sub_74E340(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  char *v3; // rdx
  bool v4; // sf
  unsigned int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  char *v8; // rdi
  int v9; // r8d
  __int64 v10; // rsi
  __int64 i; // rax

  v1 = 2LL * a1;
  v2 = LOBYTE((&off_2B0F4A0)[v1 + 1]) - (((unsigned int)dword_2CAA5CC >> 3) & 2);
  v3 = &(&off_2B0F4A0)[v1][((unsigned int)dword_2CAA5CC >> 3) & 2];
  v4 = dword_2CAA4F0 - 1 < 0;
  v5 = --dword_2CAA4F0;
  if ( v4 )
    __longjmp_chk();
  HIWORD(v6) = 0;
  v7 = 16 * (v5 + 125LL);
  v8 = (char *)&unk_2CA2EE0 + v7;
  *(_QWORD *)v8 = v3;
  *((_WORD *)v8 + 4) = 0;
  *((_WORD *)v8 + 5) = (unsigned __int8)v2;
  if ( (unsigned __int8)v2 <= 8u )
  {
    v9 = (unsigned __int8)v2 - 1;
    v10 = v9;
    for ( i = v9 - 1LL; ; --i )
    {
      v8[v10] = v3[v10];
      v10 = i;
      if ( i == v9 - 1LL - (unsigned int)v9 )
        break;
    }
  }
  LOWORD(v6) = v7;
  return v6;
}

