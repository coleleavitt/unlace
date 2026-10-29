__int64 __fastcall sub_DA3760(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v6; // [rsp+4h] [rbp-24h] BYREF
  char v7; // [rsp+Ch] [rbp-1Ch]

  v2 = sub_DFC980(*(_QWORD *)(a1 + 400));
  v3 = (__int64 *)sub_E0FF40(a1, v2, 2485, 0);
  v4 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  if ( v3 )
  {
    v6 = v4;
    v7 = 1;
    sub_AC88D0(v3, &v6);
  }
  return 0;
}

