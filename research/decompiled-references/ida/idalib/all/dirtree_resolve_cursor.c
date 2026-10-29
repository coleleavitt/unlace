__int64 __fastcall dirtree_resolve_cursor(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r8
  char v6; // di
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // di

  v3 = *a3;
  result = a1;
  if ( *a3 == -1 )
  {
    if ( a3[1] )
    {
      v11 = byte_2CD44E0;
      *(_QWORD *)result = qword_2CD44D8;
      *(_BYTE *)(result + 8) = v11;
    }
    else
    {
      v10 = qword_2CD44F8;
      *(_BYTE *)(a1 + 8) = byte_2CD4500;
      *(_QWORD *)a1 = v10;
    }
  }
  else
  {
    v5 = qword_2CD44D8;
    v6 = byte_2CD44E0;
    if ( v3 < *(_QWORD *)(a2 + 56) )
    {
      v7 = a3[1];
      v8 = *(_QWORD *)(a2 + 48) + 176 * v3;
      if ( v7 < *(_QWORD *)(v8 + 32) )
      {
        v9 = *(_QWORD *)(v8 + 24) + 9 * v7;
        v5 = *(_QWORD *)v9;
        v6 = *(_BYTE *)(v9 + 8);
      }
    }
    *(_QWORD *)result = v5;
    *(_BYTE *)(result + 8) = v6;
  }
  return result;
}
