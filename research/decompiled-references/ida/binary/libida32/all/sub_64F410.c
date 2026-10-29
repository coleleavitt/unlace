__int64 __fastcall sub_64F410(char *a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  char v8; // bh
  int v9; // edx
  char **v10; // r13
  unsigned __int64 v11; // rcx
  unsigned int v12; // r14d
  char *v13; // rdi
  char *v14; // rdi
  char *v15; // r12
  char *i; // rbp
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  unsigned __int64 *v21; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+8h] [rbp-80h]
  _QWORD v23[2]; // [rsp+10h] [rbp-78h] BYREF
  __int128 v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+34h] [rbp-54h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a1 )
  {
    v7 = qword_2CA1698;
    v8 = BYTE1(a4);
    v9 = a4 & 0x8006DBEA | 0x14;
    v23[1] = 0;
    if ( (a4 & 4) != 0 )
      v9 = a4 & 0x8006DBEA | 4;
    v23[0] = qword_2CA1698;
    v26 = 0;
    v25 = v9;
    v24 = 0;
    ptr = nullptr;
    sub_643440((__int64 *)&v21, (__int64)a2, (v9 & 0x40000) != 0, a4, a5, a6);
    v10 = (char **)ptr;
    if ( v21 != a2 )
    {
      v11 = *a2;
      if ( a3 >= *a2 && a3 < v11 + 80 * a2[1] )
        a3 = *v21 + a3 - v11;
    }
    if ( (unsigned __int8)sub_649620((__int64)v23, a1, (__int64)v21, a3) )
    {
      v12 = 0;
    }
    else
    {
      if ( (v8 & 4) == 0 )
        sub_4B8BE0(v7, (__int64)a1);
      v12 = 1;
    }
    if ( v10 )
    {
      v13 = v10[8];
      if ( v13 )
      {
        v10[9] = nullptr;
        qfree(v13);
      }
      cleanup_argloc(v10 + 5);
      clear_tinfo_t(v10 + 4);
      v14 = *v10;
      if ( *v10 )
      {
        v15 = v10[1];
        if ( v15 )
        {
          for ( i = nullptr; i != v15; ++i )
          {
            v17 = &v14[80 * (_QWORD)i];
            clear_tinfo_t(v17 + 64);
            v18 = *((void **)v17 + 5);
            if ( v18 )
            {
              *((_QWORD *)v17 + 6) = 0;
              qfree(v18);
            }
            v19 = *((void **)v17 + 2);
            if ( v19 )
            {
              *((_QWORD *)v17 + 3) = 0;
              qfree(v19);
            }
            cleanup_argloc(v17);
            v14 = *v10;
          }
        }
        v10[1] = nullptr;
        qfree(v14);
      }
      qfree(v10);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}

