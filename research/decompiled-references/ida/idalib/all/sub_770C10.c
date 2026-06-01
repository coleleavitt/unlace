__int64 __fastcall sub_770C10(__int16 *a1)
{
  int v1; // esi
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE *v4; // rdx
  __int16 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  _BYTE *v8; // rdx
  _DWORD *v9; // rsi

  v1 = dword_2CD43F0;
  v2 = (unsigned int)--dword_2CD43F0;
  if ( (dword_2CD44CC & 0x400000) != 0 )
  {
    if ( (int)v2 < 0 )
      goto LABEL_11;
    result = 16 * (v2 + 125);
    v4 = &byte_2CCCDE0[result];
    *(_QWORD *)v4 = 8236;
    *((_DWORD *)v4 + 2) = (_DWORD)&stru_20000;
    v5 = *a1;
    if ( !*a1 )
    {
LABEL_4:
      *a1 = (_WORD)v4 - (unsigned __int16)byte_2CCCDE0;
      return result;
    }
  }
  else
  {
    if ( (int)v2 < 0 )
      goto LABEL_11;
    result = 16 * (v2 + 125);
    v4 = &byte_2CCCDE0[result];
    *(_QWORD *)v4 = 44;
    *((_DWORD *)v4 + 2) = (_DWORD)&stru_10000;
    v5 = *a1;
    if ( !*a1 )
      goto LABEL_4;
  }
  v6 = (unsigned int)(v1 - 2);
  if ( v1 == 1 )
  {
    dword_2CD43F0 = -1;
LABEL_11:
    __longjmp_chk(env, 4294967288LL);
  }
  v7 = (unsigned int)(v1 - 3);
  dword_2CD43F0 = v7;
  v8 = &byte_2CCCDE0[16 * v6 + 2000];
  if ( (_DWORD)v7 == -1 )
    goto LABEL_11;
  v9 = &byte_2CCCDE0[16 * v7 + 2000];
  *v9 = 0;
  *(_WORD *)v9 = v5;
  *(_QWORD *)v8 = v9;
  *((_WORD *)v8 + 5) = 0;
  *((_WORD *)v8 + 4) = result;
  *a1 = (_WORD)v8 - (unsigned __int16)byte_2CCCDE0;
  return result;
}
