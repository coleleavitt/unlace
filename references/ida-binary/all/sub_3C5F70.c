unsigned __int64 __fastcall sub_3C5F70(__int64 a1, const char **a2, _QWORD *a3, const char *a4, __int64 a5, __int64 a6)
{
  const char *v8; // rax
  const char *v10; // rdx
  const char *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdi
  const char *v16; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v8 = (const char *)a3[1];
  v20 = __readfsqword(0x28u);
  v18 = 0;
  v10 = v8;
  v19 = 0;
  if ( a4 <= v8 )
    v10 = a4;
  v11 = nullptr;
  v12 = 0;
  if ( v10 )
  {
    v18 = qvector_reserve(&v18, 0, v10, 4);
    v11 = (const char *)v18;
    v10 = (const char *)v19;
    v8 = (const char *)a3[1];
    v12 = *((_QWORD *)&v19 + 1);
  }
  v13 = 0;
  if ( v8 )
  {
    while ( v10 < a4 )
    {
      v14 = *(_QWORD *)(*a3 + 8 * v13);
      if ( (_DWORD)v14 )
      {
        if ( v12 < (unsigned __int64)(v10 + 1) )
        {
          v18 = qvector_reserve(&v18, v11, v10 + 1, 4);
          v10 = (const char *)v19;
          v11 = (const char *)v18;
        }
        *(_DWORD *)&v11[4 * (_QWORD)v10] = v14;
        ++v13;
        v11 = (const char *)v18;
        v12 = *((_QWORD *)&v19 + 1);
        v10 = (const char *)(v19 + 1);
        *(_QWORD *)&v19 = v19 + 1;
        if ( v13 >= a3[1] )
          break;
      }
      else if ( ++v13 >= a3[1] )
      {
        break;
      }
    }
  }
  v15 = (__int64)*a2;
  v16 = a2[2];
  *a2 = v11;
  a2[1] = v10;
  a2[2] = (const char *)v12;
  v18 = v15;
  *((_QWORD *)&v19 + 1) = v16;
  if ( v15 )
    qfree(v15, v11, v10, v12, a5, a6, v18, 0, *((_QWORD *)&v19 + 1));
  return v20 - __readfsqword(0x28u);
}
