unsigned __int64 __fastcall sub_196B90(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+18h] [rbp-60h] BYREF
  __int128 v16; // [rsp+20h] [rbp-58h]
  char v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_17FBF0(a1 + 160, a4) )
  {
    v6 = *(_QWORD *)a1;
    v17 = 0;
    v14 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(v6 + 352))(a1, &v13, 7);
    if ( a2 )
      sub_194A90(a1, &v13, a2, a3);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 424LL))(a1, &v13, a3);
    sub_17FC70(a1 + 160, v7, a4);
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
  }
  return v18 - __readfsqword(0x28u);
}

