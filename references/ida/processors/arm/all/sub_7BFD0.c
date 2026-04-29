__int64 __fastcall sub_7BFD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  __int128 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 16);
  v12 = __readfsqword(0x28u);
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v7 = sub_7AC30(v6, a2, a3, a4, a5, (__int64)&v10, &v9);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( v9 != -1 )
    sub_7BDC0(*(_QWORD **)(a1 + 16), (__int64)a2);
  return v7;
}
