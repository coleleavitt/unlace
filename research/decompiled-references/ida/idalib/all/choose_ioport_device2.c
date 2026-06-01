__int64 __fastcall choose_ioport_device2(__int64 *a1, int a2, __int64 (__fastcall **a3)(_QWORD, _QWORD))
{
  __int64 current_config; // rax
  unsigned __int64 v6; // r13
  const void *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // r12d
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // eax
  void *v17; // rbx
  char *v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  char *v21; // rax
  void *v22; // rdi
  char *v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rax
  void *v27; // rdi
  char *v28; // rbx
  void *v29; // rdi
  __int64 v30; // rax
  _QWORD v31[7]; // [rsp+0h] [rbp-148h] BYREF
  char v32; // [rsp+38h] [rbp-110h] BYREF
  char v33; // [rsp+98h] [rbp-B0h] BYREF
  void *v34; // [rsp+B8h] [rbp-90h]
  __int64 v35; // [rsp+C0h] [rbp-88h]
  void *v36; // [rsp+D0h] [rbp-78h]
  __int64 v37; // [rsp+D8h] [rbp-70h]
  void *ptr; // [rsp+E8h] [rbp-60h]
  __int64 v39; // [rsp+F0h] [rbp-58h]
  void *v40; // [rsp+100h] [rbp-48h]
  unsigned __int64 v41; // [rsp+118h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  current_config = get_current_config();
  v6 = *(_QWORD *)(current_config + 48);
  if ( v6 <= 1 )
  {
    sub_84C3C0((__int64)v31, a2, a3);
    v16 = sub_84A480((__int64)v31, a1, v12, v13, v14, v15);
    v17 = v40;
    v9 = v16;
    v31[0] = &off_2B3CDB0;
    if ( v40 )
    {
      delete_dirtree(*(_QWORD *)v40);
      operator delete(v17, 8u);
    }
    v18 = (char *)ptr;
    if ( ptr )
    {
      v19 = v39;
      if ( v39 )
      {
        v20 = 0;
        do
        {
          v21 = &v18[24 * v20];
          v22 = *(void **)v21;
          if ( *(_QWORD *)v21 )
          {
            *((_QWORD *)v21 + 1) = 0;
            qfree(v22);
            v18 = (char *)ptr;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      v39 = 0;
      qfree(v18);
    }
    if ( v36 )
    {
      v37 = 0;
      qfree(v36);
    }
    v23 = (char *)v34;
    if ( v34 )
    {
      v24 = v35;
      if ( v35 )
      {
        v25 = 0;
        do
        {
          v26 = &v23[24 * v25];
          v27 = *(void **)v26;
          if ( *(_QWORD *)v26 )
          {
            *((_QWORD *)v26 + 1) = 0;
            qfree(v27);
            v23 = (char *)v34;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      v35 = 0;
      qfree(v23);
    }
    v28 = &v33;
    v31[0] = &unk_2BFB228;
    do
    {
      v29 = *(void **)v28;
      if ( *(_QWORD *)v28 )
      {
        *((_QWORD *)v28 + 1) = 0;
        qfree(v29);
      }
      v28 -= 24;
    }
    while ( v28 != &v32 );
  }
  else
  {
    v7 = *(const void **)(current_config + 40);
    v8 = current_config;
    v9 = 0;
    if ( strcmp((const char *)v7, "NONE") )
    {
      if ( a1 != (__int64 *)(v8 + 40) )
      {
        v11 = (void *)*a1;
        if ( a1[2] < v6 )
        {
          v30 = qvector_reserve(a1, *a1, v6, 1);
          *a1 = v30;
          v11 = (void *)v30;
        }
        a1[1] = v6;
        memmove(v11, v7, v6 - 1);
        *(_BYTE *)(*a1 + v6 - 1) = 0;
      }
      return 1;
    }
  }
  return v9;
}
