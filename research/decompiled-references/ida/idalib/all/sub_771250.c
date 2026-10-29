__int64 __fastcall sub_771250(__int16 *a1, unsigned __int8 a2)
{
  int v2; // ecx
  __int16 v3; // r8
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  _DWORD *v13; // rcx
  unsigned int v14; // eax

  v2 = dword_2CD43F0;
  v3 = *a1;
  v4 = (unsigned __int16)a1[1];
  v5 = (unsigned int)(dword_2CD43F0 - 1);
  dword_2CD43F0 = v5;
  if ( (int)v5 < 0 )
LABEL_8:
    __longjmp_chk(env, 4294967288LL);
  v6 = 16 * (v5 + 125);
  v7 = &byte_2CCCDE0[v6];
  *v7 = a2;
  v7[2] = (_DWORD)&stru_10000;
  if ( !v3 )
  {
    v8 = (unsigned __int16)v7;
    LOWORD(v8) = (_WORD)v7 - (unsigned __int16)byte_2CCCDE0;
    return (v4 << 16) | v8;
  }
  v10 = (unsigned int)(v2 - 2);
  if ( v2 == 1 )
  {
    dword_2CD43F0 = -1;
    goto LABEL_8;
  }
  v11 = (unsigned int)(v2 - 3);
  dword_2CD43F0 = v11;
  v12 = &byte_2CCCDE0[16 * v10 + 2000];
  if ( (_DWORD)v11 == -1 )
    goto LABEL_8;
  v13 = &byte_2CCCDE0[16 * v11 + 2000];
  *v13 = 0;
  *(_WORD *)v13 = v3;
  *(_QWORD *)v12 = v13;
  *((_WORD *)v12 + 4) = v6;
  v14 = (unsigned __int16)v12;
  *((_WORD *)v12 + 5) = 0;
  LOWORD(v14) = (_WORD)v12 - (unsigned __int16)byte_2CCCDE0;
  return (v4 << 16) | v14;
}
