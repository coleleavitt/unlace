__int64 __fastcall sub_3ECE40(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r9
  __int64 v7; // r14
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-1B8h] BYREF
  int v12; // [rsp+8h] [rbp-1B0h]
  __int64 v13; // [rsp+10h] [rbp-1A8h] BYREF
  int v14; // [rsp+18h] [rbp-1A0h]
  __int128 v15; // [rsp+20h] [rbp-198h] BYREF
  __int64 v16; // [rsp+30h] [rbp-188h]
  __int64 v17; // [rsp+38h] [rbp-180h]
  __int64 v18; // [rsp+40h] [rbp-178h]
  char v19; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int16 v20; // [rsp+4Eh] [rbp-16Ah]
  unsigned __int16 v21; // [rsp+76h] [rbp-142h]
  _QWORD v22[6]; // [rsp+188h] [rbp-30h] BYREF

  v22[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
    return 0;
  v3 = sub_1D2F40(a1, a1 + 24);
  if ( !(_BYTE)v3 )
    return 0;
  v7 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v16 = -1;
  v17 = 0;
  v8 = &v19;
  v18 = 0;
  v15 = -1;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 40;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( v8 != (char *)v22 );
  if ( (unsigned int)decode_insn(&v15, v7, v22, 0, 0, v6, 0.0)
    && (v17 & 0x20000FFFFLL) == 0xD9
    && *(unsigned __int16 *)(a1 + 70) == v20 + 1
    && *(unsigned __int16 *)(a1 + 110) == v21 + 1 )
  {
    v14 = a2;
    v12 = a3;
    v11 = 0x800000001LL;
    v13 = 0x800000001LL;
    sub_1D2850(a1, 5, (unsigned __int8 *)&v11, nullptr, (unsigned __int8 *)&v13);
    v9 = *(_QWORD *)(a1 + 848);
    if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v9 + 1) )
    {
      *(_QWORD *)(a1 + 840) = qvector_reserve(a1 + 840, *(_QWORD *)(a1 + 840), v9 + 1, 16);
      v9 = *(_QWORD *)(a1 + 848);
    }
    v10 = *(_QWORD *)(a1 + 840) + 16 * v9;
    *(_QWORD *)v10 = -1;
    *(_WORD *)(v10 + 8) = 0;
    ++*(_QWORD *)(a1 + 848);
    *(_QWORD *)v10 = v7;
    *(_WORD *)(v10 + 8) = v17;
    sub_119360((__int64)&v13);
    sub_119360((__int64)&v11);
  }
  else
  {
    return 0;
  }
  return v3;
}
