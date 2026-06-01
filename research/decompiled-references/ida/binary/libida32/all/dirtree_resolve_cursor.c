unsigned __int64 __fastcall dirtree_resolve_cursor(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 result; // rax
  int v5; // r8d
  char v6; // di
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // r8d

  result = *a3;
  if ( (_DWORD)result != -1 || *((_QWORD *)a3 + 1) )
  {
    v5 = dword_2CAA5D8;
    v6 = byte_2CAA5DC;
    if ( result < *(_QWORD *)(a2 + 56) )
    {
      v7 = *((_QWORD *)a3 + 1);
      result = *(_QWORD *)(a2 + 48) + 176 * result;
      if ( v7 < *(_QWORD *)(result + 32) )
      {
        v8 = *(_QWORD *)(result + 24) + 5 * v7;
        v5 = *(_DWORD *)v8;
        v6 = *(_BYTE *)(v8 + 4);
      }
    }
    *(_DWORD *)a1 = v5;
    *(_BYTE *)(a1 + 4) = v6;
  }
  else
  {
    v9 = dword_2CAA5E2;
    *(_BYTE *)(a1 + 4) = byte_2CAA5E6;
    *(_DWORD *)a1 = v9;
  }
  return result;
}

