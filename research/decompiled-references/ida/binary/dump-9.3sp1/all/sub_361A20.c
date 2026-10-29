unsigned __int64 __fastcall sub_361A20(__int64 a1, __int64 *a2, const char *a3)
{
  const char *v5; // rbp
  const char *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  char *v14; // rbx
  signed __int64 v15; // r15
  void *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  char v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v5 = a3;
    do
    {
      v14 = strchr(v5, 58);
      if ( !v14 )
        v14 = (char *)&v5[strlen(v5)];
      v22 = 0;
      v23 = 0;
      v15 = v14 - v5;
      if ( v14 == v5 )
        goto LABEL_3;
      v16 = nullptr;
      v17 = v15 + 1;
      if ( v15 != -1 )
      {
        v22 = qvector_reserve((__int64)&v22, 0, v17, 1);
        v17 = v15 + 1;
        v16 = (void *)v22;
      }
      *(_QWORD *)&v23 = v17;
      memmove(v16, v5, v14 - v5);
      *(_BYTE *)(v22 + v15) = 0;
      if ( !(_QWORD)v23 )
LABEL_3:
        v6 = s1;
      else
        v6 = (const char *)v22;
      if ( !(unsigned __int8)str2ea() || (v8 = v21 & *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), v21 != v8) )
        sub_318CB0((__int64)"bad function address: %s", (__int64)v6, v7, v8, v9, v10, v20);
      v11 = a2[1];
      v12 = *a2;
      if ( a2[2] < (unsigned __int64)(v11 + 1) )
      {
        v18 = qvector_reserve((__int64)a2, v12, v11 + 1, 8);
        *a2 = v18;
        v12 = v18;
        v11 = a2[1];
      }
      *(_QWORD *)(v12 + 8 * v11) = v21;
      v13 = v22;
      ++a2[1];
      v5 = &v14[*v14 == 58];
      if ( v13 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v13);
      }
    }
    while ( *v5 );
  }
  return v24 - __readfsqword(0x28u);
}
