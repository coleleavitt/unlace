__int64 __fastcall sub_225B380(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  const char *v8; // [rsp+0h] [rbp-38h] BYREF
  __int16 v9; // [rsp+20h] [rbp-18h]

  if ( *(_DWORD *)(a2 + 32) == 1 )
  {
    *a3 = sub_2270420(a2, a4);
    a3[1] = v6;
    return 1;
  }
  else
  {
    v7 = *a1;
    v9 = 259;
    v8 = "expected string";
    sub_226EEF0(v7, a2, &v8, 0);
    return 0;
  }
}
