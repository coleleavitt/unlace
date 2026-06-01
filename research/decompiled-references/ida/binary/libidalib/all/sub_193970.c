__int64 __fastcall sub_193970(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax

  result = xmmword_256B08;
  v3 = qword_256B00;
  v4 = qword_256B00 + 8 * xmmword_256B08;
  if ( v4 == qword_256B00 )
    return result;
  while ( 1 )
  {
    v6 = *(_QWORD *)v3;
    v7 = *(_QWORD *)(*(_QWORD *)v3 + 2520LL);
    result = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3Fu) - 1;
    if ( *(_BYTE *)(v7 + 8) > 3u )
      break;
LABEL_7:
    if ( a2 == (_DWORD)result )
    {
      result = a1[1];
      v8 = *a1;
      if ( a1[2] < (unsigned __int64)(result + 1) )
      {
        v9 = qvector_reserve();
        *a1 = v9;
        v8 = v9;
        result = a1[1];
      }
      v3 += 8;
      *(_QWORD *)(v8 + 8 * result) = v6;
      ++a1[1];
      if ( v4 == v3 )
        return result;
    }
    else
    {
      v3 += 8;
      if ( v4 == v3 )
        return result;
    }
  }
  if ( ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) == 0 )
  {
    result = (unsigned int)*(char *)(v7 + 11);
    goto LABEL_7;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_193A40(3451);
}

