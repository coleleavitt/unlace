__int64 __fastcall sub_4B7320(__int64 *a1, const char *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r13d
  unsigned __int8 *v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  unsigned __int8 *v14; // r12
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 *v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v18 = nullptr;
  v19 = 0;
  v3 = zip_deflate_bytevec(&v18);
  v4 = v3;
  if ( !a1 || !(_BYTE)v3 )
    goto LABEL_3;
  v7 = v19;
  v8 = *a1;
  v9 = *a1;
  v10 = 2 * v19;
  if ( 2LL * (_QWORD)v19 )
  {
    v11 = a1[1];
    v12 = v10 + 1;
    if ( v11 < v10 + 1 )
    {
      if ( a1[2] < v12 )
      {
        v17 = qvector_reserve(a1, *a1, v10 + 1, 1);
        *a1 = v17;
        v9 = v17;
        v11 = a1[1];
      }
      a2 = nullptr;
      memset((void *)(v9 + v11), 0, v12 - v11);
      a1[1] = v12;
      v8 = *a1;
    }
    else if ( v12 != v11 )
    {
      a1[1] = v12;
    }
    *(_BYTE *)(v8 + v10) = 0;
    v7 = v19;
    v9 = *a1;
  }
  else if ( v8 )
  {
    a1[1] = 0;
    qfree(v8, a2);
    *a1 = 0;
    v7 = v19;
    v9 = 0;
    a1[2] = 0;
  }
  v5 = v18;
  v13 = v9 + a1[1];
  if ( v7 )
  {
    v14 = &v18[v7];
    do
    {
      v15 = *v5;
      a2 = (const char *)(v13 - v9);
      ++v5;
      qsnprintf(v9, v13 - v9, "%02X", v15);
      v9 += v16;
    }
    while ( v14 != v5 );
LABEL_3:
    v5 = v18;
  }
  if ( v5 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v5, a2);
  }
  return v4;
}
