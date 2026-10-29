__int64 __fastcall sub_559520(_QWORD *a1)
{
  unsigned int v1; // ebp
  const char *v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = 6;
  if ( !a1[3] )
    return v1;
  v2 = (const char *)a1[2];
  if ( strcmp(v2, "License chooser") )
  {
    if ( strcmp(v2, "Borrow chooser") )
      return v1;
  }
  v3 = a1[5];
  v4 = sub_552140(v3);
  if ( v4 != -1 )
  {
    v5 = *(_QWORD *)(v3 + 192) + 152 * v4;
    if ( v5 )
      return 4 * (unsigned int)(*(_DWORD *)(v5 + 8) != 3) + 3;
  }
  return 7;
}
