unsigned __int64 __fastcall sub_2E9B40(const char **a1)
{
  const char **v2; // rbx
  const char **v3; // rbp
  const char *v4; // r12
  const char *v5; // rsi
  const char *v6; // rdi
  const char *v7; // rax
  const char *v8; // r12
  const char *v9; // rbx
  __int64 v10; // r15
  const char *v11; // rsi
  const char **v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbp
  const char **v15; // rbx
  const char *v16; // rdi
  const char *v17; // rdi
  const char **v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h]
  const char *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_2E98A0((__int64)&v19);
  v2 = v19;
  v3 = &v19[6 * v20];
  if ( v3 == v19 )
  {
LABEL_10:
    v8 = nullptr;
    v9 = &s1;
    goto LABEL_11;
  }
  v4 = a1[1];
  while ( 1 )
  {
    v7 = v2[1];
    if ( v4 )
    {
      v5 = *a1;
      v6 = &s1;
      if ( !v7 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v7 )
      break;
    v5 = &s1;
LABEL_9:
    v6 = *v2;
LABEL_4:
    if ( !strcmp(v6, v5) )
      break;
    v2 += 6;
    if ( v3 == v2 )
      goto LABEL_10;
  }
  sub_2E9040((__int64)&v21, (__int64)v2);
  v8 = v21;
  if ( v22 )
    v9 = v21;
  else
    v9 = &s1;
LABEL_11:
  v10 = dword_8CD470;
  sub_2E9040((__int64)&v21, (__int64)a1);
  v11 = &s1;
  if ( v22 )
    v11 = v21;
  reg_update_strlist("History/JumpAnywhere", v11, v10, v9, 0);
  if ( v21 )
  {
    v22 = 0;
    qfree(v21, v11);
  }
  v12 = v19;
  if ( v19 )
  {
    v13 = v20;
    if ( v20 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[6 * v14];
        v16 = v15[3];
        if ( v16 )
        {
          v15[4] = nullptr;
          qfree(v16, v11);
        }
        v17 = *v15;
        if ( *v15 )
        {
          v15[1] = nullptr;
          qfree(v17, v11);
        }
        ++v14;
        v12 = v19;
      }
      while ( v13 != v14 );
    }
    v20 = 0;
    qfree(v12, v11);
  }
  if ( v8 )
    qfree(v8, v11);
  return v23 - __readfsqword(0x28u);
}
