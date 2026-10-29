__int64 __fastcall sub_904460(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-48h]
  unsigned int v13; // [rsp+8h] [rbp-40h]
  char v14; // [rsp+Ch] [rbp-3Ch]
  int v15; // [rsp+10h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  v12 = *(void **)v3;
  v14 = *(_BYTE *)(v3 + 12);
  v15 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = sub_9D5470(a1, a2, v5);
  if ( (_BYTE)v6 )
  {
    sub_A1C490(v5);
    sub_A1DB00(v5);
    v8 = *(_QWORD *)(v5 + 24);
    v9 = *(_QWORD *)v5;
    if ( *(_DWORD *)(v5 + 48)
      || !*(_BYTE *)(sub_8E5480(v5) + 51)
      || (v11 = *(unsigned int *)(v5 + 32), v10 = v8 + v9 + 72, v9 != v11) )
    {
      v10 = v8 + v9 + 40;
    }
    *(_DWORD *)(v10 + 8) = v13;
    if ( v13 > 0x40 )
      sub_2585B30(v10);
    else
      *(_QWORD *)v10 = v12;
    *(_BYTE *)(v10 + 12) = v14;
    *(_DWORD *)(v10 + 16) = v15;
  }
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  return v6;
}

