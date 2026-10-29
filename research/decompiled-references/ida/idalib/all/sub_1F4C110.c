void __fastcall sub_1F4C110(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // r9
  __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v38[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v39; // [rsp+20h] [rbp-48h]

  sub_1F4BCD0(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 68) = (2 * (*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) & 1)) | *(_BYTE *)(a2 + 68) & 0xFD;
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  LOBYTE(v7) = (4 * (((unsigned int)v8 >> 1) & 3)) | *(_BYTE *)(a2 + 68) & 0xF3;
  *(_BYTE *)(a2 + 68) = v7;
  if ( (v7 & 0xC) == 0xC )
  {
    v32 = a1[2];
    v33 = nullptr;
    v34 = *(unsigned int *)(v32 + 24);
    if ( (unsigned int)v34 < *(_DWORD *)(v32 + 40) )
    {
      v35 = *(_QWORD **)(v32 + 8);
      v36 = *(_QWORD *)(v32 + 16);
      *(_DWORD *)(v32 + 24) = v34 + 1;
      v33 = (_QWORD *)(sub_1F15160(v35, v36, *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8 * v34)) & 0xFFFFFFFFFFFFFFF0LL);
    }
    *(_QWORD *)(a2 + 72) = *v33;
  }
  else if ( (v8 & 1) != 0 )
  {
    v28 = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
    if ( (*(_BYTE *)(a2 + 68) & 0xC) == 0xC || (*(_BYTE *)(a2 + 68) & 0xC) == 0 )
    {
      *(_QWORD *)(a2 + 72) = v28;
    }
    else
    {
      v29 = sub_B8C330(a2);
      v30 = (_QWORD *)sub_1F21B20((__int64 *)(v29 + 2352), 16, 3u);
      v31 = *(_QWORD *)(a2 + 72);
      v30[1] = v28;
      *v30 = v31;
      *(_QWORD *)(a2 + 72) = v30;
    }
    *(_BYTE *)(a2 + 68) |= 1u;
  }
  if ( !*(_QWORD *)(a2 + 40) || sub_B72A20(a2, *(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL)) )
  {
    v9 = a1[2];
    v10 = *(_QWORD **)(v9 + 8);
    v11 = sub_1EE13A0((__int64)v10, *(_QWORD *)(v9 + 16), (__int64 *)(v9 + 32), (_DWORD *)(v9 + 24));
    v16 = sub_1EDB980(v10, v11, v12, v13, v14, v15);
    if ( v16 )
      sub_A96CE0(*(_QWORD *)(*a1 + 144), a2, v16, v17, v18, v19);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL);
  if ( (*(_BYTE *)(v20 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v20 + 1) & 8) != 0
      || (v21 = *(_BYTE *)(a2 + 28) & 0x7F, (unsigned int)v21 - 49 <= 2)
      || ((v21 + 96) & 0x7Fu) <= 1 )
    {
      sub_1F43500((__int64)v38, (__int64)a1, a2);
      if ( v39 )
      {
        if ( (v39[28] & 0x7Fu) - 49 <= 2 )
        {
          v22 = *(_QWORD *)(*a1 + 144);
          v23 = (*(__int64 (**)(void))(*(_QWORD *)v39 + 32LL))();
          v37 = a2;
          *sub_1742A40(v22 + 1728, &v37, v24, v25, v26, v27) = v23;
        }
      }
      sub_1F42E40((__int64)v38);
    }
  }
}
