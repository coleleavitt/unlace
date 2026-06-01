/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27938
// Address: 0x00027938

//----- (00027938) --------------------------------------------------------
int __fastcall sub_27938(int a1)
{
  int v2; // r7
  __int64 v3; // r0
  unsigned __int64 v4; // kr08_8
  unsigned __int64 v5; // kr10_8
  int v6; // r0
  int v8; // [sp+10h] [bp-14h]
  __int64 v9; // [sp+14h] [bp-10h]
  int *v10; // [sp+20h] [bp-4h]

  v8 = 1;
  v2 = 0;
  v9 = qlseek(*(_DWORD *)(a1 + 364), 0, 1) - *(_QWORD *)(a1 + 368);
  v10 = (int *)(a1 + 364);
  v3 = qlseek(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368), 0);
  if ( ((unsigned int)v3 & HIDWORD(v3)) != 0xFFFFFFFF )
  {
    v4 = *(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368);
    v2 = 0;
    v5 = qlseek(*v10, 0, 1) - *(_QWORD *)(a1 + 368);
    if ( v5 < v4 )
    {
      v2 = 0;
      if ( v4 - v5 >= 0x10 )
      {
        memset((void *)(a1 + 388), 0, 0x48u);
        if ( qlread(*v10, (void *)(a1 + 388), 16) == 16 && *(_DWORD *)(a1 + 388) == 1179403647 )
        {
          v6 = 52;
          if ( *(_BYTE *)(a1 + 481) )
            v6 = 64;
          if ( v4 - v5 < (unsigned int)v6 )
            v8 = 0;
          v2 = v8;
        }
      }
    }
  }
  qlseek(*v10, *(_QWORD *)(a1 + 368) + v9, 0);
  return v2;
}
