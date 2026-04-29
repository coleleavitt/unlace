__int64 __fastcall sub_B80A0(int a1, int a2, __int64 a3, int a4, __int64 *a5, int a6)
{
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // r15
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rdi
  __int64 v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v22; // [rsp+8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+10h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  v22 = 0;
  sub_3349B0((unsigned int)&v22, a1, a2, 0, 3, a6);
  v8 = 0;
  v9 = 0;
  if ( !(_QWORD)v23 )
  {
    v15 = v22;
    v14 = 0;
    if ( !v22 )
      return v14;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v10 = (_QWORD *)(v22 + (v9 << 6));
    v11 = *v10;
    v12 = v10;
    if ( *v10 )
    {
      if ( !under_debugger )
        sub_383060(50956);
      BUG();
    }
    if ( (get_tinfo_property() & 0xF) != 0xB && (a3 && (unsigned __int8)compare_tinfo() || a4 && a4 == get_tinfo_size()) )
      break;
    v9 = ++v8;
    if ( v8 >= (unsigned __int64)v23 )
    {
      v14 = 0;
      goto LABEL_14;
    }
  }
  if ( a5 )
  {
    v13 = *a5;
    *a5 = v12[7];
    v12[7] = v13;
  }
  v14 = 1;
LABEL_14:
  v15 = v22;
  if ( v22 )
  {
    v16 = v23;
    if ( (_QWORD)v23 )
    {
      do
      {
        v17 = (_QWORD *)(v15 + (v11 << 6));
        clear_tinfo_t();
        v18 = v17[4];
        if ( v18 )
        {
          v17[5] = 0;
          qfree(v18);
        }
        v19 = v17[1];
        if ( v19 )
        {
          v17[2] = 0;
          qfree(v19);
        }
        ++v11;
        v15 = v22;
      }
      while ( v16 != v11 );
    }
LABEL_21:
    *(_QWORD *)&v23 = 0;
    qfree(v15);
  }
  return v14;
}
