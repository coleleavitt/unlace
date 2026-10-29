void __fastcall sub_1F4B760(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  int v23; // eax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // r9
  _BYTE *v30; // r12
  __int64 (__fastcall *v31)(__int64); // rdx
  __int64 v32; // rbp
  __int64 (__fastcall *v33)(__int64); // rax
  __int64 v34; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v35[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v36; // [rsp+20h] [rbp-48h]

  v3 = a2;
  sub_1F4B4A0((__int64)a1, a2);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_QWORD *)(v8 + 856) == 0;
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v11 = *(_QWORD *)(v6 + 32);
  v12 = *(_QWORD *)(v11 + 8 * v7);
  if ( !v10 )
  {
    a2 = v8;
    sub_1EDF870(v9, v8);
    v6 = a1[2];
  }
  v13 = __ROR4__(v12, 1);
  v14 = HIDWORD(v12);
  if ( v14 )
  {
    v11 = *(_QWORD *)(v8 + 3320);
    v9 = (unsigned int)(v14 - 1);
    v8 = *(_QWORD *)(v11 + 8 * v9);
  }
  if ( v13 )
  {
    v11 = *(unsigned int *)(v8 + 1648);
    v13 = v13 + v11 - 2;
  }
  *(_DWORD *)(v3 + 56) = v13;
  v15 = sub_1F194E0(v6, a2, v11, v9, v4, v5);
  v16 = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v3 + 72) = v17;
  *(_QWORD *)(v3 + 64) = v15;
  *(_QWORD *)(v3 + 80) = sub_1F19410(a1[2], v16);
  v18 = a1[2];
  v19 = *(unsigned int *)(v18 + 24);
  v20 = *(_QWORD *)(v18 + 16);
  v21 = *(_QWORD *)(v18 + 8);
  v10 = *(_QWORD *)(v20 + 856) == 0;
  *(_DWORD *)(v18 + 24) = v19 + 1;
  v22 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
  if ( !v10 )
    sub_1EDF870(v21, v20);
  v23 = __ROR4__(v22, 1);
  v24 = HIDWORD(v22);
  if ( v24 )
    v20 = *(_QWORD *)(*(_QWORD *)(v20 + 3320) + 8LL * (unsigned int)(v24 - 1));
  if ( v23 )
    v23 = v23 + *(_DWORD *)(v20 + 1648) - 2;
  *(_DWORD *)(v3 + 60) = v23;
  v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL);
  if ( (*(_BYTE *)(v25 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v25 + 1) & 8) != 0
      || (v26 = *(_BYTE *)(v3 + 28) & 0x7F, (unsigned int)v26 - 49 <= 2)
      || ((v26 + 96) & 0x7Fu) <= 1 )
    {
      sub_1F43500((__int64)v35, (__int64)a1, v3);
      v30 = v36;
      if ( v36 && (v36[28] & 0x7F) == 0x1C )
      {
        v31 = sub_B94D50;
        v32 = *(_QWORD *)(*a1 + 144);
        v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL);
        if ( v33 == sub_B94D50 )
        {
          if ( (char)v36[29] < 0 )
            v30 = (_BYTE *)sub_B72720((__int64)v36);
        }
        else
        {
          v30 = (_BYTE *)v33((__int64)v36);
        }
        v34 = v3;
        *sub_1742A40(v32 + 1728, &v34, (__int64)v31, v27, v28, v29) = (__int64)v30;
      }
      sub_1F42E40((__int64)v35);
    }
  }
}
