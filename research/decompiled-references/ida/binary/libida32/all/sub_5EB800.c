__int64 __fastcall sub_5EB800(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int *v3; // rax
  unsigned int *v5; // rax
  char *v6; // rax
  unsigned int *v7; // rax
  _BYTE v8[4]; // [rsp+4h] [rbp-104h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-100h]
  char v10; // [rsp+Ch] [rbp-FCh]
  char v11; // [rsp+Dh] [rbp-FBh]
  _QWORD v12[3]; // [rsp+10h] [rbp-F8h] BYREF
  char v13; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[4]; // [rsp+E8h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_from(v8, a2, 1) )
    return 0;
  if ( v10 )
    goto LABEL_3;
  v12[0] = -1;
  v12[2] = 0;
  v12[1] = 0xFFFFFFFFLL;
  v6 = &v13;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 24;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *((_QWORD *)v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( v14 != (_QWORD *)v6 );
  if ( (unsigned int)decode_insn(v12, (unsigned int)a2, v14, 0, 0, v2) && (unsigned __int8)is_call_insn(v12) )
    goto LABEL_3;
  if ( (unsigned __int8)segtype(v9) != 1 )
  {
LABEL_3:
    if ( v11 == 17 )
    {
      v5 = sub_5AFCE0(a1, v9);
      if ( v5 && (v5[2] & 2) != 0 )
        return (unsigned int)((int)get_frame_retsize(v5) / 2);
    }
    else if ( (unsigned __int8)(v11 - 18) <= 1u )
    {
      v3 = sub_5AFCE0(a1, v9);
      if ( v3 )
        return sub_59D650(a1, (__int64)v3);
    }
    return 0;
  }
  v7 = sub_4EE820(a1 + 1552, v9);
  if ( v7 )
    return (unsigned int)((1 << (*((_BYTE *)v7 + 23) + 4)) / 8);
  else
    return 2;
}

