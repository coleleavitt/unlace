unsigned __int64 __fastcall sub_57F3C0(_DWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[3]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v13[6]; // [rsp+18h] [rbp-E0h] BYREF
  __int16 v14; // [rsp+1Eh] [rbp-DAh]
  char v15; // [rsp+31h] [rbp-C7h]
  __int16 v16; // [rsp+36h] [rbp-C2h]
  char v17; // [rsp+49h] [rbp-AFh]
  _QWORD v18[4]; // [rsp+D8h] [rbp-20h] BYREF

  v18[0] = __readfsqword(0x28u);
  v12[0] = -1;
  v12[2] = 0;
  v12[1] = 0xFFFFFFFFLL;
  v6 = v13;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 3;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *(v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( v18 != v6 );
  if ( a1[2] == a2 + 8
    && (unsigned int)decode_insn(v12, a2, v18, 0, 0, a6) == 4
    && v13[1] == 1
    && v14 == 15
    && v15 == 1
    && v16 == 15
    && v17
    && (unsigned int)decode_insn(v12, a2 + 4, v8, v9, v10, v11) == 4 )
  {
    *a1 |= 0x20u;
  }
  return v18[0] - __readfsqword(0x28u);
}

