unsigned __int64 __fastcall sub_256D60(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        _DWORD *a7)
{
  size_t v10; // rax
  __int64 *v11; // r11
  size_t v12; // r8
  size_t v13; // rax
  size_t v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  void *v19; // rdi
  size_t v20; // rdx
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v28; // [rsp+8h] [rbp-470h]
  size_t v29; // [rsp+8h] [rbp-470h]
  size_t v30; // [rsp+8h] [rbp-470h]
  __int64 *v31; // [rsp+10h] [rbp-468h]
  size_t v32; // [rsp+10h] [rbp-468h]
  size_t v33; // [rsp+10h] [rbp-468h]
  size_t v34; // [rsp+18h] [rbp-460h]
  __int64 v35; // [rsp+28h] [rbp-450h] BYREF
  char s[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v37; // [rsp+438h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a1 )
  {
    sub_256BC0((__int64)s, (const char *)&elf_gnu_hash_bucket[42]);
    v10 = strlen(s);
    v11 = a1;
    v12 = v10;
    if ( v10 )
    {
      v19 = (void *)*a1;
      v20 = v10 + 1;
      if ( a1[2] < v10 + 1 )
      {
        v32 = v10 + 1;
        v34 = v10;
        v24 = qvector_reserve(a1, *a1, v20, 1);
        v11 = a1;
        v12 = v34;
        v20 = v32;
        v19 = (void *)v24;
        *a1 = v24;
      }
      v11[1] = v20;
      v31 = v11;
      v28 = v12;
      memmove(v19, s, v12);
      *(_BYTE *)(*v31 + v28) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  if ( a4 )
  {
    sub_256C80(s, (const char *)&elf_gnu_hash_bucket[42]);
    v13 = strlen(s);
    v14 = v13;
    if ( v13 )
    {
      v21 = (void *)*a4;
      v22 = v13 + 1;
      if ( a4[2] < v13 + 1 )
      {
        v30 = v13 + 1;
        v33 = v13;
        v25 = qvector_reserve(a4, *a4, v22, 1);
        v14 = v33;
        v22 = v30;
        *a4 = v25;
        v21 = (void *)v25;
      }
      a4[1] = v22;
      v29 = v14;
      memmove(v21, s, v14);
      *(_BYTE *)(*a4 + v29) = 0;
    }
    else
    {
      a4[1] = 0;
    }
  }
  if ( a2 )
  {
    if ( !(unsigned __int8)sub_256790(a2, "Parameters") )
    {
      v23 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        qfree(v23, "Parameters");
        *a2 = 0;
        a2[2] = 0;
      }
    }
  }
  if ( a3 )
    sub_2294E0(a3);
  if ( a5 )
  {
    if ( !(unsigned __int8)sub_256790(a5, "Host") && !(unsigned __int8)reg_str_get(a5, "DefaultRemoteHost64", 0) )
    {
      v15 = *a5;
      if ( *a5 )
      {
        a5[1] = 0;
        qfree(v15, "DefaultRemoteHost64");
        *a5 = 0;
        a5[2] = 0;
      }
    }
  }
  if ( a6 )
  {
    if ( !(unsigned __int8)sub_256790(a6, "Password") && !(unsigned __int8)reg_str_get(a6, "DefaultRemotePass64", 0) )
    {
      v16 = *a6;
      if ( *a6 )
      {
        a6[1] = 0;
        qfree(v16, "DefaultRemotePass64");
        *a6 = 0;
        a6[2] = 0;
      }
    }
  }
  if ( a7 )
  {
    LODWORD(v17) = qword_8CC070;
    if ( !qword_8CC070 )
    {
      netnode_check(&v35, "$ debugger application", 0, 0);
      v17 = netnode_altval(v35, 1, 65);
      if ( v17 )
        qword_8CC070 = v17;
      else
        LODWORD(v17) = reg_int_op("DefaultRemotePort64", 0, 23946, 0);
    }
    *a7 = v17;
  }
  return v37 - __readfsqword(0x28u);
}
