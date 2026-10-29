__int64 __fastcall sub_773330(unsigned __int16 *a1)
{
  int v1; // r10d
  int v2; // edx
  __int64 v3; // rax
  _BYTE *v4; // r8
  int v5; // esi
  unsigned __int16 v6; // r8
  __int64 v7; // r8
  _BYTE *v8; // rax
  _BYTE *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rdx
  _DWORD *v14; // r10

  v1 = dword_2CD43F0;
  v2 = dword_2CD43F0 - 1;
  dword_2CD43F0 = v2;
  if ( v2 < 0 )
    goto LABEL_16;
  v3 = 16 * ((unsigned int)v2 + 125LL);
  v4 = &byte_2CCCDE0[v3];
  v5 = (unsigned __int16)(16 * (v2 + 125));
  *(_QWORD *)v4 = 96;
  *((_DWORD *)v4 + 2) = 0x10000;
  v6 = *a1;
  if ( *a1 )
  {
    if ( 16 * ((_WORD)v2 + 125) )
    {
      if ( v1 == 1 )
        goto LABEL_15;
      v2 = v1 - 3;
      dword_2CD43F0 = v1 - 3;
      v10 = &byte_2CCCDE0[16 * (v1 - 2) + 2000];
      if ( v1 == 2 )
        goto LABEL_16;
      v14 = &byte_2CCCDE0[16 * v2 + 2000];
      *v14 = 0;
      *(_WORD *)v14 = v3;
      *(_QWORD *)v10 = v14;
      *((_WORD *)v10 + 5) = 0;
      *((_WORD *)v10 + 4) = v6;
    }
    else
    {
      v10 = &byte_2CCCDE0[v6];
    }
    LOWORD(v5) = (_WORD)v10 - (unsigned __int16)byte_2CCCDE0;
  }
  dword_2CD43F0 = v2 - 1;
  if ( !v2 )
    goto LABEL_16;
  v7 = 16 * ((unsigned int)(v2 - 1) + 125LL);
  v8 = &byte_2CCCDE0[v7];
  *(_QWORD *)v8 = 39;
  *((_DWORD *)v8 + 2) = 0x10000;
  if ( (_WORD)v5 )
  {
    v11 = (unsigned int)(v2 - 2);
    if ( v2 != 1 )
    {
      v12 = (unsigned int)(v2 - 3);
      dword_2CD43F0 = v12;
      v8 = &byte_2CCCDE0[16 * v11 + 2000];
      if ( (_DWORD)v12 != -1 )
      {
        v13 = &byte_2CCCDE0[16 * v12 + 2000];
        *v13 = 0;
        *(_WORD *)v13 = v5;
        *(_QWORD *)v8 = v13;
        *((_WORD *)v8 + 5) = 0;
        *((_WORD *)v8 + 4) = v7;
        goto LABEL_5;
      }
LABEL_16:
      __longjmp_chk(env, 4294967288LL);
    }
LABEL_15:
    dword_2CD43F0 = -1;
    goto LABEL_16;
  }
LABEL_5:
  LOWORD(v5) = (_WORD)v8 - (unsigned __int16)byte_2CCCDE0;
  *(_DWORD *)a1 = v5;
  return (a1[1] << 16) | (unsigned int)(unsigned __int16)v5;
}
