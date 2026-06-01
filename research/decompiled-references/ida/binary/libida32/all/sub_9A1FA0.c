__int64 *__fastcall sub_9A1FA0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = (__int64 *)sub_962E30(a2);
  if ( v2 )
  {
    v3 = v2;
    v4 = operator new(0x38u);
    sub_9A10E0(v4, v3, v5, v6, v7, v8);
    *a1 = v4;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}

