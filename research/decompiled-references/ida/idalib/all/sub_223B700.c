unsigned __int64 __fastcall sub_223B700(__int64 **a1, unsigned __int64 a2, int a3)
{
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rbp
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a1;
  if ( a3 )
  {
    v7 = &v4[3 * (unsigned int)(a3 - 1)];
  }
  else
  {
    v5 = 0xAAAAAAAAAAAAAAABLL * (a1[1] - v4);
    if ( (_DWORD)v5 )
    {
      v6 = *a1;
      while ( 1 )
      {
        v7 = v6;
        if ( *(_QWORD *)(*v6 + 8) <= a2 && *(_QWORD *)(*v6 + 16) >= a2 )
          break;
        v6 += 3;
        if ( v6 == &v4[3 * (unsigned int)(v5 - 1) + 3] )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v7 = v4 + 0x2FFFFFFFDLL;
    }
  }
  v8 = sub_223B250(v7, a2);
  v9 = a2 - *(_QWORD *)(*v7 + 8);
  v11[0] = *(_QWORD *)(*v7 + 8);
  v11[1] = v9;
  return ((unsigned __int64)((unsigned int)v9 - (unsigned int)sub_2247050(v11, "\n\r", 2, -1)) << 32) | v8;
}
