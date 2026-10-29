__int64 __fastcall sub_20E1660(__int64 a1)
{
  char *v1; // rbx
  char *v2; // r12
  size_t v5; // rdi
  size_t v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // dl

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( *(char **)a1 != v2 && (unsigned int)(*v1 - 48) <= 9 )
    return sub_20E15C0(a1);
  if ( !sub_20D1BF0(v2 - v1, *(const void **)a1, 2u, "dn") )
  {
    v5 = v2 - v1;
    v6 = j__strlen("on");
    if ( sub_20D1BF0(v5, v1, v6, "on") )
      *(_QWORD *)a1 = &v1[v6];
    v7 = sub_20DA530(a1, nullptr);
    if ( v7 )
    {
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || **(_BYTE **)a1 != 73 )
        return v7;
      v11 = sub_20DCBE0(a1, 0);
      if ( v11 )
      {
        v12 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v12 + 8) = 16429;
        v13 = *(_BYTE *)(v12 + 10);
        *(_QWORD *)(v12 + 16) = v7;
        v7 = v12;
        *(_QWORD *)(v12 + 24) = v11;
        *(_BYTE *)(v12 + 10) = v13 & 0xF0 | 5;
        *(_QWORD *)v12 = off_2BE77A0;
        return v7;
      }
    }
    return 0;
  }
  *(_QWORD *)a1 = v1 + 2;
  if ( v2 == v1 + 2 || (unsigned int)(v1[2] - 48) > 9 )
    v8 = sub_20DC970(a1);
  else
    v8 = sub_20E15C0(a1);
  if ( !v8 )
    return 0;
  v9 = sub_20CF970(a1 + 816, 24);
  *(_WORD *)(v9 + 8) = 16434;
  v10 = v9;
  LOBYTE(v9) = *(_BYTE *)(v9 + 10);
  *(_QWORD *)(v10 + 16) = v8;
  *(_BYTE *)(v10 + 10) = v9 & 0xF0 | 5;
  *(_QWORD *)v10 = off_2BE7980;
  return v10;
}
