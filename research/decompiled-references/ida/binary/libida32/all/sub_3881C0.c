__int64 __fastcall sub_3881C0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  void *v7; // r12
  __int128 v8; // kr00_16
  __int64 v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  int v12; // eax
  const char *v13; // rdx
  int v14; // ebp
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rbp
  const char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  signed int v21; // eax
  bool v22; // cc
  __int64 result; // rax
  __int64 v24; // rdi
  char v25; // dl
  __int64 license_manager; // rbp
  unsigned __int8 (__fastcall *v27)(__int64, time_t, void **); // r12
  time_t v28; // rax
  const char *v29; // rdi
  char *v30; // rax
  void *ptr; // [rsp+0h] [rbp-1078h] BYREF
  __int128 v32; // [rsp+8h] [rbp-1070h]
  void *v33; // [rsp+20h] [rbp-1058h] BYREF
  __int128 v34; // [rsp+28h] [rbp-1050h]
  unsigned __int64 v35; // [rsp+1048h] [rbp-30h]

  v1 = *a1;
  v35 = __readfsqword(0x28u);
  *(_DWORD *)(v1 + 152) = 1;
  sub_39D770(a1[1], 0);
  sub_616A20(*a1);
  v33 = nullptr;
  v34 = 0;
  if ( !(unsigned __int8)getinf_flag(45, 16) )
    callui();
  ptr = nullptr;
  v32 = 0;
  sub_3573A0((char **)&ptr);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v7 = ptr;
  v8 = v32;
  v9 = *a1;
  ptr = nullptr;
  v32 = 0;
  v10 = *(void **)(v9 + 128);
  if ( v10 )
  {
    *(_QWORD *)(v9 + 136) = 0;
    qfree(v10);
    v11 = ptr;
    *(_QWORD *)(v9 + 128) = v7;
    *(_OWORD *)(v9 + 136) = v8;
    if ( v11 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v11);
    }
  }
  else
  {
    *(_QWORD *)(v9 + 128) = v7;
    *(_OWORD *)(v9 + 136) = v8;
  }
  v12 = sub_3870F0(a1, (__int64)". PRESS %s TO EXPAND", v3, v4, v5, v6);
  v13 = haystack;
  v14 = v12;
  v15 = *a1;
  if ( *(_QWORD *)(*a1 + 8LL) )
    v13 = *(const char **)v15;
  a1[22] = v13;
  if ( v14 >= 0 )
  {
    if ( v14 != 1 )
      goto LABEL_11;
    if ( *((_BYTE *)a1 + 227) )
      sub_375320((__int64)"%s: database does not exist", v13);
    if ( *((_BYTE *)a1 + 225) )
    {
LABEL_11:
      v16 = *(_DWORD *)(v15 + 152) == 2;
      *((_BYTE *)a1 + 219) = v16;
      if ( !v16 )
        goto LABEL_12;
    }
    else
    {
      *(_DWORD *)(v15 + 152) = 2;
      v16 = *(_DWORD *)(*a1 + 152LL) == 2;
      *((_BYTE *)a1 + 219) = v16;
      if ( !v16 )
        goto LABEL_12;
    }
    license_manager = get_license_manager();
    v27 = *(unsigned __int8 (__fastcall **)(__int64, time_t, void **))(*(_QWORD *)license_manager + 96LL);
    v28 = time(nullptr);
    if ( v27(license_manager, v28, &v33) && (unsigned int)((_DWORD)v33 - 1) > 4 )
      sub_375320((__int64)"Your license has expired,\nyou cannot open new file.");
    if ( *((_BYTE *)a1 + 219) )
    {
      v29 = (const char *)a1[9];
      if ( !v29 || (v30 = strchr(v29, 64)) == nullptr || !v30[1] )
      {
        v17 = qfilesize(a1[22]);
LABEL_13:
        if ( byte_2CA15CB )
          sub_613030();
        v18 = haystack;
        v19 = *((unsigned __int8 *)a1 + 219)
            | (4 * *((unsigned __int8 *)a1 + 225))
            | (2 * (unsigned int)*((unsigned __int8 *)a1 + 230));
        if ( a1[3] )
        {
          v18 = (const char *)a1[2];
          v20 = *a1;
          v21 = sub_57BF90(*a1, v18, v17, v19);
          v22 = v21 <= 0;
          if ( v21 )
          {
LABEL_17:
            if ( v22 )
            {
              if ( (unsigned int)v21 >= 0xFFFFFFFE )
              {
                term_database(v20, v18);
                return 2;
              }
LABEL_50:
              if ( !under_debugger )
                interr(3221);
              BUG();
            }
            if ( v21 != 1 )
              goto LABEL_50;
            if ( *((_BYTE *)a1 + 232) )
            {
LABEL_36:
              if ( !*((_BYTE *)a1 + 219) )
              {
LABEL_37:
                v24 = *a1;
                v25 = sub_3D1740(*a1, v17);
                result = 0;
                if ( !v25 )
                {
                  term_database(v24, v17);
                  return 4;
                }
                return result;
              }
LABEL_29:
              sub_6160D0(*a1, 97, a1[22], 0);
              goto LABEL_37;
            }
LABEL_39:
            if ( !a1[9] )
              callui();
            goto LABEL_36;
          }
        }
        else
        {
          v20 = *a1;
          v21 = sub_57BF90(*a1, haystack, v17, v19);
          v22 = v21 <= 0;
          if ( v21 )
            goto LABEL_17;
        }
        if ( !*((_BYTE *)a1 + 219) )
          callui();
        if ( *((_BYTE *)a1 + 232) )
          goto LABEL_29;
        goto LABEL_39;
      }
    }
LABEL_12:
    v17 = 0;
    goto LABEL_13;
  }
  if ( v14 == -1 )
    callui();
  term_database(a1, ". PRESS %s TO EXPAND");
  return (unsigned int)-v14;
}

