__int64 __fastcall sub_8BCD60(__int64 a1, __int64 a2, char a3, size_t a4)
{
  size_t v5; // rbx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // r12d
  size_t v11; // rbx
  unsigned int v12; // esi
  char *v13; // rax

  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 8);
  result = a2 >> v6;
  v8 = a2 & (*(_QWORD *)a1 - 1LL);
  if ( a4 )
  {
    v9 = a2 >> v6;
    v10 = a3;
    while ( 1 )
    {
      v11 = v5 - v8;
      v12 = v9;
      if ( v11 > a4 )
        v11 = a4;
      LODWORD(v9) = v9 + 1;
      v13 = (char *)sub_8BCA60((size_t *)a1, v12, 1);
      *(v13 - 2) = 1;
      result = (__int64)memset(&v13[v8], v10, v11);
      a4 -= v11;
      if ( !a4 )
        break;
      v5 = *(_QWORD *)a1;
      v8 = 0;
    }
  }
  return result;
}
