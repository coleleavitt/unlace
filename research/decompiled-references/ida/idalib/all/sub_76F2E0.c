__int64 __fastcall sub_76F2E0(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v2; // r9d
  int v3; // edx
  __int64 v4; // rcx
  char **v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  char *v9; // r11
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int16 v15; // si
  unsigned __int16 v16; // ax
  _BYTE *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  _DWORD *v20; // rdx

  result = (unsigned __int8)byte_2CD44A0;
  if ( (unsigned __int8)byte_2CD44A0 <= 1u )
  {
    v2 = dword_2CD43F0;
    dword_2CD44C8 |= 0x80000u;
    v3 = dword_2CD43F0 - 1;
    dword_2CD43F0 = v3;
    if ( v3 >= 0 )
    {
      v4 = (unsigned int)v3;
      v6 = &(&off_2B392C0)[2 * (unsigned __int8)byte_2CD44A0];
      v7 = 16 * (v4 + 125);
      v8 = *((unsigned __int8 *)v6 + 8);
      v9 = *v6;
      v10 = &byte_2CCCDE0[v7];
      *((_WORD *)v10 + 4) = 0;
      *(_QWORD *)v10 = v9;
      *((_WORD *)v10 + 5) = (unsigned __int8)v8;
      if ( (unsigned __int8)v8 <= 8u )
      {
        v11 = v8 - 1;
        v12 = (unsigned int)(v8 - 1);
        v13 = v11 - 1;
        v14 = v11 - 1 - v12;
        while ( 1 )
        {
          v10[v11] = v9[v11];
          v11 = v13;
          if ( v13 == v14 )
            break;
          --v13;
        }
      }
      v15 = *a1;
      v16 = v7;
      if ( !*a1 )
        goto LABEL_8;
      if ( !(_WORD)v7 )
      {
        v17 = &byte_2CCCDE0[v15];
LABEL_11:
        v16 = (_WORD)v17 - (unsigned __int16)byte_2CCCDE0;
LABEL_8:
        *a1 = v16;
        a1[1] = 0;
        return 0;
      }
      v18 = (unsigned int)(v2 - 2);
      if ( v2 == 1 )
      {
        dword_2CD43F0 = -1;
      }
      else
      {
        v19 = v2 - 3;
        dword_2CD43F0 = v19;
        v17 = &byte_2CCCDE0[16 * v18 + 2000];
        if ( v19 != -1 )
        {
          v20 = &byte_2CCCDE0[16 * v19 + 2000];
          *v20 = 0;
          *(_WORD *)v20 = v7;
          *(_QWORD *)v17 = v20;
          *((_WORD *)v17 + 5) = 0;
          *((_WORD *)v17 + 4) = v15;
          goto LABEL_11;
        }
      }
    }
    __longjmp_chk(env, 4294967288LL);
  }
  return result;
}
