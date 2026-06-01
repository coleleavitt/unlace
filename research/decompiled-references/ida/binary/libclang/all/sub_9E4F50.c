__int64 __fastcall sub_9E4F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned int v6; // eax
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  _BYTE *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  char v13; // [rsp+8h] [rbp-70h]
  _QWORD v14[4]; // [rsp+10h] [rbp-68h] BYREF
  int v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v14, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)v14, 3);
  if ( (_BYTE)v4 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) != 0 )
    {
      v9 = v14[3];
      v10 = v14[0];
      if ( !v16 && *(_BYTE *)(sub_8E5480((__int64)v14) + 51) && v10 == v15 )
        v11 = (_BYTE *)(v9 + v10 + 72);
      else
        v11 = (_BYTE *)(v9 + v10 + 40);
      *v11 = 1;
    }
    else
    {
      v6 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      v7 = (__int64 *)sub_A2E1A0(a1, v6, 110, 0);
      v8 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      if ( v7 )
      {
        v12 = v8;
        v13 = 1;
        sub_839C90(v7, &v12);
      }
      v4 = 0;
    }
  }
  sub_A1C0C0(v14);
  return v4;
}

