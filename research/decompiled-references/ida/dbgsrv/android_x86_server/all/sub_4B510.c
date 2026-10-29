/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B510
// Address: 0x0004B510

//----- (0004B510) --------------------------------------------------------
int __cdecl sub_4B510(_DWORD *a1)
{
  int v1; // esi
  int v2; // eax
  size_t v3; // edi
  int v4; // esi
  void *v5; // eax
  int v6; // eax
  int *v7; // edi
  int v8; // esi
  int result; // eax
  void **v10; // [esp+4h] [ebp-18h]

  v1 = (int)a1;
  v10 = (void **)(a1 + 5);
  sub_1F400((int)(a1 + 5), "%s.%s");
  sub_4AC10((int)a1);
  sub_4B340((int)a1);
  v2 = __strlen_chk("this", 5);
  if ( v2 )
  {
    v3 = v2;
    v4 = v2 + 1;
    if ( a1[7] >= (unsigned int)(v2 + 1) )
    {
      v5 = *v10;
    }
    else
    {
      v5 = qvector_reserve((int)v10, *v10, v2 + 1, 1u);
      *v10 = v5;
    }
    a1[6] = v4;
    v1 = (int)a1;
    memmove(v5, "this", v3);
    *(_BYTE *)(a1[5] + v3) = 0;
  }
  else
  {
    a1[6] = 0;
  }
  sub_4AC10(v1);
  v6 = *(_DWORD *)(v1 + 192);
  v7 = *(int **)(*(_DWORD *)(v1 + 188) + 4 * v6 - 4);
  if ( v6 )
    *(_DWORD *)(v1 + 192) = v6 - 1;
  v8 = sub_4C980(v1, v7, 0, 0);
  if ( v7 )
  {
    sub_4AEB0(v7);
    operator delete(v7);
  }
  result = set_qerrno(v8);
  if ( !result )
    return sub_4B640((int)a1);
  return result;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
