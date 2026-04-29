__int64 __fastcall sub_2BCC70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int v5; // [rsp+4h] [rbp-34h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7[1] = __readfsqword(0x28u);
  v5 = -1;
  if ( v2 == -1 )
    return 0xFFFFFFFFLL;
  v3 = *a2;
  v6 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 104) += 2;
    v7[0] = v3;
  }
  else
  {
    v7[0] = 0;
  }
  sub_385E40(v7, v2, 0, &v5, 0);
  sub_13B580(v7, v2);
  sub_13B580(&v6, v2);
  return v5;
}
