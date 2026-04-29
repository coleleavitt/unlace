_QWORD *__fastcall sub_12FDD0(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+0h] [rbp-78h] BYREF
  char v17; // [rsp+18h] [rbp-60h]
  __int64 v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+28h] [rbp-50h]
  _QWORD *v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  unsigned int *v22; // [rsp+40h] [rbp-38h]
  _QWORD *v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+50h] [rbp-28h]
  unsigned __int64 v25; // [rsp+58h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  *a1 = 0;
  a1[1] = 0;
  v16[1] = 0;
  v16[2] = 0;
  v17 = 0;
  v18 = 0;
  v12 = *a7;
  v22 = a7;
  v13 = 0;
  v19 = 0;
  v16[0] = &off_4CAAE0;
  v20 = a2;
  v21 = a6;
  v23 = a1;
  if ( (unsigned int)v12 <= 0x21 )
  {
    v14 = 0x306385000LL;
    v13 = 2 * _bittest64(&v14, v12);
  }
  v24 = v13;
  sub_126210(a2, a3, a4, a5, (__int64)v16);
  return a1;
}
