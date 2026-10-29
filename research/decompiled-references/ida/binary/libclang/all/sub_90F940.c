__int64 __fastcall sub_90F940(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  _BYTE v11[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v11, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = sub_9E26A0(a1, a2, v4);
  if ( (_BYTE)v6 )
  {
    v7 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v4 + 48)
      || v7 && *(_DWORD *)(v4 + 32) && (sub_A1DB00(v4), sub_A1C490(v4), v7 = *(_QWORD *)(v4 + 24), *(_DWORD *)(v4 + 48)) )
    {
      v8 = *(_QWORD *)v4;
    }
    else
    {
      v5 = sub_8E5480(v4);
      v8 = *(_QWORD *)v4;
      if ( *(_BYTE *)(v5 + 51) )
      {
        v5 = *(unsigned int *)(v4 + 32);
        v9 = v7 + v5 + 72;
        if ( v5 == v8 )
          goto LABEL_8;
      }
    }
    v9 = v7 + v8 + 40;
LABEL_8:
    sub_A1C120(v9, v11, v5);
  }
  sub_A1C0C0(v11);
  return v6;
}

