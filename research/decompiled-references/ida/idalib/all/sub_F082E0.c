_BYTE *__fastcall sub_F082E0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v4; // ebp
  __int64 v5; // rdi
  _BYTE *result; // rax
  char *v7; // rbp
  size_t v8; // rax
  __int64 v9; // rbp
  char *v10; // r12
  size_t v11; // rax
  __int64 v12; // [rsp+0h] [rbp-68h]
  size_t v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    do
    {
      ++v2;
      sub_995540(*(_QWORD *)a1, "  ");
    }
    while ( v4 != v2 );
  }
  sub_995540(*(_QWORD *)a1, "#pragma acc wait");
  if ( *(_DWORD *)(a2 + 40) )
  {
    sub_995540(*(_QWORD *)a1, "(");
    if ( *(_QWORD *)(a2 + 56) )
    {
      sub_995540(*(_QWORD *)a1, "devnum: ");
      v7 = *(char **)(a2 + 56);
      v8 = j__strlen("\n");
      sub_F07C00(v7, *(_QWORD *)a1, 0, (const __m128i *)(a1 + 24), 0, 0, "\n", v8);
      sub_995540(*(_QWORD *)a1, " : ");
    }
    v14 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a2 + 48) )
    {
      sub_995540(v14, "queues: ");
      v14 = *(_QWORD *)a1;
    }
    v13 = j__strlen(", ");
    v12 = a2 + 64 + 8 * (*(unsigned int *)(a2 + 52) - 1LL);
    if ( a2 + 64 != v12 )
    {
      v9 = a2 + 72;
      sub_F07C80(a1, *(char **)(a2 + 64));
      if ( v12 != a2 + 72 )
      {
        do
        {
          v9 += 8;
          sub_9954E0(v14, ", ", v13);
          v10 = *(char **)(v9 - 8);
          v11 = j__strlen("\n");
          sub_F07C00(v10, *(_QWORD *)a1, 0, (const __m128i *)(a1 + 24), 0, 0, "\n", v11);
        }
        while ( v12 != v9 );
      }
      v14 = *(_QWORD *)a1;
    }
    sub_995540(v14, ")");
  }
  sub_F05180((__int64 *)a1, a2);
  v5 = *(_QWORD *)a1;
  result = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned __int64)result >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    return (_BYTE *)sub_227BA10(v5, 10);
  *(_QWORD *)(v5 + 32) = result + 1;
  *result = 10;
  return result;
}
