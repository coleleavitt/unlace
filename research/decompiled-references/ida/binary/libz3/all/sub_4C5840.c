__int64 __fastcall sub_4C5840(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // r13
  unsigned int *v10; // rsi
  __int64 result; // rax

  v3 = a3;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 112LL);
  if ( v5 == sub_4C9AB0 || (result = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *))v5)(v4, a2, a3)) == 0 )
  {
    v6 = sub_186B270(0x20u);
    *(_QWORD *)v6 = &off_1C4EFD8;
    v7 = *(_QWORD *)(a2 + 16);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v7 - 4);
      *(_QWORD *)(v6 + 8) = 0;
      if ( (_DWORD)v8 )
      {
        v9 = &v3[v8];
        do
        {
          v10 = v3++;
          sub_4C54F0((_QWORD *)(v6 + 8), v10);
        }
        while ( v3 != v9 );
      }
    }
    else
    {
      *(_QWORD *)(v6 + 8) = 0;
    }
    *(_BYTE *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    return v6;
  }
  return result;
}

