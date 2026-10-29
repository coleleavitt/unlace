__int64 __fastcall sub_10D620(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx
  char v8; // al
  __int64 path; // rax
  __int64 v10; // rax
  char *src; // [rsp+0h] [rbp-78h]
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  void *v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  unsigned __int64 v18; // [rsp+58h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a2 > 66 )
  {
    if ( a2 == 86 )
    {
      v8 = 1;
      if ( !dword_252E40 )
      {
        mark_builtin_widgets();
        message(TProgram::deskTop, 0x200u, 0x1388u, nullptr);
        v8 = 0;
      }
      byte_252E3C = v8;
      sub_11C5D0(&xmmword_252F40);
      sub_E5BB0();
      sub_FF640();
      sub_198470();
      sub_164BF0();
    }
    else if ( a2 == 94 )
    {
      v4 = *a3;
      if ( *a3 > 0x2F )
      {
        v5 = *((__int64 **)a3 + 1);
        *((_QWORD *)a3 + 1) = v5 + 1;
      }
      else
      {
        v5 = (__int64 *)(*((_QWORD *)a3 + 2) + v4);
        *a3 = v4 + 8;
      }
      v6 = *v5;
      src = (char *)qvector_reserve();
      strcpy(src, "UI");
      v12 = v6;
      v13 = (void *)qalloc_or_throw();
      v15 = 3;
      memcpy(v13, src, 3u);
      v14 = 3;
      v17 = 259;
      v16 = 0xFFFFFFFEFFFFFFFFLL;
      if ( src )
        qfree();
      v7 = operator new(0x98u);
      sub_157060(v7, &v12);
      if ( v13 )
      {
        v14 = 0;
        qfree();
      }
    }
  }
  else if ( a2 > 62 )
  {
    mark_builtin_widgets();
  }
  else
  {
    switch ( a2 )
    {
      case 1LL:
        sub_C5840();
        sub_19BA60(1);
        v10 = sub_F2E40(1, 1);
        if ( v10 )
        {
          *(_QWORD *)(v10 + 216) = 0;
          *(_QWORD *)(v10 + 224) = -1;
          *(_DWORD *)(v10 + 232) = 0;
        }
        break;
      case 5LL:
        sub_99260();
        path = get_path();
        sub_144CD0(path, 0);
        sub_11D6D0(&unk_252CC0);
        sub_98250((__int64)&unk_252CC0, 0);
        is_cvt64();
        break;
      case 0LL:
        sub_990E0();
        break;
    }
  }
  return 0;
}

