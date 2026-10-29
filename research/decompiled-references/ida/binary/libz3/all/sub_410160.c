__int64 __fastcall sub_410160(__int64 a1, int a2, __int64 a3, char a4)
{
  __m128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r13
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 *v27; // r12
  __int64 v28; // r15
  __int64 *v29; // rbx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // rdi
  void *v34; // rdi
  void *v35; // rbx
  __int64 v36; // rbx
  void (**v38)(void); // rax
  int v39; // [rsp-8h] [rbp-D8h]
  __int64 v40; // [rsp+0h] [rbp-D0h]
  int v41; // [rsp+0h] [rbp-D0h]
  int v42[2]; // [rsp+0h] [rbp-D0h]
  __int64 v43; // [rsp+8h] [rbp-C8h]
  unsigned int v44; // [rsp+8h] [rbp-C8h]
  char v45; // [rsp+Fh] [rbp-C1h]
  unsigned __int8 v46; // [rsp+Fh] [rbp-C1h]
  int *v47; // [rsp+10h] [rbp-C0h]
  int v48[2]; // [rsp+10h] [rbp-C0h]
  int v49[2]; // [rsp+18h] [rbp-B8h] BYREF
  void *ptr; // [rsp+20h] [rbp-B0h]
  __int64 *v51; // [rsp+28h] [rbp-A8h]
  void *v52; // [rsp+30h] [rbp-A0h]
  int v53[4]; // [rsp+38h] [rbp-98h] BYREF
  __int64 v54; // [rsp+48h] [rbp-88h] BYREF
  __int64 *v55; // [rsp+50h] [rbp-80h]
  int v56[30]; // [rsp+58h] [rbp-78h] BYREF

  LODWORD(v43) = a2;
  *(_QWORD *)v49 = *(_QWORD *)(a1 + 8);
  HIBYTE(v43) = a4;
  v5 = _mm_loadh_ps((const double *)v49);
  *(__m128 *)v53 = v5;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v47 = v56;
  sub_1694970(v56, *(_QWORD *)v49);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if ( !*(_DWORD *)(v6 - 4) )
    {
LABEL_17:
      v15 = v8;
      v18 = v9;
      goto LABEL_20;
    }
    while ( 1 )
    {
      v41 = v7;
      v11 = sub_439010(*(_QWORD *)a1 + 8LL, *(_QWORD *)(v6 + 8LL * v10), 1, 0);
      v14 = sub_15DC610(
              v41,
              v11,
              0,
              0,
              v12,
              v13,
              v39,
              v41,
              v43,
              (int)v47,
              v49[0],
              (char)ptr,
              (int)v51,
              (int)v52,
              v53[0],
              *(void **)&v53[2]);
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      if ( v8 )
      {
        v16 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(*(_QWORD *)v49, v8);
      }
      v17 = sub_15DB5C0(*(_QWORD *)(a1 + 8), v10, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v10) + 40LL));
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      if ( v9 )
      {
        v16 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(*(_QWORD *)v49, v9);
      }
      sub_1692DB0(v47, v18, v15, 0, 0);
      v6 = *(_QWORD *)(a1 + 48);
      ++v10;
      if ( !v6 )
        break;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = v15;
      v9 = v18;
      if ( v10 >= *(_DWORD *)(v6 - 4) )
        goto LABEL_17;
    }
  }
  else
  {
    v15 = 0;
    v18 = 0;
  }
  v7 = *(_QWORD *)(a1 + 8);
LABEL_20:
  ptr = (void *)sub_1434DE0(v7, 0);
  (*(void (__fastcall **)(void *, int *))(*(_QWORD *)ptr + 24LL))(ptr, v47);
  v19 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 16LL))(ptr);
  v23 = *(_QWORD *)v53;
  v24 = v19;
  if ( *(_QWORD *)v53 )
    ++*(_DWORD *)(*(_QWORD *)v53 + 8LL);
  sub_1435270((_DWORD)ptr, v23, (unsigned int)v53, v20, v21, v22, v39, v40, v43, (__int64)v47, *(__int64 *)v49);
  sub_3FCDF0(v23, v24);
  v25 = *(_QWORD *)(a1 + 8);
  v55 = nullptr;
  v54 = v25;
  v26 = &v54;
  v51 = &v54;
  sub_15EEF60(*(_QWORD *)v53);
  v27 = v55;
  if ( v55 )
  {
    *(_QWORD *)v42 = &v55[*((unsigned int *)v55 - 1)];
    if ( *(__int64 **)v42 != v55 )
    {
      v46 = v45 & 1;
      do
      {
        while ( 1 )
        {
          v28 = *v27;
          v29 = (__int64 *)sub_186B270(0x70u);
          sub_400BE0((__int64)v29, *(_QWORD *)(a1 + 8), v28, v44);
          ++*(_DWORD *)v29;
          v26 = v29;
          *((_BYTE *)v29 + 108) = (4 * v46) | *((_BYTE *)v29 + 108) & 0xFB;
          sub_40F760((_QWORD **)(a1 + 176), (__int64)v29, 4 * (unsigned int)v46, v30, v31, v32, *(double *)v5.m128_u64);
          v16 = (*(_DWORD *)v29)-- == 1;
          if ( v16 )
            break;
          if ( *(__int64 **)v42 == ++v27 )
            goto LABEL_33;
        }
        v33 = (_DWORD *)v29[11];
        if ( v33 )
        {
          v16 = v33[4]-- == 1;
          if ( v16 )
          {
            v38 = *(void (***)(void))v33;
            v52 = v33;
            (*v38)();
            sub_186B220(v52);
          }
        }
        v34 = (void *)v29[10];
        if ( v34 )
          sub_41CD50(v34);
        ++v27;
        sub_2B4F40(v29 + 8);
        sub_2B4F40(v29 + 6);
        sub_2334C0(v29 + 4);
        v26 = (__int64 *)v29[3];
        sub_3FCDF0(v29[2], (__int64)v26);
        sub_186B220(v29);
      }
      while ( *(__int64 **)v42 != v27 );
    }
  }
LABEL_33:
  sub_2334C0(v51);
  v35 = ptr;
  (**(void (__fastcall ***)(void *, __int64 *))ptr)(ptr, v26);
  sub_186B220(v35);
  sub_1695230(*(_QWORD *)v48);
  v36 = *(_QWORD *)v49;
  sub_3FCDF0(v15, *(__int64 *)v49);
  sub_3FCDF0(v18, v36);
  return sub_3FCDF0(*(__int64 *)v53, *(__int64 *)&v53[2]);
}

