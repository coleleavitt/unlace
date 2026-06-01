__int64 __fastcall sub_37B9A0(unsigned int a1, unsigned int a2)
{
  unsigned int tinfo_property; // r12d
  unsigned int v3; // r14d
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned __int64 tinfo_size; // rax
  char tinfo_details; // al
  char *v9; // rdi
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r13
  char *v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-110h] BYREF
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int128 v19; // [rsp+18h] [rbp-100h]
  __int128 v20; // [rsp+28h] [rbp-F0h]
  __int64 v21; // [rsp+38h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-D8h]
  _QWORD v23[2]; // [rsp+50h] [rbp-C8h] BYREF
  void *v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+68h] [rbp-B0h]
  void *v26; // [rsp+78h] [rbp-A0h]
  __int128 v27; // [rsp+80h] [rbp-98h]
  __int128 v28; // [rsp+90h] [rbp-88h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-68h]
  int v30; // [rsp+B8h] [rbp-60h]
  __int64 v31; // [rsp+C0h] [rbp-58h]
  char v32; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+D8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v17 = 0;
  if ( !(unsigned __int8)get_type_by_tid(&v17, a1) )
    goto LABEL_9;
  if ( (get_tinfo_property(v17, 2) & 0x2F) != 0xD )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property(v17, 16);
  v3 = tinfo_property;
  if ( !tinfo_property )
    goto LABEL_9;
  if ( (get_tinfo_property(v17, 2) & 0x3F) == 0x1D )
  {
    v4 = a2 - 1;
    if ( tinfo_property < a2 )
      v4 = tinfo_property;
    LODWORD(v5) = v4;
    goto LABEL_10;
  }
  tinfo_size = get_tinfo_size(0, v17, 0);
  if ( tinfo_size == -1 )
  {
LABEL_9:
    LODWORD(v5) = -1;
    goto LABEL_10;
  }
  if ( tinfo_size >= a2 )
  {
    v22 = 1;
    ptr = nullptr;
    v21 = 0;
    v19 = 0;
    v20 = 0;
    tinfo_details = get_tinfo_details(v17, 13, &ptr);
    v9 = (char *)ptr;
    if ( tinfo_details )
    {
      v10 = (unsigned __int64 *)((char *)ptr + 128 * (__int64)(int)(tinfo_property - 1));
      do
      {
        if ( (--v3 & 0x80000000) != 0 )
        {
          LODWORD(v5) = a2 - 1;
          goto LABEL_19;
        }
        v11 = *v10;
        v10 -= 16;
      }
      while ( a2 < v11 >> 3 );
      v5 = a2 - 1;
      v23[1] = 0;
      v24 = nullptr;
      v26 = nullptr;
      v29 = 1;
      v30 = -1;
      v31 = 0;
      v32 = 0;
      v23[0] = 8 * v5;
      v25 = 0;
      v27 = 0;
      v28 = 0;
      if ( (unsigned int)find_tinfo_udt_member((int)v23) != -1 )
        v5 = v23[0] >> 3;
      clear_tinfo_t(&v28);
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      v9 = (char *)ptr;
    }
    else
    {
      LODWORD(v5) = -1;
    }
LABEL_19:
    if ( v9 )
    {
      v12 = v19;
      if ( (_QWORD)v19 )
      {
        v13 = 0;
        do
        {
          v14 = &v9[128 * v13];
          clear_tinfo_t(v14 + 64);
          v15 = *((void **)v14 + 5);
          if ( v15 )
          {
            *((_QWORD *)v14 + 6) = 0;
            qfree(v15);
          }
          v16 = *((void **)v14 + 2);
          if ( v16 )
          {
            *((_QWORD *)v14 + 3) = 0;
            qfree(v16);
          }
          ++v13;
          v9 = (char *)ptr;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v19 = 0;
      qfree(v9);
    }
  }
  else
  {
    LODWORD(v5) = tinfo_size;
  }
LABEL_10:
  clear_tinfo_t(&v17);
  return (unsigned int)v5;
}

