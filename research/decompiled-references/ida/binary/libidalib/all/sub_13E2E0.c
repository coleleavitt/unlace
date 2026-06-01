__int64 sub_13E2E0()
{
  __int64 item_end; // rax
  int flags; // eax
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 segm_base; // r14
  int v9; // eax
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  int v12; // r9d
  int v13; // ebx
  int v14; // ecx
  int v15; // r14d
  int v16; // ebx
  size_t v17; // rax
  int v18; // r9d
  __int16 v19; // cx
  char *v20; // r15
  char *v21; // rbx
  int v22; // r13d
  char *v23; // rax
  char *v24; // rax
  __int64 v26; // rax
  __int16 v27; // ax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rsi
  char v33; // [rsp+Fh] [rbp-1089h]
  __int16 v34; // [rsp+10h] [rbp-1088h]
  int v35; // [rsp+10h] [rbp-1088h]
  int v36; // [rsp+10h] [rbp-1088h]
  int v37; // [rsp+14h] [rbp-1084h]
  int v38; // [rsp+2Ch] [rbp-106Ch] BYREF
  __int64 v39; // [rsp+30h] [rbp-1068h] BYREF
  __int64 v40; // [rsp+38h] [rbp-1060h] BYREF
  __int64 v41; // [rsp+40h] [rbp-1058h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-1050h] BYREF
  char s[4095]; // [rsp+50h] [rbp-1048h] BYREF
  char v44; // [rsp+104Fh] [rbp-49h] BYREF
  char v45; // [rsp+1050h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+1058h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v33 = sub_161C80(0, &v39, &v40);
  if ( !v33 )
  {
    v39 = xmmword_2528A0;
    if ( (BYTE9(xmmword_2528B0) & 6) != 0 )
      item_end = get_item_end();
    else
      item_end = calc_max_item_end();
    v40 = item_end;
  }
  v41 = -1;
  v42 = 0;
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0xB0000000LL )
    goto LABEL_8;
  v2 = v39;
  v3 = v40 - v39;
  v4 = sub_13B890(
         v39,
         v40 - v39,
         "AUTOHIDE DATABASE\nDirectly convert to alignment directive?",
         -1342176256,
         &v41,
         &v42);
  if ( v4 == -1 )
    return 1;
  if ( v4 )
  {
LABEL_8:
    v5 = v39;
    v6 = v40;
    v7 = (_QWORD *)getseg();
    if ( v7 )
    {
      if ( v5 != *v7 )
      {
        segm_base = get_segm_base();
        v9 = calc_max_align();
        v10 = v5 - segm_base;
        v11 = v6 - segm_base;
        v12 = v9 + 1;
        v13 = v9;
        if ( v9 + 1 <= 63 )
        {
          v14 = 63;
          while ( v11 < (v10 | (unsigned __int64)((1LL << v14) - 1)) + 1 )
          {
            if ( v12 > --v14 )
              return 0;
          }
          v15 = v14;
          LOWORD(v14) = WORD2(xmmword_2450C0);
          if ( SDWORD1(xmmword_2450C0) < v12 || v33 || SDWORD1(xmmword_2450C0) > v15 )
          {
            v36 = v9 + 1;
            ea2node();
            v26 = netnode_supval();
            v12 = v36;
            v14 = -1;
            if ( v26 > 0 )
              v14 = v38 - 1;
            if ( v36 > v14 || v15 < v14 )
            {
              v27 = calc_def_align();
              v12 = v36;
              LOWORD(v14) = v27;
            }
          }
          v37 = v12;
          v16 = v13 + 12;
          v34 = v14;
          itext();
          qstrncpy();
          v17 = strlen(s);
          v18 = v37;
          v19 = v34;
          v20 = &s[v17];
          if ( v15 - v37 > 11 )
            v15 = v16;
          if ( v37 <= v15 )
          {
            v21 = &s[v17];
            v22 = v37;
            while ( 1 )
            {
              v23 = &v21[(int)qsnprintf()];
              if ( v22 == v15 )
              {
                if ( v23 >= &v45 )
                  goto LABEL_49;
                *v23++ = 62;
                if ( v23 >= &v45 )
                  goto LABEL_27;
              }
              else if ( v23 >= &v45 )
              {
                goto LABEL_49;
              }
              v21 = v23 + 1;
              *v23 = 10;
              if ( v23 + 1 >= &v45 )
              {
LABEL_27:
                ++v22;
                v44 = 0;
                v21 = &v44;
                if ( v22 > v15 )
                {
LABEL_28:
                  v19 = v34;
                  v18 = v37;
                  v20 = v21;
                  break;
                }
              }
              else if ( ++v22 > v15 )
              {
                goto LABEL_28;
              }
            }
          }
          if ( v20 >= &v45 )
          {
LABEL_49:
            if ( !under_debugger )
              interr();
            BUG();
          }
          v24 = v20 + 1;
          *v20 = 10;
          if ( v20 + 1 >= &v45 )
          {
            v44 = 0;
            v24 = &v44;
          }
          *v24 = 0;
          v35 = v18;
          LOWORD(v38) = v19 - v18;
          if ( !(unsigned int)sub_8F810((__int64)s, &v38) )
            return 1;
          v28 = v35 + (unsigned __int16)v38;
          getseg();
          v29 = get_segm_base();
          v30 = v39;
          v31 = v29 + (-(1LL << v28) & (v39 + (1LL << v28) - 1 - v29));
          v40 = v31;
          if ( v41 != -1 )
          {
            del_items();
            v31 = v40;
            v30 = v39;
          }
          v32 = v31 - v30;
          if ( (unsigned __int8)create_align() )
          {
            sub_15E150(v30, v32);
            if ( !v33 )
              DWORD1(xmmword_2450C0) = v28;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    sub_15E150(v2, v3);
  }
  return 0;
}

