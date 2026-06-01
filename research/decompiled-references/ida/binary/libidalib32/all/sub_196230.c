__int64 __fastcall sub_196230(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-80h] BYREF
  __int128 v14; // [rsp+28h] [rbp-78h]
  __int64 v15; // [rsp+38h] [rbp-68h]
  __int64 v16; // [rsp+40h] [rbp-60h] BYREF
  __int128 v17; // [rsp+48h] [rbp-58h]
  __int64 v18; // [rsp+58h] [rbp-48h] BYREF
  __int128 v19; // [rsp+60h] [rbp-40h]
  char v20; // [rsp+70h] [rbp-30h]
  unsigned __int64 v21; // [rsp+78h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2520) + 13LL) & 2) != 0 )
  {
    v4 = *(_QWORD *)a1;
    v20 = 0;
    v17 = 0;
    v16 = 0;
    v18 = 0;
    v19 = 0;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(v4 + 352))(a1, &v16, 7);
    v13 = 0;
    v15 = -1;
    v14 = 0;
    sub_194520(0.0, a3, a4, a1, (__int64)&v13, (__int64)&v16, 3);
    *(_DWORD *)(a1 + 1920) |= 0x400u;
    v5 = sub_17EA80((__int64)&v16);
    v6 = v5 == 0;
    LOBYTE(v5) = v5 != 0;
    v7 = v5;
    if ( !v6 && (_QWORD)v14 )
      sub_194310(a1, (_BYTE *)&qword_58 + 1, 0, (_BYTE *)&qword_58 + 1, 0, (__int64)&v13, &v16, nullptr, 7u);
    *(_DWORD *)(a1 + 1920) &= ~0x400u;
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    sub_17E9E0(&v18);
    v8 = v16;
    if ( v16 )
    {
      v9 = v17;
      if ( (_QWORD)v17 )
      {
        v10 = 0;
        do
        {
          v11 = v10++;
          sub_17E9E0((__int64 *)(32 * v11 + v8));
          v8 = v16;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

