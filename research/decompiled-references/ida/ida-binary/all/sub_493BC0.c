unsigned __int64 __fastcall sub_493BC0(__int64 *a1, int a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rax
  int v4; // edx
  _DWORD *v5; // rbx
  int v6; // ecx
  _BOOL4 v7; // ebp
  __int64 (*v9)(); // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  __int128 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v2 = *a1;
  v20 = __readfsqword(0x28u);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(__int64 *))(v2 + 808))(a1);
  if ( v3 )
  {
    v4 = v3[420];
    v5 = v3;
    if ( (v4 & 0x10) == 0 )
    {
      v6 = v3[460];
      v7 = (a2 & 0xFFFFFFFD) == 65;
      v3[460] = v6 + v7;
      if ( (v4 & 1) != 0 && (int)v3[458] <= 0 && (v4 & 0x200) == 0 )
      {
        v9 = *(__int64 (**)())(*(_QWORD *)v3 + 336LL);
        if ( v9 == vault_files_dirtree_widget_t__::vfunc_42 || !((unsigned __int8 (__fastcall *)(_DWORD *))v9)(v5) )
        {
          v19 = 0;
          v15 = 0;
          v17 = 0;
          v16 = 0;
          v18 = 0;
          (*(void (__fastcall **)(_DWORD *, __int64 *, __int64))(*(_QWORD *)v5 + 208LL))(v5, &v15, 7);
          v10 = (const char *)(*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64))(*(_QWORD *)v5 + 272LL))(
                                v5,
                                &v15,
                                7);
          sub_4E0B20(v5, v10, 0);
          sub_4DE2C0(&v17);
          v11 = v15;
          if ( v15 )
          {
            v12 = v16;
            if ( (_QWORD)v16 )
            {
              v13 = 0;
              do
              {
                v14 = v13++;
                sub_4DE2C0(32 * v14 + v11);
                v11 = v15;
              }
              while ( v12 != v13 );
            }
            *(_QWORD *)&v16 = 0;
            qfree(v11, v10);
          }
        }
        v6 = v5[460] - v7;
      }
      v5[460] = v6;
    }
  }
  return v20 - __readfsqword(0x28u);
}
