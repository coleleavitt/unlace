unsigned __int64 __fastcall sub_E5DD0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        _DWORD *a7)
{
  size_t v10; // rax
  __int64 *v11; // r11
  size_t v12; // r8
  size_t v13; // rax
  size_t v14; // r8
  __int64 v15; // rax
  void *v17; // rdi
  size_t v18; // rdx
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v25; // [rsp+8h] [rbp-470h]
  size_t v26; // [rsp+8h] [rbp-470h]
  size_t v27; // [rsp+8h] [rbp-470h]
  __int64 *v28; // [rsp+10h] [rbp-468h]
  size_t v29; // [rsp+10h] [rbp-468h]
  size_t v30; // [rsp+10h] [rbp-468h]
  size_t v31; // [rsp+18h] [rbp-460h]
  char s[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v33; // [rsp+438h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a1 )
  {
    sub_E5C30();
    v10 = strlen(s);
    v11 = a1;
    v12 = v10;
    if ( v10 )
    {
      v17 = (void *)*a1;
      v18 = v10 + 1;
      if ( a1[2] < v10 + 1 )
      {
        v29 = v10 + 1;
        v31 = v10;
        v21 = qvector_reserve();
        v11 = a1;
        v12 = v31;
        v18 = v29;
        v17 = (void *)v21;
        *a1 = v21;
      }
      v11[1] = v18;
      v28 = v11;
      v25 = v12;
      memmove(v17, s, v12);
      *(_BYTE *)(*v28 + v25) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  if ( a4 )
  {
    sub_E5CF0(s);
    v13 = strlen(s);
    v14 = v13;
    if ( v13 )
    {
      v19 = *(void **)a4;
      v20 = v13 + 1;
      if ( *(_QWORD *)(a4 + 16) < v13 + 1 )
      {
        v27 = v13 + 1;
        v30 = v13;
        v22 = qvector_reserve();
        v14 = v30;
        v20 = v27;
        *(_QWORD *)a4 = v22;
        v19 = (void *)v22;
      }
      *(_QWORD *)(a4 + 8) = v20;
      v26 = v14;
      memmove(v19, s, v14);
      *(_BYTE *)(*(_QWORD *)a4 + v26) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
    }
  }
  if ( a2 && !(unsigned __int8)sub_E5800(a2, "Parameters") && *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( a3 )
    sub_BA360(a3);
  if ( a5 && !(unsigned __int8)sub_E5800(a5, "Host") && !(unsigned __int8)reg_str_get() && *a5 )
  {
    a5[1] = 0;
    qfree();
    *a5 = 0;
    a5[2] = 0;
  }
  if ( a6 && !(unsigned __int8)sub_E5800(a6, "Password") && !(unsigned __int8)reg_str_get() && *a6 )
  {
    a6[1] = 0;
    qfree();
    *a6 = 0;
    a6[2] = 0;
  }
  if ( a7 )
  {
    LODWORD(v15) = qword_2521F0;
    if ( !qword_2521F0 )
    {
      netnode_check();
      v15 = netnode_altval();
      if ( v15 )
        qword_2521F0 = v15;
      else
        LODWORD(v15) = reg_int_op();
    }
    *a7 = v15;
  }
  return v33 - __readfsqword(0x28u);
}

