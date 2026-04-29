__int64 __fastcall sub_212960(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  char v7; // al
  const void *v9; // r14
  size_t v10; // rax
  size_t v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  void *v19; // rdi
  size_t v20; // r15
  __int64 v21; // rax
  __int128 v22; // [rsp+10h] [rbp-C8h]
  __int64 v23; // [rsp+20h] [rbp-B8h]
  int v24; // [rsp+28h] [rbp-B0h]
  __int16 v25; // [rsp+2Ch] [rbp-ACh]
  __int64 v26; // [rsp+30h] [rbp-A8h]
  __int128 v27; // [rsp+38h] [rbp-A0h]
  __int64 v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  __int64 v30; // [rsp+58h] [rbp-80h]
  __int128 v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+70h] [rbp-68h]
  __int128 v33; // [rsp+78h] [rbp-60h]
  char v34; // [rsp+88h] [rbp-50h]
  unsigned __int64 v35; // [rsp+98h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  if ( *(_QWORD *)(v4 + 32) <= 1u )
    return 0;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = *(_BYTE *)(v6 + 80);
  if ( v7 == 3 )
  {
    v9 = *(const void **)(v6 + 88);
    if ( !v9 || (v10 = strlen(*(const char **)(v6 + 88)), (v11 = v10) == 0) )
    {
      a2[1] = 0;
      return 0;
    }
    v19 = (void *)*a2;
    v20 = v10 + 1;
    if ( a2[2] < v10 + 1 )
    {
      v21 = qvector_reserve((__int64)a2, *a2, v10 + 1, 1);
      *a2 = v21;
      v19 = (void *)v21;
    }
    a2[1] = v20;
    memmove(v19, v9, v11);
    *(_BYTE *)(*a2 + v11) = 0;
  }
  else if ( v7 == 10 )
  {
    v12 = *(_QWORD *)(v6 + 88);
    if ( *(_BYTE *)v12 == 6 )
      sub_261BF0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), a2, *(_QWORD *)(v12 + 8), 0, 0, 5);
  }
  if ( (unsigned __int64)a2[1] > 1 )
  {
    if ( !(unsigned __int8)sub_32AC20(a3, *a2) )
      return 1;
    v26 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 16;
    v27 = 0;
    v31 = 0;
    v33 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v22 = 0;
      copy_tinfo_t();
      v23 = 0;
      copy_tinfo_t();
      v24 = 0;
      v25 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v13 = v26;
      if ( v26 )
      {
        v14 = v27;
        if ( (_QWORD)v27 )
        {
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v13 + 80 * v15);
            clear_tinfo_t();
            v17 = v16[5];
            if ( v17 )
            {
              v16[6] = 0;
              qfree(v17);
            }
            v18 = v16[2];
            if ( v18 )
            {
              v16[3] = 0;
              qfree(v18);
            }
            ++v15;
            cleanup_argloc();
            v13 = v26;
          }
          while ( v14 != v15 );
        }
        *(_QWORD *)&v27 = 0;
        qfree(v13);
      }
      return 1;
    }
    cleanup_argloc();
    clear_tinfo_t();
  }
  return 0;
}
