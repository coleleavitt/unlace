__int64 __fastcall sub_DD8A0(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  _QWORD *v15; // rdi
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a2 < 0 )
    return v18 - __readfsqword(0x28u);
  v3 = a1[1];
  v4 = a2;
  if ( a2 >= v3 )
  {
    v8 = a2 + 1;
    if ( v8 != v3 )
    {
      v16 = 0;
      v9 = *a1;
      if ( v8 < v3 )
      {
        v13 = v8;
        while ( 1 )
        {
          v14 = v9 + 8 * v13++;
          clear_tinfo_t(v14);
          if ( v13 >= v3 )
            break;
          v9 = *a1;
        }
        a1[1] = v8;
      }
      else
      {
        v10 = a1[2];
        if ( (unsigned __int64)&v16 < v9 || (unsigned __int64)&v16 >= v9 + 8 * v10 )
        {
          if ( v10 < v8 )
          {
            *a1 = qvector_reserve(a1, v9, v8, 8);
            v3 = a1[1];
          }
          while ( v3 < v8 )
          {
            v15 = (_QWORD *)(*a1 + 8 * v3);
            *v15 = 0;
            copy_tinfo_t(v15, &v16);
            ++v3;
          }
          a1[1] = v8;
        }
        else
        {
          v17 = 0;
          copy_tinfo_t(&v17, &v16);
          if ( a1[2] < v8 )
            *a1 = qvector_reserve(a1, *a1, v8, 8);
          v11 = a1[1];
          if ( v11 < v8 )
          {
            do
            {
              v12 = (_QWORD *)(*a1 + 8 * v11);
              *v12 = 0;
              copy_tinfo_t(v12, &v17);
              ++v11;
            }
            while ( v8 != v11 );
          }
          a1[1] = v8;
          clear_tinfo_t(&v17);
        }
      }
      clear_tinfo_t(&v16);
    }
  }
  return copy_tinfo_t(*a1 + 8 * v4, a3);
}
