__int64 __fastcall sub_F0C3A0(_QWORD *a1, __int64 a2, double a3)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rsi
  __int64 result; // rax

  v3 = *((_DWORD *)a1 + 2);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *a1;
      v6 = j__strlen("  ");
      sub_9954E0(v5, "  ", v6);
    }
  }
  sub_995540(*a1, "goto *");
  v11 = *(char **)(a2 + 16);
  if ( v11 )
    sub_F05430(a1, v11, v7, v8, v9, v10, a3);
  else
    sub_F049C0(a1);
  result = sub_995540(*a1, ";");
  if ( (*((_BYTE *)a1 + 28) & 8) != 0 )
    return sub_227BF10(*a1, a1[5], a1[6]);
  return result;
}
