bool __fastcall sub_4007C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+8h] [rbp-58h]
  int v17; // [rsp+8h] [rbp-58h]
  __int64 v18; // [rsp+10h] [rbp-50h] BYREF
  _QWORD *v19; // [rsp+18h] [rbp-48h]
  __int64 v20[8]; // [rsp+20h] [rbp-40h] BYREF

  v7 = *(unsigned __int16 *)(a2 + 72);
  if ( v7 != 0xFFFF )
  {
    v8 = *(_DWORD *)(a1 + 208);
    if ( v7 >= v8 )
    {
      do
      {
        v9 = *(_QWORD *)(a1 + 120);
        *(_DWORD *)(a1 + 208) = v8 + 1;
        sub_428A80(v9);
        v8 = *(_DWORD *)(a1 + 208);
      }
      while ( v7 >= v8 );
      v7 = *(unsigned __int16 *)(a2 + 72);
    }
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 120);
  v19 = nullptr;
  v20[1] = 0;
  v18 = v10;
  v20[0] = v10;
  *(_BYTE *)(v11 + 145) = 1;
  v12 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v11 + 148) = v7;
  *(_QWORD *)(v11 + 120) = 0;
  *(_QWORD *)(v11 + 128) = a4;
  v16 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = (_QWORD *)sub_186B270(0x18u);
  v14 = *(_QWORD *)(a1 + 120);
  v19 = v13 + 1;
  v13[1] = v16;
  *v13 = 0x100000002LL;
  v17 = sub_42BF90(v14, (unsigned int)&v18, (unsigned int)v20, (unsigned int)v20, 0, 0, 0);
  if ( v17 == -1 )
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 140LL);
  sub_2334C0(v20);
  sub_2334C0(&v18);
  *(_BYTE *)(v11 + 145) = 0;
  return v17 == -1;
}

