unsigned __int64 __fastcall sub_62710(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  int v7; // edx
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ebp
  char v14; // bl
  char v15; // al
  __int64 v16; // rdx
  char v17; // bl
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-18h]
  __int64 v22; // [rsp+8h] [rbp-10h]
  __int64 v23; // [rsp+10h] [rbp-8h]

  v6 = a1;
  LOBYTE(v6) = (unsigned __int8)a1 >> 7;
  v7 = (a1 & 0x40) != 0;
  switch ( (_DWORD)a2 )
  {
    case 0x10:
      v12 = (unsigned __int8)((_BYTE)a1 << 6);
      v17 = (32 * v7) | ((_BYTE)v6 << 7) | ((unsigned __int8)a1 >> 2) & 0xF;
      v18 = 16 * v7;
      v19 = (v7 << 6) ^ 0x40u;
      v11 = (unsigned __int8)(v19 | v18 | v17);
      if ( !(unsigned __int8)getinf_flag(3, 32, v19, a4, a5, a6, v21, v22, v23) )
        return v12 | ((unsigned __int8)v11 << 8);
      return v11 | (v12 << 8);
    case 0x20:
      v12 = (unsigned __int8)(8 * a1);
      v14 = (4 * v7) | (8 * v7) | (16 * v7) | (32 * v7) | ((_BYTE)v6 << 7) | ((a1 & 0x20) != 0);
      v15 = 2 * v7;
      v16 = (v7 << 6) ^ 0x40u;
      v11 = (unsigned __int8)(v16 | v15 | v14);
      if ( !(unsigned __int8)getinf_flag(3, a2, v16, a4, a5, a6, v21, v22, v23) )
        return (v12 << 16) | ((unsigned __int8)v11 << 24);
      return v11 | (v12 << 8);
    case 0x40:
      v8 = ((_BYTE)v7 << 6) ^ 0x40;
      v9 = (2 * v7) | (4 * v7) | (8 * v7) | (16 * v7) | (32 * v7) | v7 | (unsigned int)(v6 << 7);
      v10 = -v7 & 0xFFFFFFC0;
      v11 = (unsigned __int8)(v9 | v8);
      v12 = (unsigned __int8)(v10 | a1 & 0x3F);
      if ( !(unsigned __int8)getinf_flag(3, 32, v10, v9, a5, a6, v21, v22, v23) )
        return (unsigned __int64)(((unsigned __int8)v12 << 16) | ((unsigned __int8)v11 << 24)) << 32;
      return v11 | (v12 << 8);
  }
  if ( under_debugger )
    BUG();
  interr(10354);
  return sub_628A0(10354, a2, v20);
}
