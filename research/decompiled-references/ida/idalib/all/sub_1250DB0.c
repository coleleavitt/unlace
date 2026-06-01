char *__fastcall sub_1250DB0(__int64 a1, char a2)
{
  char *result; // rax
  char *v3; // rdx
  __int64 v4; // rax
  size_t v5; // rbp
  char v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx

  *(_QWORD *)(a1 + 208) = 0;
  **(_BYTE **)(a1 + 200) = 0;
  result = *(char **)(a1 + 176);
  v3 = *(char **)(a1 + 184);
  if ( result == v3 )
    goto LABEL_14;
  if ( *result != a2 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 176) = result + 1;
      v6 = *result;
      v7 = *(_QWORD *)(a1 + 200);
      v8 = v5 + 1;
      v9 = v7 == a1 + 216 ? 15LL : *(_QWORD *)(a1 + 216);
      if ( v8 > v9 )
      {
        sub_998B30(a1 + 200, v5, 0, nullptr, 1u);
        v7 = *(_QWORD *)(a1 + 200);
      }
      *(_BYTE *)(v7 + v5) = v6;
      v4 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 208) = v8;
      *(_BYTE *)(v4 + v5 + 1) = 0;
      result = *(char **)(a1 + 176);
      v3 = *(char **)(a1 + 184);
      if ( result == v3 )
        break;
      if ( *result == a2 )
        goto LABEL_11;
    }
LABEL_14:
    abort();
  }
LABEL_11:
  *(_QWORD *)(a1 + 176) = result + 1;
  if ( *result != a2 )
    goto LABEL_14;
  if ( result + 1 == v3 )
    goto LABEL_14;
  *(_QWORD *)(a1 + 176) = result + 2;
  if ( result[1] != 93 )
    goto LABEL_14;
  return result;
}
