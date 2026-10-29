__int64 __fastcall sub_59B1AC(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h]

  v8 = a4 & -(__int64)getpagesize();
  v7 = (_QWORD *)sub_59B698(a1, v8);
  if ( !v7 )
    return 0;
  if ( v7[1] - (v8 - *v7) > 0x8000 )
    v5 = 0x8000;
  else
    v5 = v7[1] - (v8 - *v7);
  *a3 = v5;
  *a2 = v8;
  return 1;
}
