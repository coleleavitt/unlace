__int64 __fastcall sub_1568990(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  char *v3; // rdx
  size_t v4; // rax

  result = *(_QWORD *)(a1 + 336);
  if ( !result )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(char **)(v2 + 56);
    if ( *v3 < 0 || (v3[1] & 4) != 0 )
    {
      v4 = j__strlen("__except");
      result = sub_6F3470(v2 + 552, "__except", v4);
      *(_QWORD *)(a1 + 336) = result;
    }
  }
  return result;
}
