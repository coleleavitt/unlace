__int64 __fastcall sub_2276730(__int64 **a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int i; // r14d
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int64 v12; // rbx
  _QWORD *v13; // rdx
  __m128 *v14; // r15
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars8; // [rsp+8h] [rbp+8h]
  void *vars18; // [rsp+18h] [rbp+18h]
  signed __int64 vars20; // [rsp+20h] [rbp+20h]
  _QWORD dest[3]; // [rsp+28h] [rbp+28h] BYREF
  char vars40; // [rsp+40h] [rbp+40h] BYREF
  void *vars58; // [rsp+58h] [rbp+58h]
  __int64 _68; // [rsp+68h] [rbp+68h] BYREF

  for ( i = 0; ; i = 1 )
  {
    v8 = sub_2273810(**a1, a2, a3, a4, a5, a6);
    v12 = *(_QWORD *)(v8 + 32);
    vars0 = *(_DWORD *)v8;
    v13 = dest;
    vars18 = dest;
    v14 = *(__m128 **)(v8 + 24);
    vars8 = _mm_loadu_si128((const __m128i *)(v8 + 8));
    if ( (__m128 *)((char *)v14 + v12) && !v14 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v12 > 0xF )
    {
      if ( v12 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v7 = (_QWORD *)operator new(v12 + 1);
      dest[0] = v12;
      vars18 = v7;
LABEL_18:
      a2 = v14;
      memcpy(v7, v14, v12);
      v7 = vars18;
      goto LABEL_3;
    }
    if ( v12 == 1 )
    {
      LOBYTE(dest[0]) = v14->m128_i8[0];
      v7 = dest;
      goto LABEL_3;
    }
    v7 = dest;
    if ( v12 )
      goto LABEL_18;
LABEL_3:
    vars20 = v12;
    *((_BYTE *)v7 + v12) = 0;
    if ( vars0 == 4 )
    {
      sub_2276410((__int64)a1, (__int64)a2, (__int64)v13, v9, v10, v11);
      goto LABEL_7;
    }
    if ( vars0 != 3 )
      break;
    a2 = (__m128 *)**a1;
    sub_2273D80((__int64)&vars40, a2, (__int64)v13, v9, v10, v11);
    if ( vars58 != &_68 )
      operator delete(vars58);
LABEL_7:
    if ( vars18 != dest )
      operator delete(vars18);
  }
  if ( vars18 != &vars0 )
    operator delete(vars18);
  return i;
}
