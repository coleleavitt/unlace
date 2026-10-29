void __fastcall sub_1F4A3D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  int v16; // ecx
  unsigned __int64 v17; // r12
  int v18; // ecx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  int v28; // eax
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rdi
  unsigned __int64 v35; // r12
  int v36; // eax
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // r9
  _BYTE *v43; // r12
  __int64 (__fastcall *v44)(__int64); // rdx
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v48[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v49; // [rsp+20h] [rbp-48h]

  sub_1F43F90((__int64 *)a1, a2);
  *(_QWORD *)(a2 + 40) = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_QWORD *)(v4 + 8);
  v9 = v5 + 1;
  v10 = *(_QWORD *)(v6 + 8 * v5);
  *(_DWORD *)(v4 + 24) = v9;
  v11 = *(_QWORD *)(v7 + 856) == 0;
  v12 = v7;
  *(_DWORD *)(a1 + 64) = v10;
  v13 = *(unsigned int *)(v4 + 24);
  v14 = (unsigned int)(v13 + 1);
  v15 = *(_QWORD *)(v6 + 8 * v13);
  *(_DWORD *)(v4 + 24) = v14;
  if ( !v11 )
  {
    sub_1EDF870(v8, v7);
    v4 = *(_QWORD *)(a1 + 16);
    v14 = *(unsigned int *)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 32);
    v8 = *(_QWORD *)(v4 + 8);
    v12 = *(_QWORD *)(v4 + 16);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 56) = v16;
  v18 = v14 + 1;
  v19 = *(_QWORD *)(v6 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v18;
  *(_QWORD *)(a1 + 56) = sub_1EFA430(v8, v12, v19);
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(unsigned int *)(v22 + 24);
  v24 = *(_QWORD *)(v22 + 16);
  v25 = *(_QWORD *)(v22 + 8);
  v26 = (unsigned int)(v23 + 1);
  v11 = *(_QWORD *)(v24 + 856) == 0;
  *(_DWORD *)(v22 + 24) = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23);
  if ( !v11 )
  {
    v12 = v24;
    sub_1EDF870(v25, v24);
  }
  v28 = __ROR4__(v27, 1);
  v29 = HIDWORD(v27);
  if ( v29 )
  {
    v23 = *(_QWORD *)(v24 + 3320);
    v26 = (unsigned int)(v29 - 1);
    v24 = *(_QWORD *)(v23 + 8 * v26);
  }
  if ( v28 )
  {
    v23 = *(unsigned int *)(v24 + 1648);
    v28 = v28 + v23 - 2;
  }
  *(_DWORD *)(a2 + 60) = v28;
  *(_QWORD *)(a2 + 72) = sub_1F194E0(*(_QWORD *)(a1 + 16), v12, v23, v26, v20, v21);
  *(_QWORD *)(a2 + 80) = v30;
  v31 = *(_QWORD *)(a1 + 16);
  v32 = *(unsigned int *)(v31 + 24);
  v33 = *(_QWORD *)(v31 + 16);
  v34 = *(_QWORD *)(v31 + 8);
  v11 = *(_QWORD *)(v33 + 856) == 0;
  *(_DWORD *)(v31 + 24) = v32 + 1;
  v35 = *(_QWORD *)(*(_QWORD *)(v31 + 32) + 8 * v32);
  if ( !v11 )
    sub_1EDF870(v34, v33);
  v36 = __ROR4__(v35, 1);
  v37 = HIDWORD(v35);
  if ( v37 )
    v33 = *(_QWORD *)(*(_QWORD *)(v33 + 3320) + 8LL * (unsigned int)(v37 - 1));
  if ( v36 )
    v36 = v36 + *(_DWORD *)(v33 + 1648) - 2;
  *(_DWORD *)(a2 + 64) = v36;
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v38 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v38 + 1) & 8) != 0
      || (v39 = *(_BYTE *)(a2 + 28) & 0x7F, (unsigned int)v39 - 49 <= 2)
      || ((v39 + 96) & 0x7Fu) <= 1 )
    {
      sub_1F43500((__int64)v48, a1, a2);
      v43 = v49;
      if ( v49 && (v49[28] & 0x7F) == 0x3F )
      {
        v44 = sub_B94D70;
        v45 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
        v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL);
        if ( v46 == sub_B94D70 )
        {
          if ( (char)v49[29] < 0 )
            v43 = (_BYTE *)sub_B72720((__int64)v49);
        }
        else
        {
          v43 = (_BYTE *)v46((__int64)v49);
        }
        v47 = a2;
        *sub_1742A40(v45 + 1728, &v47, (__int64)v44, v40, v41, v42) = (__int64)v43;
      }
      sub_1F42E40((__int64)v48);
    }
  }
}
