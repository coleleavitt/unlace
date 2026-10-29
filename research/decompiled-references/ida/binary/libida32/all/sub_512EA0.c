unsigned __int64 __fastcall sub_512EA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbp
  int v6; // r12d
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v10; // [rsp+Ch] [rbp-ACh]
  int v11; // [rsp+1Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int128 v13; // [rsp+28h] [rbp-90h]
  __int128 v14; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  void *v18; // [rsp+68h] [rbp-50h]
  unsigned __int64 v19; // [rsp+78h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = sub_75A4F0(a2);
  if ( v2 )
  {
    v3 = v2;
    dirtree_chdir(*a2, "/");
    v4 = *(void **)(v3 + 48);
    v15 = 0;
    v16 = -1;
    v17 = 0;
    v18 = v4;
    v14 = 0;
    if ( v4 )
      v18 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *(_QWORD *)(v3 + 56);
    v6 = bookmarks_t_size(&v14, v5);
    v7 = 0;
    ptr = nullptr;
    v13 = 0;
    if ( v6 )
    {
      do
      {
        v11 = v7;
        if ( (unsigned __int8)bookmarks_t_get(&v14, &ptr, &v11, v5) )
        {
          v8 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v18 + 8LL))(v18, v5);
          if ( v8 != -1 )
          {
            v10 = v8;
            dirtree_link_inode(*a2, v8, 1);
            notify_dirtree(*a2, 1, v10);
          }
        }
        ++v7;
      }
      while ( v7 != v6 );
      if ( ptr )
      {
        *(_QWORD *)&v13 = 0;
        qfree(ptr);
      }
    }
    if ( v18 )
      qfree(v18);
  }
  return v19 - __readfsqword(0x28u);
}

