__int64 __fastcall sub_13FE8E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  __int64 v7; // r9
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 *v11; // r13
  unsigned __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // r9
  unsigned __int64 *v15; // rax
  __int64 result; // rax
  __int64 *v17; // rbx
  __int64 *i; // rbp
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // esi
  __int64 v25; // rdx
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v33; // [rsp+18h] [rbp-70h] BYREF
  __int64 v34; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v35; // [rsp+28h] [rbp-60h] BYREF
  void *v36[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v37[72]; // [rsp+40h] [rbp-48h] BYREF

  v5 = (__int64 *)(a1 + 368);
  v33 = a3;
  if ( (unsigned __int8)sub_13F7990((__int64 *)(a1 + 368), &v33, &v35) )
  {
    v8 = v35;
    v9 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = *((unsigned int *)v35 + 4);
    v11 = v35 + 1;
    if ( v10 + 1 > (unsigned __int64)*((unsigned int *)v35 + 5) )
    {
      sub_2237220(v35 + 1, v35 + 3, v10 + 1, 8);
      v10 = *((unsigned int *)v8 + 4);
      v9 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    }
    goto LABEL_4;
  }
  v26 = v35;
  v27 = (unsigned int)(*(_DWORD *)(a1 + 376) + 1);
  v28 = *(unsigned int *)(a1 + 384);
  v36[0] = v35;
  v29 = (unsigned int)(4 * v27);
  if ( (unsigned int)v29 >= 3 * (int)v28 )
  {
    sub_13FE1D0((__int64)v5, 2 * v28, v27, v28, v29, v7);
LABEL_30:
    sub_13F7990(v5, &v33, (unsigned __int64 **)v36);
    LODWORD(v27) = *(_DWORD *)(a1 + 376) + 1;
    v26 = (unsigned __int64 *)v36[0];
    goto LABEL_24;
  }
  if ( (int)v28 - *(_DWORD *)(a1 + 380) - (int)v27 <= (unsigned int)v28 >> 3 )
  {
    sub_13FE1D0((__int64)v5, v28, v27, v28, v29, v7);
    goto LABEL_30;
  }
LABEL_24:
  v13 = *v26 == -4096;
  *(_DWORD *)(a1 + 376) = v27;
  if ( !v13 )
    --*(_DWORD *)(a1 + 380);
  v30 = v33;
  v11 = v26 + 1;
  v26[2] = 0x100000000LL;
  v9 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  *v26 = v30;
  v26[1] = (unsigned __int64)(v26 + 3);
  v10 = 0;
LABEL_4:
  *(_QWORD *)(*v11 + 8 * v10) = v9;
  v12 = v33;
  ++*((_DWORD *)v11 + 2);
  v13 = *(_BYTE *)(a2 + 96) == 1;
  *(_QWORD *)(a2 + 88) = v12;
  if ( !v13 )
    *(_BYTE *)(a2 + 96) = 1;
  sub_2253560(v36, a4);
  sub_A0AAD0(a2 + 128, v36);
  if ( v36[0] != v37 )
    operator delete(v36[0]);
  sub_2253560(v36, a5);
  sub_A0AAD0(a2 + 160, v36);
  if ( v36[0] != v37 )
    operator delete(v36[0]);
  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 8LL);
  v13 = (unsigned __int8)sub_13F78D0((__int64 *)(a1 + 440), &v34, &v35) == 0;
  v15 = v35;
  if ( v13 )
  {
    v20 = *(_DWORD *)(a1 + 448);
    v36[0] = v35;
    v21 = (unsigned int)(v20 + 1);
    v22 = *(unsigned int *)(a1 + 456);
    v23 = (unsigned int)(4 * v21);
    v24 = 2 * v22;
    if ( (unsigned int)v23 < 3 * (int)v22 )
    {
      if ( (int)v22 - *(_DWORD *)(a1 + 452) - (int)v21 > (unsigned int)v22 >> 3 )
      {
LABEL_19:
        v13 = *v15 == -4096;
        *(_DWORD *)(a1 + 448) = v21;
        if ( !v13 )
          --*(_DWORD *)(a1 + 452);
        v25 = v34;
        v15[1] = 0;
        *v15 = v25;
        goto LABEL_11;
      }
      v24 = *(_DWORD *)(a1 + 456);
    }
    sub_13FDC70(a1 + 440, v24, v21, v22, v23, v14);
    sub_13F78D0((__int64 *)(a1 + 440), &v34, v36);
    LODWORD(v21) = *(_DWORD *)(a1 + 448) + 1;
    v15 = (unsigned __int64 *)v36[0];
    goto LABEL_19;
  }
LABEL_11:
  v15[1] = a2;
  result = *(unsigned int *)(a1 + 48);
  v17 = *(__int64 **)(a1 + 40);
  for ( i = &v17[result]; i != v17; result = ((__int64 (__fastcall *)(__int64, unsigned __int64))result)(v19, v33) )
  {
    while ( 1 )
    {
      v19 = *v17;
      result = *(_QWORD *)(*(_QWORD *)*v17 + 40LL);
      if ( (void (*)())result != nullsub_641 )
        break;
      if ( i == ++v17 )
        return result;
    }
    ++v17;
  }
  return result;
}
