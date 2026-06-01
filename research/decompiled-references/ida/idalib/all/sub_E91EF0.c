__int64 __fastcall sub_E91EF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  const void *v10; // r12
  size_t v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 *v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rcx
  char *v32; // rdx
  _QWORD *v33; // r11
  unsigned int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // [rsp+8h] [rbp-B0h]
  unsigned int v38; // [rsp+18h] [rbp-A0h]
  unsigned int v39; // [rsp+18h] [rbp-A0h]
  __int64 *v41; // [rsp+28h] [rbp-90h]
  __int64 *v42; // [rsp+28h] [rbp-90h]
  _QWORD *v43; // [rsp+30h] [rbp-88h]
  __int64 *v44; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v46; // [rsp+58h] [rbp-60h]
  _BYTE v47[88]; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_QWORD *)a4 )
    return *(_QWORD *)a4;
  v5 = 2 * a3;
  v6 = a2;
  v46 = 0x400000000LL;
  ptr = v47;
  v37 = &a2[v5];
  if ( a2 == &a2[v5] )
  {
    v26 = v47;
    v9 = 0;
    goto LABEL_19;
  }
  do
  {
    while ( 1 )
    {
      v10 = (const void *)*v6;
      v11 = v6[1];
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v13 = sub_2244B30(*v6, v11);
      v15 = sub_2244CB0(v12, v10, v11, v13);
      v16 = (__int64 *)(*(_QWORD *)v12 + 8LL * v15);
      if ( *v16 )
      {
        if ( *v16 != -8 )
        {
          sub_989490(&v44, v16, 0);
          v19 = v44;
          goto LABEL_10;
        }
        --*(_DWORD *)(v12 + 16);
      }
      v30 = *(_QWORD *)(v12 + 24);
      *(_QWORD *)(v12 + 104) += v11 + 17;
      v31 = (_QWORD *)((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v32 = (char *)v31 + v11 + 17;
      if ( *(_QWORD *)(v12 + 32) >= (unsigned __int64)v32 && v30 )
      {
        *(_QWORD *)(v12 + 24) = v32;
      }
      else
      {
        v42 = v16;
        v39 = v15;
        v36 = sub_986170(v12 + 24, v11 + 17, v11 + 17, 3, v14, (__int64)v16);
        v16 = v42;
        v15 = v39;
        v31 = (_QWORD *)v36;
      }
      v33 = v31 + 2;
      if ( v11 )
      {
        v43 = v31;
        v41 = v16;
        v38 = v15;
        v35 = memcpy(v31 + 2, v10, v11);
        v31 = v43;
        v16 = v41;
        v15 = v38;
        v33 = v35;
      }
      *((_BYTE *)v33 + v11) = 0;
      *v31 = v11;
      v31[1] = 0;
      *v16 = (__int64)v31;
      ++*(_DWORD *)(v12 + 12);
      v34 = sub_22450D0(v12, v15);
      sub_989490(&v44, (__int64 *)(*(_QWORD *)v12 + 8LL * v34), 0);
      v19 = v44;
LABEL_10:
      v20 = *v19;
      v21 = *(_QWORD *)(*v19 + 8);
      if ( v21
        || (v22 = *(_QWORD *)(v12 + 120)) != 0
        && (v21 = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v22 + 16LL))(v22, v10, v11),
            (*(_QWORD *)(v20 + 8) = v21) != 0) )
      {
        v7 = v21;
      }
      else
      {
        v23 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 104) += 24LL;
        v7 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v12 + 32) >= v7 + 24 && v23 )
        {
          *(_QWORD *)(v12 + 24) = v7 + 24;
          v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v24 = (_QWORD *)sub_986170(v12 + 24, 24, 24, 3, v17, v18);
          v7 = (unsigned __int64)v24;
        }
        v25 = *v24 & 0xFFFFF80000000000LL;
        v24[1] = 0;
        *v24 = v25 | 0x1FFFC05;
        *(_QWORD *)(v20 + 8) = v24;
        v24[2] = v20;
      }
      v8 = (unsigned int)v46 + 1LL;
      if ( v8 > HIDWORD(v46) )
        break;
      v6 += 2;
      *((_QWORD *)ptr + (unsigned int)v46) = v7;
      v9 = (unsigned int)(v46 + 1);
      LODWORD(v46) = v46 + 1;
      if ( v6 == v37 )
        goto LABEL_18;
    }
    v6 += 2;
    sub_2237220(&ptr, v47, v8, 8);
    *((_QWORD *)ptr + (unsigned int)v46) = v7;
    v9 = (unsigned int)(v46 + 1);
    LODWORD(v46) = v46 + 1;
  }
  while ( v37 != v6 );
LABEL_18:
  v26 = ptr;
LABEL_19:
  v27 = sub_FE3230(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), v9, v26);
  v28 = ptr;
  *(_QWORD *)a4 = v27;
  if ( v28 != v47 )
    free(v28);
  return *(_QWORD *)a4;
}
