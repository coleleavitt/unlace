__int64 __fastcall sub_2030BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  unsigned __int16 v4; // ax
  const char *v5; // rax
  size_t v6; // rdx
  __int64 v8; // rbx
  unsigned __int16 v9; // ax

  v2 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 8) )
    *(_BYTE *)(a1 + 8) = 0;
  else
    v2 = sub_995540(*(_QWORD *)a1, *(const char **)(a1 + 16));
  v3 = j__strlen("tag: ");
  sub_9954E0(v2, "tag: ", v3);
  v4 = sub_206CE80(a2);
  v5 = sub_201AFE0(v4);
  if ( v6 )
    return sub_9954E0(*(_QWORD *)a1, v5, v6);
  v8 = *(_QWORD *)a1;
  v9 = sub_206CE80(a2);
  return sub_227B930(v8, v9);
}
