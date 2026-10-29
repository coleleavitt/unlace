unsigned __int64 __fastcall sub_370880(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned __int8 (__fastcall ***a6)(_QWORD, __int64, __int64, _QWORD, _QWORD))
{
  __int64 v9; // r15
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 *func; // rax
  __int64 v13; // rsi
  const char *v14; // rdx
  __int64 v17; // [rsp+18h] [rbp-80h] BYREF
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  char v20; // [rsp+30h] [rbp-68h]
  const char *v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+48h] [rbp-50h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return v23 - __readfsqword(0x28u);
  if ( !(a1 ? xrefblk_t_first_from(&v18, a2, a5) : (unsigned __int8)xrefblk_t_first_to(&v18, a2, a5)) )
    return v23 - __readfsqword(0x28u);
  if ( a1 )
    goto LABEL_8;
  while ( 1 )
  {
    v9 = v18;
    func = (__int64 *)get_func(v18);
    if ( func )
    {
      v11 = *func;
      if ( a3 == *func )
        goto LABEL_13;
      if ( v20 )
        goto LABEL_11;
    }
    else
    {
      if ( v9 == a3 )
        goto LABEL_13;
LABEL_27:
      v11 = v9;
LABEL_10:
      if ( v20 )
        goto LABEL_11;
    }
    v17 = v9;
    if ( (unsigned __int8)netnode_exist(&v17) )
    {
      v13 = (__int64)&v21;
      v21 = nullptr;
      v22 = 0;
      if ( netnode_get_name(v17, &v21) >= 0 )
      {
        v14 = &s1;
        if ( (_QWORD)v22 )
          v14 = v21;
        v13 = -1;
        if ( (unsigned int)get_name_value(0, -1, v14) != 1 )
        {
          if ( v21 )
          {
            *(_QWORD *)&v22 = 0;
            qfree(v21, (const char *)0xFFFFFFFFFFFFFFFFLL);
          }
          goto LABEL_12;
        }
      }
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21, (const char *)v13);
      }
    }
LABEL_11:
    if ( !(**a6)(a6, a3, v11, a1, (unsigned int)a4) )
      return v23 - __readfsqword(0x28u);
LABEL_12:
    if ( a1 )
      break;
LABEL_13:
    if ( !(unsigned __int8)xrefblk_t_next_to(&v18) )
      return v23 - __readfsqword(0x28u);
  }
  while ( (unsigned __int8)xrefblk_t_next_from(&v18) )
  {
LABEL_8:
    v9 = v19;
    v10 = (__int64 *)get_func(v19);
    if ( v10 )
    {
      v11 = *v10;
      if ( a3 != *v10 )
        goto LABEL_10;
    }
    else if ( v9 != a3 )
    {
      goto LABEL_27;
    }
  }
  return v23 - __readfsqword(0x28u);
}
