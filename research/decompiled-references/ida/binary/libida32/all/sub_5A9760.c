unsigned int *__fastcall sub_5A9760(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  unsigned int *result; // rax
  unsigned int v5; // esi
  unsigned int v6; // eax

  v3 = a1 + 1624;
  result = sub_4EE820(a1 + 1624, (unsigned int)a2[1]);
  v5 = a2[1];
  if ( !result || *result >= v5 || *a2 >= result[1] )
  {
    v6 = sub_4EE8E0(v3, v5);
    return sub_4EE890(v3, v6);
  }
  return result;
}

