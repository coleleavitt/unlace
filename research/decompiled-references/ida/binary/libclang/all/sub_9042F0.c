__int64 __fastcall sub_9042F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned int v6; // eax
  __int64 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  _BYTE *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rbx
  _BYTE *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  char v17; // [rsp+8h] [rbp-70h]
  _QWORD v18[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  unsigned int v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v18, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, v18, 3);
  if ( (_BYTE)v4 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 184);
      v10 = v19;
      v11 = v18[0];
      if ( !v21 && *(_BYTE *)(sub_8E5480((__int64)v18) + 51) && v11 == v20 )
        v12 = (_BYTE *)(v10 + v11 + 72);
      else
        v12 = (_BYTE *)(v10 + v11 + 40);
      *(_BYTE *)sub_A1A4E0(v9, 8) = *v12;
      v13 = v19;
      v14 = v18[0];
      if ( v21 || !*(_BYTE *)(sub_8E5480((__int64)v18) + 51) || (v15 = (_BYTE *)(v13 + v20 + 72), v20 != v14) )
        v15 = (_BYTE *)(v13 + v14 + 40);
      *v15 = 1;
    }
    else
    {
      v6 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      v7 = (__int64 *)sub_A2E1A0(a1, v6, 110, 0);
      v8 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      if ( v7 )
      {
        v16 = v8;
        v17 = 1;
        sub_839C90(v7, &v16);
      }
      v4 = 0;
    }
  }
  sub_A1C0C0(v18);
  return v4;
}

