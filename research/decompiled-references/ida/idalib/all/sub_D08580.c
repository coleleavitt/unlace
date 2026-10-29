__int64 __fastcall sub_D08580(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-24h] BYREF
  char v8; // [rsp+8h] [rbp-1Ch]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v4 = sub_E206C0(*(_QWORD *)(a1 + 784));
  v5 = (__int64 *)sub_E33C80(a1 + 384, v4, 2485, 0);
  v6 = sub_E20720(*(_QWORD *)(a1 + 784), v3);
  if ( v5 )
  {
    v7 = v6;
    v8 = 1;
    sub_AEC610(v5, &v7);
  }
  return 0;
}
