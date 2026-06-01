__int128 __usercall sub_5B7B50@<xmm0>(__int64 a1@<rdi>, __int64 a2@<rsi>, __int64 *a3@<rdx>, double a4@<xmm0>)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int128 v6; // xmm1
  __int64 v8; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  if ( !(_DWORD)v4 )
    return 0x3F800000u;
  v6 = 0x3F800000u;
  v8 = 0;
  v10 = 8 * v4;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a2 + v8 + 32);
      if ( *(_WORD *)(v11 + 4) == 1 )
      {
        v12 = *(_DWORD *)(v11 + 16);
        v13 = *a3;
        v14 = v12 >> 5;
        if ( !*a3 || (unsigned int)v14 >= *(_DWORD *)(v13 - 4) || (*(_DWORD *)(v13 + 4 * v14) & (1 << v12)) == 0 )
          break;
      }
      v8 += 8;
      if ( v10 == v8 )
        return v6;
    }
    v15 = sub_64BCA0(*(_QWORD *)(a1 + 24), *(_QWORD *)(v5 + v8 + 48), a4);
    v6 = (unsigned int)v6;
    HIDWORD(a4) = 0;
    if ( v15 < 0 )
      *(float *)&a4 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
                    + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
    else
      *(float *)&a4 = (float)(int)v15;
    *(float *)&v6 = *(float *)&v6 * *(float *)&a4;
    v8 += 8;
  }
  while ( v10 != v8 );
  return v6;
}

