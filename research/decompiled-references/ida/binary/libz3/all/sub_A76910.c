void __fastcall sub_A76910(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  void (__fastcall ***v10)(_QWORD); // r12
  bool v11; // bp
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbp
  void *v24; // r12

  v2 = *(_QWORD *)(a1 + 64);
  if ( !*(_QWORD *)(v2 + 504) )
  {
    *(_BYTE *)(v2 + 768) = 0;
    v3 = sub_186B270(0x98u);
    sub_10012A0(v3, a2, v4, v5, v6, v7);
    v10 = *(void (__fastcall ****)(_QWORD))(v2 + 504);
    if ( (void (__fastcall ***)(_QWORD))v3 != v10 )
    {
      if ( v10 )
      {
        (**v10)(*(_QWORD *)(v2 + 504));
        sub_186B220(v10);
      }
      *(_QWORD *)(v2 + 504) = v3;
    }
    v11 = 0;
    sub_A98420(v2, 1, v2 + 128, 1, v8, v9);
    sub_A98420(v2, 1, v2 + 136, 0, v12, v13);
    sub_A98420(v2, 0, v2 + 132, 1, v14, v15);
    sub_A98420(v2, 0, v2 + 140, 0, v16, v17);
    sub_FF9A40(*(_QWORD *)(v2 + 504), *(_QWORD *)(*(_QWORD *)v2 + 16LL) + 120LL);
    *(_QWORD *)(sub_FF9A10(*(_QWORD *)(v2 + 504)) + 40) = v2 + 512;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 112LL);
    if ( *(_DWORD *)(v2 + 320) < *(_DWORD *)(v18 + 344) )
      v11 = *(_DWORD *)(v18 + 268) != 0;
    v19 = sub_FF9A10(*(_QWORD *)(v2 + 504));
    v20 = *(_QWORD *)(v2 + 504);
    *(_BYTE *)(v19 + 272) = v11;
    sub_FFAF30(v20, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 112LL) + 332LL));
    v21 = sub_FF9A10(*(_QWORD *)(v2 + 504));
    v22 = *(_QWORD *)(v2 + 504);
    *(_BYTE *)(v21 + 320) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 112LL) + 338LL);
    *(_DWORD *)(sub_FF9A10(v22) + 232) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 112LL) + 484LL);
    v23 = sub_186B270(0x20u);
    sub_FECE10(v23, *(_QWORD *)(v2 + 504));
    v24 = *(void **)(v2 + 336);
    if ( (void *)v23 != v24 )
    {
      if ( v24 )
      {
        sub_FE7900(*(_QWORD *)(v2 + 336));
        sub_186B220(v24);
      }
      *(_QWORD *)(v2 + 336) = v23;
    }
  }
}

