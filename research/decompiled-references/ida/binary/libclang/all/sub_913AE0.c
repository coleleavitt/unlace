__int64 __fastcall sub_913AE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  _QWORD v12[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  unsigned int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v12, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E26A0(a1, a2, v12);
  if ( (_BYTE)v6 )
  {
    v7 = v13;
    if ( !v15 )
    {
      if ( !v13 )
      {
        v8 = 64;
        goto LABEL_6;
      }
      if ( !v14 )
      {
        v8 = *(_QWORD *)(v13 + 32);
        goto LABEL_6;
      }
      sub_A1DB00(v12);
      sub_A1C490(v12);
      v7 = v13;
      if ( !v15 )
      {
        v8 = *(_QWORD *)(v13 + 32);
        if ( *(_DWORD *)(v8 + 16) != v14 && v14 )
          v8 = *(_QWORD *)(v13 + v14 + 32);
LABEL_6:
        v9 = v12[0];
        if ( *(_BYTE *)(v8 + 51) )
        {
          v10 = (_DWORD *)(v7 + v14 + 72);
          if ( v14 == v12[0] )
            goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v9 = v12[0];
LABEL_11:
    v10 = (_DWORD *)(v7 + v9 + 40);
LABEL_12:
    *v10 = v3;
  }
  sub_A1C0C0(v12);
  return v6;
}

