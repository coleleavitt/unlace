unsigned __int64 __fastcall sub_183F7B0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // r12
  unsigned __int64 v5; // rsi
  char v6; // cl
  unsigned __int64 *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rsi

  v2 = *(unsigned __int64 **)a2;
  if ( *(_BYTE *)(a2 + 20) )
    result = *(unsigned int *)(a2 + 12);
  else
    result = *(unsigned int *)(a2 + 8);
  v4 = &v2[result];
  if ( v4 == v2 )
    return result;
  v5 = *v2;
  result = *v2 + 2;
  if ( result <= 1 )
  {
    do
    {
      if ( v4 == ++v2 )
        return result;
      v5 = *v2;
    }
    while ( *v2 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v6 = *(_BYTE *)(a1 + 20);
  while ( 1 )
  {
LABEL_11:
    if ( !v6 )
      goto LABEL_31;
    v7 = *(unsigned __int64 **)a1;
    v8 = *(unsigned int *)(a1 + 12);
    v9 = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * v8);
    if ( *(unsigned __int64 **)a1 != v9 )
    {
      v10 = *(unsigned __int64 **)a1;
      if ( *v7 == v5 )
        goto LABEL_19;
      do
      {
        if ( v9 == ++v10 )
          break;
      }
      while ( *v10 != v5 );
    }
    if ( (unsigned int)v8 < *(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 12) = v8 + 1;
      *v9 = v5;
      v7 = *(unsigned __int64 **)a1;
      v10 = (unsigned __int64 *)(*(_QWORD *)a1 + 8 * v8);
    }
    else
    {
LABEL_31:
      v10 = (unsigned __int64 *)sub_2236760(a1, v5);
      v6 = *(_BYTE *)(a1 + 20);
      v7 = *(unsigned __int64 **)a1;
      if ( !v6 )
      {
        v11 = &v7[*(unsigned int *)(a1 + 8)];
        goto LABEL_20;
      }
    }
LABEL_19:
    v11 = &v7[*(unsigned int *)(a1 + 12)];
    v6 = 1;
LABEL_20:
    if ( v10 != v11 && *v10 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v12 = v10 + 1;
      do
      {
        v13 = v12;
        if ( v12 == v11 )
          break;
        ++v12;
      }
      while ( *v13 >= 0xFFFFFFFFFFFFFFFELL );
    }
    result = (unsigned __int64)(v2 + 1);
    if ( v4 == v2 + 1 )
      return result;
    v5 = v2[1];
    if ( v5 >= 0xFFFFFFFFFFFFFFFELL )
      break;
    ++v2;
  }
  result = (unsigned __int64)(v2 + 2);
  while ( 1 )
  {
    v2 = (unsigned __int64 *)result;
    if ( v4 == (unsigned __int64 *)result )
      return result;
    v5 = *(_QWORD *)result;
    result += 8LL;
    if ( v5 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_11;
  }
}
