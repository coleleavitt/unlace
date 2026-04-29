__int64 __fastcall sub_36EA50(__int64 a1)
{
  int v1; // ebp
  int v2; // eax
  unsigned int v3; // ebp
  _DWORD *v5; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+8h] [rbp-B0h]
  _QWORD v7[5]; // [rsp+20h] [rbp-98h] BYREF
  char v8; // [rsp+48h] [rbp-70h]
  _DWORD **v9; // [rsp+50h] [rbp-68h]
  _QWORD v10[5]; // [rsp+60h] [rbp-58h] BYREF
  char v11; // [rsp+88h] [rbp-30h]
  _DWORD **v12; // [rsp+90h] [rbp-28h]
  unsigned __int64 v13; // [rsp+98h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  v1 = **(_DWORD **)(a1 + 456);
  v5 = (_DWORD *)qvector_reserve();
  *v5 = v1;
  *(_QWORD *)&v6 = v6 + 1;
  memset(&v7[1], 0, 32);
  v8 = 0;
  v7[0] = off_4E6190;
  v9 = &v5;
  sub_11FBB0(a1, (__int64)v7);
  v2 = sub_13D300((_QWORD *)a1, 3);
  v3 = sub_E02F0(v2, *(_DWORD *)(a1 + 464) - v2);
  if ( (_BYTE)v3 )
  {
    memset(&v10[1], 0, 32);
    v11 = 0;
    v10[0] = off_4E61B8;
    v12 = &v5;
    LOBYTE(v3) = (unsigned int)sub_11FBB0(a1, (__int64)v10) == 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}
