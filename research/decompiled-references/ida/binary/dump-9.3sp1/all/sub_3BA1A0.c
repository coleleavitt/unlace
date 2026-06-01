__int64 __fastcall sub_3BA1A0(__int64 a1, const __m128i *a2)
{
  char v3; // al
  __int64 result; // rax
  __int64 *v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  const char *v10; // rdx
  const char *v11; // rdx
  __int64 *v12; // rax
  const char *v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-4Ch]
  const char *v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = sub_38B690((__int64)a2, a2[2].m128i_i32[3], 31);
  if ( (v3 & 8) != 0 )
  {
    v6 = 2;
    v5 = (__int64 *)sub_38D720((__int64)&a2[3].m128i_i64[1]);
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v5 = nullptr;
    v6 = 1;
  }
  else
  {
    result = v3 & 6;
    if ( !(_DWORD)result )
      return result;
    v5 = nullptr;
    v6 = 0;
  }
  v16 = nullptr;
  v17 = 0;
  if ( (unsigned __int8)sub_3E5B60(&v16, v6) )
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
      {
        if ( v5 )
        {
          v10 = s1;
          if ( (_QWORD)v17 )
            v10 = v16;
          result = (unsigned __int8)sub_38F6B0((__int64)a2, v5, v10);
          goto LABEL_17;
        }
        goto LABEL_21;
      }
      v11 = s1;
      if ( (_QWORD)v17 )
        v11 = v16;
      sub_25C730(a2[2].m128i_i64[0], a2 + 4, v11, v7, v8, v9);
      v12 = (__int64 *)a2[2].m128i_i64[0];
      v13 = (const char *)*v12;
      sub_2B6650(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), *v12, v12[9]);
LABEL_16:
      sub_390160((__int64 *)a2[2].m128i_i64[0], (__int64)v13, v14);
      result = 1;
      goto LABEL_17;
    }
    if ( sub_1CE9E0(*(_QWORD *)(a2[2].m128i_i64[0] + 8)) )
    {
      v13 = s1;
      if ( (_QWORD)v17 )
        v13 = v16;
      set_func_cmt();
      goto LABEL_16;
    }
  }
LABEL_21:
  result = 0;
LABEL_17:
  if ( v16 )
  {
    v15 = result;
    *(_QWORD *)&v17 = 0;
    qfree((__int64)v16);
    return v15;
  }
  return result;
}
