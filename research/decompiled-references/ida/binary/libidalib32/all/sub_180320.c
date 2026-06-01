unsigned __int64 __fastcall sub_180320(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rdx
  void (__fastcall *v5)(__int64, unsigned __int64); // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  void (*v8)(); // rax
  void (*v9)(); // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdi
  char v15; // al
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  __int128 v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+30h] [rbp-28h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v3 = *a1;
  v21 = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(v3 + 48);
  if ( v4 != sub_17DC60 )
  {
    v15 = v4();
    if ( a2 && !v15 && *(_DWORD *)(a2 + 8) != 2 )
      return v21 - __readfsqword(0x28u);
    v3 = *a1;
  }
  v20 = 0;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64 *, __int64))(v3 + 152))(a1, &v16, 7);
  v5 = *(void (__fastcall **)(__int64, unsigned __int64))(*a1 + 136LL);
  if ( v5 == sub_17EEE0 )
    sub_17EDE0(a1 + 214, 0xFFFFFFFFFFFFFFFFLL);
  else
    v5((__int64)a1, -1uLL);
  v6 = a1[239];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *a1;
  a1[239] = a2;
  v8 = *(void (**)())(v7 + 184);
  if ( v8 != nullsub_113 )
    ((void (__fastcall *)(_QWORD *, __int64 *, _QWORD))v8)(a1, &v16, 0);
  sub_19D4F0(&qword_255480, off_250340, 2, 1);
  sub_19B690(1, 0, &qword_255480);
  v9 = *(void (**)())(*a1 + 280LL);
  if ( v9 != nullsub_112 )
    ((void (__fastcall *)(_QWORD *, _QWORD))v9)(a1, a1[239]);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v10 = v16;
  if ( v16 )
  {
    v11 = v17;
    if ( (_QWORD)v17 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(v10 + 32 * v12);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v10 = v16;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v21 - __readfsqword(0x28u);
}

