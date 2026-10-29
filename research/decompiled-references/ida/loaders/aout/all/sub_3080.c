__int64 __fastcall sub_3080(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  const char *v7; // r13
  _DWORD *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  result = sub_1BF0(a3, &v10);
  if ( (_DWORD)result )
  {
    sub_2FC0(a1, (__int64)"a.out (%s)", off_5D20[(int)result - 1]);
    if ( (v10 & 0xFF0000) == 0 )
    {
LABEL_7:
      *(_QWORD *)(a2 + 8) = 0;
      return 20;
    }
    if ( BYTE2(v10) != 103 )
    {
      if ( BYTE2(v10) <= 0x67u )
      {
        if ( BYTE2(v10) == 3 )
        {
          v5 = 7;
          v6 = 6;
          v7 = "sparcb";
          goto LABEL_12;
        }
        if ( BYTE2(v10) != 100 )
          goto LABEL_7;
        goto LABEL_17;
      }
      if ( BYTE2(v10) == 134 )
      {
LABEL_17:
        v5 = 7;
        v6 = 6;
        v7 = "metapc";
        goto LABEL_12;
      }
      if ( BYTE2(v10) != 143 )
        goto LABEL_7;
    }
    v5 = 4;
    v6 = 3;
    v7 = "arm";
LABEL_12:
    v8 = *(_DWORD **)a2;
    if ( *(_QWORD *)(a2 + 16) < v5 )
    {
      v9 = qvector_reserve(a2, v8, v5, 1);
      *(_QWORD *)a2 = v9;
      v8 = (_DWORD *)v9;
    }
    *(_QWORD *)(a2 + 8) = v5;
    if ( (v6 & 4) != 0 )
    {
      *v8 = *(_DWORD *)v7;
      *(_DWORD *)((char *)v8 + (unsigned int)v6 - 4) = *(_DWORD *)&v7[(unsigned int)v6 - 4];
    }
    else
    {
      *(_BYTE *)v8 = *v7;
      *(_WORD *)((char *)v8 + v6 - 2) = *(_WORD *)&v7[v6 - 2];
    }
    *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
    return 20;
  }
  return result;
}

