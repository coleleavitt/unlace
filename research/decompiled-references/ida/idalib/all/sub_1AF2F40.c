char __fastcall sub_1AF2F40(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 103;
  v4 = *(unsigned int *)(v2 + 344);
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)(v2 + 336) + 6776 * v4 - 6776;
    if ( *(_QWORD *)(v5 + 6768) == *(_QWORD *)(v2 + 328) )
    {
      v15 = *(unsigned int *)(v5 + 8);
      v16 = *(unsigned int *)(v2 + 27504);
      if ( (unsigned int)v15 > (unsigned int)v16 )
      {
        v17 = v15 - v16;
        if ( v17 )
        {
          v18 = *(_QWORD *)v5 + 1688 * (v17 - 1);
          if ( v18 )
            v3 = *(_DWORD *)(v18 + 976);
        }
      }
    }
  }
  result = sub_FFE8A0(v3);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !result || *(_DWORD *)(v7 + 27456) != 106 )
  {
    v8 = *(unsigned int *)(v7 + 344);
    if ( !(_DWORD)v8 )
      return 0;
    v9 = *(unsigned int *)(v7 + 27504);
    v10 = *(_QWORD *)(v7 + 336) + 6776 * v8 - 6776;
    v11 = *(unsigned int *)(v10 + 8);
    v12 = v11 - v9;
    if ( *(_QWORD *)(v10 + 6768) == *(_QWORD *)(v7 + 328) )
      v12 -= (unsigned int)v9 < (unsigned int)v11;
    v13 = *(_QWORD *)v10;
    v14 = *(_QWORD *)v10 + 1688 * v12;
    if ( *(_QWORD *)v10 == v14 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        result = sub_FFE8A0(*(_DWORD *)(v14 - 712));
        if ( result )
          break;
        v14 -= 1688;
        if ( v13 == v14 )
          return 0;
      }
    }
  }
  return result;
}
