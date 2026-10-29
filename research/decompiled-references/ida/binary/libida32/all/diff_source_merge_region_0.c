char __fastcall diff_source_merge_region_0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // ecx
  int v4; // r14d
  unsigned __int64 v6; // r15
  __int64 v7; // r11
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  void (*v11)(); // rax
  unsigned __int64 v12; // rax
  int v13; // eax
  void (*v14)(); // rcx
  int v15; // eax
  void (*v16)(); // r11
  void (*v17)(); // rdx
  unsigned __int8 v19; // [rsp+Fh] [rbp-39h]
  char v20; // [rsp+Fh] [rbp-39h]
  char v21; // [rsp+Fh] [rbp-39h]
  char v22; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v23; // [rsp+Fh] [rbp-39h]
  char v24; // [rsp+Fh] [rbp-39h]

  LOBYTE(v3) = 0;
  v4 = 0;
  v6 = a3[1];
  v7 = *(_QWORD *)a1;
  v8 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = v3;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(v7 + 40))(a1, v6, 2);
      v6 = *a3;
      v3 = v19;
      if ( v9 < *a3 || v9 >= a3[1] )
        break;
      if ( !(_BYTE)v4 )
      {
        v6 = v9;
        goto LABEL_15;
      }
      if ( v9 < v8 )
      {
        v6 = v9;
        v4 = 0;
        v16 = *(void (**)())(*(_QWORD *)a1 + 80LL);
        if ( v16 != nullsub_21 )
          goto LABEL_35;
        goto LABEL_15;
      }
      if ( v8 < v9 )
      {
        v7 = *(_QWORD *)a1;
        v6 = v9;
        v17 = *(void (**)())(*(_QWORD *)a1 + 88LL);
        if ( v17 != nullsub_22 )
          goto LABEL_40;
      }
      else
      {
        v6 = v9;
        if ( v19 )
        {
          v7 = *(_QWORD *)a1;
          v4 = v19;
          v17 = *(void (**)())(*(_QWORD *)a1 + 88LL);
          if ( v17 != nullsub_22 )
            goto LABEL_40;
        }
        else
        {
LABEL_8:
          v7 = *(_QWORD *)a1;
          v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL);
          if ( v10 != sub_3DA920 )
            goto LABEL_42;
          v11 = *(void (**)())(v7 + 88);
          if ( v11 != nullsub_22 )
          {
            v24 = v3;
            ((void (__fastcall *)(__int64, unsigned __int64))v11)(a1, v8);
            v7 = *(_QWORD *)a1;
            LOBYTE(v3) = v24;
          }
          v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v7 + 80);
          if ( (char *)v10 != (char *)nullsub_21 )
          {
LABEL_42:
            v22 = v3;
            v10(a1, a2, v8);
            v7 = *(_QWORD *)a1;
            LOBYTE(v3) = v22;
          }
          v4 = 0;
        }
      }
    }
    if ( !(_BYTE)v4 )
    {
      v4 = 1;
      goto LABEL_15;
    }
    if ( v6 < v8 )
    {
      v16 = *(void (**)())(*(_QWORD *)a1 + 80LL);
      if ( v16 != nullsub_21 )
        goto LABEL_35;
      goto LABEL_15;
    }
LABEL_20:
    v13 = v3 ^ 1;
    LOBYTE(v13) = v4 & (v3 ^ 1);
    if ( (_BYTE)v13 )
    {
      v14 = *(void (**)())(*(_QWORD *)a1 + 80LL);
      if ( v14 != nullsub_21 )
      {
        v23 = v13;
        ((void (__fastcall *)(__int64, __int64, unsigned __int64))v14)(a1, a2, v8);
        v13 = v23;
      }
      v4 = v13;
      while ( 2 )
      {
        while ( 1 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, v8, 2);
          v8 = *a3;
          if ( v12 < *a3 || v12 >= a3[1] )
            break;
          if ( v6 >= v12 )
          {
            v8 = v12;
            v3 = 0;
            goto LABEL_20;
          }
          v8 = v12;
          v16 = *(void (**)())(*(_QWORD *)a1 + 80LL);
          if ( v16 != nullsub_21 )
          {
            LOBYTE(v3) = 0;
            goto LABEL_35;
          }
        }
        LOBYTE(v3) = 1;
        if ( v6 < v8 )
        {
          v16 = *(void (**)())(*(_QWORD *)a1 + 80LL);
          if ( v16 == nullsub_21 )
            goto LABEL_31;
          LOBYTE(v3) = 1;
LABEL_35:
          v20 = v3;
          ((void (__fastcall *)(__int64, __int64, unsigned __int64))v16)(a1, a2, v8);
          LOBYTE(v3) = v20;
LABEL_15:
          if ( !(_BYTE)v3 )
            continue;
LABEL_31:
          if ( !under_debugger )
            interr(1858);
LABEL_57:
          BUG();
        }
        break;
      }
    }
    if ( v8 < v6 )
    {
      v17 = *(void (**)())(*(_QWORD *)a1 + 88LL);
      if ( v17 == nullsub_22 )
        goto LABEL_37;
      goto LABEL_41;
    }
    v15 = v4 ^ 1;
    LOBYTE(v15) = v3 & (v4 ^ 1);
    if ( !(_BYTE)v15 )
      break;
    v7 = *(_QWORD *)a1;
    v4 = v15;
    LOBYTE(v3) = v15;
    v17 = *(void (**)())(*(_QWORD *)a1 + 88LL);
    if ( v17 != nullsub_22 )
    {
LABEL_40:
      LOBYTE(v4) = 0;
LABEL_41:
      v21 = v3;
      ((void (__fastcall *)(__int64, unsigned __int64))v17)(a1, v6);
      LOBYTE(v3) = v21;
LABEL_37:
      if ( (_BYTE)v4 )
      {
        if ( !under_debugger )
          interr(1857);
        goto LABEL_57;
      }
      v7 = *(_QWORD *)a1;
      v4 = 1;
    }
  }
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  if ( !(_BYTE)v3 )
  {
    if ( !under_debugger )
      interr(1859);
    goto LABEL_57;
  }
  return v15;
}

