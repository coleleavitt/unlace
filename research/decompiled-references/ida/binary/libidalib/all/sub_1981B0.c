unsigned __int64 __fastcall sub_1981B0(_DWORD *a1, __int64 a2, __int16 a3)
{
  int v4; // eax
  __int64 v6; // rax
  void (*v7)(); // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+18h] [rbp-50h] BYREF
  __int128 v16; // [rsp+20h] [rbp-48h]
  char v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v4 = a1[480];
  v18 = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    LOBYTE(v4) = v4 | 0x80;
  else
    LOBYTE(v4) = v4 & 0x7F;
  a1[480] = v4;
  sub_181020((__int64)(a1 + 40));
  v6 = *(_QWORD *)a1;
  v17 = 0;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  (*(void (__fastcall **)(_DWORD *, __int64 *, __int64))(v6 + 352))(a1, &v13, 4);
  sub_194A90((__int64)a1, &v13, a2, a3);
  v7 = *(void (**)())(*(_QWORD *)a1 + 296LL);
  if ( v7 == sub_197ED0 )
    nullsub_113();
  else
    ((void (__fastcall *)(_DWORD *, __int64 *, __int64))v7)(a1, &v13, 1);
  sub_17F4E0(&v15);
  v8 = v13;
  if ( v13 )
  {
    v9 = v14;
    if ( (_QWORD)v14 )
    {
      v10 = 0;
      do
      {
        v11 = v10++;
        sub_17F4E0((__int64 *)(32 * v11 + v8));
        v8 = v13;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  a1[480] &= ~0x80u;
  return v18 - __readfsqword(0x28u);
}

