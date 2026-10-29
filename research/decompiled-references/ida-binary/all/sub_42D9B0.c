__int64 __fastcall sub_42D9B0(__int64 *a1, const char *a2, __int64 a3)
{
  unsigned int v3; // r13d
  _QWORD *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rax
  const char *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v18; // [rsp+8h] [rbp-58h]
  __int64 v19; // [rsp+10h] [rbp-50h] BYREF
  __int128 v20; // [rsp+18h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]

  v3 = (unsigned int)a2;
  v21 = __readfsqword(0x28u);
  v5 = sub_426230(a1, a2);
  LOBYTE(v6) = sub_4175A0((__int64)v5);
  v7 = v6;
  if ( !(_BYTE)v6 )
    return v7;
  v8 = *a1;
  v20 = 0;
  v9 = (const char *)&v19;
  v19 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64))(v8 + 1192))(a1, &v19, a3, 65);
  v11 = v19;
  v7 = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_10;
  v18 = v19 + 48 * v20;
  if ( v18 == v19 )
  {
    v7 = 0;
LABEL_10:
    if ( v11 )
    {
LABEL_11:
      v13 = v20;
      if ( (_QWORD)v20 )
      {
        v14 = 0;
        do
        {
          v15 = (__int64 *)(v11 + 48 * v14);
          v16 = *v15;
          if ( *v15 )
          {
            v15[1] = 0;
            qfree(v16, v9);
            v11 = v19;
          }
          ++v14;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v20 = 0;
      qfree(v11, v9);
    }
    return v7;
  }
  do
  {
    if ( (*(_BYTE *)(v11 + 24) & 0x40) != 0 )
    {
      if ( v3 - 5 <= 1 )
      {
        v11 = v19;
        goto LABEL_10;
      }
      a1 = sub_426230(a1, v9);
      v9 = nullptr;
      v12 = sub_417670((__int64)a1, 0, 2, v11, 0, nullptr, v3, 1);
      if ( (_BYTE)v12 )
      {
        v11 = v19;
        v7 = v12;
        goto LABEL_10;
      }
    }
    v11 += 48;
  }
  while ( v11 != v18 );
  v11 = v19;
  v7 = 0;
  if ( v19 )
    goto LABEL_11;
  return v7;
}
