bool __fastcall sub_DF78C0(__int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r9
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 i; // rax
  int v16; // ecx
  int v18; // eax
  __int64 ***v19; // [rsp+0h] [rbp-10h] BYREF

  v4 = *a2;
  v6 = *(unsigned int *)(a1 + 704);
  v8 = *(_QWORD *)(a1 + 696);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v9 = v4 >> 3;
    else
      LODWORD(v9) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v9) = -1640531495;
  }
  v10 = v6 - 1;
  v11 = 24 * v6;
  v12 = v8 + v11;
  v13 = 24LL * ((unsigned int)v9 & v10);
  v14 = v8 + v13;
  if ( v13 != v11 )
  {
    for ( i = v8 + v13; v12 != i; i += 24 )
    {
      v16 = *(_DWORD *)(i + 4);
      if ( v16 == 2 )
      {
        if ( (_DWORD)v9 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v4 )
        {
LABEL_11:
          v19 = *(__int64 ****)(i + 16);
          return sub_DF7310(&v19, a3, a4) != 0;
        }
      }
      else if ( !v16 )
      {
        return 0;
      }
    }
  }
  for ( ; v14 != v8; v8 += 24 )
  {
    v18 = *(_DWORD *)(v8 + 4);
    if ( v18 == 2 )
    {
      if ( (_DWORD)v9 == *(_DWORD *)v8 && v4 == *(_QWORD *)(v8 + 8) )
      {
        i = v8;
        goto LABEL_11;
      }
    }
    else if ( !v18 )
    {
      return 0;
    }
  }
  return 0;
}

