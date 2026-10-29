unsigned __int64 __fastcall sub_5CAA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  bool v4; // zf
  const char *v6; // rdx
  unsigned int (__fastcall *v7)(__int64 *, _BYTE *, const char *); // rax
  _BYTE v9[88]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-30h]

  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v10 = __readfsqword(0x28u);
  v6 = haystack;
  v7 = *(unsigned int (__fastcall **)(__int64 *, _BYTE *, const char *))(v3 + 96);
  if ( !v4 )
    v6 = *(const char **)a2;
  if ( !v7(a1, v9, v6) )
    sub_6AEF0(a1[1], a2, v9, a3);
  return v10 - __readfsqword(0x28u);
}

