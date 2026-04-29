__int64 __fastcall sub_2719D0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // r12d
  __int64 v5; // rax
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r15
  char tinfo_property; // al
  char v11; // r13
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rdi
  char tinfo_details; // al
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbp
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbp
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  char v32; // [rsp+13h] [rbp-85h]
  int v33; // [rsp+14h] [rbp-84h]
  int tinfo_size; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h] BYREF
  __int128 v36; // [rsp+28h] [rbp-70h]
  __int128 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  int v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v4 = 0;
  v40 = __readfsqword(0x28u);
  v5 = 0;
  if ( a2[1] )
  {
    while ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(*a2 + (v5 << 6) + 56), *a3, 0) )
    {
      v5 = ++v4;
      if ( (unsigned __int64)v4 >= a2[1] )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    tinfo_size = get_tinfo_size(0, *a3, 0);
    if ( !a2[1] )
      goto LABEL_31;
    v33 = -1;
    v7 = 0;
    v4 = -1;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *a2 + (v8 << 6);
        if ( tinfo_size == (unsigned int)get_tinfo_size(0, *(_QWORD *)(v9 + 56), 0) )
        {
          if ( ((tinfo_property = get_tinfo_property(*a3, 2), (tinfo_property & 0xFu) <= 0xA)
             || (tinfo_property & 0x3F) == 0x2D)
            && ((v14 = get_tinfo_property(*(_QWORD *)(v9 + 56), 2), (v14 & 0xFu) <= 0xA) || (v14 & 0x3F) == 0x2D) )
          {
            if ( v33 == -1 )
              v33 = v7;
            v32 = 1;
          }
          else
          {
            v32 = 0;
          }
          v11 = get_tinfo_property(*(_QWORD *)(v9 + 56), 2);
          if ( ((get_tinfo_property(*a3, 2) & 0xF) == 9) == ((v11 & 0xF) == 9) )
          {
            v12 = get_tinfo_property(*a3, 2);
            if ( (v12 & 0xE) == 0 && (v12 & 0x30) != 0 )
            {
              v13 = get_tinfo_property(*(_QWORD *)(v9 + 56), 2);
              if ( (v13 & 0xFu) <= 0xA || (v13 & 0x3F) == 0x2D )
                return (unsigned int)v7;
            }
            if ( (unsigned __int8)sub_32A510(*a1, v9 + 56, a3) )
              return (unsigned int)v7;
            if ( v4 == -1 )
              break;
          }
        }
        v8 = ++v7;
        if ( (unsigned __int64)v7 >= a2[1] )
          goto LABEL_29;
      }
      if ( v32 )
        v4 = v7;
      v8 = ++v7;
    }
    while ( (unsigned __int64)v7 < a2[1] );
LABEL_29:
    if ( v4 == -1 )
    {
      v4 = v33;
      if ( v33 == -1 )
      {
LABEL_31:
        if ( (get_tinfo_property(*a3, 2) & 0x2F) != 0xD )
          return (unsigned int)-1;
        v15 = *a3;
        v39 = 1;
        v35 = 0;
        v38 = 0;
        v36 = 0;
        v37 = 0;
        tinfo_details = get_tinfo_details(v15, 13, &v35);
        v17 = v35;
        if ( !tinfo_details )
          goto LABEL_49;
        if ( HIBYTE(v39) )
        {
          if ( (_QWORD)v36 )
          {
            v18 = 0;
            goto LABEL_39;
          }
          if ( !v35 )
            return (unsigned int)-1;
          goto LABEL_57;
        }
        if ( (_QWORD)v36 != 1 || (v18 = 0, tinfo_size != (unsigned __int64)v37 >> 3) )
        {
LABEL_49:
          if ( v17 )
          {
            v26 = v36;
            if ( (_QWORD)v36 )
            {
              v27 = 0;
              do
              {
                v28 = (_QWORD *)(v17 + 144 * v27);
                clear_tinfo_t(v28 + 8);
                v29 = v28[5];
                if ( v29 )
                {
                  v28[6] = 0;
                  qfree(v29);
                }
                v30 = v28[2];
                if ( v30 )
                {
                  v28[3] = 0;
                  qfree(v30);
                }
                ++v27;
                v17 = v35;
              }
              while ( v26 != v27 );
            }
LABEL_57:
            *(_QWORD *)&v36 = 0;
            qfree(v17);
          }
          return (unsigned int)-1;
        }
LABEL_39:
        while ( 1 )
        {
          v19 = v17 + 144 * v18;
          if ( tinfo_size == (unsigned int)(*(_QWORD *)(v19 + 8) >> 3) )
          {
            v4 = sub_2719D0(a1, a2, v19 + 64);
            v20 = v35;
            v17 = v35;
            if ( v4 != -1 )
              break;
          }
          if ( HIBYTE(v39) )
          {
            if ( ++v18 < (unsigned __int64)v36 )
              continue;
          }
          goto LABEL_49;
        }
        if ( v35 )
        {
          v21 = v36;
          v22 = 0;
          if ( (_QWORD)v36 )
          {
            do
            {
              v23 = (_QWORD *)(v20 + 144 * v22);
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
              v20 = v35;
            }
            while ( v21 != v22 );
          }
          *(_QWORD *)&v36 = 0;
          qfree(v20);
        }
      }
    }
  }
  return (unsigned int)v4;
}
