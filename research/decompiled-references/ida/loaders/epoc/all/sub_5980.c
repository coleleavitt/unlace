unsigned __int64 __fastcall sub_5980(unsigned __int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _DWORD *v6; // r11
  _DWORD *v7; // r8
  _DWORD *v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v19; // eax
  _DWORD v20[28]; // [rsp+0h] [rbp-178h] BYREF
  _QWORD v21[27]; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_3D20(a1, a2) )
    goto LABEL_20;
  memset(v20, 0, 108);
  v7 = v20;
  v8 = v6;
  v9 = 0;
  do
  {
    v10 = *(_DWORD *)((char *)v8 + (unsigned int)(a1 - (_DWORD)v6));
    *v8 = v10;
    v11 = v10 - 1;
    if ( v11 >= 0 )
    {
      v9 = (unsigned int)(v9 + 1);
      ++v20[v11];
    }
    ++v8;
  }
  while ( v8 != &v6[a2] );
  v12 = 0;
  v13 = &v6[(int)v9];
  do
  {
    v14 = (int)v20[v12];
    v21[v12++] = v13;
    v13 -= v14;
  }
  while ( v12 != 27 );
  v15 = v6;
  v16 = (unsigned int)((a4 << 17) + 0x10000);
  do
  {
    if ( !*v15 )
      goto LABEL_12;
    if ( (unsigned __int8)*v15 > 0x1Bu )
    {
      if ( under_debugger )
        BUG();
      interr(20004, v9, v16, v15, v7);
LABEL_20:
      sub_5960();
    }
    v17 = (unsigned __int8)*v15 - 1;
    v7 = (_DWORD *)v21[v17];
    v21[v17] = v7 - 1;
    *(v7 - 1) |= v16;
LABEL_12:
    v16 = (unsigned int)(v16 + 0x20000);
    v15 += 4;
  }
  while ( (_DWORD)v16 != (unsigned int)&unk_10000 + 0x20000 * (a2 + a4) );
  if ( (_DWORD)v9 == 1 )
  {
    v19 = *v6;
    LOWORD(v19) = 0;
    *v6 = HIWORD(*v6) + v19;
  }
  else if ( (int)v9 > 1 )
  {
    sub_3C50((__int64)&v6[(int)v9 - 1], &v6[(int)v9 - 1], v21);
  }
  return v22 - __readfsqword(0x28u);
}

