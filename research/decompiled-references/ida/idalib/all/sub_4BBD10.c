char __fastcall sub_4BBD10(_QWORD *a1, const char *a2, const char *a3, __int64 a4, char a5)
{
  int v9; // r12d
  int v10; // ebp
  bool v11; // dl
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // edx

  v9 = sub_4B7980((__int64)a1, a2);
  v10 = sub_4B7980((__int64)a1, a3);
  v11 = sub_4BBCC0((__int64)a1, v9, v10, a5) == 0;
  LOBYTE(v12) = v9 != v10;
  if ( v9 != v10 && v11 )
  {
    LOBYTE(v12) = v10 | v9;
    if ( (v10 | v9) >= 0 )
    {
      v13 = a1[7];
      v14 = a1[6];
      v15 = v13 + 1;
      if ( a1[8] < (unsigned __int64)(v13 + 1) )
      {
        v16 = qvector_reserve(a1 + 6, v14, v13 + 1, 24);
        v13 = a1[7];
        a1[6] = v16;
        v14 = v16;
        v15 = v13 + 1;
      }
      a1[7] = v15;
      v12 = v14 + 24 * v13;
      if ( v9 > v10 )
      {
        v17 = v9;
        v9 = v10;
        v10 = v17;
      }
      *(_DWORD *)v12 = v9;
      *(_DWORD *)(v12 + 4) = v10;
      *(_QWORD *)(v12 + 8) = a4;
      *(_BYTE *)(v12 + 16) = a5;
    }
  }
  return v12;
}
