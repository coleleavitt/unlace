__int64 __fastcall sub_74E710(_QWORD *a1, int a2, _BYTE *a3, int a4)
{
  __int64 (__fastcall *v5)(); // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v10; // [rsp+0h] [rbp-1Ch]

  if ( !a3 || *a3 != 49 || a4 != 112 )
    return 4294967290LL;
  if ( !a1 )
    return 4294967294LL;
  v5 = (__int64 (__fastcall *)())a1[8];
  a1[6] = 0;
  if ( v5 )
  {
    v6 = a1[10];
  }
  else
  {
    v5 = sub_754D30;
    a1[10] = 0;
    a1[8] = sub_754D30;
    v6 = 0;
  }
  if ( !a1[9] )
    a1[9] = &sub_754D40;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v5)(v6, 1, 7160);
  v8 = v7;
  if ( !v7 )
    return 4294967292LL;
  a1[7] = v7;
  *(_QWORD *)v7 = a1;
  *(_QWORD *)(v7 + 72) = 0;
  *(_DWORD *)(v7 + 8) = 16180;
  result = sub_74E630(a1, a2);
  if ( (_DWORD)result )
  {
    v10 = result;
    ((void (__fastcall *)(_QWORD, __int64))a1[9])(a1[10], v8);
    a1[7] = 0;
    return v10;
  }
  return result;
}
