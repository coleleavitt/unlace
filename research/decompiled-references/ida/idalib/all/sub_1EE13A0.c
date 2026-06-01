unsigned __int64 __fastcall sub_1EE13A0(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  size_t v7; // rax

  v4 = (unsigned int)*a4;
  if ( (unsigned int)v4 >= *((_DWORD *)a3 + 2) )
  {
    v7 = j__strlen("Corrupted AST file");
    sub_1EAD680(a1, "Corrupted AST file", v7);
    return 0;
  }
  else
  {
    v5 = *a3;
    *a4 = v4 + 1;
    return sub_1EE1310(a1, a2, *(_QWORD *)(v5 + 8 * v4));
  }
}
