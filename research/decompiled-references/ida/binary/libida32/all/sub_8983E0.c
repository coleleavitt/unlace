__int64 __fastcall sub_8983E0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 *a5)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax

  v8 = sub_897250((_QWORD *)a1, a2, a3, a4);
  if ( !v8 )
  {
    v8 = sub_897580((_QWORD **)a1, a2, a3, a4);
    if ( v8 )
    {
      return (unsigned int)-4;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 44) = -1;
      *(_QWORD *)(a1 + 56) = 0;
      v10 = *(_QWORD *)(a1 + 16) + 16 * v9;
      *(_DWORD *)(a1 + 64) = -1;
      *(_QWORD *)(a1 + 80) = v10;
      *(_QWORD *)(a1 + 48) = v10;
      *(_QWORD *)(a1 + 72) = 0;
      sub_8964D0(a1);
      if ( a5 )
        sub_898360(a1, a5, a2, a3, a4);
    }
  }
  return v8;
}

