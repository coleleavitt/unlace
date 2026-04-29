__int64 __fastcall sub_242C0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+18h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  v9 = 0;
  v11 = v3;
  v10 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  v8 = 0;
  if ( (v5 & 2) != 0 )
  {
    sub_15900(*(_QWORD **)(a1 + 8), (__int64)&v8, a2, v5, *(_QWORD *)(v4 + 24));
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 4) == 0 )
      goto LABEL_3;
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  sub_21C40(*(__int64 **)(a1 + 8), (__int64)&v10, a2, *(_QWORD *)(v4 + 16), v5);
  v4 = *(_QWORD *)(a1 + 16);
LABEL_3:
  v6 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64 *))v4)(v4, a2, &v8);
  clear_tinfo_t();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v6;
}
