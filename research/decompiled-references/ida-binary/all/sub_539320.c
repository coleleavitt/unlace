unsigned __int64 __fastcall sub_539320(__int64 a1)
{
  double v1; // xmm0_8
  const char *v2; // rsi
  __int64 v3; // r9
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v1 = 0.0;
  v19 = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
  v2 = *(const char **)(a1 + 8);
  sub_535A80(&v17, v2);
  v4 = v18;
  if ( !(_QWORD)v18 )
  {
    v9 = v17;
    if ( !v17 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_16;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = &s1;
    v8 = v5 + v17;
    if ( *(_QWORD *)(v5 + v17 + 32) )
      v7 = *(const char **)(v8 + 24);
    v2 = &s1;
    if ( *(_QWORD *)(v8 + 8) )
      v2 = *(const char **)v8;
    sub_5390E0(a1, (__int64)v2, v7, *(_DWORD *)(v5 + v17 + 48), nullptr, v3, 0.0);
    ++v6;
    v5 += 56;
  }
  while ( v4 != v6 );
  v9 = v17;
  if ( v17 )
  {
    v10 = v18;
    if ( (_QWORD)v18 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v9 + v11);
        v14 = *(_QWORD *)(v9 + v11 + 24);
        if ( v14 )
        {
          v13[4] = 0;
          v1 = qfree(v14, v2);
        }
        v15 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          v1 = qfree(v15, v2, v1);
        }
        ++v12;
        v9 = v17;
        v11 += 56;
      }
      while ( v10 != v12 );
    }
LABEL_16:
    *(_QWORD *)&v18 = 0;
    qfree(v9, v2);
  }
  return v19 - __readfsqword(0x28u);
}
