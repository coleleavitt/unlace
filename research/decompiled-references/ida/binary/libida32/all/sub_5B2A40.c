__int64 __fastcall sub_5B2A40(__int64 *a1, unsigned int *a2, char a3)
{
  unsigned int *v3; // rbx
  unsigned int v4; // r13d
  unsigned int *v5; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v3 = a2;
  if ( !a3 )
    goto LABEL_6;
  v4 = *a2;
  lock_func_range(a2, 1);
  sub_375980(0x3Bu, a2);
  lock_func_range(a2, 0);
  v5 = sub_4EE820((__int64)(a1 + 203), v4);
  v3 = v5;
  if ( v5 )
  {
    if ( *((char *)v5 + 9) >= 0 || (v3 = sub_4EE820((__int64)(a1 + 203), v5[4])) != nullptr )
    {
      sub_5A4C00(a1, (int *)v3, nullptr);
LABEL_6:
      *((_QWORD *)v3 + 1) &= ~0x1000uLL;
      sub_5ACD60((__int64)a1, v3, 0);
      v7 = 0xFFFFFFFF00000000LL;
      sub_5B1640((__int64)a1, (char *)v3, (void (__fastcall *)(_QWORD, _QWORD, __int64))sub_5A9CA0, (__int64)&v7, 0);
      return sub_5B2110(a1, (__int64)v3);
    }
  }
  return v8 - __readfsqword(0x28u);
}

