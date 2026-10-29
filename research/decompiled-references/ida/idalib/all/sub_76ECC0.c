unsigned __int64 __fastcall sub_76ECC0(_DWORD *a1, unsigned __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rcx
  char *v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // rbp
  char *v7; // r8
  __int64 v8; // rbp
  _BYTE *v9; // r12
  int v10; // r8d
  __int64 v11; // rcx
  __int64 i; // rax
  unsigned __int64 v14; // rax
  bool v15; // sf
  __int64 v16; // rax
  _DWORD v17[3]; // [rsp+1Ch] [rbp-2Ch] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v2 = HIDWORD(a2) == 0;
  v18 = __readfsqword(0x28u);
  v3 = a2;
  *a1 = 0;
  v17[0] = 0;
  v4 = (char *)v17;
  if ( v2 )
  {
    do
    {
      *--v4 = (unsigned int)v3 % 0xA + 48;
      v5 = v3;
      LODWORD(v3) = (unsigned int)v3 / 0xA;
    }
    while ( v5 > 9 );
  }
  else
  {
    do
    {
      *--v4 = v3 % 0xA + 48;
      v14 = v3;
      v3 /= 0xAu;
    }
    while ( v14 > 9 );
  }
  v6 = (unsigned int)(dword_2CD43F0 - 1);
  dword_2CD43F0 = v6;
  if ( (int)v6 < 0 )
    __longjmp_chk(env, 4294967288LL);
  v7 = (char *)((char *)v17 - v4);
  v8 = 16 * (v6 + 125);
  v9 = &byte_2CCCDE0[v8];
  *(_QWORD *)v9 = v4;
  *((_WORD *)v9 + 4) = 0;
  *((_WORD *)v9 + 5) = (char *)v17 - v4;
  if ( (unsigned int)((char *)v17 - v4) > 8 )
  {
    v15 = dword_2CD43F4 - (int)v7 < 0;
    v16 = (unsigned int)(dword_2CD43F4 - (_DWORD)v7);
    dword_2CD43F4 -= (int)v7;
    if ( v15 )
      __longjmp_chk(env, 4294967287LL);
    *(_QWORD *)v9 = memcpy(&byte_2CCCDE0[v16], v4, (unsigned int)v7);
  }
  else
  {
    v10 = (_DWORD)v7 - 1;
    v11 = v10;
    for ( i = v10 - 1LL; ; --i )
    {
      v9[v11] = v4[v11];
      v11 = i;
      if ( v10 - 1LL - (unsigned int)v10 == i )
        break;
    }
  }
  *(_WORD *)a1 = v8;
  return v18 - __readfsqword(0x28u);
}
