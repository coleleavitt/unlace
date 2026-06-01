/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BB74
// Address: 0x0002BB74

//----- (0002BB74) --------------------------------------------------------
int __fastcall sub_2BB74(int a1, __int64 a2)
{
  __int64 v4; // r0
  int v5; // r4
  int v6; // r6
  void (__fastcall *v7)(int, int, int, int, _DWORD, _DWORD); // r4
  __int64 v8; // r0
  __int64 v11; // [sp+20h] [bp-14h]
  int *v12; // [sp+28h] [bp-Ch]
  int v13; // [sp+2Ch] [bp-8h] BYREF

  v11 = qlseek(*(_DWORD *)(a1 + 364), 0, 1) - *(_QWORD *)(a1 + 368);
  v12 = (int *)(a1 + 364);
  v4 = qlseek(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368) + a2, 0);
  v5 = 0;
  if ( ((unsigned int)v4 & HIDWORD(v4)) != 0xFFFFFFFF )
  {
    v6 = lreadbytes(*v12, &v13, 4, *(unsigned __int8 *)(a1 + 480));
    if ( v6 < 0 )
    {
      v7 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
      v8 = qlseek(*v12, 0, 1);
      v7(a1, 19, 4, v6, v8, HIDWORD(v8));
    }
    v5 = 0;
    if ( v6 >= 0 )
      v5 = v13;
  }
  qlseek(*v12, *(_QWORD *)(a1 + 368) + v11, 0);
  return v5;
}
