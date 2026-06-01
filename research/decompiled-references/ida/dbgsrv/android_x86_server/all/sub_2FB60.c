/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FB60
// Address: 0x0002FB60

//----- (0002FB60) --------------------------------------------------------
int __cdecl sub_2FB60(int a1)
{
  int v1; // esi
  int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // kr00_4
  int v9; // eax
  int v10; // edx
  unsigned __int64 v11; // kr08_8
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  __int64 v19; // [esp-10h] [ebp-3Ch]
  int v20; // [esp+Ch] [ebp-20h]
  unsigned int v21; // [esp+Ch] [ebp-20h]
  unsigned int v22; // [esp+14h] [ebp-18h]

  v1 = a1;
  v2 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v3 = *(_DWORD *)(a1 + 368);
  v4 = *(_DWORD *)(a1 + 364);
  v8 = v2 - v4;
  v6 = (__PAIR64__(v5, v2) - __PAIR64__(v3, v4)) >> 32;
  v7 = v2 - v4;
  v22 = v6;
  v9 = qlseek(*(_DWORD *)(a1 + 360), __SPAIR64__(v3, v4), 0);
  if ( (v10 & v9) == 0xFFFFFFFF )
  {
    v20 = 0;
LABEL_13:
    v15 = v22;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a1 + 372) - *(_QWORD *)(a1 + 364);
  LODWORD(v12) = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v13 = v12 - *(_QWORD *)(a1 + 364);
  if ( v13 < v11 )
  {
    v14 = (v11 - v13) >> 32;
    if ( v11 - v13 >= 0x10 )
    {
      v21 = v11 - v13;
      v1 = a1;
      *(_DWORD *)(a1 + 388) = 0;
      *(_DWORD *)(a1 + 384) = 0;
      *(_DWORD *)(a1 + 396) = 0;
      *(_DWORD *)(a1 + 392) = 0;
      *(_DWORD *)(a1 + 404) = 0;
      *(_DWORD *)(a1 + 400) = 0;
      *(_DWORD *)(a1 + 412) = 0;
      *(_DWORD *)(a1 + 408) = 0;
      *(_DWORD *)(a1 + 420) = 0;
      *(_DWORD *)(a1 + 416) = 0;
      *(_DWORD *)(a1 + 428) = 0;
      *(_DWORD *)(a1 + 424) = 0;
      *(_DWORD *)(a1 + 436) = 0;
      *(_DWORD *)(a1 + 432) = 0;
      *(_DWORD *)(a1 + 444) = 0;
      *(_DWORD *)(a1 + 440) = 0;
      *(_DWORD *)(a1 + 452) = 0;
      *(_DWORD *)(a1 + 448) = 0;
      HIDWORD(v19) = a1 + 384;
      LODWORD(v19) = *(_DWORD *)(a1 + 360);
      if ( qlread(v19, 0x10u) == 16 && *(_DWORD *)(a1 + 384) == 1179403647 )
      {
        v16 = 52;
        v17 = 64;
        if ( !*(_BYTE *)(a1 + 477) )
          v17 = 52;
        LOBYTE(v16) = __PAIR64__(v14, v21) >= (unsigned int)v17;
        v20 = v16;
      }
      else
      {
        v20 = 0;
      }
      v7 = v8;
      goto LABEL_13;
    }
  }
  v20 = 0;
  v7 = v8;
  v15 = v22;
  v1 = a1;
LABEL_14:
  qlseek(*(_DWORD *)(v1 + 360), *(_QWORD *)(v1 + 364) + __PAIR64__(v15, v7), 0);
  return v20;
}
// 2FB9F: variable 'v5' is possibly undefined
// 2FBB7: variable 'v10' is possibly undefined
// 2FBF9: variable 'v12' is possibly undefined
