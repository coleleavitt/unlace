unsigned __int64 __fastcall sub_B77140(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 *src,
        __int64 a9)
{
  __int64 *v9; // rbx
  unsigned __int64 v10; // r12
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx

  v9 = src;
  v10 = sub_B6C590(104, a1, a2, 8 * a9);
  sub_B4F3E0(v10, 0x2Eu, (__int64)a1, a2, a3, a4, 0, a5, a6, a7);
  *(_DWORD *)(v10 + 100) = a9;
  v11 = &src[a9];
  *(_QWORD *)v10 = &off_2BD9608;
  if ( 8 * a9 )
  {
    memmove((void *)(v10 + 104), src, 8 * a9);
    if ( src != v11 )
    {
      do
      {
        while ( 1 )
        {
          v12 = *v9;
          *(_QWORD *)(v12 + 56) = v10;
          if ( sub_B55C60(v12) )
          {
            v13 = *(_QWORD *)(v12 + 64);
            if ( v13 )
            {
              v14 = *(unsigned int *)(v13 + 28);
              if ( (_DWORD)v14 )
                break;
            }
          }
          if ( v11 == ++v9 )
            return v10;
        }
        v15 = (__int64 *)(v13 + 32);
        v16 = &v15[v14];
        do
        {
          v17 = *v15++;
          *(_QWORD *)(v17 + 56) = v10;
        }
        while ( v16 != v15 );
        ++v9;
      }
      while ( v11 != v9 );
    }
  }
  return v10;
}

