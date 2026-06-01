__int64 __fastcall sub_478260(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  int v5; // esi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  const char *v10; // rdi

  v3 = *(_DWORD *)(a3 + 84);
  if ( v3 == 2 )
  {
    v10 = &s1;
    if ( *(_QWORD *)(a3 + 64) )
      v10 = *(const char **)(a3 + 56);
    v8 = reg_int_op(v10, 0, 0xFFFFFFFFLL, "Hidden Messages");
    if ( v8 != -1 )
    {
LABEL_8:
      *a2 = v8;
      return 1;
    }
  }
  else if ( v3 == 3 && (_QWORD)xmmword_8D17B8 )
  {
    v5 = *(_DWORD *)(a3 + 80);
    v6 = (_DWORD *)qword_8D17B0;
    v7 = 0;
    while ( *v6 != v5 )
    {
      ++v7;
      v6 += 2;
      if ( v7 == (_QWORD)xmmword_8D17B8 )
        return 0;
    }
    v8 = v6[1];
    goto LABEL_8;
  }
  return 0;
}
