__int64 __fastcall sub_44FCE0(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)a2 + 72LL))(a2);
  vars0 = 0;
  v3 = v2;
  vars8 = 0;
  sub_431330(&vars0, a2);
  sub_432240(v3, (__int64)&vars0);
  v4 = sub_49EE00(v3);
  sub_4A4600(v4, 0, 7, 0);
  v5 = vars0;
  if ( vars0 )
  {
    v6 = vars8;
    if ( (_QWORD)vars8 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = (__int64 *)(v5 + v7);
        v10 = *(_QWORD *)(v5 + v7 + 216);
        if ( v10 )
        {
          v9[28] = 0;
          qfree(v10, nullptr);
        }
        v11 = v9[24];
        if ( v11 )
        {
          v9[25] = 0;
          qfree(v11, nullptr);
        }
        v12 = v9[21];
        if ( v12 )
        {
          v9[22] = 0;
          qfree(v12, nullptr);
        }
        v13 = v9[18];
        if ( v13 )
        {
          v9[19] = 0;
          qfree(v13, nullptr);
        }
        v14 = v9[15];
        if ( v14 )
        {
          v9[16] = 0;
          qfree(v14, nullptr);
        }
        v15 = v9[12];
        if ( v15 )
        {
          v9[13] = 0;
          qfree(v15, nullptr);
        }
        v16 = v9[9];
        if ( v16 )
        {
          v9[10] = 0;
          qfree(v16, nullptr);
        }
        v17 = v9[6];
        if ( v17 )
        {
          v9[7] = 0;
          qfree(v17, nullptr);
        }
        v18 = v9[3];
        if ( v18 )
        {
          v9[4] = 0;
          qfree(v18, nullptr);
        }
        v19 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v19, nullptr);
        }
        ++v8;
        v5 = vars0;
        v7 += 240;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v5, nullptr);
  }
  return 1;
}
