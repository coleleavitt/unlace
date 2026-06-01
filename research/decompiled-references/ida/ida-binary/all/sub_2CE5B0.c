unsigned __int64 __fastcall sub_2CE5B0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 eah; // rax
  int v7; // edx
  const char *v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = -1;
  v4 = *(_QWORD *)(a3 + 40);
  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 16);
  get_nice_colored_name(&v10, v3, 2);
  eah = get_eah(&v10, v3, v5);
  sub_169A50(a2, (__int64)"%0*a: %s", 2 * *(_DWORD *)(eah + 24), 0.0, (const char *)v3);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, "%0*a: %s", v7, 0.0, v8);
  }
  return v12 - __readfsqword(0x28u);
}
