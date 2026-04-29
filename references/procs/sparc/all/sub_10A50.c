unsigned __int64 __fastcall sub_10A50(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE *v3; // rsi
  __int64 v4; // rdx
  _BYTE *v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 160) = netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
  if ( (unsigned __int8)getinf_flag(11, 4) )
    *(_WORD *)(a1 + 160) |= 2u;
  v2 = *(_QWORD *)(a1 + 120);
  v3 = &v6;
  v6 = nullptr;
  v7 = 0;
  if ( netnode_qsupstr(v2, &v6, -1, 83) > 0 )
  {
    v3 = &unk_13D10;
    if ( (_QWORD)v7 )
      v3 = v6;
    sub_10570((_QWORD *)a1, v3, v4, 0.0);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, v3, v4, 0.0);
  }
  return v8 - __readfsqword(0x28u);
}
