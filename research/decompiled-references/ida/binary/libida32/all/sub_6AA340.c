__int64 __fastcall sub_6AA340(__int64 a1, __int64 *a2, int *a3, char a4)
{
  __int64 *v5; // r13
  __int64 v9; // rdi
  char v10; // bp
  char tinfo_property; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned int v19; // [rsp+4h] [rbp-84h]
  unsigned __int64 tinfo_size; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a3 )
  {
    v5 = &v21;
    v21 = 0;
    if ( a2 )
      v5 = a2;
    if ( (unsigned __int8)get_tinfo(v5, (unsigned int)*a3) )
    {
      tinfo_size = get_tinfo_size(0, *v5, 0);
      v19 = a3[2];
      if ( (a3[4] & 2) == 0 )
        v19 = a3[2] - a3[1];
      if ( get_tinfo_property(*v5, 288) )
      {
        tinfo_property = get_tinfo_property(*v5, 2);
        if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
        {
          v23 = (unsigned __int8)sub_689D10(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), tinfo_size);
          copy_tinfo_t(v5);
          clear_tinfo_t(&v23);
        }
      }
      if ( v19 == tinfo_size )
        goto LABEL_11;
      if ( a4 )
      {
        v9 = *v5;
        v23 = 0;
        v23 = get_tinfo_property(v9, 289);
        v10 = v23 & 0x3F;
        clear_tinfo_t(&v23);
        if ( v10 == 7 )
        {
          v17 = sub_689D10(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), v19);
          if ( v17 )
          {
            v23 = v17;
            copy_tinfo_t(v5);
            clear_tinfo_t(&v23);
          }
          else
          {
            v18 = sub_689D10(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), 1);
            v24 = 0;
            v25 = v19;
            v22 = v18;
            v23 = 0;
            copy_tinfo_t(&v23);
            create_tinfo(v5, 11, 11, &v23);
            clear_tinfo_t(&v23);
            clear_tinfo_t(&v22);
          }
          goto LABEL_11;
        }
        if ( tinfo_size )
        {
          if ( !(v19 % tinfo_size) )
          {
            v24 = 0;
            v23 = 0;
            v25 = v19 / tinfo_size;
            copy_tinfo_t(&v23);
            create_tinfo(a2, 11, 11, &v23);
            clear_tinfo_t(&v23);
            goto LABEL_11;
          }
        }
        else
        {
          v12 = *v5;
          v22 = 0;
          v22 = get_tinfo_property(v12, 289);
          v13 = get_tinfo_size(0, v22, 0);
          v14 = v13;
          if ( v13 )
          {
            v15 = v19 / v13;
            if ( !(v19 % v14) )
            {
              v16 = v22;
              v22 = *v5;
              *v5 = v16;
              if ( v15 != 1 )
              {
                v24 = 0;
                v23 = 0;
                v25 = v15;
                copy_tinfo_t(&v23);
                create_tinfo(a2, 11, 11, &v23);
                clear_tinfo_t(&v23);
              }
              clear_tinfo_t(&v22);
              goto LABEL_11;
            }
          }
          clear_tinfo_t(&v22);
        }
      }
    }
    if ( (unsigned int)guess_tinfo((int)v5, *a3) )
    {
LABEL_11:
      clear_tinfo_t(&v21);
      return 1;
    }
    clear_tinfo_t(&v21);
  }
  return 0;
}

