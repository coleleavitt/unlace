__int64 __fastcall sub_F010(_QWORD *a1, __int64 a2, unsigned int a3, __int64 **a4)
{
  unsigned __int64 auto_state; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v11; // rsi
  __int64 sreg; // rax
  __int64 *v13; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  auto_state = get_auto_state();
  if ( (unsigned int)auto_state <= 0x19 && (v8 = 34603009, _bittest64(&v8, auto_state)) )
  {
    if ( a3 == 5 )
    {
      v9 = a1[21];
      v11 = 133;
    }
    else if ( a3 == 30 )
    {
      v9 = a1[22];
      v11 = 135;
    }
    else
    {
      v9 = -1;
      if ( a3 != 4 )
        return v9;
      v9 = a1[20];
      v11 = 132;
    }
    sreg = get_sreg(a2, v11);
    if ( sreg != -1 )
      return sreg;
  }
  else
  {
    if ( !a4 )
      a4 = (__int64 **)&v18;
    v18 = 0;
    v20 = 0;
    v19 = 0;
    v9 = -1;
    if ( (unsigned __int8)sub_17080(a1, a4, a2, a3, 0, 0) )
    {
      if ( (unsigned __int8)(*((_BYTE *)a4 + 24) - 10) <= 1u )
      {
        v13 = *a4;
        v14 = a4[1];
        v9 = **a4;
        if ( v14 != (__int64 *)((char *)&dword_0 + 1) )
        {
          v15 = v13 + 3;
          v16 = 3LL * (_QWORD)v14;
          v17 = &v13[v16];
          if ( v16 != 3 )
          {
            while ( v9 == *v15 )
            {
              v15 += 3;
              if ( v17 == v15 )
                goto LABEL_6;
            }
            v9 = -1;
          }
        }
      }
    }
LABEL_6:
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
  }
  return v9;
}
