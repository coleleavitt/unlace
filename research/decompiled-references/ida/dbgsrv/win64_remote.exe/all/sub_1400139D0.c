/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400139D0
// Address: 0x00000001400139D0

//----- (00000001400139D0) ----------------------------------------------------
bool __fastcall sub_1400139D0(
        __int64 a1,
        __int64 **a2,
        __int64 (__fastcall **a3)(_QWORD, _BYTE *, struct __crt_locale_pointers *),
        __int64 (__fastcall **a4)(_QWORD, _BYTE *, struct __crt_locale_pointers *),
        __int64 (__fastcall **a5)(_QWORD, _BYTE *, struct __crt_locale_pointers *))
{
  double v5; // xmm2_8
  __int64 *v9; // rbx
  __int64 *i; // rax
  char *v11; // rbx
  _QWORD *v12; // rdi
  const char *v13; // rax
  _BYTE *v14; // rax
  bool v16; // bl
  _BYTE v17[1024]; // [rsp+30h] [rbp-838h] BYREF
  struct _exception Str[25]; // [rsp+430h] [rbp-438h] BYREF

  v9 = *a2;
  for ( i = (__int64 *)(*a2)[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( i[4] >= (unsigned __int64)a3 )
      v9 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v9 + 25) || (unsigned __int64)a3 < v9[4] || v9 == *a2 )
  {
    sub_140012440(a1, (struct __crt_locale_pointers *)"get_dll_exports: can't find dll name for imagebase %a", v5);
    return 0;
  }
  else
  {
    if ( v9[9] )
      v11 = (char *)v9[8];
    else
      v11 = (char *)Str1;
    sub_1400621E0(Str, v11, 1024);
    if ( *(_DWORD *)(a1 + 236) != 8 )
      sub_140019C10((char *)Str, 1024);
    v12 = sub_1400639D0(Str, 0);
    if ( v12 )
      goto LABEL_23;
    v13 = sub_14005D9D0(v11);
    if ( stricmp(v13, "ntdll32.dll") )
      return 0;
    if ( sub_14005DC40((unsigned __int8 *)v11) )
    {
      sub_1400621E0(v17, v11, 1024);
      v14 = sub_14005D9D0(v17);
      sub_1400621E0(v14, "ntdll.dll", (char *)Str - v14);
      v11 = v17;
    }
    else
    {
      v11 = "C:\\Windows\\SysWOW64\\ntdll.dll";
      if ( *(_DWORD *)(a1 + 236) == 8 )
        v11 = "C:\\Windows\\System32\\ntdll.dll";
    }
    v12 = sub_1400639D0((struct _exception *)v11, 0);
    if ( v12 )
    {
LABEL_23:
      v16 = sub_140014620(a1, v11, (__int64)v12, a3, a4, a5);
      sub_140063970(v12);
      return v16;
    }
    else
    {
      return 0;
    }
  }
}
// 140013B9D: variable 'v5' is possibly undefined
