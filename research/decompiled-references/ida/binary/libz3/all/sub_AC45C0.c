__int64 __fastcall sub_AC45C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r12
  __int64 v11; // r14
  int v12; // r8d
  int v13; // ecx
  __int64 (__fastcall *v14)(__int64); // rax
  int v15; // esi
  int *v17; // rax
  char v19; // r15
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // r14
  int *v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp-8h] [rbp-F8h]
  int v29; // [rsp+0h] [rbp-F0h]
  int v30; // [rsp+8h] [rbp-E8h]
  int *v31; // [rsp+10h] [rbp-E0h]
  int v33[2]; // [rsp+20h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-C8h]
  void *ptr; // [rsp+30h] [rbp-C0h]
  int v36[2]; // [rsp+38h] [rbp-B8h]
  int v37; // [rsp+40h] [rbp-B0h] BYREF
  void *v38; // [rsp+48h] [rbp-A8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  ptr = &v37;
  *(_QWORD *)v36 = 0x1000000000LL;
  v5 = sub_983520(a2, v4, v3);
  if ( v5 )
  {
    v6 = v36[0];
    *((_QWORD *)ptr + (unsigned int)v36[0]) = v5;
    v36[0] = v6 + 1;
    if ( !(*(_DWORD *)(a1 + 40) >> 1) )
    {
LABEL_3:
      v7 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)v33 = 0;
      v8 = *(_QWORD *)(a2 + 24);
      v9 = *(_DWORD *)(a1 + 36);
      v34 = v7;
      sub_894B80(v8, v9, (__int64 *)v33);
      v10 = *(_QWORD *)v33;
      v11 = v34;
      v12 = (int)ptr;
      v13 = v36[0];
      v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
      if ( v14 == sub_AC3A10 )
      {
        v15 = *(_DWORD *)(a1 + 32);
      }
      else
      {
        v30 = (int)ptr;
        LODWORD(v31) = v36[0];
        v21 = v14(a1);
        v12 = v30;
        v13 = (int)v31;
        v15 = v21;
      }
      v5 = sub_15E0A80(
             v7,
             v15,
             v10,
             v13,
             v12,
             0,
             0,
             v28,
             v29,
             v30,
             (int)v31,
             a1,
             *(__int64 *)v33,
             v34,
             (char)ptr,
             v36[0],
             v37,
             v38);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 8))-- == 1 )
          sub_15D7BC0(v11, v10);
      }
      goto LABEL_8;
    }
    v19 = 1;
  }
  else
  {
    if ( !(*(_DWORD *)(a1 + 40) >> 1) )
    {
LABEL_8:
      v17 = (int *)ptr;
      goto LABEL_9;
    }
    v19 = 0;
  }
  v5 = sub_9836E0(a2, *(_DWORD *)(a1 + 40));
  if ( !v5 )
    goto LABEL_8;
  v20 = v36[0];
  if ( v36[0] >= (unsigned int)v36[1] )
  {
    v22 = (unsigned int)(2 * v36[1]);
    v17 = (int *)sub_186B270(8 * v22);
    v20 = v36[0];
    v23 = (int *)ptr;
    if ( v36[0] )
    {
      if ( (unsigned int)(v36[0] - 1) <= 2 || v17 == (int *)((char *)ptr + 8) )
      {
        v26 = 0;
        v27 = 8LL * (unsigned int)v36[0];
        do
        {
          *(_QWORD *)&v17[v26 / 4] = *(_QWORD *)&v23[v26 / 4];
          v26 += 8LL;
        }
        while ( v27 != v26 );
      }
      else
      {
        v24 = 0;
        v25 = 16LL * ((unsigned int)v36[0] >> 1);
        do
        {
          *(__m128i *)&v17[v24 / 4] = _mm_loadu_si128((const __m128i *)&v23[v24 / 4]);
          v24 += 16LL;
        }
        while ( v24 != v25 );
        if ( (v20 & 1) != 0 )
          *(_QWORD *)&v17[2 * (v20 & 0xFFFFFFFE)] = *(_QWORD *)&v23[2 * (v20 & 0xFFFFFFFE)];
      }
    }
    if ( v23 != &v37 && v23 )
    {
      v31 = v17;
      sub_186B220(v23);
      v20 = v36[0];
      v17 = v31;
    }
    ptr = v17;
    v36[1] = v22;
  }
  else
  {
    v17 = (int *)ptr;
  }
  *(_QWORD *)&v17[2 * v20] = v5;
  v5 = 0;
  v36[0] = v20 + 1;
  if ( v19 )
    goto LABEL_3;
LABEL_9:
  if ( v17 != &v37 && v17 )
    sub_186B220(v17);
  return v5;
}

