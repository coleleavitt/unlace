__int64 __fastcall sub_1708C0(__int64 a1, unsigned int *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = *(__int64 **)(a1 + 192);
  v3 = v2[1];
  if ( !v3 )
    return -1;
  v4 = *a2;
  result = 0;
  if ( *a2 != -1 )
  {
    v6 = 8 * v3;
    v7 = *v2;
    v8 = *v2 + v6;
    v9 = v6 >> 3;
    v10 = *v2;
    if ( v6 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v11 = v9 >> 1;
          v12 = v10 + 8 * (v9 >> 1);
          if ( *(_DWORD *)v12 < v4 || v4 >= *(_DWORD *)v12 && *(_WORD *)(v12 + 4) < *((_WORD *)a2 + 2) )
            break;
          v9 >>= 1;
          if ( v11 <= 0 )
            goto LABEL_10;
        }
        v10 = v12 + 8;
        v9 = v9 - 1 - v11;
      }
      while ( v9 > 0 );
    }
LABEL_10:
    result = (v10 - v7) >> 3;
    if ( v8 == v10 )
      return 0;
  }
  return result;
}

