__int64 __fastcall sub_3BA6E0(__int64 a1, const __m128i *a2, double a3)
{
  char v4; // al
  __int64 result; // rax
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  const char *v11; // rdx
  const char *v12; // rdx
  __int64 *v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  unsigned int v17; // [rsp+Ch] [rbp-4Ch]
  const char *v18; // [rsp+10h] [rbp-48h] BYREF
  __int128 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v4 = sub_38BBD0((__int64)a2, a2[2].m128i_i32[3], 31, a3);
  if ( (v4 & 8) != 0 )
  {
    v7 = 2;
    v6 = (_QWORD *)sub_38DC60((__int64)&a2[3].m128i_i64[1]);
  }
  else if ( (v4 & 0x10) != 0 )
  {
    v6 = nullptr;
    v7 = 1;
  }
  else
  {
    result = v4 & 6;
    if ( !(_DWORD)result )
      return result;
    v6 = nullptr;
    v7 = 0;
  }
  v18 = nullptr;
  v19 = 0;
  if ( (unsigned __int8)sub_3E60A0(&v18, v7) )
  {
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        if ( v6 )
        {
          v11 = s1;
          if ( (_QWORD)v19 )
            v11 = v18;
          result = (unsigned __int8)sub_38FBF0((__int64)a2, v6, v11);
          goto LABEL_17;
        }
        goto LABEL_21;
      }
      v12 = s1;
      if ( (_QWORD)v19 )
        v12 = v18;
      sub_25CAF0(a2[2].m128i_i64[0], a2 + 4, v12, v8, v9, v10);
      v13 = (__int64 *)a2[2].m128i_i64[0];
      v14 = (const char *)*v13;
      sub_2B6A10(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), *v13, v13[9]);
LABEL_16:
      sub_3906A0((__int64 *)a2[2].m128i_i64[0], (__int64)v14, v15);
      result = 1;
      goto LABEL_17;
    }
    v16 = sub_1CE420(*(_QWORD *)(a2[2].m128i_i64[0] + 8));
    if ( v16 )
    {
      v14 = s1;
      if ( (_QWORD)v19 )
        v14 = v18;
      set_func_cmt(v16, v14, 1);
      goto LABEL_16;
    }
  }
LABEL_21:
  result = 0;
LABEL_17:
  if ( v18 )
  {
    v17 = result;
    *(_QWORD *)&v19 = 0;
    qfree(v18);
    return v17;
  }
  return result;
}
