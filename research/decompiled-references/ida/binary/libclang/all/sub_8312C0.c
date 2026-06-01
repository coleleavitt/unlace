__int64 __fastcall sub_8312C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  __int64 v5; // rbx
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // rdx
  int v12; // r14d
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  __int64 i; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rbp
  int v38; // edx
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+8h] [rbp-C0h]
  unsigned int v45; // [rsp+10h] [rbp-B8h] BYREF
  char v46; // [rsp+14h] [rbp-B4h]
  unsigned int v47; // [rsp+50h] [rbp-78h] BYREF
  char v48; // [rsp+54h] [rbp-74h]
  _QWORD v49[14]; // [rsp+58h] [rbp-70h] BYREF

  while ( 1 )
  {
    v2 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
      return 1;
    v5 = a2;
    v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = sub_B0E910(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
    v8 = v7;
    if ( v7 )
      break;
    v37 = *v6;
    v38 = *(unsigned __int8 *)(*v6 + 16);
    if ( (unsigned __int8)(*(_BYTE *)(*v6 + 16) - 4) > 2u && v38 != 2 )
    {
      if ( v38 == 3 )
        goto LABEL_58;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
        || (v41 = sub_B0D320(*v6), (v37 = v41) == 0) )
      {
LABEL_70:
        v48 &= ~1u;
        v47 = 1;
        sub_6A01B0(a2, (__int64)&v47);
        if ( v47 > 1 )
          sub_69F740((__int64)&v47);
        return 1;
      }
      v38 = *(unsigned __int8 *)(v41 + 16);
    }
    if ( (unsigned int)(v38 - 2) > 1 )
      goto LABEL_70;
LABEL_58:
    v39 = *(_QWORD **)(v37 + 40);
    if ( (*(_BYTE *)(v37 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v39 + 2) <= 0x40u )
        v39 = (_QWORD *)*v39;
      else
        v39 = *(_QWORD **)*v39;
    }
    v48 &= ~1u;
    v47 = 0;
    sub_6A3820((__int64)&v47, 0, (int)v39);
    sub_6A01B0(a2, (__int64)&v47);
    if ( v47 > 1 )
      sub_69F740((__int64)&v47);
    v40 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v40 == *(_DWORD *)(a2 + 20) )
      return 1;
    a1 = *(_QWORD *)(v37 + 32);
    a2 = *(_QWORD *)(a2 + 8) + 56 * v40;
  }
  if ( *(char *)(v7 + 28) < 0 )
  {
    v48 &= ~1u;
    v47 = 0;
    sub_6A01B0(a2, (__int64)&v47);
    if ( v47 > 1 )
      sub_69F740((__int64)&v47);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v7 + 73) >> 5 == 2 )
    {
      v46 &= ~1u;
      v48 &= ~1u;
      v45 = 0;
      v47 = 0;
      sub_69F6D0(v49);
      v47 = 11;
      sub_6A6470((__int64)&v47, 0, (__int64)&v45);
      sub_6A01B0(a2, (__int64)&v47);
      if ( v47 > 1 )
        sub_69F740((__int64)&v47);
      if ( v45 > 1 )
        sub_69F740((__int64)&v45);
      return 1;
    }
    v9 = sub_7868A0(v7);
    if ( v9 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        v9 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11 <= 7 )
          break;
        if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 47 <= 2 )
          ++v10;
      }
      v12 = v10 + 1;
    }
    else
    {
      v12 = 0;
    }
    sub_8226C0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104));
    v13 = *(_DWORD *)(*(_QWORD *)(v8 + 128) + 16LL);
    v48 &= ~1u;
    v47 = 0;
    sub_69F640((__int64)v49, v13, v12);
    v47 = 10;
    sub_6A01B0(v5, (__int64)&v47);
    if ( v47 > 1 )
      sub_69F740((__int64)&v47);
    sub_8226C0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104));
    v14 = *(_QWORD *)(v8 + 128);
    if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
      v15 = sub_7A2E20(v14);
    else
      v15 = *(_QWORD *)(v14 + 24);
    sub_8226C0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104));
    v16 = *(_QWORD *)(v8 + 128);
    if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
      v17 = sub_7A2E20(v16);
    else
      v17 = *(_QWORD *)(v16 + 24);
    v18 = *(_QWORD *)(v8 + 104);
    v19 = *(_QWORD *)(v18 + 96);
    v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v19 & 1) != 0 )
    {
      if ( v20 )
      {
LABEL_21:
        if ( (v20 & 4) != 0 )
        {
          v21 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v21 )
          {
            v22 = *(_QWORD *)v21;
            v23 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
            if ( v21[2] != v23 )
            {
              v21[2] = v23;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 144LL))(v22, v18);
            }
          }
        }
      }
    }
    else if ( v20 > 3 && (v19 & 2) != 0 )
    {
      v34 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      v35 = v34[2275];
      if ( v35 )
      {
        v36 = v34[274];
        v34[284] += 24LL;
        v20 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v34[275] >= v20 + 24 && v36 )
        {
          v34[274] = v20 + 24;
        }
        else
        {
          v44 = v35;
          v42 = sub_820510((__int64)(v34 + 274), 24, 3);
          v35 = v44;
          v20 = v42;
        }
        *(_QWORD *)v20 = v35;
        *(_DWORD *)(v20 + 8) = 0;
        v19 = v20 | 5;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v18 + 96) = v20 | 5;
        LOBYTE(v20) = v20 & 0xFA | 4;
        goto LABEL_21;
      }
      *(_QWORD *)(v18 + 96) = v18 & 0xFFFFFFFFFFFFFFFALL | 1;
    }
    v3 = 1;
    for ( i = v17 + 24LL * *(unsigned int *)(*(_QWORD *)(v8 + 128) + 16LL); v15 != i; v3 &= sub_8312C0(v28, v25) )
    {
      v25 = *(_QWORD *)(v5 + 8) + 56LL * v2;
      v26 = *(_QWORD *)(**(_QWORD **)(v15 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v27 = *(_QWORD *)(v26 + 8);
      if ( (v27 & 7) != 0 || (v27 & 8) != 0 )
      {
        v43 = *(_QWORD *)(v5 + 8) + 56LL * v2;
        v33 = sub_B0CF30(**(_QWORD **)(v15 + 16), v25);
        v25 = v43;
        v28 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v28 = v26 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v15 += 24;
      ++v2;
    }
    v29 = sub_7868A0(v8);
    if ( v29 )
    {
LABEL_31:
      if ( (*(_BYTE *)(v29 + 68) & 1) == 0 || (v30 = *(_QWORD *)(v29 + 40), v30 > 7) || (_DWORD)v30 )
      {
        v31 = v29;
        if ( *(char *)(v29 + 29) < 0 )
          v31 = sub_77A0C0(v29);
        if ( *(_DWORD *)(v31 + 68) <= 0xFu )
          sub_78B660(v31);
        v3 &= sub_8312C0(
                *(_QWORD *)(v29 + 48),
                *(_QWORD *)(v5 + 8) + 56LL * (unsigned int)((*(_DWORD *)(v31 + 68) >> 4) + *(_DWORD *)(v5 + 16) - 1));
      }
      while ( 1 )
      {
        v32 = *(_QWORD *)(v29 + 8);
        v29 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v32 <= 7 )
          break;
        if ( (*(_BYTE *)(v29 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_31;
      }
    }
  }
  return v3;
}

