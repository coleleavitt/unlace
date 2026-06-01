unsigned __int64 __fastcall sub_20CF60(_QWORD *a1)
{
  __int64 v1; // rcx
  int v2; // edx
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v1 = dbg;
  v2 = *(_DWORD *)(dbg + 64LL);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = a1 + 6;
    do
    {
      v6 = qword_8CC390 + 56 * v4;
      v7 = *(int *)(v6 + 44);
      if ( (int)v7 < v2 )
      {
        v8 = *(_QWORD *)(v1 + 56) + 32 * v7;
        if ( (*(_BYTE *)(v8 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v8 + 16) )
          {
            v9 = sub_235E50(v6);
            v10 = a1[6];
            v11 = v9;
            v12 = a1[7];
            if ( a1[8] < (unsigned __int64)(v12 + 1) )
            {
              v13 = qvector_reserve(v5, v10, v12 + 1, 8);
              a1[6] = v13;
              v10 = v13;
              v12 = a1[7];
            }
            *(_QWORD *)(v10 + 8 * v12) = v11;
            ++a1[7];
          }
        }
      }
      v1 = dbg;
      ++v4;
      v2 = *(_DWORD *)(dbg + 64LL);
    }
    while ( v2 > (int)v4 );
  }
  return v15 - __readfsqword(0x28u);
}
