__int64 __fastcall sub_914450(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  _BYTE v12[64]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+58h] [rbp-50h]
  unsigned int v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v12, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v13, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E26A0(a1, a2, v13);
  if ( (_BYTE)v6 )
  {
    v7 = v14;
    if ( !v16 )
    {
      if ( !v14 )
      {
        v8 = 64;
        goto LABEL_6;
      }
      if ( !v15 )
      {
        v8 = *(_QWORD *)(v14 + 32);
        goto LABEL_6;
      }
      sub_A1DB00(v13);
      sub_A1C490(v13);
      v7 = v14;
      if ( !v16 )
      {
        v8 = *(_QWORD *)(v14 + 32);
        if ( *(_DWORD *)(v8 + 16) != v15 && v15 )
          v8 = *(_QWORD *)(v14 + v15 + 32);
LABEL_6:
        v9 = v13[0];
        if ( *(_BYTE *)(v8 + 51) )
        {
          v10 = v7 + v15 + 72;
          if ( v15 == v13[0] )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v9 = v13[0];
LABEL_11:
    v10 = v7 + v9 + 40;
LABEL_12:
    sub_A1C120(v10, v12, v9);
  }
  sub_A1C0C0(v13);
  sub_A1C0C0(v12);
  return v6;
}

