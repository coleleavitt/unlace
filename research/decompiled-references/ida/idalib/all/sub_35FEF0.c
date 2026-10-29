_BOOL8 __fastcall sub_35FEF0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rbp
  char *v16; // rbp
  _BOOL8 result; // rax
  __int64 (__fastcall *v18)(_QWORD *, char); // rax
  __int64 v19; // rax
  unsigned __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]

  v7 = a5;
  v8 = 1;
  v10 = a3;
  if ( a7 != -1 )
  {
    v10 = a5 * a3;
    v8 = a5;
  }
  do
  {
    sub_382A40(a1, a2, 0);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, a4, 7);
    v18 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v18 == sub_35CB90 )
    {
      v15 = a1[4];
      if ( v15 )
      {
        v12 = v15 + 1;
        v13 = a1[4];
        v14 = a1[3];
        --v15;
        if ( a1[5] < v12 )
        {
LABEL_10:
          v23 = v13;
          v22 = v12;
          v19 = qvector_reserve(a1 + 3, v14, v12, 1);
          v13 = v23;
          v12 = v22;
          a1[3] = v19;
          v14 = v19;
        }
      }
      else
      {
        v14 = a1[3];
        v13 = 1;
        v12 = 2;
        if ( a1[5] < 2u )
          goto LABEL_10;
      }
      a1[4] = v12;
      *(_BYTE *)(v14 + v15) = 32;
      *(_BYTE *)(a1[3] + v13) = 0;
      goto LABEL_6;
    }
    v18(a1, 32);
LABEL_6:
    v16 = sub_35FCA0(a1, nullptr, v8, a7);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a6, 0);
    sub_35FCA0(a1, v16, v8, a7);
    a1[89] = v10 + a2;
    result = sub_35CF70(a1, nullptr, nullptr);
    a2 = a1[89];
    v7 -= v8;
  }
  while ( v7 );
  return result;
}
