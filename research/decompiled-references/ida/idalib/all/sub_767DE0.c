__int64 __fastcall sub_767DE0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rcx
  unsigned __int64 v6; // rdx
  int v8; // [rsp+Ch] [rbp-2Ch] BYREF
  int v9; // [rsp+10h] [rbp-28h] BYREF
  int v10; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v5 = (const char *)&qword_2CD44C0;
  v11 = __readfsqword(0x28u);
  v8 = 0;
  v6 = (unsigned __int8)*qword_2CD44C0;
  if ( (_BYTE)v6 == 76 )
  {
    ++qword_2CD44C0;
    v8 = sub_767900(0, (__int64)a2, v6, (unsigned __int64)&qword_2CD44C0, a5);
  }
  else
  {
    if ( (_BYTE)v6 != 80 )
      return sub_767A40(nullptr, a2, v6, v5, a5);
    ++qword_2CD44C0;
    v9 = sub_767A40(nullptr, a2, v6, (const char *)&qword_2CD44C0, a5);
    sub_76FCD0(&v10, 544106784, 4);
    a2 = (unsigned int *)&v9;
    v8 = sub_771320(&v10, &v9);
    if ( (dword_2CD44CC & 0xA0) != 0 )
      return sub_767A40(nullptr, a2, v6, v5, a5);
  }
  v9 = sub_767A40(nullptr, a2, v6, v5, a5);
  v10 = sub_771320(&v9, &v8);
  return sub_772CF0(&v10);
}
