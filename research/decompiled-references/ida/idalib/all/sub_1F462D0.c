void __fastcall sub_1F462D0(__int64 *a1, __int64 a2)
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
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // r9
  _BYTE *v43; // r12
  __int64 (__fastcall *v44)(__int64); // rdx
  __int64 v45; // rbp
  __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v48[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v49; // [rsp+20h] [rbp-48h]

  v3 = a2;
  sub_1F458C0((__int64)a1, a2);
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
  v19 = *(_QWORD **)(v18 + 8);
  v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(v18 + 16), (__int64 *)(v18 + 32), (_DWORD *)(v18 + 24));
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v3 + 48) & 7LL | sub_1EDB980(v19, v20, v21, v22, v23, v24);
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  *(_DWORD *)(v25 + 24) = v26 + 1;
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFFBLL
                       | (4LL * (*(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26) != 0));
  v27 = a1[2];
  v28 = *(_QWORD **)(v27 + 8);
  v29 = sub_1EE13A0((__int64)v28, *(_QWORD *)(v27 + 16), (__int64 *)(v27 + 32), (_DWORD *)(v27 + 24));
  v34 = sub_1EDB980(v28, v29, v30, v31, v32, v33);
  if ( v34 )
    sub_A96260(*(_QWORD *)(*a1 + 144), v3, v34, v35, v36, v37);
  v38 = *(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL);
  if ( (*(_BYTE *)(v38 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v38 + 1) & 8) != 0
      || (v39 = *(_BYTE *)(v3 + 28) & 0x7F, (unsigned int)v39 - 49 <= 2)
      || ((v39 + 96) & 0x7Fu) <= 1 )
    {
      sub_1F43500((__int64)v48, (__int64)a1, v3);
      v43 = v49;
      if ( v49 && (v49[28] & 0x7F) == 0x51 )
      {
        v44 = sub_B94CF0;
        v45 = *(_QWORD *)(*a1 + 144);
        v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL);
        if ( v46 == sub_B94CF0 )
        {
          if ( (char)v49[29] < 0 )
            v43 = (_BYTE *)sub_B72720((__int64)v49);
        }
        else
        {
          v43 = (_BYTE *)v46((__int64)v49);
        }
        v47 = v3;
        *sub_1742A40(v45 + 1728, &v47, (__int64)v44, v40, v41, v42) = (__int64)v43;
      }
      sub_1F42E40((__int64)v48);
    }
  }
}
