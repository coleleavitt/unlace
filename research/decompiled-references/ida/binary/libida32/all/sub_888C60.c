__int64 sub_888C60(_DWORD *a1, __int64 a2, ...)
{
  __int64 (__fastcall *v2)(__int64, int); // r8
  bool (__fastcall *v3)(__int64, int); // rax
  int v4; // eax
  gcc_va_list va; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-D0h]

  va_start(va, a2);
  v7 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 16LL);
  if ( v2 != sub_888800 )
    return ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __va_list_tag *))v2)(a1, 1, a2, va);
  v3 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 24LL);
  if ( v3 != sub_8884F0 )
  {
    if ( v3((__int64)a1, 1) )
    {
      v4 = a1[4];
      goto LABEL_4;
    }
    return 0;
  }
  v4 = a1[4];
  if ( v4 > 1 )
    return 0;
LABEL_4:
  if ( v4 != 1 && (v4 & 0xFFFFFFFD) != 0 )
    sub_888740();
  __fprintf_chk();
  return qvfprintf();
}

