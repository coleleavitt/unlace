__int64 __fastcall sub_910C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-60h]
  void *v15; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-50h]
  void *v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-40h]
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v4;
  v13 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = sub_9E26A0(a1, a2, v5);
  if ( (_BYTE)v6 )
  {
    if ( !*(_DWORD *)(v5 + 48) && *(_QWORD *)(v5 + 24) && *(_DWORD *)(v5 + 32) )
      sub_A1DB00(v5);
    v7 = sub_8E91E0(v5);
    if ( v7 )
    {
      v8 = sub_781830(v7);
      sub_25877E0(&v17, &v13, v8);
      sub_2587E80(&v19, &v17, v14);
      v16 = v20;
      if ( v20 > 0x40 )
      {
        sub_2585B30(&v15);
        if ( v20 > 0x40 && v19 )
          operator delete[](v19);
      }
      else
      {
        v15 = v19;
      }
      if ( v18 > 0x40 && v17 )
        operator delete[](v17);
      v9 = sub_8F8D30((__int64 *)v5);
      v10 = v9;
      if ( *(_DWORD *)(v9 + 8) > 0x40u && *(_QWORD *)v9 )
        operator delete[](*(void **)v9);
      *(_QWORD *)v10 = v15;
      *(_DWORD *)(v10 + 8) = v16;
    }
    else
    {
      v12 = sub_8F8D30((__int64 *)v5);
      if ( *(_DWORD *)(v12 + 8) <= 0x40u && v14 <= 0x40 )
      {
        *(_QWORD *)v12 = v13;
        *(_DWORD *)(v12 + 8) = v14;
      }
      else
      {
        sub_2585EA0(v12, &v13);
      }
    }
  }
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v6;
}

