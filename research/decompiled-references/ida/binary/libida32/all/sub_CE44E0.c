__int64 __fastcall sub_CE44E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-34h] BYREF
  char v8; // [rsp+8h] [rbp-2Ch]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  if ( (unsigned __int8)sub_DFDF30(a1 + 384) )
  {
    v4 = sub_DFC9E0(*(_QWORD *)(a1 + 784), v3);
    v5 = sub_DFB220(*(_QWORD *)(a1 + 784));
    v6 = (__int64 *)sub_E0FF50(a1 + 384, v5, 2456, 0);
    if ( v6 )
    {
      v7 = v4;
      v8 = 1;
      sub_AC88D0(v6, &v7);
    }
  }
  return 0;
}

