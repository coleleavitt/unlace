__int64 __fastcall sub_8ABFF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        const char *a9,
        __int64 a10)
{
  void *v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // [rsp-10h] [rbp-C0h]
  _QWORD v18[2]; // [rsp+40h] [rbp-70h] BYREF
  char v19; // [rsp+50h] [rbp-60h]
  _QWORD v20[2]; // [rsp+60h] [rbp-50h] BYREF
  char v21; // [rsp+70h] [rbp-40h]
  unsigned __int64 v22; // [rsp+78h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( !a8 )
  {
    v13 = 33;
    set_error_string();
    return v13;
  }
  hvui_get_idaexe_path();
  v18[0] = a2;
  v19 = a4;
  v18[1] = a3;
  v20[0] = a5;
  v20[1] = a6;
  v21 = a7;
  if ( a10 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a10 + 24LL))(a10, "ida");
  v12 = sub_8ABA20((__int64)haystack, 0, "VAULT_DIFF", a9, (__int64)v18, (__int64)v20, 0);
  if ( !a10 )
  {
    if ( v12 )
      return 0;
    return 33;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a10 + 8LL))(a10, v12, v15) )
    return 33;
  return 0;
}

