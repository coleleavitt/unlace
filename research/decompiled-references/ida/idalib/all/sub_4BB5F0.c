unsigned __int64 __fastcall sub_4BB5F0(__int64 a1, void *a2, __int64 a3, int a4)
{
  int v5; // r15d
  unsigned int i; // r13d
  __int64 v7; // r14
  int v8; // eax
  __int64 j; // rax
  const char *v10; // rdx
  const char *v11; // r13
  __int64 v12; // r14
  int v13; // eax
  void *v16; // [rsp+18h] [rbp-E0h] BYREF
  int v17; // [rsp+2Ch] [rbp-CCh] BYREF
  void *v18; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-98h]
  __int64 v22; // [rsp+68h] [rbp-90h]
  __int64 v23; // [rsp+70h] [rbp-88h]
  __int128 v24; // [rsp+78h] [rbp-80h]
  __int128 v25; // [rsp+88h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-60h]
  __int128 v27; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-40h]

  v16 = a2;
  v28 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_7BE6E0(a1, &v16) )
  {
    *(_QWORD *)&v20 = v16;
    v5 = sub_7BE710(&v20, a1, 1, 65);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64)v16;
        v21 = 0;
        v22 = -1;
        v23 = 0;
        v26 = 0;
        v18 = v16;
        v20 = 0;
        v24 = 0;
        v25 = 0;
        v27 = 0;
        if ( i < (unsigned int)sub_7BE710(&v18, a1, 1, 65) )
        {
          if ( (unsigned __int8)sub_4B8CB0(a1, (__int64)&v20, v7, i, a4) )
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 112LL))(v24);
            if ( get_place_class(&v18, nullptr, v8) )
            {
              if ( ((unsigned __int8)v18 & 1) != 0
                && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v24 + 136LL))(v24, a3) )
              {
                sub_4B6E60(qword_2CCB598, v7, i, (__int64)&v20, a4);
              }
            }
          }
        }
        sub_4B66E0(&v20);
      }
    }
    v18 = nullptr;
    v19 = 0;
    for ( j = netnode_qhashfirst(v16, &v18, 72); j > 0; j = netnode_qhashnext(v16, &v18, v10, 72) )
    {
      v11 = haystack;
      if ( (_QWORD)v19 )
        v11 = (const char *)v18;
      v12 = (__int64)v16;
      v20 = 0;
      v24 = 0;
      v21 = 0;
      v22 = -1;
      v23 = 0;
      v26 = 0;
      v25 = 0;
      v27 = 0;
      if ( (unsigned __int8)sub_4B81F0(a1, (__int64)&v20, (__int64)v16, (__int64)v11, a4) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 112LL))(v24);
        if ( get_place_class(&v17, nullptr, v13) )
        {
          if ( (v17 & 1) != 0 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v24 + 136LL))(v24, a3) )
            sub_4B70F0(a1, v12, (__int64)v11, (__int64)&v20, a4);
        }
      }
      sub_4B66E0(&v20);
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
