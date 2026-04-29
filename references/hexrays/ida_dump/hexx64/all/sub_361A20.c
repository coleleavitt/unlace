unsigned __int64 __fastcall sub_361A20(__int64 a1, __int64 *a2, const char *a3)
{
  const char *v5; // rbp
  const char *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  char *v11; // rbx
  signed __int64 v12; // r15
  void *v13; // rdi
  signed __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v5 = a3;
    do
    {
      v11 = strchr(v5, 58);
      if ( !v11 )
        v11 = (char *)&v5[strlen(v5)];
      v18 = 0;
      v19 = 0;
      v12 = v11 - v5;
      if ( v11 == v5 )
        goto LABEL_3;
      v13 = nullptr;
      v14 = v12 + 1;
      if ( v12 != -1 )
      {
        v18 = qvector_reserve(&v18, 0, v14, 1);
        v14 = v12 + 1;
        v13 = (void *)v18;
      }
      *(_QWORD *)&v19 = v14;
      memmove(v13, v5, v11 - v5);
      *(_BYTE *)(v18 + v12) = 0;
      if ( !(_QWORD)v19 )
LABEL_3:
        v6 = s1;
      else
        v6 = (const char *)v18;
      if ( !(unsigned __int8)str2ea(&v17, v6, -1) || (v7 = v17, v17 != (v17 & *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL))) )
        sub_318CB0((__int64)"bad function address: %s", v6);
      v8 = a2[1];
      v9 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v15 = qvector_reserve(a2, v9, v8 + 1, 8);
        *a2 = v15;
        v9 = v15;
        v8 = a2[1];
      }
      *(_QWORD *)(v9 + 8 * v8) = v7;
      v10 = v18;
      ++a2[1];
      v5 = &v11[*v11 == 58];
      if ( v10 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v10);
      }
    }
    while ( *v5 );
  }
  return v20 - __readfsqword(0x28u);
}
