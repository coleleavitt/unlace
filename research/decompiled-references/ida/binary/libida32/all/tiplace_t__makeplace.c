__int64 __fastcall tiplace_t__makeplace(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // r13d

  v5 = a3 >> 12;
  v6 = a3 >> 12;
  v7 = a3 & 0xFFF;
  v8 = qalloc_or_throw(24, (const char *)a2);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 )
  {
    if ( v6 < v9 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v6);
      goto LABEL_4;
    }
  }
  else
  {
    v10 = v5 + 1;
    if ( v6 < (*(int (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
      goto LABEL_4;
  }
  v10 = 0;
LABEL_4:
  *(_DWORD *)(v8 + 12) = v10;
  *(_QWORD *)v8 = &off_2B04410;
  *(_QWORD *)(v8 + 16) = v7;
  *(_DWORD *)(v8 + 8) = a4;
  return v8;
}

