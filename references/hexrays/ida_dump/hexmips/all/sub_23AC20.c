__int64 __fastcall sub_23AC20(__int64 *a1, unsigned int a2, char a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  char tinfo_property; // al
  char v6; // cl
  __int64 v7; // rdi
  unsigned int tinfo_details; // r12d
  __int64 v9; // r12
  int v10; // r13d
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v21; // rbx
  __int64 v22; // r13
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  char v27; // [rsp+0h] [rbp-98h]
  __int64 v29; // [rsp+18h] [rbp-80h] BYREF
  __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  __int128 v31; // [rsp+28h] [rbp-70h]
  __int128 v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v3 = a1;
  v4 = *a1;
  v35 = __readfsqword(0x28u);
  v29 = 0;
  while ( 1 )
  {
    tinfo_property = get_tinfo_property(v4, 2);
    if ( (tinfo_property & 0xFu) <= 0xA
      || (tinfo_property & 0x3F) == 0x2D
      || (int)a2 >= (unsigned __int64)get_tinfo_size(0, *v3, 0) )
    {
      break;
    }
    v6 = get_tinfo_property(*v3, 2);
    if ( (v6 & 0xF) == 0xB )
    {
      v26 = *v3;
      v30 = 0;
      v30 = get_tinfo_property(v26, 11);
      copy_tinfo_t(&v29, &v30);
      v3 = &v29;
      clear_tinfo_t(&v30);
      v4 = v29;
    }
    else
    {
      if ( (v6 & 0x2F) != 0xD )
        goto LABEL_29;
      v7 = *v3;
      v27 = v6;
      v34 = 1;
      v30 = 0;
      v33 = 0;
      v31 = 0;
      v32 = 0;
      tinfo_details = get_tinfo_details(v7, 13, &v30);
      if ( !(_BYTE)tinfo_details )
        goto LABEL_16;
      v9 = v31;
      if ( !(_QWORD)v31 )
      {
        tinfo_details = 0;
LABEL_16:
        v14 = v30;
        if ( v30 )
        {
          v15 = v31;
          if ( (_QWORD)v31 )
          {
            v16 = 0;
            do
            {
              v17 = (_QWORD *)(v14 + 144 * v16);
              clear_tinfo_t(v17 + 8);
              v18 = v17[5];
              if ( v18 )
              {
                v17[6] = 0;
                qfree(v18);
              }
              v19 = v17[2];
              if ( v19 )
              {
                v17[3] = 0;
                qfree(v19);
              }
              ++v16;
              v14 = v30;
            }
            while ( v15 != v16 );
          }
          *(_QWORD *)&v31 = 0;
          qfree(v14);
        }
        goto LABEL_25;
      }
      if ( (v27 & 0x3F) != 0xD )
      {
        v10 = 0;
        v11 = 0;
        v12 = 0;
        while ( 1 )
        {
          v13 = 144 * v12;
          tinfo_details = sub_23AC20(144 * v12 + v30 + 64, a2, 1);
          if ( (_BYTE)tinfo_details )
            goto LABEL_16;
          if ( (_BYTE)v11 )
          {
            v12 = ++v10;
            if ( v10 >= (unsigned __int64)v31 )
              goto LABEL_15;
          }
          else
          {
            ++v10;
            v11 = sub_23AC20(v30 + v13 + 64, a2, 0) ^ 1;
            v12 = v10;
            if ( v10 >= (unsigned __int64)v31 )
            {
LABEL_15:
              tinfo_details = v11 ^ 1;
              goto LABEL_16;
            }
          }
        }
      }
      v21 = v30;
      v4 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 64) = v29;
      v29 = v4;
      if ( v21 )
      {
        v22 = 0;
        do
        {
          v23 = (_QWORD *)(144 * v22 + v21);
          clear_tinfo_t(v23 + 8);
          v24 = v23[5];
          if ( v24 )
          {
            v23[6] = 0;
            qfree(v24);
          }
          v25 = v23[2];
          if ( v25 )
          {
            v23[3] = 0;
            qfree(v25);
          }
          ++v22;
          v21 = v30;
        }
        while ( v9 != v22 );
        *(_QWORD *)&v31 = 0;
        qfree(v30);
        v4 = v29;
      }
      v3 = &v29;
    }
  }
  if ( (get_tinfo_property(*v3, 2) & 0xF) != 9 )
  {
LABEL_29:
    tinfo_details = 0;
    goto LABEL_25;
  }
  tinfo_details = 1;
  if ( a3 )
    LOBYTE(tinfo_details) = a2 == get_tinfo_size(0, *v3, 0);
LABEL_25:
  clear_tinfo_t(&v29);
  return tinfo_details;
}
