__int64 __fastcall sub_4FBFB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(); // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 24);
  v8 = 0;
  v9 = 0;
  v4 = sub_4C64F0(v3, a2, &v8);
  if ( (_BYTE)v4 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 24LL);
    if ( v6 == sub_4FE4B0 )
      LOBYTE(v4) = v9 == 0;
    else
      v4 = ((__int64 (__fastcall *)(__int64, __int64 *))v6)(v5, &v8);
  }
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  return v4;
}

