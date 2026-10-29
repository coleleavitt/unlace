_BYTE *__fastcall sub_1EE2180(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE *v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdi
  int v14; // edx
  bool v15; // cl
  __int64 v16; // r9
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rcx
  unsigned __int64 *v25; // rbx
  int v26; // r14d
  int v27; // r14d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // rcx
  unsigned int v39; // [rsp+0h] [rbp-78h]
  __int64 v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+8h] [rbp-70h]
  void *ptr[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v43[88]; // [rsp+20h] [rbp-58h] BYREF

  v7 = (_BYTE *)a1[2];
  v8 = *(_QWORD *)a3 >> 1;
  v9 = *(_QWORD *)a3 & 1LL;
  v10 = *(_QWORD *)(*a1 + 136);
  if ( !v7 )
  {
    v34 = sub_1ECF440(v10 + 552, *(const void **)a2, *(_QWORD *)(a2 + 8));
    a1[2] = (__int64)v34;
    v7 = v34;
    v10 = *(_QWORD *)(*a1 + 136);
  }
  v11 = sub_145C8F0(v10);
  v12 = v7[4];
  v13 = *a1;
  if ( (v12 & 1) != 0 )
    goto LABEL_9;
  v7[4] = v12 | 1;
  v14 = *(_DWORD *)v7 >> 9;
  if ( (unsigned int)(unsigned __int16)v14 - 28 > 6 )
  {
    v15 = (unsigned __int16)v14 != 65534 && (unsigned __int16)(v14 - 37) <= 0xFFDAu;
    if ( v15 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v15 = 1;
  if ( (unsigned __int16)v14 == 28 )
  {
LABEL_6:
    v15 = (unsigned __int16)(v14 - 1) <= 0x19u;
LABEL_7:
    if ( (v7[3] & 0x24) != 0 )
    {
LABEL_8:
      v7[4] |= 2u;
      goto LABEL_9;
    }
    goto LABEL_33;
  }
  if ( (v7[3] & 0x24) != 0 )
    goto LABEL_8;
LABEL_33:
  if ( !v11 && v15
    || (v7[4] & 8) != 0
    || (!v11 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 136) + 56LL) + 1LL) & 8) == 0) && *((_QWORD *)v7 + 1) )
  {
    goto LABEL_8;
  }
LABEL_9:
  sub_1EDA230(v13, (__int64)v7);
  v17 = (_QWORD *)*a1;
  if ( v8 )
  {
    v18 = sub_1EE0A70((__int64)v17, a1[1], v8);
    v17 = (_QWORD *)*a1;
    v8 = v18;
  }
  if ( v9 )
  {
    v19 = *(unsigned __int16 *)(a3 + 10);
    v20 = *(unsigned __int16 *)(a3 + 8);
    v21 = (v19 >> 2) & 1;
    v22 = (v19 >> 4) & 1;
    if ( (v19 & 2) != 0 && (*(_WORD *)v7 & 0x1FF) != 5 )
      *(_QWORD *)v7 = *(_QWORD *)v7 & 0xFFFFFFF7FFFFFE00LL | 0x800000005LL;
    v23 = a1[1];
    v24 = *(unsigned int *)(v23 + 4);
    if ( (unsigned int)v24 > 1 && (_DWORD)v24 != 5 )
    {
      v24 = *(_DWORD *)v7 & 0xFE0001FF;
      *(_DWORD *)v7 = v24 | (v20 << 9);
    }
    if ( (_DWORD)v21 )
      v7[3] |= 0xA0u;
    if ( v22 )
    {
      v33 = *(unsigned int *)(a3 + 12);
      v26 = a4 - 16;
      v25 = (unsigned __int64 *)(a3 + 16);
      if ( (_DWORD)v33 )
      {
        v39 = v33;
        ptr[0] = v7;
        v35 = sub_1EDF0E0((__int64)(v17 + 624), (__int64 *)ptr, v21, v24, v33, v16);
        v36 = v39;
        v37 = *(unsigned int *)(v35 + 8);
        if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
        {
          v40 = v35;
          v41 = v36;
          sub_2237220(v35, v35 + 16, v37 + 1, 16);
          v35 = v40;
          v36 = v41;
          v37 = *(unsigned int *)(v40 + 8);
        }
        v38 = (__int64 *)(*(_QWORD *)v35 + 16 * v37);
        *v38 = v23;
        v38[1] = v36;
        v17 = (_QWORD *)*a1;
        ++*(_DWORD *)(v35 + 8);
      }
      else
      {
        *((_BYTE *)a1 + 24) = 1;
      }
    }
    else
    {
      v25 = (unsigned __int64 *)(a3 + 12);
      v26 = a4 - 12;
    }
    sub_1EAC1F0(v17, v8, (__int64)v7);
    if ( v26 )
    {
      v27 = (_DWORD)v25 + v26;
      ptr[0] = v43;
      ptr[1] = (void *)0x400000000LL;
      do
      {
        v28 = *v25++;
        v29 = sub_1EE1310(*a1, a1[1], v28);
        sub_1EADF30((__int64)ptr, v29);
      }
      while ( (_DWORD)v25 != v27 );
      sub_1EDEDC0(*a1, (__int64)v7, (__int64)ptr, 0, v30, v31);
      if ( ptr[0] != v43 )
        free(ptr[0]);
    }
  }
  else
  {
    sub_1EAC1F0(v17, v8, (__int64)v7);
  }
  return v7;
}
