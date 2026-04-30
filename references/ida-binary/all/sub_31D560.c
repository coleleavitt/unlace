__int64 __fastcall sub_31D560(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  const char *v10; // rsi
  double v11; // xmm4_8
  double v12; // xmm5_8
  const char *v13; // rdx
  unsigned int v14; // ebx
  const char *v16; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]
  unsigned __int64 v18; // [rsp+18h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v10 = (_BYTE *)(&dword_0 + 1);
  sub_319840((__int64)&v16, 1u, v9, (__int64)"Export script to file", a2, a3, a4, a5, v11, v12, a8, a9);
  if ( v17 <= 1 )
    goto LABEL_6;
  if ( !(unsigned __int8)qfileexist(v16) )
    goto LABEL_10;
  v13 = &s1;
  if ( v17 )
    v13 = v16;
  v10 = "HIDECANCEL\nFile '%s' already exists.\nDo you want to overwrite it?";
  if ( (unsigned int)sub_1698A0(0, (int)"HIDECANCEL\nFile '%s' already exists.\nDo you want to overwrite it?", v13) == 1 )
  {
LABEL_10:
    sub_31D450(a1, 1);
    v10 = &s1;
    if ( v17 )
      v10 = v16;
    (*(void (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 72LL))(*a1, v10);
    v14 = 1;
  }
  else
  {
LABEL_6:
    v14 = 0;
  }
  if ( v16 )
  {
    v17 = 0;
    qfree(v16, v10);
  }
  return v14;
}
