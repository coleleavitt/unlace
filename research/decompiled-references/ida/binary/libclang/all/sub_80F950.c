__int64 __fastcall sub_80F950(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // al
  __int64 v7; // rdi

  if ( (*(_WORD *)a1 & 0x1FF) == 0x5C )
    return *(unsigned int *)(a1 + 24);
  v3 = *(unsigned __int8 *)(a1 + 3);
  v4 = *(_QWORD *)(a1 + v3);
  if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
  {
    v5 = sub_80F4C0(*(_QWORD *)(a1 + v3));
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v6 = sub_7A55C0((_DWORD *)v5);
        v3 = *(unsigned __int8 *)(a1 + 3);
        if ( v6 )
        {
          if ( *(_DWORD *)(a1 + 16) )
          {
            v7 = *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + v3);
            if ( v7 )
              return sub_AC6DA0(v7);
          }
        }
        v4 = *(_QWORD *)(a1 + v3);
      }
    }
  }
  result = sub_AC6DA0(v4);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + v3);
      if ( v7 )
        return sub_AC6DA0(v7);
    }
  }
  return result;
}

