__int64 __fastcall sub_19471F0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4, _BYTE *a5, __m128 a6, __m128 a7)
{
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // edx
  void **v26; // r12
  unsigned __int64 v27; // rcx
  void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // esi
  unsigned int v34; // r15d
  __int64 v35; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // r9
  unsigned int v46; // [rsp+Ch] [rbp-9Ch]
  __int64 v47; // [rsp+18h] [rbp-90h]
  int v48; // [rsp+18h] [rbp-90h]
  void **v49; // [rsp+20h] [rbp-88h]
  _DWORD *v50; // [rsp+28h] [rbp-80h]
  int v51; // [rsp+3Ch] [rbp-6Ch] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v53[88]; // [rsp+50h] [rbp-58h] BYREF

  v10 = a3;
  v11 = *a3;
  v46 = a2;
  v12 = (unsigned int)(*a3 - 6);
  if ( (unsigned int)v12 > 2 )
    goto LABEL_18;
  v13 = *((_QWORD *)v10 + 5);
  if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v14 = (__int64 *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *v14;
    if ( *(_BYTE *)(*v14 + 16) == 26 )
    {
      if ( (*(_QWORD *)(v15 + 16) & 0x1000000LL) == 0 )
      {
LABEL_6:
        if ( *(_BYTE *)(v15 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F63050(v15, a2, v12, a4) )
        {
          v16 = *(_BYTE *)(v15 + 18) >> 5;
        }
        else
        {
          v16 = 0;
        }
LABEL_8:
        v17 = *(_QWORD *)(sub_B8C1B0(v13 + 72) + 16);
        v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v17 & 4) != 0 )
          v18 = (_QWORD *)*v18;
        if ( v18 )
          v18 -= 8;
        v19 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      v15 = sub_F63050(*v14, a2, v12, a4);
      if ( (*(_QWORD *)(v15 + 16) & 0x1000000LL) == 0 )
        goto LABEL_6;
    }
    v44 = sub_18BCBB0(v15);
    if ( (v45 & 0x20) != 0 )
      v44 += *(unsigned __int16 *)(v15 + 22);
    v16 = *(_QWORD *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_8;
  }
  v16 = 0;
  v19 = 0;
  v18 = nullptr;
LABEL_13:
  sub_19A2CD0(ptr, *a1, v18, v16, v19);
  v20 = *a1;
  sub_18C79E0(*a1, 4, 4);
  v21 = sub_1944E10(a1, *((unsigned __int16 **)v10 + 3), a6, a7);
  if ( v21 == 1
    || (v22 = *a1,
        a2 = v21 & 0xFFFFFFFFFFFFFFFELL,
        v51 = *v10,
        v23 = sub_18B0290(v22, (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL), &v51, *(double *)a6.m128_u64),
        v23 == 1) )
  {
    sub_190D5E0(v20, a6);
    sub_19A2DA0(ptr);
    return 1;
  }
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v25 = v51;
  if ( *((_QWORD *)v10 + 3) != v24 || *v10 != v51 )
    *a5 = 1;
  *((_QWORD *)v10 + 3) = v24;
  *v10 = v25;
  sub_190D5E0(v20, a6);
  sub_19A2DA0(ptr);
  v11 = *v10;
LABEL_18:
  if ( v11 == 2 )
  {
    v26 = *((void ***)v10 + 1);
    v27 = (unsigned __int64)v53;
    v49 = &v26[*((_QWORD *)v10 + 2)];
    if ( v26 != v49 )
    {
      v50 = v10;
      do
      {
        v28 = *v26;
        v29 = *(_QWORD *)((unsigned __int64)*v26 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v29 + 16) == 38
          || (v37 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v37 + 16) == 38)
          && (v29 = sub_F63050(*(_QWORD *)((unsigned __int64)*v26 & 0xFFFFFFFFFFFFFFF0LL), a2, v37, v27)) != 0 )
        {
          v30 = *a1;
          *a5 = 1;
          ptr[1] = (void *)0x200000000LL;
          ptr[0] = v53;
          v47 = v29;
          sub_1E4C960(v30, *(_QWORD *)(v29 + 32));
          v31 = *a1;
          v32 = v47;
          v33 = *(_DWORD *)(*a1 + 12632);
          v34 = *(_DWORD *)(v47 + 20);
          *(_DWORD *)(*a1 + 12632) = 0;
          v48 = v33;
          v35 = (__int64)sub_1946CC0(a1, *(_QWORD *)(v32 + 32), a6, a7);
          if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            *(_DWORD *)(v31 + 12632) = v33;
            if ( ptr[0] != v53 )
              free(ptr[0]);
            return 1;
          }
          a2 = sub_A781D0(*(_QWORD *)(*a1 + 248), v35, v34);
          sub_A6A4A0(a4, a2);
          *(_DWORD *)(v31 + 12632) = v48;
          if ( ptr[0] != v53 )
            free(ptr[0]);
        }
        else
        {
          ptr[0] = sub_1946CC0(a1, (__int64)v28, a6, a7);
          if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 1;
          a2 = (__int64)ptr;
          if ( (unsigned __int8)sub_18B53F0(*a1, (__int64 *)ptr, ((unsigned __int64)v46 << 32) | v46, v38, v39, v40) )
            return 1;
          v41 = ptr[0];
          if ( v28 != ptr[0] )
            *a5 = 1;
          v42 = *(unsigned int *)(a4 + 8);
          v27 = *(unsigned int *)(a4 + 12);
          if ( v42 + 1 > v27 )
          {
            a2 = a4 + 16;
            sub_2237220(a4, a4 + 16, v42 + 1, 8);
            v42 = *(unsigned int *)(a4 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a4 + 8 * v42) = v41;
          ++*(_DWORD *)(a4 + 8);
        }
        ++v26;
      }
      while ( v49 != v26 );
      v10 = v50;
    }
    v43 = *(unsigned int *)(a4 + 8);
    *((_QWORD *)v10 + 1) = *(_QWORD *)a4;
    *((_QWORD *)v10 + 2) = v43;
    if ( !v43 )
      *v10 = 1;
  }
  return 0;
}
