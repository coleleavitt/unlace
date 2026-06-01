__int64 __fastcall sub_123620(double a1)
{
  char v1; // bp
  __int64 *v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  int v5; // r9d
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  const char *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r14
  __int16 v16; // [rsp+6h] [rbp-62h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int128 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v16 = 3;
  v1 = sub_161C80(0, &v17, &v18);
  if ( v1 )
  {
    v14 = getseg();
    if ( v14 == get_first_seg() )
    {
      v15 = getseg();
      if ( v15 == get_last_seg() )
      {
        sub_1234C0(a1);
        return 1;
      }
    }
  }
  else
  {
    v17 = xmmword_2528A0;
    v18 = xmmword_2528A0;
  }
  v2 = (__int64 *)getseg();
  if ( v2 )
    v17 = *v2;
  v3 = getseg();
  if ( v3 )
    v18 = *(_QWORD *)(v3 + 8);
  v4 = (_QWORD *)getseg();
  v6 = v4;
  if ( v4 )
  {
    v19 = *v4;
    if ( !v1 )
    {
      a1 = 0.0;
      v20 = 0;
      v21 = 0;
      get_segm_name();
      v13 = s1;
      if ( (_QWORD)v21 )
        LODWORD(v13) = v20;
      if ( !(unsigned int)sub_18C660(1026, (_DWORD)v13, (_DWORD)v6, (int)v6 + 8, (unsigned int)&v19, (unsigned int)&v16) )
      {
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
        return 1;
      }
      v7 = v19 - *v6;
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
      goto LABEL_11;
    }
    if ( (unsigned int)sub_18C660(
                         1027,
                         (unsigned int)&v17,
                         (unsigned int)&v18,
                         (unsigned int)&v19,
                         (unsigned int)&v16,
                         v5) )
    {
      v7 = v19 - *v6;
LABEL_11:
      v8 = v18;
      v9 = v17;
      v10 = v18;
      v11 = v17;
      if ( sub_122240(v17, v18, v7, a1) )
      {
        v10 = v8;
        v11 = v9;
        sub_122090(v9, v8, v7);
      }
      sub_15E150(v11, v10);
    }
    return 1;
  }
  return 0;
}

