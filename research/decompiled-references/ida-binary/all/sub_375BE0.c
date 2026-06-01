__int64 __fastcall sub_375BE0(__int64 *a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  const char *v7; // rbp
  int v8; // eax
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int128 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+28h] [rbp-50h]
  char v22; // [rsp+38h] [rbp-40h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v5 = *a1;
  v23 = __readfsqword(0x28u);
  v6 = a3;
  v7 = (const char *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))(v5 + 736))(a1, a3);
  v8 = sub_1F7CC0(a1[2], v6, a4);
  v9 = v7;
  v17 = v8;
  v18 = 0;
  v20 = 0;
  v22 = 1;
  v19 = 0;
  v21 = 0;
  sub_2D4CE0(a2, v7, &v17, (__int64)v7, 0);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v7);
  }
  v10 = v18;
  if ( v18 )
  {
    v11 = v19;
    if ( (_QWORD)v19 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v10 + 80 * v12);
        v14 = v13[4];
        if ( v14 )
        {
          v13[5] = 0;
          qfree(v14, v9);
        }
        v15 = v13[1];
        if ( v15 )
        {
          v13[2] = 0;
          qfree(v15, v9);
        }
        ++v12;
        v10 = v18;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v10, v9);
  }
  return 1;
}
