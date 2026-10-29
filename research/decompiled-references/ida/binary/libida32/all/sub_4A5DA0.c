unsigned __int64 __fastcall sub_4A5DA0(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v5; // r15d
  unsigned int i; // r13d
  int v7; // r14d
  unsigned int v8; // eax
  __int64 j; // rax
  const char *v10; // rdx
  const char *v11; // r13
  int v12; // r14d
  unsigned int v13; // eax
  unsigned int v16[4]; // [rsp+Ch] [rbp-DCh] BYREF
  _BYTE v17[4]; // [rsp+1Ch] [rbp-CCh] BYREF
  void *v18; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+28h] [rbp-C0h]
  __int128 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  __int128 v24; // [rsp+68h] [rbp-80h]
  __int128 v25; // [rsp+78h] [rbp-70h]
  __int64 v26; // [rsp+88h] [rbp-60h]
  __int128 v27; // [rsp+90h] [rbp-58h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-40h]

  v16[0] = a2;
  v28 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_79B370(a1, v16) )
  {
    LODWORD(v20) = v16[0];
    v5 = sub_79B3A0(&v20, a1, 1, 65);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = v16[0];
        v21 = 0;
        v22 = -1;
        v23 = 0;
        v26 = 0;
        LODWORD(v18) = v16[0];
        v20 = 0;
        v24 = 0;
        v25 = 0;
        v27 = 0;
        if ( i < (unsigned int)sub_79B3A0(&v18, a1, 1, 65) )
        {
          if ( (unsigned __int8)sub_4A36C0(a1, (__int64)&v20, v7, i, a4) )
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 112LL))(v24);
            if ( get_place_class(&v18, 0, v8) )
            {
              if ( ((unsigned __int8)v18 & 1) != 0
                && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v24 + 136LL))(v24, a3) )
              {
                sub_4A1920(qword_2CA1698, v7, i, (__int64)&v20, a4);
              }
            }
          }
        }
        sub_4A11A0(&v20);
      }
    }
    v18 = nullptr;
    v19 = 0;
    for ( j = netnode_qhashfirst(v16[0], &v18, 72); j > 0; j = netnode_qhashnext(v16[0], &v18, v10, 72) )
    {
      v11 = haystack;
      if ( (_QWORD)v19 )
        v11 = (const char *)v18;
      v12 = v16[0];
      v20 = 0;
      v24 = 0;
      v21 = 0;
      v22 = -1;
      v23 = 0;
      v26 = 0;
      v25 = 0;
      v27 = 0;
      if ( (unsigned __int8)sub_4A2C90(a1, (__int64)&v20, v16[0], (__int64)v11, a4) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 112LL))(v24);
        if ( get_place_class(v17, 0, v13) )
        {
          if ( (v17[0] & 1) != 0
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v24 + 136LL))(v24, a3) )
          {
            sub_4A1A40(a1, v12, (__int64)v11, (__int64)&v20, a4);
          }
        }
      }
      sub_4A11A0(&v20);
      v10 = haystack;
      if ( (_QWORD)v19 )
        v10 = (const char *)v18;
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
  }
  return v28 - __readfsqword(0x28u);
}

