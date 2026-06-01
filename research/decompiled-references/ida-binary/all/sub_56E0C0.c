_QWORD *__fastcall sub_56E0C0(_QWORD *a1, unsigned int a2, int a3, double a4, double a5, double a6, __m128 a7)
{
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+0h] [rbp-28h] BYREF
  int v13; // [rsp+8h] [rbp-20h]

  v8 = off_8C52B8(0x10u);
  v13 = a3;
  v12 = v8;
  v8[1] = 0;
  *v8 = 0;
  sub_56D830((__int64)a1, a2, (__int64 (__fastcall *)(__int64, __int64))sub_55C9B0, (__int64)&v12, -1, a4, a5, a6, a7);
  v9 = *a1 + 48LL * a2;
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      off_8C52A0(*(void **)v10);
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = 0;
      v10 = *(_QWORD *)(v9 + 8);
    }
    off_8C52A0((void *)v10);
  }
  result = v12;
  *(_QWORD *)(v9 + 8) = v12;
  return result;
}
