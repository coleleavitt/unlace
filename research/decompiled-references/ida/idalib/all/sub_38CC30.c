__int64 __fastcall sub_38CC30(_QWORD *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  void *v8; // r13
  __int128 v9; // kr00_16
  __int64 v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  int v13; // eax
  __int64 v14; // rdi
  const char *v15; // rdx
  unsigned int v16; // ebp
  int v17; // r13d
  __int64 v18; // rbp
  bool v19; // zf
  __int64 v20; // rcx
  signed int v21; // eax
  bool v22; // cc
  __int64 license_manager; // rbp
  unsigned __int8 (__fastcall *v25)(__int64, time_t, void **); // r13
  time_t v26; // rax
  const char *v27; // rdi
  char *v28; // rax
  __int64 v29; // rax
  void *ptr; // [rsp+0h] [rbp-1088h] BYREF
  __int128 v31; // [rsp+8h] [rbp-1080h]
  void *v32; // [rsp+20h] [rbp-1068h] BYREF
  __int128 v33; // [rsp+28h] [rbp-1060h]
  unsigned __int64 v34; // [rsp+1048h] [rbp-40h]

  v3 = *a1;
  v34 = __readfsqword(0x28u);
  *(_DWORD *)(v3 + 152) = 1;
  sub_3A25F0(a1[1], 0);
  sub_633480(*a1);
  v32 = nullptr;
  v33 = 0;
  if ( !(unsigned __int8)getinf_flag(45, 16) )
    callui();
  ptr = nullptr;
  v31 = 0;
  sub_35A790((char **)&ptr);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v8 = ptr;
  v9 = v31;
  v10 = *a1;
  ptr = nullptr;
  v31 = 0;
  v11 = *(void **)(v10 + 128);
  if ( v11 )
  {
    *(_QWORD *)(v10 + 136) = 0;
    qfree(v11);
    v12 = ptr;
    *(_QWORD *)(v10 + 128) = v8;
    *(_OWORD *)(v10 + 136) = v9;
    if ( v12 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v12);
    }
  }
  else
  {
    *(_QWORD *)(v10 + 128) = v8;
    *(_OWORD *)(v10 + 136) = v9;
  }
  v13 = sub_38B9C0(a1, (__int64)". PRESS %s TO EXPAND", v4, v5, v6, v7);
  v14 = *a1;
  v15 = haystack;
  v16 = v13;
  if ( *(_QWORD *)(*a1 + 8LL) )
    v15 = *(const char **)v14;
  a1[28] = v15;
  if ( v13 >= 0 )
  {
    if ( v13 == 1 )
    {
      if ( *((_BYTE *)a1 + 275) )
        sub_378C70((__int64)"%s: database does not exist", v15);
      if ( a2 )
      {
        sub_835590(0);
        return v16;
      }
      if ( !*((_BYTE *)a1 + 273) )
      {
        *(_DWORD *)(v14 + 152) = 2;
        v14 = *a1;
      }
    }
    v17 = 0;
    v18 = 0;
    v19 = *(_DWORD *)(v14 + 152) == 2;
    *((_BYTE *)a1 + 267) = v19;
    if ( v19 )
    {
      license_manager = get_license_manager();
      v25 = *(unsigned __int8 (__fastcall **)(__int64, time_t, void **))(*(_QWORD *)license_manager + 96LL);
      v26 = time(nullptr);
      if ( v25(license_manager, v26, &v32) && (unsigned int)((_DWORD)v32 - 1) > 4 )
        sub_378C70((__int64)"Your license has expired,\nyou cannot open new file.");
      v17 = *((unsigned __int8 *)a1 + 267);
      if ( !(_BYTE)v17 || (v27 = (const char *)a1[9]) != nullptr && (v28 = strchr(v27, 64)) != nullptr && v28[1] )
      {
        v14 = *a1;
        v18 = 0;
      }
      else
      {
        v29 = qfilesize(a1[28]);
        v17 = *((unsigned __int8 *)a1 + 267);
        v14 = *a1;
        v18 = v29;
      }
    }
    v20 = v17 | (4 * *((unsigned __int8 *)a1 + 273)) | (2 * (unsigned int)*((unsigned __int8 *)a1 + 278));
    if ( a1[3] )
    {
      v21 = sub_5958B0(v14, a1[2], v18, v20);
      v22 = v21 <= 0;
      if ( v21 )
      {
LABEL_14:
        if ( v22 )
        {
          if ( (unsigned int)v21 >= 0xFFFFFFFE )
          {
            term_database();
            return 2;
          }
LABEL_51:
          if ( !under_debugger )
            interr(3221);
          BUG();
        }
        if ( v21 != 1 )
          goto LABEL_51;
        if ( a2 )
          return 0;
        if ( *((_BYTE *)a1 + 280) )
        {
LABEL_37:
          if ( !*((_BYTE *)a1 + 267) )
          {
            if ( !(unsigned __int8)sub_3D7350(*a1, v18) )
              goto LABEL_39;
            return 0;
          }
LABEL_26:
          sub_632C30(*a1, 97, a1[28], 0);
          if ( !(unsigned __int8)sub_3D7350(*a1, v18) )
          {
LABEL_39:
            term_database();
            return 4;
          }
          return 0;
        }
LABEL_35:
        if ( !a1[9] )
          callui();
        goto LABEL_37;
      }
    }
    else
    {
      v21 = sub_5958B0(v14, haystack, v18, v20);
      v22 = v21 <= 0;
      if ( v21 )
        goto LABEL_14;
    }
    if ( !*((_BYTE *)a1 + 267) )
      callui();
    if ( *((_BYTE *)a1 + 280) )
      goto LABEL_26;
    goto LABEL_35;
  }
  if ( v13 == -1 )
    callui();
  term_database();
  return -v16;
}
