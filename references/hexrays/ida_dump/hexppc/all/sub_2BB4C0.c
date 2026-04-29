__int64 __fastcall sub_2BB4C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  v2 = *a2;
  v18[0] = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 104);
    v3 = sub_2A9F90(a1 + 48, v18);
    v4 = (*(_DWORD *)(v2 + 104))-- == 1;
    v5 = v3;
    if ( v4 )
    {
      sub_254CF0((__int64 *)v2);
      v6 = *(_QWORD *)(v2 + 184);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v2 + 192);
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = (__int64 *)(v6 + 24 * i);
            v10 = *v9;
            if ( *v9 )
            {
              v9[1] = 0;
              qfree(v10);
              v6 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v6);
      }
      v11 = *(_QWORD *)(v2 + 160);
      if ( v11 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v11);
      }
      v12 = *(_QWORD *)(v2 + 128);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v2 + 136);
        if ( v13 )
        {
          for ( j = 0; j != v13; ++j )
          {
            v15 = (__int64 *)(v12 + 32 * j);
            v16 = *v15;
            if ( *v15 )
            {
              v15[1] = 0;
              qfree(v16);
              v12 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v12);
      }
      sub_2513D0(v2 + 16);
      j__qfree(v2);
    }
  }
  else
  {
    return (unsigned int)sub_2A9F90(a1 + 48, v18);
  }
  return v5;
}
