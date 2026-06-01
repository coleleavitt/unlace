__int64 __fastcall sub_8F98A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v8; // eax
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbx
  _BYTE *v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-78h] BYREF
  char v16; // [rsp+8h] [rbp-70h]
  __int64 v17[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-48h]
  int v19; // [rsp+40h] [rbp-38h]

  v2 = a1 + 48;
  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = sub_A1A5A0(v3, 56);
  sub_A1C070(v17, v5);
  sub_A1A5E0(v3, 56);
  v6 = sub_9E4580(a1 + 48, v4, v17, 3);
  if ( (_BYTE)v6 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(v2) + 1) & 0x20) != 0 )
    {
      v11 = a1[71];
      v12 = v17[0];
      v13 = v17[3];
      if ( !v19 && *(_BYTE *)(sub_8E5480((__int64)v17) + 51) && v18 == v12 )
        v14 = (_BYTE *)(v13 + v18 + 72);
      else
        v14 = (_BYTE *)(v13 + v12 + 40);
      *(_BYTE *)sub_A1A4E0(v11, 8) = *v14;
      *(_BYTE *)sub_8F9850(v17) = 1;
    }
    else
    {
      v8 = sub_A1A260(a1[73], v4);
      v9 = (__int64 *)sub_A2E1A0(v2, v8, 110, 0);
      v10 = sub_A1A2D0(a1[73], v4);
      if ( v9 )
      {
        v15 = v10;
        v16 = 1;
        sub_839C90(v9, &v15);
      }
      v6 = 0;
    }
  }
  sub_A1C0C0(v17);
  return v6;
}

