__int64 __fastcall sub_56B8B0(unsigned __int8 *a1, unsigned __int16 a2, __int64 a3)
{
  int v4; // edi
  char v5; // r8
  char *v6; // rax
  char v7; // dl
  char v8; // al
  __int64 result; // rax
  __int64 v10; // rcx
  char v11; // al
  int v12; // edx

  v4 = *a1;
  v5 = v4 & 1;
  if ( a2 == 0xFFFF )
  {
    v8 = 1;
    goto LABEL_7;
  }
  if ( a2 == 0xFFFE )
  {
    v8 = 0;
LABEL_7:
    if ( v5 )
      goto LABEL_11;
    v7 = v8;
    goto LABEL_9;
  }
  v6 = (char *)(*(_QWORD *)(a3 + 104) + 3LL * a2);
  v7 = *v6;
  v8 = v6[1];
  if ( v5 )
  {
    if ( a2 <= 0xFEu )
    {
      a1[1] = a2;
      result = v4 & 0xFFFFFFF9 | ((unsigned __int8)(2 * v7) | (unsigned __int8)(4 * v8)) & 6;
      *a1 = result;
      return result;
    }
LABEL_11:
    __assert_fail("symbol < (255)", "lib/src/./subtree.c", 0xE9u, "ts_subtree_set_symbol");
  }
LABEL_9:
  v10 = *(_QWORD *)a1;
  v11 = v7 | (2 * v8);
  v12 = *(unsigned __int8 *)(v10 + 44);
  *(_WORD *)(v10 + 40) = a2;
  result = v12 & 0xFFFFFFFC | v11 & 3;
  *(_BYTE *)(v10 + 44) = result;
  return result;
}
