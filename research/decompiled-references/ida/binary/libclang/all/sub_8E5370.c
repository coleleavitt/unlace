__int64 __fastcall sub_8E5370(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // r12
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+8h] [rbp-20h]

  v2 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
  v3 = (__int64 *)sub_A2E1A0(a1, v2, 110, 0);
  result = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
  if ( v3 )
  {
    v5 = result;
    v6 = 1;
    return sub_839C90(v3, &v5);
  }
  return result;
}

