__int64 __fastcall tiplace_t__makeplace(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // r13d

  v5 = a3 >> 12;
  v6 = a3 & 0xFFF;
  v7 = qalloc_or_throw(24);
  v8 = a2[2];
  if ( v8 )
  {
    if ( v5 < v8 )
    {
      v9 = *(_DWORD *)(a2[1] + 4 * v5);
      goto LABEL_4;
    }
  }
  else if ( v5 < (*(int (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2) )
  {
    v9 = v5 + 1;
    goto LABEL_4;
  }
  v9 = 0;
LABEL_4:
  *(_DWORD *)(v7 + 12) = v9;
  *(_QWORD *)v7 = &off_2B2E3D0;
  *(_QWORD *)(v7 + 16) = v6;
  *(_DWORD *)(v7 + 8) = a4;
  return v7;
}
