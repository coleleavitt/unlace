__int64 __fastcall sub_7727B0(unsigned __int16 *a1)
{
  int v1; // r9d
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  _BYTE *v6; // rcx
  __int64 v8; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  _DWORD *v13; // rdx

  v1 = dword_2CD43F0;
  v2 = dword_2CD43F0 - 1;
  dword_2CD43F0 = v2;
  if ( v2 < 0 )
    goto LABEL_12;
  v3 = (unsigned int)v2;
  v4 = 7;
  v5 = 16 * (v3 + 125);
  v6 = &byte_2CCCDE0[v5];
  *(_QWORD *)v6 = "operator";
  *((_DWORD *)v6 + 2) = (_DWORD)&stru_80000;
  do
    v6[v4] = aConditionalOpe[v4 + 12];
  while ( v4-- != 0 );
  v8 = *a1;
  if ( !(_WORD)v8 )
    return (unsigned __int16)v5;
  v10 = &byte_2CCCDE0[v8];
  if ( (_WORD)v5 )
  {
    v11 = (unsigned int)(v1 - 2);
    if ( v1 == 1 )
    {
      dword_2CD43F0 = -1;
    }
    else
    {
      v12 = v1 - 3;
      dword_2CD43F0 = v12;
      v10 = &byte_2CCCDE0[16 * v11 + 2000];
      if ( v12 != -1 )
      {
        v13 = &byte_2CCCDE0[16 * v12 + 2000];
        *v13 = 0;
        *(_WORD *)v13 = v5;
        *(_QWORD *)v10 = v13;
        *((_WORD *)v10 + 5) = 0;
        *((_WORD *)v10 + 4) = v8;
        return (unsigned __int16)((_WORD)v10 - (unsigned __int16)byte_2CCCDE0);
      }
    }
LABEL_12:
    __longjmp_chk(env, 4294967288LL);
  }
  return (unsigned __int16)((_WORD)v10 - (unsigned __int16)byte_2CCCDE0);
}
