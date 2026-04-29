void __fastcall sub_3F4CB0(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // r14d
  _QWORD *v3; // r13
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_DWORD *, unsigned int); // rdx
  __int64 v11; // rax

  if ( a1[10] )
  {
    v1 = 0;
    v2 = 0;
    v3 = a1 + 1;
    do
    {
      v8 = (_DWORD *)a1[7];
      v9 = *(unsigned __int16 *)(a1[9] + 2 * v1);
      v10 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v8 + 168LL);
      if ( v10 == sub_3E59C0 )
        v5 = sub_3E59C0(v8, v9);
      else
        v5 = v10(v8, v9);
      if ( v5 != -1 )
      {
        v6 = a1[2];
        v7 = a1[1];
        if ( a1[3] < (unsigned __int64)(v6 + 1) )
        {
          v11 = qvector_reserve(v3, v7, v6 + 1, 4);
          a1[1] = v11;
          v7 = v11;
          v6 = a1[2];
        }
        *(_DWORD *)(v7 + 4 * v6) = v5;
        ++a1[2];
      }
      v1 = ++v2;
    }
    while ( (unsigned __int64)v2 < a1[10] );
  }
}
