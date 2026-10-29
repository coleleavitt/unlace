__int64 __fastcall sub_8F3410(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  if ( (unsigned __int8)sub_A1AD60(a1 + 384) )
  {
    v4 = sub_A1A2D0(*(_QWORD *)(a1 + 584), v3);
    v5 = sub_A180F0(*(_QWORD *)(a1 + 584), v3);
    v6 = (__int64 *)sub_A2E240(a1 + 384, v5, 2254, 0);
    if ( v6 )
    {
      v7 = v4;
      v8 = 1;
      sub_839C90(v6, &v7);
    }
  }
  return 0;
}

