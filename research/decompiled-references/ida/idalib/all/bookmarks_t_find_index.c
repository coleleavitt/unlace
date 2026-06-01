__int64 __fastcall bookmarks_t_find_index(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // r9d
  void *v8; // r14
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+4h] [rbp-A4h] BYREF
  int v14; // [rsp+8h] [rbp-A0h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-9Ch] BYREF
  __int64 v16[4]; // [rsp+10h] [rbp-98h] BYREF
  char v17; // [rsp+34h] [rbp-74h]
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  void *ptr; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  sub_4B7DA0(v16, qword_2CCB598, a1, a2, 0, a3);
  if ( (v17 & 1) != 0 )
  {
    v13 = 0;
    v3 = *(_QWORD *)(a1 + 40);
    v4 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = v4;
      *(_QWORD *)&v18 = v16[3];
      v5 = sub_7BE710(&v18, v16[0], 1, 65);
      if ( v15 >= v5 )
        break;
      v18 = 0;
      v19 = 0;
      v20 = -1;
      v21 = 0;
      ptr = nullptr;
      if ( (unsigned __int8)sub_4B8F10(v16, (__int64)&v18, 0, &v15, v6, v7) )
      {
        v8 = ptr;
        if ( !(*(unsigned int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v3 + 160LL))(v3, ptr, a2) )
        {
          v9 = v14;
          if ( !v14 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
            get_place_class(&v13, &v14, v10);
            v9 = v14;
          }
          if ( v9 <= 919
            || (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v3 + 168LL))(v3, v8, a2) )
          {
            v11 = v15;
            if ( ptr )
              qfree(ptr);
            goto LABEL_12;
          }
        }
      }
      if ( ptr )
        qfree(ptr);
      v4 = v15 + 1;
    }
  }
  v11 = -1;
LABEL_12:
  qfree((void *)v16[1]);
  return v11;
}
