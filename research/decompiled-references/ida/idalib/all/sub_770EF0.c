__int64 __fastcall sub_770EF0(unsigned __int16 *a1)
{
  bool v1; // sf
  __int64 v2; // rax
  __int64 v3; // rax
  _BYTE *v4; // rdx
  __int64 v5; // rdx
  _BYTE *v7; // rdx
  unsigned __int16 v8; // si
  __int16 v9; // di
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rax
  unsigned int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v1 = dword_2CD43F0 - 1 < 0;
  v2 = (unsigned int)--dword_2CD43F0;
  if ( v1 )
    goto LABEL_12;
  v3 = 16 * (v2 + 125);
  v4 = &byte_2CCCDE0[v3];
  LOWORD(v14) = v3;
  *(_QWORD *)v4 = 1684631414;
  *((_DWORD *)v4 + 2) = 0x40000;
  v5 = *a1;
  if ( (_WORD)v5 )
  {
    v7 = &byte_2CCCDE0[v5];
    if ( !(_WORD)v3 )
      goto LABEL_5;
    sub_76FD20((__int16 *)&v14, 0x20u);
    v8 = *a1;
    if ( !*a1 )
      return v14;
    v9 = v14;
    v7 = &byte_2CCCDE0[v8];
    if ( !(_WORD)v14 )
      goto LABEL_5;
    v10 = dword_2CD43F0;
    if ( dword_2CD43F0 - 1 < 0 )
    {
      --dword_2CD43F0;
    }
    else
    {
      v11 = (unsigned int)(dword_2CD43F0 - 1);
      v12 = (unsigned int)(dword_2CD43F0 - 2);
      dword_2CD43F0 -= 2;
      v7 = &byte_2CCCDE0[16 * v11 + 2000];
      if ( v10 != 1 )
      {
        v13 = &byte_2CCCDE0[16 * v12 + 2000];
        *v13 = 0;
        *(_WORD *)v13 = v9;
        *(_QWORD *)v7 = v13;
        *((_WORD *)v7 + 5) = 0;
        *((_WORD *)v7 + 4) = v8;
LABEL_5:
        LOWORD(v14) = v7 - byte_2CCCDE0;
        return v14;
      }
    }
LABEL_12:
    __longjmp_chk(env, 4294967288LL);
  }
  return v14;
}
