__int64 __fastcall sub_913E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  void *v13; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-70h]
  _QWORD v15[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  unsigned int v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v4;
  v13 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v15, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_9E26A0(a1, a2, v15);
  if ( (_BYTE)v7 )
  {
    v8 = v16;
    if ( !v18 )
    {
      if ( !v16 )
      {
        v9 = 64;
        goto LABEL_6;
      }
      if ( !v17 )
      {
        v9 = *(_QWORD *)(v16 + 32);
        goto LABEL_6;
      }
      sub_A1DB00(v15);
      sub_A1C490(v15);
      v8 = v16;
      if ( !v18 )
      {
        v9 = *(_QWORD *)(v16 + 32);
        if ( *(_DWORD *)(v9 + 16) != v17 && v17 )
          v9 = *(_QWORD *)(v16 + v17 + 32);
LABEL_6:
        v10 = v15[0];
        if ( *(_BYTE *)(v9 + 51) )
        {
          v11 = v8 + v17 + 72;
          if ( v17 == v15[0] )
          {
LABEL_12:
            if ( *(_DWORD *)(v11 + 8) <= 0x40u && v14 <= 0x40 )
            {
              *(_QWORD *)v11 = v13;
              *(_DWORD *)(v11 + 8) = v14;
            }
            else
            {
              sub_2585EA0(v11, &v13);
            }
            goto LABEL_15;
          }
        }
LABEL_11:
        v11 = v8 + v10 + 40;
        goto LABEL_12;
      }
    }
    v10 = v15[0];
    goto LABEL_11;
  }
LABEL_15:
  sub_A1C0C0(v15);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v7;
}

