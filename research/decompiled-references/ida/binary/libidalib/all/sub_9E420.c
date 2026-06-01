unsigned __int64 __fastcall sub_9E420(_QWORD *a1)
{
  __int64 v1; // rcx
  int v2; // edx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v1 = dbg;
  v2 = *(_DWORD *)(dbg + 64LL);
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = qword_2524F0 + 56 * v4;
      v6 = *(int *)(v5 + 44);
      if ( (int)v6 < v2 )
      {
        v7 = *(_QWORD *)(v1 + 56) + 32 * v6;
        if ( (*(_BYTE *)(v7 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v7 + 16) )
          {
            v8 = sub_C73A0(v5);
            v9 = a1[6];
            v10 = v8;
            v11 = a1[7];
            if ( a1[8] < (unsigned __int64)(v11 + 1) )
            {
              v12 = qvector_reserve();
              a1[6] = v12;
              v9 = v12;
              v11 = a1[7];
            }
            *(_QWORD *)(v9 + 8 * v11) = v10;
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
  return v14 - __readfsqword(0x28u);
}

