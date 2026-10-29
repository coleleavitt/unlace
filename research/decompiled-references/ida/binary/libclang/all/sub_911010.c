__int64 __fastcall sub_911010(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-60h]
  char v17; // [rsp+Ch] [rbp-5Ch]
  int v18; // [rsp+10h] [rbp-58h]
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]
  int v22; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v16 = v4;
  v15 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v17 = v4;
  v18 = v3;
  sub_A1A5E0(v2, 24);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = sub_9E26A0(a1, a2, v5);
  if ( (_BYTE)v6 )
  {
    if ( !*(_DWORD *)(v5 + 48) && *(_QWORD *)(v5 + 24) && *(_DWORD *)(v5 + 32) )
      sub_A1DB00(v5);
    v7 = sub_8E91E0(v5);
    if ( v7 )
    {
      sub_781830(v7);
      v20 = v16;
      if ( v16 > 0x40 )
        sub_2585B30(&v19);
      else
        v19 = v15;
      v8 = *(_QWORD *)(v5 + 24);
      v21 = v17;
      v22 = v18;
      v9 = *(_QWORD *)v5;
      if ( *(_DWORD *)(v5 + 48)
        || !*(_BYTE *)(sub_8E5480(v5) + 51)
        || (v14 = *(unsigned int *)(v5 + 32), v10 = v8 + v14 + 72, v14 != v9) )
      {
        v10 = v8 + v9 + 40;
      }
      if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
        operator delete[](*(void **)v10);
      *(_QWORD *)v10 = v19;
      *(_DWORD *)(v10 + 8) = v20;
      *(_BYTE *)(v10 + 12) = v21;
      *(_DWORD *)(v10 + 16) = v22;
    }
    else
    {
      v12 = sub_8FA0E0((__int64 *)v5);
      v13 = v12;
      if ( *(_DWORD *)(v12 + 8) <= 0x40u && v16 <= 0x40 )
      {
        *(_QWORD *)v12 = v15;
        *(_DWORD *)(v12 + 8) = v16;
      }
      else
      {
        sub_2585EA0(v12, &v15);
      }
      *(_BYTE *)(v13 + 12) = v17;
      *(_DWORD *)(v13 + 16) = v18;
    }
  }
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  return v6;
}

