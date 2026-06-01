__int64 __fastcall sub_7C2810(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  char v4; // al
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  _DWORD *v7; // rcx
  __int64 result; // rax
  char v9; // al

  v2 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = sub_B07560(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  v5 = 6;
  v6 = "class ";
  if ( v4 || (v9 = sub_B075A0(*v2, "class ", 6), v5 = 7, v6 = "struct ", v9) )
  {
    v7 = *(_DWORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 >= v5 )
      goto LABEL_7;
    return sub_26240F0(a2, v6, v5);
  }
  result = sub_B07770(*v2, "struct ", 7);
  if ( !(_BYTE)result )
    return result;
  v7 = *(_DWORD **)(a2 + 32);
  v5 = 6;
  v6 = "union ";
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 <= 5u )
    return sub_26240F0(a2, v6, v5);
LABEL_7:
  *v7 = *(_DWORD *)v6;
  *(_DWORD *)((char *)v7 + (unsigned int)v5 - 4) = *(_DWORD *)&v6[(unsigned int)v5 - 4];
  *(_QWORD *)(a2 + 32) += v5;
  return (unsigned int)v5;
}

