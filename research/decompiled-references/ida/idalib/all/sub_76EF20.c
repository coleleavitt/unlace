char *__fastcall sub_76EF20(__int16 *a1, int a2)
{
  char *v2; // rax
  char *result; // rax
  int v5; // r10d
  int v6; // edx
  __int64 v7; // r8
  _BYTE *v8; // rsi
  int v9; // r9d
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int16 v13; // dx
  __int64 v14; // rsi
  int v15; // r10d
  _DWORD *v16; // rax

  v2 = qword_2CD44C0;
  if ( a2 - 1 < (unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0) )
  {
    v5 = dword_2CD43F0;
    v6 = dword_2CD43F0 - 1;
    dword_2CD43F0 = v6;
    if ( v6 >= 0 )
    {
      v7 = 16 * ((unsigned int)v6 + 125LL);
      v8 = &byte_2CCCDE0[v7];
      *(_QWORD *)v8 = qword_2CD44C0;
      *((_WORD *)v8 + 4) = 0;
      *((_WORD *)v8 + 5) = a2;
      if ( (unsigned __int16)a2 <= 8u )
      {
        v9 = (unsigned __int16)a2 - 1;
        v10 = v9;
        v11 = v9 - (unsigned __int64)(unsigned int)v9;
        do
        {
          v8[v10] = v2[v10];
          v12 = v10--;
        }
        while ( v11 != v12 );
      }
      v13 = *a1;
      if ( !*a1 )
        goto LABEL_9;
      v14 = (unsigned int)(v5 - 2);
      if ( v5 == 1 )
      {
        dword_2CD43F0 = -1;
      }
      else
      {
        v15 = v5 - 3;
        dword_2CD43F0 = v15;
        v8 = &byte_2CCCDE0[16 * v14 + 2000];
        if ( v15 != -1 )
        {
          v16 = &byte_2CCCDE0[16 * v15 + 2000];
          *v16 = 0;
          *(_WORD *)v16 = v13;
          *(_QWORD *)v8 = v16;
          *((_WORD *)v8 + 5) = 0;
          *((_WORD *)v8 + 4) = v7;
LABEL_9:
          *a1 = (_WORD)v8 - (unsigned __int16)byte_2CCCDE0;
          result = &qword_2CD44C0[a2];
          qword_2CD44C0 = result;
          return result;
        }
      }
    }
    __longjmp_chk(env, 4294967288LL);
  }
  if ( !byte_2CD44A1 )
    sub_76E6C0();
  byte_2CD44A1 = 1;
  result = &qword_2CD44C0[(unsigned int)(qword_2CD44B8 - (_DWORD)qword_2CD44C0)];
  qword_2CD44C0 = result;
  return result;
}
