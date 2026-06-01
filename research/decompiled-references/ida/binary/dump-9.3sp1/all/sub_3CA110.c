unsigned __int64 __fastcall sub_3CA110(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  __int64 module_data; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r9d
  int v9; // ebx
  size_t v10; // r13
  int v11; // ecx
  const char *v12; // rdi
  int v14; // esi
  void *v15; // [rsp+0h] [rbp-1058h]
  __int64 v16; // [rsp+0h] [rbp-1058h]
  __int128 v17; // [rsp+8h] [rbp-1050h]
  unsigned __int64 v18; // [rsp+1028h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v4 = a2;
  if ( a3 )
  {
    a2 = a3;
    sub_6B7A0((__int64 *)(a1 + 8));
  }
  module_data = get_module_data();
  v9 = module_data;
  if ( *(_QWORD *)(module_data + 1344) && *(_BYTE *)(module_data + 720) )
  {
    qtmpnam();
    gen_gdl();
    display_gdl();
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = v4;
    LODWORD(v15) = 0;
    v17 = 0;
    v12 = s1;
    if ( v10 )
    {
      DWORD2(v17) = v10;
      v15 = (void *)qalloc_or_throw(v10, a2, v6, v4);
      memcpy(v15, *(const void **)(a1 + 8), v10);
      LODWORD(v17) = v10;
      v14 = (int)v15;
      if ( v10 == 1 )
      {
        v11 = v4;
      }
      else
      {
        tag_remove();
        v11 = v4;
        v14 = (int)v15;
      }
      LODWORD(v12) = v14;
    }
    sub_3CC860((_DWORD)v12, a1, v9, v11, v7, v8, (_DWORD)v15, v17, DWORD2(v17));
    if ( v16 )
      qfree(v16);
  }
  return v18 - __readfsqword(0x28u);
}
