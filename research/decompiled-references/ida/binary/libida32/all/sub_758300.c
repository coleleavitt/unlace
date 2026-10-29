unsigned __int64 __fastcall sub_758300(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rax
  int v3; // ecx
  char v4; // dl
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v9; // [rsp+1h] [rbp-5h]
  unsigned __int8 v10; // [rsp+5h] [rbp-1h]

  v2 = *a2;
  if ( (_DWORD)v2 != -1 || *((_QWORD *)a2 + 1) )
  {
    v3 = dword_2CAA5D8;
    v4 = byte_2CAA5DC;
    if ( v2 < *(_QWORD *)(a1 + 56) )
    {
      v5 = *((_QWORD *)a2 + 1);
      v6 = *(_QWORD *)(a1 + 48) + 176 * v2;
      if ( v5 < *(_QWORD *)(v6 + 32) )
      {
        v7 = *(_QWORD *)(v6 + 24) + 5 * v5;
        v3 = *(_DWORD *)v7;
        v4 = *(_BYTE *)(v7 + 4);
      }
    }
    v9 = v3;
    v10 = v4;
  }
  else
  {
    v9 = dword_2CAA5E2;
    v10 = byte_2CAA5E6;
  }
  return ((unsigned __int64)v10 << 32) | v9;
}

