__int64 __fastcall sub_1B96CC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int16 *v14; // r15
  int v15; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // r9d
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-60h]
  unsigned int v33; // [rsp+14h] [rbp-54h]
  unsigned int v34; // [rsp+14h] [rbp-54h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  __int64 v36; // [rsp+18h] [rbp-50h]
  void *v37; // [rsp+20h] [rbp-48h] BYREF
  int v38; // [rsp+28h] [rbp-40h]

  v9 = a4 + 16;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1B8F630(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = *(unsigned __int16 **)(a4 + 8);
  v15 = v13;
  if ( v14 || (*(_BYTE *)(a3 + 19) & 2) != 0 && (v14 = *(unsigned __int16 **)(*(_QWORD *)(a3 + 40) + 16LL)) != nullptr )
  {
    v32 = *a1;
    sub_18C74E0(*a1, 4, 0, 4);
    v19 = sub_1B7CAD0(a1, v14, a5, a6, v16, v17, v18);
    v14 = (unsigned __int16 *)(sub_19146D0(*a1, v19 & 0xFFFFFFFFFFFFFFFELL, v20, v21, v22, v23, a5, a6)
                             & 0xFFFFFFFFFFFFFFFELL);
    sub_190D5E0(v32, a5);
  }
  v24 = *(_BYTE *)(a3 + 19);
  v25 = *(_QWORD *)a4;
  v26 = *(_QWORD *)(a3 + 40);
  v27 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
  if ( (v24 & 2) != 0 )
  {
    v38 = *(_DWORD *)(v26 + 8);
    if ( (unsigned int)v38 > 0x40 )
    {
      v36 = v25;
      v34 = v27;
      sub_2205510(&v37);
      v27 = v34;
      v25 = v36;
    }
    else
    {
      v37 = *(void **)v26;
    }
  }
  else
  {
    v38 = 8 * ((v24 >> 2) & 0x1F);
    if ( v38 > 64 )
    {
      v35 = v25;
      v33 = v27;
      sub_2205470(&v37, v26, 0);
      v25 = v35;
      v27 = v33;
    }
    else
    {
      v37 = (void *)v26;
    }
  }
  v29 = sub_1AE7D30(a1, v15, (*(_WORD *)(a3 + 18) >> 6) & 7, (__int64)&v37, (__int64)v14, v27, v25);
  if ( (unsigned int)v38 > 0x40 )
  {
    if ( v37 )
      operator delete[](v37);
  }
  if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v29, 16, 8);
  *(_DWORD *)v30 = *(_DWORD *)a4;
  v31 = *(_DWORD *)(a4 + 4);
  *(_QWORD *)(v30 + 8) = v14;
  *(_DWORD *)(v30 + 4) = v31;
  return v29;
}
