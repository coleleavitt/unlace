__int64 __fastcall sub_B8ED40(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r8
  bool v4; // zf
  char *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // r9
  signed __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r8

  v2 = *a1;
  v3 = *(_QWORD **)(v2 + 32);
  if ( a2 == 2 )
  {
    v6 = 7;
    v5 = "private";
  }
  else
  {
    if ( a2 == 3 )
    {
      v6 = 0;
      v5 = nullptr;
      result = 0;
      goto LABEL_15;
    }
    v4 = a2 == 1;
    v5 = (char *)"public";
    if ( v4 )
      v5 = "protected";
    v6 = 3LL * v4 + 6;
  }
  if ( v6 <= *(_QWORD *)(v2 + 24) - (_QWORD)v3 )
  {
    result = (unsigned int)v6;
    if ( (unsigned int)v6 >= 8 )
    {
      v8 = (unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v3 = *(_QWORD *)v5;
      *(_QWORD *)((char *)v3 + (unsigned int)v6 - 8) = *(_QWORD *)&v5[(unsigned int)v6 - 8];
      v9 = v5 - ((char *)v3 - v8);
      result = ((_DWORD)v6 + (_DWORD)v3 - (_DWORD)v8) & 0xFFFFFFF8;
      if ( (unsigned int)result >= 8 )
      {
        result = ((_DWORD)v6 + (_DWORD)v3 - (_DWORD)v8) & 0xFFFFFFF8;
        v10 = 0;
        do
        {
          v11 = v10;
          v10 += 8;
          *(_QWORD *)(v8 + v11) = *(_QWORD *)(v9 + v11);
        }
        while ( v10 < (unsigned int)result );
      }
LABEL_11:
      *(_QWORD *)(v2 + 32) += v6;
      return result;
    }
LABEL_15:
    if ( (v6 & 4) != 0 )
    {
      *(_DWORD *)v3 = *(_DWORD *)v5;
      *(_DWORD *)((char *)v3 + result - 4) = *(_DWORD *)&v5[result - 4];
    }
    else if ( (_DWORD)result )
    {
      *(_BYTE *)v3 = *v5;
      if ( (result & 2) != 0 )
        *(_WORD *)((char *)v3 + result - 2) = *(_WORD *)&v5[result - 2];
    }
    goto LABEL_11;
  }
  return sub_22581D0(v2, v5, v6);
}

