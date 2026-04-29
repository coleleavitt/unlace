__int64 __fastcall sub_E58D0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // r13
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v10; // r12
  __int64 (__fastcall *v11)(__int64, _QWORD); // r15
  unsigned int v12; // eax
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v1 = *(__int64 **)(a1 + 776);
  v14 = __readfsqword(0x28u);
  v2 = v1 + 16;
  if ( !(unsigned __int8)sub_64280(v1 + 16) )
    return v14 - __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) == 4 )
  {
    v13 = 20;
    sub_E0510(a1, v1, &v13, v1 + 16);
    clear_tinfo_t(&v13);
  }
  v13 = 21;
  sub_E0510(a1, v1 + 2, &v13, v1 + 16);
  clear_tinfo_t(&v13);
  v13 = 9;
  sub_E0510(a1, v1 + 4, &v13, v1 + 16);
  clear_tinfo_t(&v13);
  v13 = 25;
  sub_E0510(a1, v1 + 6, &v13, v1 + 16);
  clear_tinfo_t(&v13);
  v13 = 41;
  sub_E0510(a1, v1 + 8, &v13, nullptr);
  clear_tinfo_t(&v13);
  if ( !sub_641F0((__int64)(v1 + 8), (__int64)(v1 + 6)) )
    v1[9] = 0;
  if ( !*(_BYTE *)(a1 + 148) )
  {
    sub_E0510(a1, v1 + 10, (_QWORD *)(a1 + 312), nullptr);
    v10 = *(_QWORD *)(a1 + 112);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL);
    v12 = sub_64360(v1 + 10, 0);
    LODWORD(v10) = v11(v10, v12);
    if ( (_DWORD)v10 != (unsigned int)sub_64520((__int64)(v1 + 10)) )
      v1[11] = 0;
  }
  v1[13] = 0;
  v3 = v1 + 12;
  if ( *(_BYTE *)(a1 + 148) == 2 )
  {
    sub_D0B70(a1, v3);
    v3 = v1 + 12;
  }
  v4 = v1 + 14;
  sub_642D0(v4, v3);
  return sub_64040(v4, v2, v5, v6, v7, v8);
}
