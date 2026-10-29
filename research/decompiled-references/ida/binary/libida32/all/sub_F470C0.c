__int64 __fastcall sub_F470C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  LOBYTE(v5) = (_BYTE)v6 == 34 || (_BYTE)v6 == 11;
  if ( (_BYTE)v5 )
    return 1;
  v8 = sub_F46D10(a1, a2, v6, a4, a5);
  if ( v8 )
  {
    v13 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
    {
      v14 = sub_B68690(v13, a2, v9, v10, v11, v12);
      v15 = *v14;
      v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
      if ( *v14 >= v16 )
      {
        if ( v15 == v16 )
          return v5;
        while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 311 )
        {
          v16 += 8LL;
          if ( v15 == v16 )
            return v5;
        }
        return 1;
      }
      v17 = *v14;
      while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 311 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          return v5;
      }
      if ( v16 != v17 )
        return 1;
    }
  }
  return v5;
}

