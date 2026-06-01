unsigned __int64 __fastcall sub_3A5420(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v4; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  if ( (int)v4 != a3[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC83Du, a4);
    BUG();
  }
  if ( (_DWORD)v4 )
  {
    v18 = 0;
    v19 = 0;
    v9 = qvector_reserve((__int64)&v18, 0, (int)v4, 4);
    v11 = v19;
    v18 = v9;
    if ( (unsigned __int64)v19 < (int)v4 )
    {
      *(_DWORD *)(v9 + 4 * v19) = 0;
      v12 = v11 + 1;
      if ( v11 + 1 < (unsigned __int64)(int)v4 )
      {
        do
          *(_DWORD *)(v18 + 4 * v12++) = 0;
        while ( (int)v4 != v12 );
      }
    }
    *(_QWORD *)&v19 = (int)v4;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            1177,
            a2,
            &v18,
            1,
            &callui,
            v10);
    if ( v13 != *(_QWORD *)(a2 + 8) )
      sub_6D0A0((__int64)"** WARNING ** only %d out of %d decompiler breakpoints have been relocated\n", v13, v4);
    v14 = v18;
    if ( (int)v4 > 0 )
    {
      v15 = 0;
      v16 = 4LL * (unsigned int)(v4 - 1) + 4;
      do
      {
        while ( *(_DWORD *)(v14 + v15) )
        {
          v15 += 4;
          if ( v15 == v16 )
            goto LABEL_14;
        }
        sub_2B61B0(a1, *(_QWORD *)(*a3 + 6 * v15), 0);
        netnode_supdel();
        v15 += 4;
        v14 = v18;
      }
      while ( v15 != v16 );
LABEL_14:
      v17 = 0;
      do
      {
        while ( *(_DWORD *)(v14 + v17) )
        {
          v17 += 4;
          if ( v17 == v16 )
            goto LABEL_18;
        }
        sub_2B61B0(a1, *(_QWORD *)(*a3 + 6 * v17 + 8), 1);
        netnode_supset();
        v17 += 4;
        v14 = v18;
      }
      while ( v17 != v16 );
    }
LABEL_18:
    if ( v14 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v14);
    }
  }
  return v20 - __readfsqword(0x28u);
}
