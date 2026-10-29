__int64 sub_13DBE0()
{
  int item_end; // eax
  int flags; // eax
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebp
  int v5; // r12d
  _DWORD *v6; // rax
  int segm_base; // r14d
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // r12d
  int v11; // r9d
  int v12; // ebx
  int v13; // ecx
  int v14; // r14d
  int v15; // ebx
  size_t v16; // rax
  int v17; // r9d
  __int16 v18; // cx
  char *v19; // r15
  char *v20; // rbx
  int v21; // r13d
  char *v22; // rax
  char *v23; // rax
  __int64 v25; // rax
  __int16 v26; // ax
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rdi
  char v30; // [rsp+Fh] [rbp-1079h]
  __int16 v31; // [rsp+10h] [rbp-1078h]
  int v32; // [rsp+10h] [rbp-1078h]
  int v33; // [rsp+10h] [rbp-1078h]
  int v34; // [rsp+14h] [rbp-1074h]
  unsigned int v35; // [rsp+28h] [rbp-1060h] BYREF
  int v36; // [rsp+2Ch] [rbp-105Ch] BYREF
  int v37; // [rsp+30h] [rbp-1058h] BYREF
  int v38; // [rsp+34h] [rbp-1054h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1050h] BYREF
  char s[4095]; // [rsp+40h] [rbp-1048h] BYREF
  char v41; // [rsp+103Fh] [rbp-49h] BYREF
  char v42; // [rsp+1040h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+1048h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v30 = sub_161360(0, &v35, &v36);
  if ( !v30 )
  {
    v35 = qword_251700;
    if ( (qword_251710 & 0x600) != 0 )
      item_end = get_item_end();
    else
      item_end = calc_max_item_end();
    v36 = item_end;
  }
  v37 = -1;
  v39 = 0;
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0xB0000000LL )
    goto LABEL_8;
  v2 = v35;
  v3 = sub_13B290(
         v35,
         v36 - v35,
         "AUTOHIDE DATABASE\nDirectly convert to alignment directive?",
         -1342176256,
         &v37,
         &v39);
  if ( v3 == -1 )
    return 1;
  if ( v3 )
  {
LABEL_8:
    v4 = v35;
    v5 = v36;
    v6 = (_DWORD *)getseg();
    if ( v6 )
    {
      if ( v4 != *v6 )
      {
        segm_base = get_segm_base();
        v8 = calc_max_align();
        v9 = v4 - segm_base;
        v10 = v5 - segm_base;
        v11 = v8 + 1;
        v12 = v8;
        if ( v8 + 1 <= 31 )
        {
          v13 = 31;
          while ( v10 < (v9 | (unsigned int)((1 << v13) - 1)) + 1 )
          {
            if ( v11 > --v13 )
              return 0;
          }
          v14 = v13;
          LOWORD(v13) = WORD6(xmmword_244090);
          if ( SHIDWORD(xmmword_244090) < v11 || v30 || SHIDWORD(xmmword_244090) > v14 )
          {
            v33 = v8 + 1;
            ea2node();
            v25 = netnode_supval();
            v11 = v33;
            v13 = -1;
            if ( v25 > 0 )
              v13 = v38 - 1;
            if ( v33 > v13 || v14 < v13 )
            {
              v26 = calc_def_align();
              v11 = v33;
              LOWORD(v13) = v26;
            }
          }
          v34 = v11;
          v15 = v12 + 12;
          v31 = v13;
          itext();
          qstrncpy();
          v16 = strlen(s);
          v17 = v34;
          v18 = v31;
          v19 = &s[v16];
          if ( v14 - v34 > 11 )
            v14 = v15;
          if ( v34 <= v14 )
          {
            v20 = &s[v16];
            v21 = v34;
            while ( 1 )
            {
              v22 = &v20[(int)qsnprintf()];
              if ( v21 == v14 )
              {
                if ( v22 >= &v42 )
                  goto LABEL_49;
                *v22++ = 62;
                if ( v22 >= &v42 )
                  goto LABEL_27;
              }
              else if ( v22 >= &v42 )
              {
                goto LABEL_49;
              }
              v20 = v22 + 1;
              *v22 = 10;
              if ( v22 + 1 >= &v42 )
              {
LABEL_27:
                ++v21;
                v41 = 0;
                v20 = &v41;
                if ( v21 > v14 )
                {
LABEL_28:
                  v18 = v31;
                  v17 = v34;
                  v19 = v20;
                  break;
                }
              }
              else if ( ++v21 > v14 )
              {
                goto LABEL_28;
              }
            }
          }
          if ( v19 >= &v42 )
          {
LABEL_49:
            if ( !under_debugger )
              interr();
            BUG();
          }
          v23 = v19 + 1;
          *v19 = 10;
          if ( v19 + 1 >= &v42 )
          {
            v41 = 0;
            v23 = &v41;
          }
          *v23 = 0;
          v32 = v17;
          LOWORD(v38) = v18 - v17;
          if ( !(unsigned int)sub_8F730((__int64)s, &v38) )
            return 1;
          v27 = v32 + (unsigned __int16)v38;
          getseg();
          v28 = get_segm_base();
          v29 = v35;
          v36 = v28 + (-(1 << v27) & (v35 + (1 << v27) - 1 - v28));
          if ( v37 != -1 )
          {
            del_items();
            v29 = v35;
          }
          if ( (unsigned __int8)create_align() )
          {
            sub_15D870(v29);
            if ( !v30 )
              HIDWORD(xmmword_244090) = v27;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    sub_15D870(v2);
  }
  return 0;
}

