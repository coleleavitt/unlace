__int64 __fastcall sub_3BF1D0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v3; // r12d
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1[2];
  v8[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(v2 + 20);
  if ( *(_DWORD *)(v2 + 16) != v3 )
  {
    v5 = sub_510230(a1, a2);
    v6 = a1[2];
    if ( v5 == 2 )
      v3 = *(_DWORD *)(v6 + 16);
    else
      v3 = *(_DWORD *)(v6 + 20);
  }
  if ( v3 <= 8 )
    return (unsigned __int16)sub_3BEE30(a1, a2);
  sub_3BEFF0(a1, &v7, a2);
  sub_3BEFF0(a1, v8, *(_QWORD *)(a1[3] + 16) & (a2 + 1));
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
    return (v7 << v3) | v8[0];
  else
    return v7 | (v8[0] << v3);
}
