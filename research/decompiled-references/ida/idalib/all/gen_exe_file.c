_BOOL8 __fastcall gen_exe_file(__int64 a1)
{
  _BOOL4 v1; // ebx
  char *v3; // r14
  size_t v4; // rax
  size_t v5; // rbx
  void *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int (__fastcall *v10)(_QWORD, char *); // rax
  char *v11; // rsi
  char *v12; // rsi
  __int64 (__fastcall *v13)(_QWORD, const char *); // rax
  const char *v14; // rsi
  char *s; // [rsp+0h] [rbp-1168h] BYREF
  __int64 v16; // [rsp+8h] [rbp-1160h]
  void *v17; // [rsp+20h] [rbp-1148h] BYREF
  __int128 v18; // [rsp+28h] [rbp-1140h]
  char v19[8]; // [rsp+40h] [rbp-1128h] BYREF
  __int128 v20; // [rsp+48h] [rbp-1120h]
  __int64 v21; // [rsp+58h] [rbp-1110h]
  char v22[8]; // [rsp+60h] [rbp-1108h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1100h]
  __int64 v24; // [rsp+78h] [rbp-10F0h]
  char v25[8]; // [rsp+80h] [rbp-10E8h] BYREF
  void *ptr[3]; // [rsp+88h] [rbp-10E0h] BYREF
  _QWORD v27[10]; // [rsp+A0h] [rbp-10C8h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-1078h]
  void *v29; // [rsp+100h] [rbp-1068h]
  __int128 v30; // [rsp+108h] [rbp-1060h]
  _BYTE v31[4096]; // [rsp+118h] [rbp-1050h] BYREF
  char v32; // [rsp+1118h] [rbp-50h]
  unsigned __int64 v33; // [rsp+1128h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a1 )
  {
    if ( (unsigned int)getinf(5) != 2 )
    {
      v27[0] = 0;
      v32 = 1;
      v29 = nullptr;
      v31[0] = 0;
      v28 = 0;
      v30 = 0;
      sub_642030((__int64)v31, 4096);
      if ( (unsigned __int8)sub_640A20(v27, (__int64)v31) )
      {
        sub_640490((__int64)&v17);
        if ( *((_QWORD *)&v28 + 1) )
          sub_378D50();
        v13 = *(__int64 (__fastcall **)(_QWORD, const char *))(v28 + 24);
        if ( v13 )
        {
          v14 = haystack;
          if ( (_QWORD)v18 )
            v14 = (const char *)v17;
          v1 = v13(0, v14) != 0;
        }
        else
        {
          v1 = 0;
        }
        if ( v17 )
        {
          *(_QWORD *)&v18 = 0;
          qfree(v17);
        }
      }
      else
      {
        v1 = 0;
      }
      if ( v32 && v27[0] )
      {
        if ( (debug & 0x10) != 0 )
          sub_3879F0();
        free_dll(v27);
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      goto LABEL_11;
    }
    return 1;
  }
  if ( (unsigned int)getinf(5) == 2 )
  {
    v7 = getinf(22);
    v8 = getinf(21);
    base2file(a1, 0, v8, v7);
    return 1;
  }
  v27[0] = 0;
  v32 = 1;
  v29 = nullptr;
  v31[0] = 0;
  v28 = 0;
  v30 = 0;
  sub_642030((__int64)v31, 4096);
  if ( (unsigned __int8)sub_640A20(v27, (__int64)v31) )
  {
    sub_640490((__int64)&s);
    if ( *((_QWORD *)&v28 + 1) )
    {
      v22[0] = 2;
      v24 = 0;
      v25[0] = 2;
      v23 = 0;
      memset(ptr, 0, sizeof(ptr));
      free_idcv(v22);
      v22[0] = 8;
      *(_QWORD *)&v23 = a1;
      if ( v16 && (v3 = s) != nullptr )
      {
        v4 = strlen(s);
        v25[0] = 7;
        memset(ptr, 0, sizeof(ptr));
        v5 = v4;
        if ( v4 )
        {
          v6 = (void *)(v4 + 1);
          ptr[0] = (void *)qvector_reserve(ptr, 0, v4 + 1, 1);
          ptr[1] = v6;
          memmove(ptr[0], v3, v5);
          *((_BYTE *)ptr[0] + v5) = 0;
        }
      }
      else
      {
        v25[0] = 7;
        memset(ptr, 0, sizeof(ptr));
      }
      v20 = 0;
      v19[0] = 2;
      v21 = 0;
      v17 = nullptr;
      v18 = 0;
      if ( !(unsigned __int8)sub_640D00(v27, (__int64)v19, "save_file", (__int64)v22, 2, (__int64)&v17) )
        sub_378D50();
      v1 = v19[0] == 2 && (_QWORD)v20 != 0;
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      free_idcv(v19);
      free_idcv(v25);
      free_idcv(v22);
    }
    else
    {
      v9 = v28;
      v10 = *(unsigned int (__fastcall **)(_QWORD, char *))(v28 + 24);
      if ( !v10 )
        goto LABEL_52;
      v11 = (char *)haystack;
      if ( v16 )
        v11 = s;
      if ( v10(0, v11) )
      {
        v12 = (char *)haystack;
        if ( v16 )
          v12 = s;
        v1 = (*(__int64 (__fastcall **)(__int64, char *))(v9 + 24))(a1, v12) != 0;
      }
      else
      {
LABEL_52:
        v1 = 0;
      }
    }
    if ( s )
    {
      v16 = 0;
      qfree(s);
    }
  }
  else
  {
    v1 = 0;
  }
  if ( v32 && v27[0] )
  {
    if ( (debug & 0x10) != 0 )
      sub_3879F0();
    free_dll(v27);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
LABEL_11:
  if ( *((_QWORD *)&v28 + 1) )
    --*(_DWORD *)(*((_QWORD *)&v28 + 1) + 12LL);
  return v1;
}
