__int64 __fastcall sub_904580(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  _BYTE v11[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v11, v3);
  v12 = *(_QWORD *)(v3 + 56);
  v13 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = sub_9D5470(a1, a2, v4);
  if ( (_BYTE)v5 )
  {
    sub_A1C490(v4);
    sub_A1DB00(v4);
    v7 = *(_QWORD *)(v4 + 24);
    v8 = *(_QWORD *)v4;
    if ( *(_DWORD *)(v4 + 48)
      || !*(_BYTE *)(sub_8E5480(v4) + 51)
      || (v10 = *(unsigned int *)(v4 + 32), v9 = v7 + v8 + 72, v8 != v10) )
    {
      v9 = v7 + v8 + 40;
    }
    sub_A1BFE0(v9, v11);
    *(_QWORD *)(v9 + 56) = v12;
    *(_DWORD *)(v9 + 64) = v13;
  }
  sub_A1C0C0(v11);
  return v5;
}

