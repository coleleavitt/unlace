__int64 __fastcall sub_66CD40(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r12
  char v6; // bh
  unsigned int v7; // edx
  char **v8; // r13
  unsigned __int64 v9; // rcx
  unsigned int v10; // r14d
  char *v11; // rdi
  char *v12; // rdi
  char *v13; // r12
  char *i; // rbp
  char *v15; // rbx
  void *v16; // rdi
  void *v17; // rdi
  unsigned __int64 *v19; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+8h] [rbp-80h]
  _QWORD v21[2]; // [rsp+10h] [rbp-78h] BYREF
  __int128 v22; // [rsp+20h] [rbp-68h]
  unsigned int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+34h] [rbp-54h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a1 )
  {
    v5 = qword_2CCB598;
    v6 = BYTE1(a4);
    v7 = a4 & 0x8006DBEA | 0x14;
    v21[1] = 0;
    if ( (a4 & 4) != 0 )
      v7 = a4 & 0x8006DBEA | 4;
    v21[0] = qword_2CCB598;
    v24 = 0;
    v23 = v7;
    v22 = 0;
    ptr = nullptr;
    sub_660D20((__int64 *)&v19, (__int64)a2, (v7 & 0x40000) != 0);
    v8 = (char **)ptr;
    if ( v19 != a2 )
    {
      v9 = *a2;
      if ( a3 >= *a2 && a3 < v9 + 80 * a2[1] )
        a3 = *v19 + a3 - v9;
    }
    if ( (unsigned __int8)sub_666F20((__int64)v21, a1, (__int64)v19, a3) )
    {
      v10 = 0;
    }
    else
    {
      if ( (v6 & 4) == 0 )
        sub_4CFA10(v5, (__int64)a1);
      v10 = 1;
    }
    if ( v8 )
    {
      v11 = v8[8];
      if ( v11 )
      {
        v8[9] = nullptr;
        qfree(v11);
      }
      cleanup_argloc(v8 + 5);
      clear_tinfo_t(v8 + 4);
      v12 = *v8;
      if ( *v8 )
      {
        v13 = v8[1];
        if ( v13 )
        {
          for ( i = nullptr; i != v13; ++i )
          {
            v15 = &v12[80 * (_QWORD)i];
            clear_tinfo_t(v15 + 64);
            v16 = *((void **)v15 + 5);
            if ( v16 )
            {
              *((_QWORD *)v15 + 6) = 0;
              qfree(v16);
            }
            v17 = *((void **)v15 + 2);
            if ( v17 )
            {
              *((_QWORD *)v15 + 3) = 0;
              qfree(v17);
            }
            cleanup_argloc(v15);
            v12 = *v8;
          }
        }
        v8[1] = nullptr;
        qfree(v12);
      }
      qfree(v8);
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
