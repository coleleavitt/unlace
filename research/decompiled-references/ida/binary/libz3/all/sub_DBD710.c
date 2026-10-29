void __fastcall sub_DBD710(_QWORD *a1, const char *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rax
  size_t v5; // rax
  size_t v6; // rbp
  _QWORD *v7; // rax
  char *v8; // rbp
  char *v9; // rcx
  __int64 v10; // rax
  char *v11; // rsi
  size_t v12; // rax
  char v13; // r15
  __int64 *v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rax
  void *v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rdi
  char *v23; // [rsp+18h] [rbp-580h]
  char v24; // [rsp+2Fh] [rbp-569h]
  __int64 v25; // [rsp+38h] [rbp-560h] BYREF
  char *v26; // [rsp+40h] [rbp-558h] BYREF
  __int64 v27; // [rsp+48h] [rbp-550h]
  char *v28; // [rsp+50h] [rbp-548h]
  __int64 v29; // [rsp+58h] [rbp-540h]
  __int64 v30; // [rsp+60h] [rbp-538h]
  __int64 v31; // [rsp+68h] [rbp-530h]
  __int64 v32; // [rsp+70h] [rbp-528h]
  __int64 v33; // [rsp+78h] [rbp-520h]
  __int64 v34; // [rsp+80h] [rbp-518h]
  char v35[8]; // [rsp+88h] [rbp-510h] BYREF
  int v36; // [rsp+90h] [rbp-508h]
  void *v37; // [rsp+98h] [rbp-500h]
  size_t v38; // [rsp+A0h] [rbp-4F8h]
  _QWORD v39[2]; // [rsp+A8h] [rbp-4F0h] BYREF
  _QWORD v40[28]; // [rsp+B8h] [rbp-4E0h] BYREF
  __int16 v41; // [rsp+198h] [rbp-400h]
  __int128 v42; // [rsp+1A0h] [rbp-3F8h]
  __int128 v43; // [rsp+1B0h] [rbp-3E8h]
  void *v44; // [rsp+1C0h] [rbp-3D8h] BYREF
  size_t v45; // [rsp+1C8h] [rbp-3D0h]
  _QWORD v46[30]; // [rsp+1D0h] [rbp-3C8h] BYREF
  char v47; // [rsp+2C2h] [rbp-2D6h]
  __int64 *v48; // [rsp+4B8h] [rbp-E0h]

  v4 = (_QWORD *)a1[4];
  if ( v4 )
  {
    if ( *((_DWORD *)v4 - 1) )
      return;
    if ( !*((_DWORD *)v4 - 2) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v44, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v44);
      sub_233E40((__int64)&v44);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x68u);
    *v19 = 2;
    v4 = v19 + 1;
    a1[4] = v4;
  }
  ++*((_DWORD *)v4 - 1);
  *((_OWORD *)v4 + 1) = 0;
  *v4 = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_OWORD *)v4 + 2) = 0;
  v44 = v46;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v5 = strlen(a2);
  v6 = v5;
  if ( v5 > 0xF )
  {
    v17 = (void *)operator new(v5 + 1);
    v46[0] = v6;
    v44 = v17;
    v18 = v17;
LABEL_22:
    memcpy(v18, a2, v6);
    v7 = v44;
    goto LABEL_9;
  }
  if ( v5 == 1 )
  {
    LOBYTE(v46[0]) = *a2;
    goto LABEL_8;
  }
  if ( v5 )
  {
    v18 = v46;
    goto LABEL_22;
  }
LABEL_8:
  v7 = v46;
LABEL_9:
  v45 = v6;
  *((_BYTE *)v7 + v6) = 0;
  std::ios_base::ios_base((std::ios_base *)v40);
  v41 = 0;
  v42 = 0;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  v43 = 0;
  v8 = (char *)`VTT for'std::istringstream[1];
  v9 = (char *)`VTT for'std::istringstream[2];
  v40[27] = 0;
  v10 = *((_QWORD *)v8 - 3);
  v26 = v8;
  v23 = v9;
  *(char **)((char *)&v26 + v10) = v9;
  v27 = 0;
  std::ios::init();
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v26 = (char *)&`vtable for'std::istringstream + 24;
  v32 = 0;
  v33 = 0;
  v40[0] = (char *)&`vtable for'std::istringstream + 64;
  v34 = 0;
  v28 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::locale((std::locale *)v35);
  v11 = (char *)v44;
  v36 = 8;
  v37 = v39;
  v28 = (char *)&`vtable for'std::stringbuf + 16;
  v12 = v45;
  if ( v44 == v46 )
  {
    v20 = v45 + 1;
    if ( (unsigned int)(v45 + 1) >= 8 )
    {
      *(_QWORD *)((char *)&v39[-1] + v20) = *(_QWORD *)((char *)&v46[-1] + v20);
      if ( (unsigned int)v12 >= 8 )
      {
        v21 = 0;
        do
        {
          v22 = v21;
          v21 += 8;
          *(_QWORD *)((char *)v39 + v22) = *(_QWORD *)&v11[v22];
        }
        while ( v21 < (v12 & 0xFFFFFFF8) );
      }
    }
    else if ( (v20 & 4) != 0 )
    {
      LODWORD(v39[0]) = v46[0];
      *(_DWORD *)((char *)&v38 + v20 + 4) = *(_DWORD *)((char *)&v45 + v20 + 4);
    }
    else if ( (_DWORD)v45 != -1 )
    {
      LOBYTE(v39[0]) = v46[0];
      if ( (v20 & 2) != 0 )
        *(_WORD *)((char *)&v38 + v20 + 6) = *(_WORD *)((char *)&v45 + v20 + 6);
    }
  }
  else
  {
    v37 = v44;
    v39[0] = v46[0];
  }
  v38 = v12;
  v44 = v46;
  v45 = 0;
  LOBYTE(v46[0]) = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  if ( v44 != v46 )
    operator delete(v44, v46[0] + 1LL);
  sub_E059D0(&v44, 1, *a1, &qword_18D6CD0);
  v13 = v47;
  v47 = 0;
  v25 = 0;
  v24 = sub_DC0650(&v44, &v26, 0, &v25, 0);
  sub_18572D0(&v25);
  if ( !v24 )
  {
    sub_1872CE0("");
    sub_1873130(114, 408);
  }
  v47 = v13;
  v14 = v48;
  if ( v48 )
  {
    v15 = &v48[*((unsigned int *)v48 - 1)];
    if ( v15 != v48 )
    {
      do
        sub_DBAA40(a1, *v14++);
      while ( v15 != v14 );
    }
  }
  sub_E0AF10(&v44);
  v26 = (char *)&`vtable for'std::istringstream + 24;
  v40[0] = (char *)&`vtable for'std::istringstream + 64;
  v28 = (char *)&`vtable for'std::stringbuf + 16;
  if ( v37 != v39 )
    operator delete(v37, v39[0] + 1LL);
  v28 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v35);
  v16 = *((_QWORD *)v8 - 3);
  v26 = v8;
  *(char **)((char *)&v26 + v16) = v23;
  v27 = 0;
  v40[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v40);
}

