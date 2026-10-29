__int64 __fastcall sub_770730(__int16 *a1, unsigned __int16 a2)
{
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int16 v6; // si
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rax
  _DWORD *v11; // rcx

  v2 = dword_2CD43F0;
  v3 = dword_2CD43F0 - 1;
  dword_2CD43F0 = v3;
  if ( v3 < 0 )
LABEL_8:
    __longjmp_chk(env, 4294967288LL);
  v4 = 16 * ((unsigned int)v3 + 125LL);
  v5 = &byte_2CCCDE0[v4];
  *v5 = a2;
  v5[2] = (_DWORD)&stru_20000;
  v6 = *a1;
  if ( !*a1 )
  {
    *a1 = v4;
    return v4;
  }
  v8 = (unsigned int)(v2 - 2);
  if ( v2 == 1 )
  {
    dword_2CD43F0 = -1;
    goto LABEL_8;
  }
  v9 = (unsigned int)(v2 - 3);
  dword_2CD43F0 = v9;
  v10 = &byte_2CCCDE0[16 * v8 + 2000];
  if ( (_DWORD)v9 == -1 )
    goto LABEL_8;
  v11 = &byte_2CCCDE0[16 * v9 + 2000];
  *v11 = 0;
  *(_WORD *)v11 = v6;
  *(_QWORD *)v10 = v11;
  *((_WORD *)v10 + 5) = 0;
  *((_WORD *)v10 + 4) = v4;
  result = v10 - byte_2CCCDE0;
  *a1 = result;
  return result;
}
