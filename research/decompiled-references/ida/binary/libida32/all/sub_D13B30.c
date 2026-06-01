__int64 __fastcall sub_D13B30(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-24h] BYREF
  char v9; // [rsp+8h] [rbp-1Ch]

  if ( *a4 )
    return 1;
  v5 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v6 = (__int64 *)sub_E0FED0(a1, v5, 2508, 0);
  v7 = sub_EC8B80(*(_QWORD *)(v5 + 24));
  if ( v6 )
  {
    v8 = v7;
    v9 = 1;
    sub_AC88D0(v6, &v8);
  }
  return 0;
}

