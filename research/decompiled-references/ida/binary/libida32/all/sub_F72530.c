_WORD *__fastcall sub_F72530(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  int v4; // ecx
  unsigned __int64 v5; // r8
  _WORD *result; // rax

  v3 = *(unsigned int **)(*(_QWORD *)a1 + 16LL);
  v4 = a1[34] & 0xF;
  v5 = *v3;
  result = v3 + 4;
  if ( v4 == 1 )
    return sub_F72300(result, v5);
  if ( (unsigned int)(v4 - 2) > 1 )
    return result;
  if ( !a3 )
    return sub_F72300(result, v5);
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 28263 && *(_BYTE *)(a2 + 2) == 117 )
      return sub_F72300(result, v5);
  }
  else if ( a3 == 5 && *(_DWORD *)a2 == 1851878499 && *(_BYTE *)(a2 + 4) == 103 )
  {
    return sub_F72300(result, v5);
  }
  return result;
}

