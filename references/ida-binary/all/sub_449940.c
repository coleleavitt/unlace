__int64 __fastcall worklists_commit_action_t__::vfunc_2(
        __int64 (__fastcall ***a1)(_QWORD, __int64),
        QT::QAbstractItemView **a2)
{
  int v2; // r13d
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  v2 = sub_446BA0(a1, &v14, (__int64)a2);
  if ( (_QWORD)v15 )
    v3 = sub_449700((__int64)a1, (char *)&v14, a2);
  else
    v3 = (*a1)[1](a1, (__int64)&v14);
  v4 = v14;
  v5 = v3 | v2;
  if ( v14 )
  {
    v6 = v15;
    if ( (_QWORD)v15 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = (__int64 *)(v4 + v7);
        v10 = *(_QWORD *)(v4 + v7 + 48);
        if ( v10 )
        {
          v9[7] = 0;
          qfree(v10, (const char *)&v14);
        }
        v11 = v9[3];
        if ( v11 )
        {
          v9[4] = 0;
          qfree(v11, (const char *)&v14);
        }
        v12 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v12, (const char *)&v14);
        }
        ++v8;
        v4 = v14;
        v7 += 88;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v4, (const char *)&v14);
  }
  return v5;
}
