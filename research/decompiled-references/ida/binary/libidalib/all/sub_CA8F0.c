__int64 __fastcall sub_CA8F0(__int64 a1, double a2, double a3)
{
  const char *v4; // rsi
  unsigned int *v5; // r13
  int *v6; // rax
  int *v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rdi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 i; // rbp
  __int64 next_seg; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  __int64 v48; // [rsp+10h] [rbp-88h]
  unsigned int *v49; // [rsp+18h] [rbp-80h]
  __int64 v50; // [rsp+18h] [rbp-80h]

  if ( *(_QWORD *)(a1 + 56) )
  {
    v4 = "AUTOHIDE DATABASE\n"
         "HIDECANCEL\n"
         "This command takes a snapshot of the selected module and analyzes it.\n"
         "If you restart the debugging session, the module may be loaded at a\n"
         "different address and all the stored information could become incorrect.\n"
         "\n"
         "Do you really wish to continue?";
    HIDWORD(v47) = sub_92580(
                     0,
                     (__int64)"AUTOHIDE DATABASE\n"
                              "HIDECANCEL\n"
                              "This command takes a snapshot of the selected module and analyzes it.\n"
                              "If you restart the debugging session, the module may be loaded at a\n"
                              "different address and all the stored information could become incorrect.\n"
                              "\n"
                              "Do you really wish to continue?");
    if ( HIDWORD(v47) == 1 )
    {
      v5 = *(unsigned int **)(a1 + 48);
      v49 = &v5[2 * *(_QWORD *)(a1 + 56)];
      if ( v49 == v5 )
        return HIDWORD(v47);
      while ( 1 )
      {
        v6 = sub_B8AE0(*v5);
        v7 = v6;
        if ( v6 )
          break;
LABEL_7:
        v5 += 2;
        if ( v49 == v5 )
          return HIDWORD(v47);
      }
      v8 = *((_QWORD *)v6 + 4);
      v9 = *((_QWORD *)v6 + 3);
      if ( v8 )
      {
        v10 = v9 + v8;
      }
      else
      {
        v26 = getseg();
        v27 = v26;
        if ( v26 )
        {
          a3 = 0.0;
          v4 = (const char *)v26;
          get_segm_name();
          for ( i = *(_QWORD *)(v27 + 8); ; i = *(_QWORD *)(v30 + 8) )
          {
            next_seg = get_next_seg();
            v30 = next_seg;
            if ( !next_seg )
              break;
            a2 = 0.0;
            v4 = (const char *)next_seg;
            if ( get_segm_name() <= 0 )
              break;
            v4 = s1;
          }
          v10 = v9 - *((_QWORD *)v7 + 3) + i;
          v13 = getseg();
          if ( v13 )
          {
LABEL_12:
            callui(45, v4, v11, v12, v14, v15, v43, v45, v47, v49);
            v16 = "Copying module memory to database...";
            sub_10E0D0((unsigned int)"Copying module memory to database...", (_DWORD)v4, v17, v18, v19, v20);
            goto LABEL_14;
          }
          goto LABEL_25;
        }
        v10 = v9;
      }
      v13 = getseg();
      if ( v13 )
        goto LABEL_12;
LABEL_25:
      v13 = get_next_seg();
      callui(45, v4, v31, v32, v33, v34, v43, v45, v47, v49);
      v16 = "Copying module memory to database...";
      sub_10E0D0((unsigned int)"Copying module memory to database...", (_DWORD)v4, v35, v36, v37, v38);
      if ( v13 )
      {
LABEL_14:
        while ( v10 >= *(_QWORD *)(v13 + 8) )
        {
          if ( (*(_WORD *)(v13 + 44) & 0x18) == 8 )
          {
            lock_segm();
            v21 = change_segment_status();
            if ( v21 )
            {
              LODWORD(v46) = v21;
              sub_10DB30(v13);
              sub_92200((__int64)"Could not modify status of the segment %a..%a: error %d", a2, a3, *(_QWORD *)v13);
              v4 = nullptr;
              lock_segm();
              sub_10DB30(v13);
              callui(46, 0, v39, v40, v41, v42, v44, v46, v48, v50);
              goto LABEL_7;
            }
            *(_WORD *)(v13 + 44) |= 0x10u;
            update_segm();
            auto_mark_range();
            auto_mark_range();
            v4 = nullptr;
            lock_segm();
            v16 = *(const char **)v13;
            v13 = get_next_seg();
            if ( !v13 )
              break;
          }
          else
          {
            v16 = *(const char **)v13;
            v13 = get_next_seg();
            if ( !v13 )
              break;
          }
        }
      }
      sub_10DB30(v16);
      callui(46, v4, v22, v23, v24, v25, v44, v46, v48, v50);
      goto LABEL_7;
    }
  }
  HIDWORD(v47) = 0;
  return HIDWORD(v47);
}

