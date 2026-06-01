unsigned __int64 __fastcall sub_3CACD0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdi
  char *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // [rsp+0h] [rbp-108h] BYREF
  __int128 v18; // [rsp+8h] [rbp-100h]
  __int128 v19; // [rsp+18h] [rbp-F0h]
  __int64 v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D8h]
  _QWORD v22[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *v23; // [rsp+50h] [rbp-B8h]
  __int128 v24; // [rsp+58h] [rbp-B0h]
  void *ptr; // [rsp+68h] [rbp-A0h]
  __int128 v26; // [rsp+70h] [rbp-98h]
  _OWORD v27[3]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char v31; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+D8h] [rbp-30h]

  v3 = *a1;
  v32 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v3, 2) & 0x3F) != 0xD )
    return v32 - __readfsqword(0x28u);
  v5 = *a1;
  v17 = nullptr;
  v20 = 0;
  v21 = 1;
  v18 = 0;
  v19 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v5, 13, &v17) )
    goto LABEL_22;
  v22[1] = 0;
  v23 = nullptr;
  ptr = nullptr;
  v28 = 1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  v22[0] = 8 * a2;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member((int)v22) == -1 )
  {
    clear_tinfo_t(v27);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
LABEL_22:
    v6 = (char *)v17;
    if ( !v17 )
      return v32 - __readfsqword(0x28u);
    v12 = v18;
    if ( (_QWORD)v18 )
    {
      v13 = 0;
      do
      {
        v14 = &v6[144 * v13];
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
        v6 = (char *)v17;
      }
      while ( v12 != v13 );
    }
    goto LABEL_17;
  }
  copy_tinfo_t(a1);
  sub_3CACD0(a1, a2 - (v22[0] >> 3));
  clear_tinfo_t(v27);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  v6 = (char *)v17;
  if ( v17 )
  {
    v7 = v18;
    if ( (_QWORD)v18 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[144 * v8];
        clear_tinfo_t(v9 + 64);
        v10 = *((void **)v9 + 5);
        if ( v10 )
        {
          *((_QWORD *)v9 + 6) = 0;
          qfree(v10);
        }
        v11 = *((void **)v9 + 2);
        if ( v11 )
        {
          *((_QWORD *)v9 + 3) = 0;
          qfree(v11);
        }
        ++v8;
        v6 = (char *)v17;
      }
      while ( v7 != v8 );
    }
LABEL_17:
    *(_QWORD *)&v18 = 0;
    qfree(v6);
  }
  return v32 - __readfsqword(0x28u);
}
