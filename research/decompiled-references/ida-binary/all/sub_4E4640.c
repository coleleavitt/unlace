unsigned __int64 __fastcall sub_4E4640(_DWORD *a1, unsigned int a2, char a3)
{
  int v3; // eax
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int128 v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v3 = a1[420];
  if ( (v3 & 0x100) == 0 && ((v3 & 1) != 0 || (a3 & 1) != 0) )
  {
    v6 = *(_QWORD *)a1;
    v16 = 0;
    v13 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    (*(void (__fastcall **)(_DWORD *, __int64 *, __int64))(v6 + 208))(a1, &v12, 7);
    v7 = (const char *)(*(__int64 (__fastcall **)(_DWORD *, __int64 *, _QWORD))(*(_QWORD *)a1 + 272LL))(a1, &v12, a2);
    sub_4E0B20((__int64)a1, (__int64)v7, a3);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v8 = v12;
    if ( v12 )
    {
      v9 = v13;
      if ( (_QWORD)v13 )
      {
        v10 = 0;
        do
        {
          v11 = *(_QWORD *)(v8 + 32 * v10);
          if ( v11 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
            v8 = v12;
          }
          ++v10;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v13 = 0;
      qfree(v8, v7);
    }
  }
  return v17 - __readfsqword(0x28u);
}
