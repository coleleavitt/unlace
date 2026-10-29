__int64 __fastcall sub_9D6B20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-38h]
  unsigned int v14; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v4;
  v13 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4CF0(a1, a2, v5, 2) && (LOBYTE(v8) = sub_9D52F0(a1, a2, v5, 2), v6 = v8, (_BYTE)v8) )
  {
    sub_A1C490(v5);
    sub_A1DB00(v5);
    v9 = *(_QWORD *)(v5 + 24);
    v10 = *(_QWORD *)v5;
    if ( *(_DWORD *)(v5 + 48)
      || !*(_BYTE *)(sub_8E5480(v5) + 51)
      || (v12 = *(unsigned int *)(v5 + 32), v11 = v9 + v12 + 72, v12 != v10) )
    {
      v11 = v9 + v10 + 40;
    }
    *(_DWORD *)(v11 + 8) = v14;
    if ( v14 > 0x40 )
      sub_2585B30(v11);
    else
      *(_QWORD *)v11 = v13;
  }
  else
  {
    v6 = 0;
  }
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v6;
}

