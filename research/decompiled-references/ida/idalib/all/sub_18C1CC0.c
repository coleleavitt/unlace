unsigned __int64 __fastcall sub_18C1CC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // rsi
  unsigned __int64 *v9; // rdx
  unsigned int v10; // edi

  v2 = *(unsigned int *)(a1 + 4624);
  v3 = *(_QWORD *)(a1 + 4616);
  v5 = v3 + 640 * v2 - 640;
  while ( 1 )
  {
    result = sub_BFBAE0(a2);
    if ( (*(_WORD *)result & 0x1FF) != 0x2E || (*(_QWORD *)result & 0x80000) != 0 )
      break;
    a2 = *(_QWORD *)(result + 16);
  }
  if ( *(_BYTE *)(v5 + 308) )
  {
    v7 = *(unsigned __int64 **)(v5 + 288);
    v8 = &v7[*(unsigned int *)(v5 + 300)];
    if ( v7 != v8 )
    {
      v9 = *(unsigned __int64 **)(v5 + 288);
      if ( result == *v7 )
      {
LABEL_14:
        v10 = *(_DWORD *)(v5 + 300) - 1;
        result = v7[v10];
        *(_DWORD *)(v5 + 300) = v10;
        *v9 = result;
      }
      else
      {
        while ( v8 != ++v9 )
        {
          if ( *v9 == result )
            goto LABEL_14;
        }
      }
    }
  }
  else
  {
    result = sub_2236570(v5 + 288, result);
    if ( result )
    {
      *(_QWORD *)result = -2;
      ++*(_DWORD *)(v5 + 304);
    }
  }
  return result;
}
