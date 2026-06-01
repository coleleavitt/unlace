__int64 __fastcall sub_841960(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v5; // al
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // rdx

  v5 = *(_BYTE *)(a3 + 16);
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
    {
      if ( v5 != 6 )
      {
        v6 = *(_BYTE *)(a2 + 16);
        if ( v6 == 6 )
        {
          if ( !a4 )
            memmove(*(void **)a2, *(const void **)a3, *(_QWORD *)(a3 + 8));
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
          *(_BYTE *)(a2 + 16) = *(_BYTE *)(a3 + 16);
        }
        else if ( v5 == 7 )
        {
          if ( !a4 )
            **(_BYTE **)a2 = 7;
          *(_QWORD *)(a2 + 8) = 1;
          *(_BYTE *)(a2 + 16) = 7;
        }
        else if ( v6 != 7 )
        {
          if ( a4 )
            ++*a4;
          else
            *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8)) = 1;
          v7 = *(_QWORD *)(a3 + 8);
          v8 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 8) = v8 + v7 + 1;
        }
      }
      for ( result = 20; result != 52; result += 4 )
        *(_DWORD *)(a2 + result) &= *(_DWORD *)(a3 + result);
      return result;
    }
    if ( v5 != 7 )
    {
      v10 = *(_BYTE *)(a2 + 16);
      if ( v10 == 7 )
      {
        if ( !a4 )
          memmove(*(void **)a2, *(const void **)a3, *(_QWORD *)(a3 + 8));
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
        *(_BYTE *)(a2 + 16) = *(_BYTE *)(a3 + 16);
        goto LABEL_20;
      }
      if ( v5 != 6 )
      {
        if ( v10 != 6 )
        {
          if ( a4 )
            ++*a4;
          else
            *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8)) = 3;
          v11 = *(_QWORD *)(a3 + 8);
          v12 = *(_QWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 8) = v12 + v11 + 1;
          goto LABEL_20;
        }
        if ( !a4 )
        {
          memmove(*(void **)a2, *(const void **)a3, *(_QWORD *)(a3 + 8));
          a4 = nullptr;
        }
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
        *(_BYTE *)(a2 + 16) = *(_BYTE *)(a3 + 16);
      }
      sub_8418C0(a2, a4, 1);
    }
LABEL_20:
    for ( result = 20; result != 52; result += 4 )
      *(_DWORD *)(a2 + result) ^= *(_DWORD *)(a3 + result);
    return result;
  }
  if ( v5 != 7 )
  {
    v13 = *(_BYTE *)(a2 + 16);
    if ( v13 == 7 )
    {
      if ( !a4 )
        memmove(*(void **)a2, *(const void **)a3, *(_QWORD *)(a3 + 8));
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
      *(_BYTE *)(a2 + 16) = *(_BYTE *)(a3 + 16);
    }
    else if ( v5 == 6 )
    {
      if ( !a4 )
        **(_BYTE **)a2 = 6;
      *(_QWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 6;
    }
    else if ( v13 != 6 )
    {
      if ( a4 )
        ++*a4;
      else
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8)) = 2;
      v14 = *(_QWORD *)(a3 + 8);
      v15 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 8) = v15 + v14 + 1;
    }
  }
  for ( result = 20; result != 52; result += 4 )
    *(_DWORD *)(a2 + result) |= *(_DWORD *)(a3 + result);
  return result;
}

