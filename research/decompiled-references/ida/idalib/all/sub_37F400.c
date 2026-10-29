__int64 __fastcall sub_37F400(__int64 a1, unsigned __int64 a2)
{
  int tinfo_property; // r13d
  int v3; // r15d
  __int64 v4; // r12
  unsigned __int64 tinfo_size; // rax
  char tinfo_details; // al
  char *v8; // rdi
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-120h] BYREF
  void *ptr; // [rsp+10h] [rbp-118h] BYREF
  __int128 v18; // [rsp+18h] [rbp-110h]
  __int128 v19; // [rsp+28h] [rbp-100h]
  __int64 v20; // [rsp+38h] [rbp-F0h]
  int v21; // [rsp+40h] [rbp-E8h]
  _QWORD v22[2]; // [rsp+50h] [rbp-D8h] BYREF
  void *v23; // [rsp+60h] [rbp-C8h]
  __int128 v24; // [rsp+68h] [rbp-C0h]
  void *v25; // [rsp+78h] [rbp-B0h]
  __int128 v26; // [rsp+80h] [rbp-A8h]
  __int128 v27[3]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-68h]
  int v29; // [rsp+C8h] [rbp-60h]
  __int64 v30; // [rsp+D0h] [rbp-58h]
  char v31; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+E8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v16 = 0;
  if ( !(unsigned __int8)get_type_by_tid(&v16, a1) )
    goto LABEL_9;
  if ( (get_tinfo_property(v16, 2) & 0x2F) != 0xD )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property(v16, 16);
  v3 = tinfo_property;
  if ( !tinfo_property )
    goto LABEL_9;
  if ( (get_tinfo_property(v16, 2) & 0x3F) == 0x1D )
  {
    v4 = tinfo_property;
    if ( tinfo_property >= a2 )
      v4 = a2 - 1;
    goto LABEL_10;
  }
  tinfo_size = get_tinfo_size(0, v16, 0);
  v4 = tinfo_size;
  if ( tinfo_size == -1 )
  {
LABEL_9:
    v4 = -1;
    goto LABEL_10;
  }
  if ( tinfo_size >= a2 )
  {
    v21 = 1;
    ptr = nullptr;
    v20 = 0;
    v18 = 0;
    v19 = 0;
    tinfo_details = get_tinfo_details(v16, 13, &ptr);
    v8 = (char *)ptr;
    v4 = -1;
    if ( tinfo_details )
    {
      v9 = (unsigned __int64 *)((char *)ptr + 144 * tinfo_property - 144);
      do
      {
        if ( --v3 < 0 )
        {
          v4 = a2 - 1;
          goto LABEL_18;
        }
        v10 = *v9;
        v9 -= 18;
      }
      while ( a2 < v10 >> 3 );
      v4 = a2 - 1;
      v22[1] = 0;
      v23 = nullptr;
      v25 = nullptr;
      v28 = 1;
      v29 = -1;
      v30 = 0;
      v31 = 0;
      v22[0] = 8 * (a2 - 1);
      v24 = 0;
      v26 = 0;
      v27[0] = 0;
      if ( (unsigned int)find_tinfo_udt_member((int)v22) != -1 )
        v4 = v22[0] >> 3;
      clear_tinfo_t(v27);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23);
      }
      v8 = (char *)ptr;
    }
LABEL_18:
    if ( v8 )
    {
      v11 = v18;
      if ( (_QWORD)v18 )
      {
        v12 = 0;
        do
        {
          v13 = &v8[144 * v12];
          clear_tinfo_t(v13 + 64);
          v14 = *((void **)v13 + 5);
          if ( v14 )
          {
            *((_QWORD *)v13 + 6) = 0;
            qfree(v14);
          }
          v15 = *((void **)v13 + 2);
          if ( v15 )
          {
            *((_QWORD *)v13 + 3) = 0;
            qfree(v15);
          }
          ++v12;
          v8 = (char *)ptr;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v18 = 0;
      qfree(v8);
    }
  }
LABEL_10:
  clear_tinfo_t(&v16);
  return v4;
}
