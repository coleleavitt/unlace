__int64 __fastcall sub_239100(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v10; // rsi
  unsigned int *v11; // r13
  int *v12; // rax
  int *v13; // r12
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  int v17; // edx
  int v18; // ecx
  __int64 *next_seg; // rbx
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 segm_name; // rax
  char *v34; // r14
  char *v35; // rdi
  unsigned __int64 v36; // r14
  __int64 v37; // rbx
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  char v50; // [rsp+0h] [rbp-98h]
  unsigned __int64 v51; // [rsp+8h] [rbp-90h]
  unsigned int v52; // [rsp+8h] [rbp-90h]
  unsigned int v53; // [rsp+14h] [rbp-84h]
  unsigned int *v54; // [rsp+18h] [rbp-80h]
  char *s1; // [rsp+20h] [rbp-78h] BYREF
  __int128 v56; // [rsp+28h] [rbp-70h]
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v58; // [rsp+48h] [rbp-50h]
  unsigned __int64 v59; // [rsp+58h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v10 = "AUTOHIDE DATABASE\n"
          "HIDECANCEL\n"
          "This command takes a snapshot of the selected module and analyzes it.\n"
          "If you restart the debugging session, the module may be loaded at a\n"
          "different address and all the stored information could become incorrect.\n"
          "\n"
          "Do you really wish to continue?";
    v53 = sub_1698A0(
            0,
            (int)"AUTOHIDE DATABASE\n"
                 "HIDECANCEL\n"
                 "This command takes a snapshot of the selected module and analyzes it.\n"
                 "If you restart the debugging session, the module may be loaded at a\n"
                 "different address and all the stored information could become incorrect.\n"
                 "\n"
                 "Do you really wish to continue?");
    if ( v53 == 1 )
    {
      v11 = *(unsigned int **)(a1 + 48);
      v54 = &v11[2 * *(_QWORD *)(a1 + 56)];
      if ( v54 == v11 )
        return v53;
      while ( 1 )
      {
        v12 = sub_227EE0(*v11);
        v13 = v12;
        if ( v12 )
          break;
LABEL_7:
        v11 += 2;
        if ( v54 == v11 )
          return v53;
      }
      v14 = *((_QWORD *)v12 + 4);
      v15 = *((_QWORD *)v12 + 3);
      if ( v14 )
      {
        v16 = v15 + v14;
        goto LABEL_11;
      }
      v27 = getseg(*((_QWORD *)v12 + 3));
      v28 = v27;
      if ( !v27 )
      {
        v16 = v15;
        v15 = *((_QWORD *)v13 + 3);
LABEL_11:
        next_seg = (__int64 *)getseg(v15);
        if ( next_seg )
          goto LABEL_12;
LABEL_32:
        next_seg = (__int64 *)get_next_seg(*((_QWORD *)v13 + 3));
        callui(45, (_DWORD)v10, v38, v39, v40, v41);
        sub_1C76F0((int)"Copying module memory to database...");
        if ( next_seg )
        {
LABEL_14:
          while ( v16 >= next_seg[1] )
          {
            if ( (*((_WORD *)next_seg + 22) & 0x18) == 8 )
            {
              lock_segm(next_seg, 1);
              v22 = change_segment_status(next_seg, 0);
              if ( v22 )
              {
                v52 = v22;
                sub_1C78D0();
                sub_169630(
                  (int)"Could not modify status of the segment %a..%a: error %d",
                  *next_seg,
                  next_seg[1],
                  v52,
                  v42,
                  v43,
                  a2,
                  a3,
                  a4,
                  a5,
                  v44,
                  v45,
                  a8,
                  a9,
                  v50);
                LODWORD(v10) = 0;
                lock_segm(next_seg, 0);
                sub_1C78D0();
                callui(46, 0, v46, v47, v48, v49);
                goto LABEL_7;
              }
              *((_WORD *)next_seg + 22) |= 0x10u;
              update_segm(next_seg);
              auto_mark_range(*next_seg, next_seg[1], 40);
              auto_mark_range(*next_seg, next_seg[1], 200);
              LODWORD(v10) = 0;
              lock_segm(next_seg, 0);
              next_seg = (__int64 *)get_next_seg(*next_seg);
              if ( !next_seg )
                break;
            }
            else
            {
              next_seg = (__int64 *)get_next_seg(*next_seg);
              if ( !next_seg )
                break;
            }
          }
        }
        sub_1C78D0();
        callui(46, (_DWORD)v10, v23, v24, v25, v26);
        goto LABEL_7;
      }
      a3 = 0;
      v10 = (char *)v27;
      s1 = nullptr;
      v56 = 0;
      get_segm_name(&s1, v27, 0);
      v29 = *(_QWORD *)(v28 + 8);
      v30 = v15;
LABEL_21:
      v31 = get_next_seg(v30);
      v32 = (__int64 *)v31;
      if ( !v31 )
      {
LABEL_29:
        v36 = v15 - *((_QWORD *)v13 + 3);
        v37 = *((_QWORD *)v13 + 3);
        if ( s1 )
        {
          *(_QWORD *)&v56 = 0;
          *(double *)a2.m128_u64 = qfree(s1, v10);
          v37 = *((_QWORD *)v13 + 3);
        }
        v16 = v36 + v29;
        next_seg = (__int64 *)getseg(v37);
        if ( next_seg )
        {
LABEL_12:
          callui(45, (_DWORD)v10, v17, v18, v20, v21);
          sub_1C76F0((int)"Copying module memory to database...");
          goto LABEL_14;
        }
        goto LABEL_32;
      }
      while ( 1 )
      {
        a2 = 0;
        v10 = (char *)v31;
        s2 = nullptr;
        v58 = 0;
        segm_name = get_segm_name(&s2, v31, 0);
        v34 = s2;
        if ( segm_name <= 0 )
        {
LABEL_36:
          if ( v34 )
          {
            *(_QWORD *)&v58 = 0;
            *(double *)a2.m128_u64 = qfree(v34, v10);
          }
          goto LABEL_29;
        }
        if ( (_QWORD)v58 )
        {
          v10 = s2;
          v35 = (char *)&::s1;
          if ( !(_QWORD)v56 )
            goto LABEL_26;
        }
        else
        {
          v10 = (char *)&::s1;
          if ( !(_QWORD)v56 )
            goto LABEL_27;
        }
        v35 = s1;
LABEL_26:
        if ( strcmp(v35, v10) )
          goto LABEL_36;
LABEL_27:
        v30 = *v32;
        v29 = v32[1];
        if ( !v34 )
          goto LABEL_21;
        v51 = *v32;
        *(_QWORD *)&v58 = 0;
        *(double *)a2.m128_u64 = qfree(v34, v10);
        v31 = get_next_seg(v51);
        v32 = (__int64 *)v31;
        if ( !v31 )
          goto LABEL_29;
      }
    }
  }
  return 0;
}
