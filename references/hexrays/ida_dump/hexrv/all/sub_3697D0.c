__int64 __fastcall sub_3697D0(__int64 a1)
{
  int v1; // ebp
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v5; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+8h] [rbp-B0h]
  _QWORD v7[5]; // [rsp+20h] [rbp-98h] BYREF
  char v8; // [rsp+48h] [rbp-70h]
  __int64 *v9; // [rsp+50h] [rbp-68h]
  _QWORD v10[5]; // [rsp+60h] [rbp-58h] BYREF
  char v11; // [rsp+88h] [rbp-30h]
  __int64 *v12; // [rsp+90h] [rbp-28h]
  unsigned __int64 v13; // [rsp+98h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  v1 = **(_DWORD **)(a1 + 456);
  v5 = qvector_reserve(&v5, 0, 1, 4);
  *(_DWORD *)(v5 + 4 * v6) = v1;
  *(_QWORD *)&v6 = v6 + 1;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = &off_4B8BB0;
  v9 = &v5;
  sub_11B6F0(a1, (__int64)v7);
  v2 = sub_138E40((_QWORD *)a1, 3);
  v3 = sub_DBE30(v2, *(_DWORD *)(a1 + 464) - v2);
  if ( (_BYTE)v3 )
  {
    memset(&v10[1], 0, 32);
    v11 = 0;
    v10[0] = &off_4B8BD8;
    v12 = &v5;
    LOBYTE(v3) = (unsigned int)sub_11B6F0(a1, (__int64)v10) == 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v3;
}
