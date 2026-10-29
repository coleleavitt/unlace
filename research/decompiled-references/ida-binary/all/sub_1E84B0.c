__int64 __fastcall sub_1E84B0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 result; // rax

  if ( !(_DWORD)a2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = (__int64 *)(a1 + 16);
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 40) = 0;
      return result;
    }
    v5 = *(_QWORD *)(a1 + 24);
    if ( !v5 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v4 = (__int64 *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v5 = v4[1];
    if ( !v5 )
    {
LABEL_6:
      v4[1] = 0;
      result = qfree(v3, a2);
      *v4 = 0;
      v4[2] = 0;
      goto LABEL_7;
    }
LABEL_4:
    for ( i = 0; i != v5; ++i )
    {
      v7 = i;
      qfree(*(_QWORD *)(v3 + 16 * v7), a2);
      v3 = *v4;
    }
    goto LABEL_6;
  }
LABEL_7:
  *((_BYTE *)v4 + 24) = 0;
  if ( (_DWORD)a2 == 1 )
    return sub_459B70(a1);
  return result;
}
