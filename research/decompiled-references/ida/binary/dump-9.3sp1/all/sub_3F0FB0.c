unsigned __int64 __fastcall sub_3F0FB0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 3800) )
  {
    v4 = *(_DWORD *)(a1 + 688);
    v10[0] = 0;
    v10[1] = 0;
    sub_63E80(v10, v4, 3);
    v11 = 0;
    v12 = 0;
    sub_64640(a3, v10, v6, v7, v8, v9);
    sub_317C60(a3 + 2, (__int64)&v11);
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    qfree(v10[0]);
  }
  return v13 - __readfsqword(0x28u);
}
