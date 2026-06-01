__int64 __fastcall sub_329A90(__int64 *a1, __int64 a2, char a3)
{
  char v3; // cl
  __int64 v5; // r13
  signed __int64 v6; // rdx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int tinfo_property; // eax
  __int64 v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)a2;
  v15 = __readfsqword(0x28u);
  if ( v3 == 10 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( (*(_BYTE *)v5 & 0xFB) == 1 )
    {
      if ( (get_tinfo_property() & 0xF) == 0xA )
        tinfo_property = get_tinfo_property();
      else
        tinfo_property = get_tinfo_size();
      v3 = *(_BYTE *)v5;
      v6 = tinfo_property;
      goto LABEL_4;
    }
    return 0;
  }
  v5 = a2;
  if ( (v3 & 0xFB) != 1 )
    return 0;
  v6 = *(int *)(a2 + 4);
LABEL_4:
  if ( v3 != 1 )
    return sub_3293B0(a1, v5, v6, a3, 0);
  v8 = *(_DWORD *)(v5 + 8);
  v12[0] = 0;
  v12[1] = 0;
  sub_63E80(v12, v8, v6);
  v13 = nullptr;
  v14 = 0;
  sub_64280(a1, v12);
  sub_316CB0(a1 + 2, &v13, v9, v10);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree((__int64)v13);
  }
  qfree(v12[0]);
  return 1;
}
