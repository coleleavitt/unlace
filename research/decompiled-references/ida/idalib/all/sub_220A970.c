void __fastcall sub_220A970(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r8
  unsigned int v4; // eax
  __int64 v5; // rbx
  size_t v6; // rbp
  int v7; // edx
  __int64 v8; // r13
  __int64 *v9; // r12
  unsigned int v10; // r10d
  unsigned int v11; // edi

  if ( a3 )
  {
    v3 = a1;
    v4 = a3 >> 6;
    if ( a3 >> 6 > a2 )
      v4 = a2;
    v5 = a2 - v4;
    v6 = v4;
    v7 = a3 & 0x3F;
    if ( v7 )
    {
      if ( (_DWORD)v5 )
      {
        v8 = a1[v4] >> v7;
        *a1 = v8;
        if ( (_DWORD)v5 != 1 )
        {
          v9 = a1;
          v10 = 1 - v4;
          do
          {
            v11 = v10 + v4++;
            *v9 = v8 | (v3[v4] << (64 - (unsigned __int8)v7));
            v9 = &v3[v11];
            v8 = v3[v4] >> v7;
            *v9 = v8;
          }
          while ( v4 != a2 - 1 );
        }
      }
    }
    else
    {
      v3 = memmove(a1, &a1[v6], (unsigned int)(8 * v5));
    }
    memset(&v3[v5], 0, v6 * 8);
  }
}
