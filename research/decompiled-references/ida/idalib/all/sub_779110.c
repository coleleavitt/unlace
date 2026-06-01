__int64 __fastcall sub_779110(__int64 a1, char *a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  char *v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned __int64 v9; // rax
  char *s; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-58h] BYREF
  int v12[2]; // [rsp+28h] [rbp-40h]

  s = a2;
  *(_QWORD *)v12 = __readfsqword(0x28u);
  v4 = sub_778480(a1, (const char **)&s);
  if ( v4 == -1 )
    return 5;
  v5 = s;
  if ( !*s )
  {
    return 5;
  }
  else
  {
    v6 = v4;
    v7 = 5;
    if ( !strchr(s, 47) )
    {
      sub_776CB0((__int64)ptr, a1, v6, 1);
      v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**(_QWORD **)(a1 + 40) + 24LL))(
             *(_QWORD *)(a1 + 40),
             ptr[0],
             v5);
      if ( v9 == -1 )
      {
        v7 = 2;
      }
      else
      {
        v7 = sub_7764C0((_QWORD *)a1, v6, v9, a3);
        if ( !(_BYTE)v7 )
        {
          sub_39ADA0(0x43u, *(_QWORD *)(a1 + 32), a2, a3);
          sub_774BB0(a1, 67, a2, a3);
        }
      }
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
    }
  }
  return v7;
}
