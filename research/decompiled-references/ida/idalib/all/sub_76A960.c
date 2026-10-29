__int64 __fastcall sub_76A960(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  const char *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v10; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v9 = (unsigned int)a1;
  v11 = __readfsqword(0x28u);
  v5 = 0;
  v10 = 0;
  if ( BYTE2(a1) != 0xC0 )
    goto LABEL_8;
  v6 = (const char *)&qword_2CD44C0;
  v7 = (unsigned __int8)*qword_2CD44C0;
  if ( (_BYTE)v7 == 83 )
  {
    ++qword_2CD44C0;
    v10 = sub_767690((__int64)a1, (__int64)a2, v7, (char *)&qword_2CD44C0, a5);
    v5 = HIWORD(v10);
    if ( BYTE2(v10) == 0xE0 )
      goto LABEL_6;
LABEL_8:
    sub_76E6C0(a1, a2, v5, a4);
  }
  if ( (_BYTE)v7 == 80 )
  {
    ++qword_2CD44C0;
    sub_76A7D0(a1, a2, v7, (__int64)&qword_2CD44C0, a5);
  }
  v10 = sub_767A40((char *)&qword_E0, a2, v7, v6, a5);
  sub_772B70(qword_2CD44D0, &v10);
LABEL_6:
  sub_76FD20(&v9, 46);
  sub_770B70(&v9, &v10);
  return v9;
}
