__int64 __fastcall sub_3D9DD0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  const char *v9; // rdx
  char *v10; // rbp
  __int64 v12; // r15
  const char *v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rsi
  __int64 v19; // rbp
  char *v20; // r14
  char *s1; // [rsp+0h] [rbp-88h] BYREF
  __int128 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  _QWORD v24[3]; // [rsp+20h] [rbp-68h] BYREF
  char v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v6 = a2;
  v7 = a1[15].m128i_i64[1] + 32 * a2;
  v8 = v7;
  if ( !v7 )
    return -1;
  s1 = 0;
  v9 = ::s1;
  v22 = 0;
  if ( *(_QWORD *)(v7 + 16) )
    v9 = *(const char **)(v7 + 8);
  if ( !(unsigned __int8)sub_37E420(
                           (unsigned int)&s1,
                           1023,
                           (_DWORD)v9,
                           (unsigned int)"Please enter the new stock comment",
                           a5,
                           a6) )
  {
    v10 = s1;
    v6 = -1;
    goto LABEL_7;
  }
  sub_3D7170((__int64)&s1, 32);
  v12 = v22;
  if ( *(_QWORD *)(v8 + 16) )
  {
    v13 = *(const char **)(v8 + 8);
    if ( !(_QWORD)v22 )
    {
      if ( *v13 )
      {
LABEL_14:
        v14 = (*(__int64 (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 56))(a1, v6);
        v10 = s1;
        v6 = v14;
        goto LABEL_7;
      }
      goto LABEL_25;
    }
  }
  else
  {
    if ( !(_QWORD)v22 )
    {
LABEL_25:
      v10 = s1;
      goto LABEL_26;
    }
    v13 = ::s1;
  }
  v10 = s1;
  if ( strcmp(s1, v13) )
  {
    if ( v12 != 1 )
    {
      sub_3D8FA0((__int64)v24, (__int64)a1[17].m128i_i64, *(_QWORD *)v8, (__int64)&s1);
      if ( v25 )
      {
        v18 = ::s1;
        if ( v24[1] )
          v18 = (const char *)v24[0];
        sub_3D9CB0(a1, (__int64)v18, (int)"editing", v15, v16, v17, (__int64)s1, v22, *((__int64 *)&v22 + 1), v23);
        if ( v24[0] )
          qfree();
      }
      else if ( (char **)(v8 + 8) != &s1 )
      {
        v19 = v22;
        if ( (unsigned __int64)v22 > 1 )
        {
          v20 = s1;
          if ( *(_QWORD *)(v8 + 24) < (unsigned __int64)v22 )
            *(_QWORD *)(v8 + 8) = qvector_reserve();
          *(_QWORD *)(v8 + 16) = v19;
          memmove(*(void **)(v8 + 8), v20, v19 - 1);
          *(_BYTE *)(*(_QWORD *)(v8 + 8) + v19 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v8 + 16) = 0;
        }
      }
      v10 = s1;
      goto LABEL_7;
    }
    goto LABEL_14;
  }
LABEL_26:
  v6 = -1;
LABEL_7:
  if ( v10 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v6;
}
