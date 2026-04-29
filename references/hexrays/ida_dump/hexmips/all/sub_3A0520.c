unsigned __int64 __fastcall sub_3A0520(__int64 a1, _QWORD *a2, _QWORD *a3, double a4)
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
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = a2[1];
  if ( (int)v4 != a3[1] )
  {
    if ( !under_debugger )
      sub_37E160(0xC83Du, (__int64)a2, a4);
    BUG();
  }
  if ( (_DWORD)v4 )
  {
    v26 = 0;
    v27 = 0;
    v9 = qvector_reserve(&v26, 0, (int)v4, 4);
    v11 = v27;
    v26 = v9;
    if ( (unsigned __int64)v27 < (int)v4 )
    {
      *(_DWORD *)(v9 + 4 * v27) = 0;
      v12 = v11 + 1;
      if ( v11 + 1 < (unsigned __int64)(int)v4 )
      {
        do
          *(_DWORD *)(v26 + 4 * v12++) = 0;
        while ( (int)v4 != v12 );
      }
    }
    *(_QWORD *)&v27 = (int)v4;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            1177,
            a2,
            &v26,
            1,
            &callui,
            v10);
    if ( v13 != a2[1] )
      sub_68EA0((__int64)"** WARNING ** only %d out of %d decompiler breakpoints have been relocated\n", v13, v4);
    v14 = v26;
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
        v17 = *(_QWORD *)(*a2 + 8 * v15);
        v18 = sub_2B1930(a1, *(_QWORD *)(*a3 + 6 * v15), 0);
        netnode_supdel(v18, (int)v17, 110);
        v15 += 4;
        v14 = v26;
      }
      while ( v15 != v16 );
LABEL_14:
      v19 = 0;
      do
      {
        while ( *(_DWORD *)(v14 + v19) )
        {
          v19 += 4;
          if ( v19 == v16 )
            goto LABEL_18;
        }
        v20 = *a3 + 6 * v19;
        v21 = *(_QWORD *)(v20 + 16);
        v23 = *(_QWORD *)(*a2 + 8 * v19 + 16);
        v24 = *(_QWORD *)(v20 + 8);
        v22 = sub_2B1930(a1, v24, 1);
        v25 = v21 - v24;
        netnode_supset(v22, (int)v23, &v25, 8, 110);
        v19 += 4;
        v14 = v26;
      }
      while ( v19 != v16 );
    }
LABEL_18:
    if ( v14 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v14);
    }
  }
  return v28 - __readfsqword(0x28u);
}
