_BOOL8 __fastcall sub_12ED580(
        __int64 a1,
        int a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        __int64 a7)
{
  size_t v12; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r14
  __int64 v21; // rsi
  int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edi
  _QWORD **v26; // r12
  _QWORD **v27; // r13
  _QWORD *v28; // rdi
  void *v29; // r12
  void (*v30)(void); // rax
  _BOOL4 v31; // ebp
  __int64 v34; // [rsp+8h] [rbp-B0h]
  __int64 v35; // [rsp+10h] [rbp-A8h]
  __int64 v37; // [rsp+28h] [rbp-90h] BYREF
  void *v38[17]; // [rsp+30h] [rbp-88h] BYREF

  v12 = j__strlen("Module Compile");
  v35 = sub_224A990("Module Compile", v12, a3, a4);
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80));
  v14 = sub_1FD88A0(v13, a5, a6);
  v15 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v31 = 0;
    sub_FC70B0((__int64)v38, v15, a2, 40);
    sub_AEC220((unsigned __int8 **)v38, a3, a4);
    sub_AEA040((__int64)v38);
  }
  else
  {
    sub_FC70B0((__int64)v38, v15, a2, 806);
    sub_AEC220((unsigned __int8 **)v38, a3, a4);
    sub_AEC220((unsigned __int8 **)v38, a5, a6);
    sub_AEA040((__int64)v38);
    sub_2219770(v38, a5, v16, v17, v18, v19);
    v37 = a7;
    v20 = sub_22199D0(v38, sub_12F5BC0, &v37, &loc_800000);
    sub_2219790(v38);
    sub_FC70B0((__int64)v38, *(_QWORD *)(a1 + 32), a2, 807);
    sub_AEC220((unsigned __int8 **)v38, a3, a4);
    sub_AEA040((__int64)v38);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL) + 3LL) & 8) == 0 )
      sub_FD80F0(*(_DWORD **)(a1 + 64), *(_DWORD **)(a7 + 64));
    v21 = *(_QWORD *)(a7 + 232);
    v22 = *(_DWORD *)(a7 + 248);
    *(_DWORD *)(a7 + 248) = 0;
    v23 = *(_QWORD *)(a7 + 240);
    *(_QWORD *)(a7 + 240) = 0;
    v24 = *(_DWORD *)(a1 + 244);
    v25 = *(_DWORD *)(a1 + 240);
    *(_QWORD *)(a7 + 232) = 0;
    *(_QWORD *)(a1 + 240) = v23;
    v26 = *(_QWORD ***)(a1 + 232);
    *(_DWORD *)(a1 + 248) = v22;
    *(_QWORD *)(a1 + 232) = v21;
    if ( v24 && v25 )
    {
      v27 = v26;
      v34 = (__int64)&v26[(unsigned int)(v25 - 1) + 1];
      do
      {
        v28 = *v27;
        if ( *v27 != (_QWORD *)-8LL && v28 )
          operator delete(v28, *v28 + 9LL, 8);
        ++v27;
      }
      while ( (_QWORD **)v34 != v27 );
    }
    free(v26);
    if ( !v20 )
    {
      v29 = *(void **)(a7 + 144);
      *(_QWORD *)(a7 + 144) = 0;
      if ( v29 )
      {
        sub_1602330(v29);
        operator delete(v29, 0x4420u);
      }
      v38[0] = nullptr;
      sub_12E9E10(a7, (__int64 *)v38);
      if ( v38[0] )
      {
        v30 = *(void (**)(void))(*(_QWORD *)v38[0] + 8LL);
        if ( (char *)v30 == (char *)sub_A55C70 )
          operator delete(v38[0], 0x10u);
        else
          v30();
      }
      sub_12ED210(a7, 1);
    }
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL) + 1LL) < 0 )
      *(_BYTE *)(a1 + 320) = 1;
    v31 = 1;
    if ( *(_BYTE *)(*(_QWORD *)(a7 + 32) + 192LL) )
      v31 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a7 + 16) + 160LL) + 3LL) & 4) != 0;
  }
  if ( v35 )
    sub_224D6D0(v35);
  return v31;
}
