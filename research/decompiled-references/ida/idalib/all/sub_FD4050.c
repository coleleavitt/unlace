char *__fastcall sub_FD4050(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int16 *v4; // rax
  __int64 v6; // rcx
  char *v7; // rbx

  if ( a2 <= 0x233B )
  {
    v4 = sub_FD2C00(a2);
    if ( v4 )
    {
      v3 = v4[2] >> 1;
      goto LABEL_7;
    }
    return nullptr;
  }
  v2 = **(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020);
  if ( (*(_BYTE *)(v2 + 1) & 1) == 0 )
    return nullptr;
  v3 = *(int *)(v2 + 4);
LABEL_7:
  v6 = *((unsigned __int16 *)&unk_2B4D8A0 + 12 * v3);
  v7 = &byte_2411C20[v6];
  if ( &byte_2411C20[v6] )
    strlen(&byte_2411C20[v6]);
  return v7;
}
