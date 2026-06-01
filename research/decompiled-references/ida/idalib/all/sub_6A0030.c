unsigned __int64 __fastcall sub_6A0030(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  __m128i *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r12
  _BYTE *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  void *v14; // rdi
  char *v15; // rbx
  char v16; // al
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 i; // r14
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a3 == 84 )
  {
    v27 = 0;
    ptr = nullptr;
    v5 = *(__m128i **)(qword_2CCB598 + 1840);
    v6 = node2ea(a4);
    v7 = sub_69D860(v5, (__int64 *)&ptr, &v25, v6);
    if ( v7 > 0 )
    {
      v8 = 0;
      v9 = 104LL * (unsigned int)v7;
      do
      {
        sub_69FBB0((__int64 *)((char *)ptr + v8), a2);
        v8 += 104;
      }
      while ( v8 != v9 );
    }
    v10 = ptr;
    if ( ptr )
    {
      v11 = v27;
      if ( (_QWORD)v27 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v15 = &v10[v12];
          v16 = v10[v12 + 97];
          if ( v16 == 2 )
          {
            v17 = *((char **)v15 + 3);
            if ( v17 )
            {
              v18 = *((_QWORD *)v15 + 4);
              if ( v18 )
              {
                v19 = 0;
                for ( i = 0; i != v18; ++i )
                {
                  v21 = *(void **)&v17[v19];
                  if ( v21 )
                  {
                    *(_QWORD *)&v17[v19 + 8] = 0;
                    v24 = v18;
                    qfree(v21);
                    v17 = *((char **)v15 + 3);
                    v18 = v24;
                  }
                  v19 += 56;
                }
              }
              *((_QWORD *)v15 + 4) = 0;
              qfree(v17);
            }
          }
          else if ( v16 == 1 )
          {
            v22 = *((void **)v15 + 8);
            if ( v22 )
            {
              *((_QWORD *)v15 + 9) = 0;
              qfree(v22);
            }
            v23 = *((void **)v15 + 3);
            if ( v23 )
            {
              *((_QWORD *)v15 + 4) = 0;
              qfree(v23);
            }
          }
          v14 = *(void **)v15;
          v15[97] = 0;
          if ( v14 )
          {
            *((_QWORD *)v15 + 1) = 0;
            qfree(v14);
          }
          ++v13;
          v10 = ptr;
          v12 += 104;
        }
        while ( v11 != v13 );
      }
      *(_QWORD *)&v27 = 0;
      qfree(v10);
    }
  }
  return v28 - __readfsqword(0x28u);
}
