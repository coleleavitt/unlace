__int64 __fastcall sub_2450F0(_QWORD *a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v6; // rbx
  const char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rsi
  const char *v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v6 = sub_1CB990(a1, a2);
  if ( !*a4 )
  {
    v11 = a1[188];
    if ( a3 == -1 )
      a3 = *(_DWORD *)(v11 + 80);
    sub_327500(&v12, v11, a3, 2);
    copy_tinfo_t(a4, &v12);
    clear_tinfo_t(&v12);
  }
  v12 = nullptr;
  v13 = 0;
  if ( (unsigned __int64)(v6 + 9) <= 0x12 )
  {
    sub_67670((__int64 *)&v12, (__int64)"%d", v6);
  }
  else if ( v6 > 9 )
  {
    sub_67670((__int64 *)&v12, (__int64)"0x%a", 0.0);
  }
  else
  {
    sub_67670((__int64 *)&v12, (__int64)"-0x%a", 0.0);
  }
  v7 = s1;
  if ( (_QWORD)v13 )
    v7 = v12;
  v8 = sub_23DE40(1, (__int64)a4, (__int64)"STACK[%s]", v7);
  *(_DWORD *)(v8 + 56) |= 0x82u;
  v9 = v8;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v9;
}
