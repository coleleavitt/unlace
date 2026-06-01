__int64 __fastcall sub_2149F20(__int64 a1)
{
  _DWORD **v2; // rdi
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int16 v5; // [rsp+20h] [rbp-18h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 224LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
    return 0;
  }
  else
  {
    v4 = "unexpected token in '.subsections_via_symbols' directive";
    v5 = 259;
    return sub_21543E0(v2, &v4, 0, 0);
  }
}
