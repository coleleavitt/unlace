__int64 __fastcall sub_9177E0(__int64 a1, unsigned int *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 16);
  if ( a2 != *(unsigned int **)(v3[13] + 864LL) )
  {
    v4 = v3[1104];
    if ( *((_WORD *)a2 + 2) || (v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr || *v5 || v5[1] != 8 )
    {
      if ( !v4 )
        return sub_9172F0(a1, (__int64)a2);
      v6 = *a2;
      if ( (unsigned int)v6 >= *(_DWORD *)(v4 - 4) )
        return sub_9172F0(a1, (__int64)a2);
    }
    else
    {
      if ( !v4 )
        return sub_9172F0(a1, (__int64)a2);
      v6 = **((unsigned int **)a2 + 4);
      if ( (unsigned int)v6 >= *(_DWORD *)(v4 - 4) )
        return sub_9172F0(a1, (__int64)a2);
    }
    if ( *(_DWORD *)(v4 + 4 * v6) != 0x7FFFFFFF )
      goto LABEL_8;
    return sub_9172F0(a1, (__int64)a2);
  }
LABEL_8:
  result = sub_8E80A0(v3, a2);
  switch ( (_DWORD)result )
  {
    case 0:
      sub_1872CE0("");
      sub_1873130(114, 229);
    case 1:
      return sub_9172F0(a1, (__int64)a2);
    case 0xFFFFFFFF:
      return sub_917470(a1, (__int64)a2, -1);
  }
  return result;
}

