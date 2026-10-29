__int64 __fastcall sub_6D4530(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE *v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int16 v14; // bp
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v4 = (_BYTE *)sub_F3F530(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = v4;
  if ( v4 )
  {
    if ( (v4[74] & 1) == 0 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 104LL))(v4);
    *((_DWORD *)v8 + 18) = *((_DWORD *)v8 + 18) & 0xF7FFFE7F | 0x8000000;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)v9;
    if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 47 || !v10 )
      return 0;
    v11 = sub_F3D1D0(v10, a2, v5, v6, v7);
    v12 = v11;
    if ( (*(_BYTE *)(v11 + 74) & 1) == 0 )
    {
      if ( (sub_6D3020(v11) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      {
        v13 = *(_QWORD *)(v12 + 72);
        v14 = *(_WORD *)(v12 + 74);
        v15 = *(_QWORD *)(a1 + 48);
        v17 = 0;
        v18[0] = 0;
        LODWORD(v13) = (unsigned __int8)(v13 >> 31);
        LOBYTE(v14) = v14 >> 7;
        sub_A3F500(v15, 0, (unsigned int)v13, (unsigned __int8)v14, &v17, v18);
        v16 = sub_6D3020(v12);
        sub_B546B0(v12, v16, v18[0], (unsigned __int8)v14, (unsigned int)v13);
      }
      *(_WORD *)(v12 + 72) &= 0xFE7Fu;
    }
  }
  return 1;
}

