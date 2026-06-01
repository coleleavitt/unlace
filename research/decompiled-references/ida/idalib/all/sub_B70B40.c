__int64 __fastcall sub_B70B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v5 = (__int64 *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v5 = (__int64 *)*v5;
  if ( v5 && (unsigned __int8)sub_B70AD0(*v5, a2, a3, a4) )
  {
    v6 = *v5;
    v8[1] = v5 + 1;
    v8[0] = v6;
    v4 = (unsigned int)sub_F6CE20(v8);
    sub_F6CCB0(v8);
  }
  return (v4 << 32) | *(unsigned int *)(a1 + 56);
}
