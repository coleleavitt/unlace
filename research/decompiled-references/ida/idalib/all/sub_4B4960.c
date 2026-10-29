__int64 __fastcall sub_4B4960(__int64 a1, __int64 a2, unsigned int a3, __m128i *a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int32 v8; // edx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int16 *v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rdx

  if ( (unsigned int)a2 > 8 )
  {
    if ( !under_debugger )
      interr(1403);
    BUG();
  }
  if ( a1 )
  {
    v6 = sub_4B4650(a1 + 8, a2, a3, a4);
    result = sub_4B4850(a1 + 8, a2, v6, a3, a4);
  }
  else
  {
    result = sub_4B48E0(a2, a3, a4);
  }
  if ( !result && !(_DWORD)a2 && a3 == 75 )
  {
    v8 = a4->m128i_i32[0];
    if ( a4->m128i_i32[0] > 0x2Fu )
    {
      v15 = (__int64 *)a4->m128i_i64[1];
      v16 = v15 + 1;
      a4->m128i_i64[1] = (__int64)(v15 + 1);
      v11 = *v15;
    }
    else
    {
      v9 = a4[1].m128i_i64[0];
      v10 = v8 + 8;
      a4->m128i_i32[0] = v10;
      v11 = *(_QWORD *)(v9 + v8);
      if ( (unsigned int)v10 <= 0x2F )
      {
        v12 = v8 + 16;
        a4->m128i_i32[0] = v12;
        v13 = *(_QWORD *)(v9 + v10);
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = (unsigned __int16 *)(v12 + v9);
          a4->m128i_i32[0] = v8 + 24;
          return (int)ieee_realcvt(v11, v13, *v14);
        }
        v14 = (unsigned __int16 *)a4->m128i_i64[1];
LABEL_16:
        a4->m128i_i64[1] = (__int64)(v14 + 4);
        return (int)ieee_realcvt(v11, v13, *v14);
      }
      v16 = (_QWORD *)a4->m128i_i64[1];
    }
    v14 = (unsigned __int16 *)(v16 + 1);
    a4->m128i_i64[1] = (__int64)(v16 + 1);
    v13 = *v16;
    goto LABEL_16;
  }
  return result;
}
