void __fastcall sub_793720(char *a1, __int64 **a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned __int32 v5; // eax
  unsigned int v6; // edx
  bool v7; // cf

  v2 = a2[1];
  if ( v2 )
  {
    v3 = **a2;
    v4 = _byteswap_ulong(*(_DWORD *)((*a2)[6 * (_QWORD)v2 - 6] + 4));
    v5 = _byteswap_ulong(*(_DWORD *)(v3 + 4));
    v6 = v4 + 1;
    v7 = v4 < v5;
    if ( v4 > v5 )
      v4 = v5;
    if ( v7 )
      v6 = v5 + 1;
    sub_792B80(a1, v4, v6);
  }
}

