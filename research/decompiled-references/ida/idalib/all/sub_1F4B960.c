void __fastcall sub_1F4B960(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r9
  _BYTE *v29; // rbx
  __int64 (__fastcall *v30)(__int64); // rdx
  __int64 v31; // r13
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v34[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v35; // [rsp+20h] [rbp-48h]

  sub_1F4B4A0((__int64)a1, a2);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  *(_DWORD *)(a2 + 64) = v8;
  v9 = 8LL * (unsigned int)v8;
  v10 = *(_QWORD **)(*a1 + 144LL);
  v11 = v10[294];
  v10[304] += v9;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[295] >= v9 + v12 && v11 )
    v10[294] = v9 + v12;
  else
    v12 = sub_986170((__int64)(v10 + 294), v9, v9, 3, v4, v5);
  v13 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 56) = v12;
  if ( v13 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v14++;
      v16 = (__int64 *)(v12 + 8 * v15);
      v17 = a1[2];
      v18 = *(_QWORD **)(v17 + 8);
      v19 = sub_1EE13A0((__int64)v18, *(_QWORD *)(v17 + 16), (__int64 *)(v17 + 32), (_DWORD *)(v17 + 24));
      *v16 = sub_1EDB980(v18, v19, v20, v21, v22, v23);
      if ( *(_DWORD *)(a2 + 64) == v14 )
        break;
      v12 = *(_QWORD *)(a2 + 56);
    }
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v24 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v24 + 1) & 8) != 0
      || (v25 = *(_BYTE *)(a2 + 28) & 0x7F, ((v25 + 96) & 0x7Fu) <= 1)
      || (unsigned int)v25 - 49 <= 2 )
    {
      sub_1F43500((__int64)v34, (__int64)a1, a2);
      v29 = v35;
      if ( v35 && (v35[28] & 0x7F) == 0x20 )
      {
        v30 = sub_B727D0;
        v31 = *(_QWORD *)(*a1 + 144LL);
        v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL);
        if ( v32 == sub_B727D0 )
        {
          if ( (char)v35[29] < 0 )
            v29 = (_BYTE *)sub_B72720((__int64)v35);
        }
        else
        {
          v29 = (_BYTE *)v32((__int64)v35);
        }
        v33 = a2;
        *sub_1742A40(v31 + 1728, &v33, (__int64)v30, v26, v27, v28) = (__int64)v29;
      }
      sub_1F42E40((__int64)v34);
    }
  }
}
