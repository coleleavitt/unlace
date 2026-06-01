__int64 __fastcall sub_20DC890(_QWORD *a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx
  __int64 result; // rax
  char v4; // dl
  __int64 v5; // rbp
  _BYTE *v6; // rax
  size_t v7; // r12
  char v8; // dl

  v1 = (_BYTE *)*a1;
  v2 = (_BYTE *)a1[1];
  if ( (_BYTE *)*a1 == v2 )
    return 0;
  if ( *v1 != 68 )
    return 0;
  *a1 = v1 + 1;
  if ( v2 == v1 + 1 )
    return 0;
  v4 = v1[1];
  if ( v4 != 116 && v4 != 84 )
    return 0;
  *a1 = v1 + 2;
  v5 = sub_20DA8A0((__int64)a1);
  if ( !v5 )
    return 0;
  v6 = (_BYTE *)*a1;
  if ( *a1 == a1[1] || *v6 != 69 )
    return 0;
  *a1 = v6 + 1;
  v7 = j__strlen("decltype");
  result = sub_20CF970((__int64)(a1 + 102), 56);
  *(_WORD *)(result + 8) = 16444;
  v8 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v7;
  *(_QWORD *)(result + 24) = "decltype";
  *(_QWORD *)(result + 32) = v5;
  *(_BYTE *)(result + 10) = v8 & 0xF0 | 5;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)result = off_2BE7D40;
  return result;
}
