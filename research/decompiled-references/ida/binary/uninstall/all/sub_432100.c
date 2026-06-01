__int64 __fastcall sub_432100(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // r14d
  int v8; // esi
  char *v9; // r8
  char *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebp
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-2Ch] BYREF

  v3 = *(_DWORD *)(a2 + 20);
  result = 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a3 + 24) )
    return result;
  v5 = sub_496740(a1, a2);
  *(_DWORD *)v5 = 0;
  v6 = off_656088;
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  v7 = 1;
  *(_QWORD *)(v5 + 8) = v6;
  if ( !(unsigned int)sub_439010(a2, v5) )
  {
    LOBYTE(v7) = 0;
    if ( !(unsigned int)sub_439010(a2 + 24LL * v3, v5) )
      goto LABEL_19;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    v8 = *(_DWORD *)(v5 + 16);
    v9 = *(char **)(v5 + 8);
    v17 = v8;
  }
  else
  {
    v16 = sub_47ACD0(v5, &v17);
    v8 = v17;
    v9 = (char *)v16;
  }
  if ( !v8 )
  {
LABEL_12:
    v12 = sub_439880(v9);
    v13 = *(_DWORD *)v5 - 1;
    v14 = *(_DWORD *)v5 == 1;
    *(_DWORD *)v5 = v13;
    if ( v13 < 0 || v14 )
      sub_47B120(v5);
    return v12;
  }
  v10 = &v9[v8 - 1];
  if ( *v10 != 41 )
  {
    if ( v10 > v9 )
    {
      while ( *v10 != 58 || *(v10 - 1) != 58 )
      {
        if ( --v10 <= v9 )
          goto LABEL_10;
      }
      ++v10;
    }
LABEL_10:
    if ( v10 != v9 || v7 != 0 )
    {
      v11 = (_DWORD)v10 - (_DWORD)v9;
      v9 = v10;
      v17 = v8 - v11;
      goto LABEL_12;
    }
  }
LABEL_19:
  v15 = *(_DWORD *)v5 - 1;
  v14 = *(_DWORD *)v5 == 1;
  *(_DWORD *)v5 = v15;
  if ( v15 < 0 || v14 )
    sub_47B120(v5);
  return 0xFFFFFFFFLL;
}

