__int64 __fastcall sub_BC8260(__int64 **a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 *v4; // rdi
  __int64 (*v5)(); // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  _QWORD *v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]

  v2 = 1;
  if ( !a2 )
    return v2;
  v2 = sub_BA5B20(a1, a2);
  if ( (_BYTE)v2 )
  {
    v4 = *a1;
    v5 = *(__int64 (**)())(**a1 + 4312);
    if ( v5 == sub_BA25C0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(v4, a2) )
    {
      v6 = *(_QWORD **)(a2 + 16);
      v7 = *(_QWORD **)(a2 + 24);
      if ( v6 == v7 )
      {
        v7 = nullptr;
        v6 = nullptr;
      }
      v10 = v6;
      v8 = 0;
      v11 = 0;
      v12 = 0;
      while ( v7 != v6 || v8 )
      {
        if ( (v8 & 3) != 0 )
          v6 = (_QWORD *)sub_ECEDF0(&v10);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(**a1 + 96))(*a1, *v6) )
          return 0;
        sub_BC8020(&v10);
        v6 = v10;
        v8 = v11;
      }
      return v2;
    }
  }
  return 0;
}

