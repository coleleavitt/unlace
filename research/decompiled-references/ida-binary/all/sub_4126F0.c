QT::QString *__fastcall sub_4126F0(QT::QString *this, __int64 a2, unsigned int a3, __int64 a4)
{
  bool v5; // zf
  char v7; // dl
  __int64 v9; // rax
  __int64 v10; // rsi
  const char *v11; // r12
  size_t v12; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+8h] [rbp-40h]
  __m128i ptr; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v5 = *(_BYTE *)(a2 + 200) == 0;
  v17 = __readfsqword(0x28u);
  if ( !v5 && *(_BYTE *)(a2 + 201) )
  {
    sub_412590(this, a2, a3, a4);
  }
  else
  {
    v7 = *(_BYTE *)(a2 + 202);
    if ( v7 )
    {
      sub_40C610((__m128i *)this, a2, a3, a4);
    }
    else if ( *(_BYTE *)(a2 + 203) )
    {
      v9 = a2 + 72;
      v10 = a2 + 48;
      if ( (a3 & 0x10) != 0 )
        v10 = v9;
      v11 = &s1;
      v12 = 0;
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 )
      {
        v12 = v13 - 1;
        v11 = *(const char **)v10;
        v7 = v13 - 1 < 0;
      }
      if ( !v11 || v7 )
      {
        v12 = 0;
        if ( v11 )
        {
          v15 = a4;
          v12 = strlen(v11);
          a4 = v15;
        }
      }
      v14 = a4;
      QT::QString::fromUtf8(&ptr, v12, v11);
      sub_40C430((__m128i *)this, &ptr, 37, a3, v14);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
    }
    else if ( *(_BYTE *)(a2 + 233) )
    {
      sub_40FCF0(this, (_QWORD *)a2, a3, a4);
    }
    else if ( *(_BYTE *)(a2 + 234) )
    {
      sub_410120(this, (_QWORD *)a2, a3, a4);
    }
    else if ( *(_BYTE *)(a2 + 235) )
    {
      sub_40D220((__m128i *)this, (__int64 *)a2, a3, a4);
    }
    else
    {
      sub_40ED60((__m128i *)this, (__int64 *)a2, a3, a4);
    }
  }
  return this;
}
