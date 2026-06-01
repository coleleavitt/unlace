char *__fastcall sub_76EA50(unsigned __int16 **a1, _BYTE *a2, unsigned int *a3)
{
  _BYTE *v4; // rdi
  unsigned int v5; // eax
  _WORD *v7; // rsi
  unsigned int v8; // edx
  size_t v9; // rbx
  char *result; // rax
  __int64 v11; // rdx
  char *v12; // rbx
  _DWORD *v13; // rdx

  v4 = a2;
  v5 = *((unsigned __int16 *)a1 + 5);
  if ( (_WORD)v5 )
  {
    v7 = a1;
    if ( (unsigned __int16)v5 > 8u )
      v7 = *a1;
    v8 = *a3;
    if ( v8 < v5 )
    {
      v13 = (_DWORD *)qword_2CD43E8;
      if ( qword_2CD43E8 )
      {
        if ( (unsigned __int64)v4 < qword_2CD43E8 )
        {
          if ( v5 > (int)qword_2CD43E8 - (int)v4 )
            v5 = qword_2CD43E8 - (_DWORD)v4;
          v13 = (char *)memcpy(v4, v7, v5) + v5;
        }
        v4 = (char *)v13 + 3;
        *v13 = (_DWORD)&loc_2E2E2E;
        qword_2CD43E8 = (__int64)v13 + 3;
      }
      *v4 = 0;
      __longjmp_chk(env, 4294967292LL);
    }
    *a3 = v8 - v5;
    v9 = *((unsigned __int16 *)a1 + 5);
    return (char *)memcpy(v4, v7, v9) + v9;
  }
  else
  {
    v11 = **a1;
    result = a2;
    if ( **a1 )
    {
      do
      {
        v12 = (char *)&unk_2CCCDE0 + v11;
        result = (char *)sub_76EA50((char *)&unk_2CCCDE0 + v11, result, a3);
        v11 = *((unsigned __int16 *)v12 + 4);
      }
      while ( *((_WORD *)v12 + 4) );
    }
  }
  return result;
}
