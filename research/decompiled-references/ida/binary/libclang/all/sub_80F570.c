__int64 __fastcall sub_80F570(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // al
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a1 + 3);
  v3 = *(_QWORD *)(a1 + v2);
  if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
  {
    v4 = sub_80F4C0(*(_QWORD *)(a1 + v2));
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v5 = sub_7A55C0((_DWORD *)v4);
        v2 = *(unsigned __int8 *)(a1 + 3);
        if ( v5 )
        {
          if ( *(_DWORD *)(a1 + 16) )
          {
            v6 = *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + v2);
            if ( v6 )
              return sub_AC6DA0(v6);
          }
        }
        v3 = *(_QWORD *)(a1 + v2);
      }
    }
  }
  result = sub_AC6DA0(v3);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      v6 = *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + v2);
      if ( v6 )
        return sub_AC6DA0(v6);
    }
  }
  return result;
}

