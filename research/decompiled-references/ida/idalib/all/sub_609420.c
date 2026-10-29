__int64 __fastcall sub_609420(_QWORD *a1, char a2)
{
  __int64 v4; // rbx
  const char *v5; // rsi
  char v6; // al
  char v7; // dl
  char v8; // al
  __int64 v9; // rdi
  __int64 result; // rax
  char v11; // al
  int v12; // esi
  char v13; // dl

  v4 = *a1;
  *(_BYTE *)(v4 + 899) = 1;
  *(_DWORD *)(v4 + 901) = 134480384;
  if ( (unsigned __int8)sub_631C90(*a1, 3, 4) )
  {
    *(_BYTE *)(v4 + 898) = 4;
    v5 = (_BYTE *)(&word_38 + 1);
    v6 = sub_631AD0(*a1, 57);
    v7 = 1;
    *(_BYTE *)(v4 + 903) = 4 * ((v6 & 0xF) == 6) + 4;
    v8 = *(_BYTE *)(v4 + 898);
  }
  else
  {
    v5 = (_BYTE *)(&dword_0 + 3);
    if ( (unsigned __int8)sub_631C90(*a1, 3, 2) && *(char *)(*a1 + 940LL) >= 0 )
    {
      *(_BYTE *)(v4 + 898) = 4;
      v8 = 4;
      v7 = 3;
    }
    else
    {
      *(_BYTE *)(v4 + 898) = 2;
      v8 = 2;
      v7 = 2;
      *(_BYTE *)(v4 + 901) = 2;
    }
  }
  *(_BYTE *)(v4 + 900) = v8;
  v9 = *(unsigned __int8 *)(v4 + 896);
  *(_BYTE *)(v4 + 897) = v7 | *(_BYTE *)(v4 + 897) & 0xFC;
  result = calc_default_sizeof_ldbl(v9, v5);
  *(_BYTE *)(v4 + 905) = result;
  if ( a2 )
  {
    v11 = *(_BYTE *)(v4 + 897);
    v12 = v11 & 0xF0;
    if ( (v11 & 0xF0) == 0xC0 )
      v12 = *(_DWORD *)(v4 + 908);
    result = sub_609270(a1, v12);
    v13 = *(_BYTE *)(v4 + 897) & 0xF;
    if ( (result & 0xFFFFFF0F) != 0 )
    {
      *(_DWORD *)(v4 + 908) = 256;
      *(_BYTE *)(v4 + 897) = v13 | 0xC0;
    }
    else
    {
      *(_DWORD *)(v4 + 908) = 0;
      *(_BYTE *)(v4 + 897) = result | v13;
    }
  }
  return result;
}
