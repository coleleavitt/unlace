__int64 __fastcall sub_78D550(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  const void *v13; // rbx
  int v14; // eax
  __int64 v15; // r12
  void *v16; // rax
  __int64 result; // rax
  __int64 v18; // rax

  v10 = *(_QWORD *)a1;
  sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  if ( !a7 )
  {
    v18 = sub_720F10(v10);
    if ( v18 )
    {
      v12 = v18 - 1;
      goto LABEL_3;
    }
    return -1;
  }
  sub_720F20(v10);
  v12 = v11 - 1;
  if ( !v11 )
    return -1;
LABEL_3:
  if ( !v12 )
    return -1;
  if ( *(char *)(v12 + 8) != a2 )
    return -1;
  if ( *(_DWORD *)(v12 + 4) != _byteswap_ulong(a3) )
    return -1;
  v13 = (const void *)(v12 + 9);
  v14 = *(unsigned __int16 *)(v12 + 1) - 6;
  v15 = v14;
  if ( *(_WORD *)(v12 + 1) == 5 )
    return -1;
  v16 = memchr(v13, 0, v14);
  if ( a4 )
  {
    if ( v16 )
      goto LABEL_16;
    result = sub_78F2E0(a4, v13, v15);
  }
  else
  {
    if ( v16 )
    {
LABEL_16:
      if ( qword_2CAA7B0 )
        qword_2CAA7B0("null byte in ASCII string");
      return -1;
    }
    result = sub_78F220(a5, v13, v15, a6);
  }
  if ( result == -1 )
    goto LABEL_16;
  return result;
}

