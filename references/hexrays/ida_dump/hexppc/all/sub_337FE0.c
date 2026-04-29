unsigned __int64 __fastcall sub_337FE0(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // r13
  int v7; // eax
  const char *v8; // r14
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  const char *v12; // rcx
  const char *v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = *(_DWORD *)(a4 + 8) == -1;
  v17 = __readfsqword(0x28u);
  if ( v4 && !batch )
  {
    v6 = a4 + 8;
    sub_37F2D0(*(_QWORD *)(a3 + 112), a4 + 8, 0);
  }
  else
  {
    v6 = a4 + 8;
    sub_32CC90((__int64)&v15, a4 + 8, a4);
    sub_69660((__int64)"%a: %s\n", a1, *(const char **)(a4 + 16));
    if ( !batch )
      sub_2B11F0(
        (__int64)"Decompilation failure:\n%a: %s\n\nPlease refer to the manual to find appropriate actions",
        a1,
        *(const char **)(a4 + 16));
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
    }
  }
  v7 = *(_DWORD *)(a3 + 1336);
  if ( (v7 & 0x8000) != 0 )
  {
    v8 = s1;
    if ( *(_QWORD *)(a3 + 1320) )
      v8 = *(const char **)(a3 + 1312);
    v9 = "w";
    if ( (v7 & 1) != 0 )
      v9 = "a";
    v11 = qfopen(v8, v9);
    if ( v11 )
    {
      sub_32CC90((__int64)&v15, v6, v10);
      v12 = s1;
      if ( v16 )
        LODWORD(v12) = v15;
      sub_63080(v11, (__int64)"#error \"%a: %s (funcsize=%d)\"\n", a1, *(const char **)(a4 + 16), (_DWORD)v12);
      if ( v15 )
      {
        v16 = 0;
        qfree(v15);
      }
      qfclose(v11);
    }
    else
    {
      v14 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_2B11F0((__int64)"%s: %s", v8, v14);
    }
    qexit(0);
  }
  return v17 - __readfsqword(0x28u);
}
