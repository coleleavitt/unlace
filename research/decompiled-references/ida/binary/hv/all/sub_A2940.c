__int64 __fastcall sub_A2940(_QWORD *a1, _BYTE *a2, int a3)
{
  __int64 (__fastcall *v4)(); // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // [rsp+0h] [rbp-1Ch]

  if ( !a2 || *a2 != 49 || a3 != 112 )
    return 4294967290LL;
  if ( !a1 )
    return 4294967294LL;
  v4 = (__int64 (__fastcall *)())a1[8];
  a1[6] = 0;
  if ( v4 )
  {
    v5 = a1[10];
  }
  else
  {
    v4 = sub_A6A10;
    a1[10] = 0;
    a1[8] = sub_A6A10;
    v5 = 0;
  }
  if ( !a1[9] )
    a1[9] = &sub_A6A20;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v4)(v5, 1, 7160);
  v7 = v6;
  if ( !v6 )
    return 4294967292LL;
  a1[7] = v6;
  *(_QWORD *)v6 = a1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_DWORD *)(v6 + 8) = 16180;
  result = sub_A2760(a1, 15);
  if ( (_DWORD)result )
  {
    v9 = result;
    ((void (__fastcall *)(_QWORD, __int64))a1[9])(a1[10], v7);
    a1[7] = 0;
    return v9;
  }
  return result;
}

