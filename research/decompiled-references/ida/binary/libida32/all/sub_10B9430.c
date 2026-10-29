__int64 __fastcall sub_10B9430(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const char **v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  __int64 result; // rax
  unsigned __int8 *v8[13]; // [rsp+0h] [rbp-68h] BYREF

  v2 = sub_10B8FF0(a2, 0x61Au);
  if ( !v2 )
    return 1;
  v3 = v2;
  v4 = *(const char ***)(v2 + 48);
  v5 = *v4;
  if ( !*v4 )
    goto LABEL_6;
  v6 = j__strlen(*v4);
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v5 != 1868720492 || *((_WORD *)v5 + 2) != 28781 )
      goto LABEL_6;
    return 1;
  }
  if ( v6 != 7 )
  {
    if ( v6 == 8 && *(_QWORD *)v5 == 0x35706D6F6962696CLL )
      return 3;
LABEL_6:
    sub_FA3370((__int64)v8, *a1, 0, 497);
    sub_AC84E0(v8, *(_BYTE **)(v3 + 24), *(_QWORD *)(v3 + 32));
    sub_10B4AF0(v8, **(_QWORD **)(v3 + 48));
    sub_AC6300((__int64)v8);
    return 0;
  }
  if ( *(_DWORD *)v5 != 1734502764 )
    goto LABEL_6;
  if ( *((_WORD *)v5 + 2) != 28015 )
    goto LABEL_6;
  result = 2;
  if ( v5[6] != 112 )
    goto LABEL_6;
  return result;
}

