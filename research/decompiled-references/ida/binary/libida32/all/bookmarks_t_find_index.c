__int64 __fastcall bookmarks_t_find_index(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // r8
  int v6; // r9d
  void *v7; // r14
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+4h] [rbp-A4h] BYREF
  int v13; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v14; // [rsp+Ch] [rbp-9Ch] BYREF
  __int64 v15[3]; // [rsp+10h] [rbp-98h] BYREF
  int v16; // [rsp+28h] [rbp-80h]
  char v17; // [rsp+30h] [rbp-78h]
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  void *ptr; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  sub_4A2850(v15, qword_2CA1698, a1, a2, 0);
  if ( (v17 & 1) != 0 )
  {
    v12 = 0;
    v2 = *(_QWORD *)(a1 + 40);
    v3 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = v3;
      LODWORD(v18) = v16;
      v4 = sub_79B3A0(&v18, v15[0], 1, 65);
      if ( v14 >= v4 )
        break;
      v18 = 0;
      v19 = 0;
      v20 = -1;
      v21 = 0;
      ptr = nullptr;
      if ( (unsigned __int8)sub_4A3920((__int64)v15, (__int64)&v18, 0, &v14, v5, v6) )
      {
        v7 = ptr;
        if ( !(*(unsigned int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v2 + 160LL))(v2, ptr, a2) )
        {
          v8 = v13;
          if ( !v13 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
            get_place_class(&v12, &v13, v9);
            v8 = v13;
          }
          if ( v8 <= 919
            || (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v2 + 168LL))(v2, v7, a2) )
          {
            v10 = v14;
            if ( ptr )
              qfree(ptr);
            goto LABEL_12;
          }
        }
      }
      if ( ptr )
        qfree(ptr);
      v3 = v14 + 1;
    }
  }
  v10 = -1;
LABEL_12:
  qfree((void *)v15[1]);
  return v10;
}

