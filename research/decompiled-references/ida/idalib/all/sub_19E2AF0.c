// write access to const memory has been detected, the output may be wrong!
unsigned __int16 *__fastcall sub_19E2AF0(
        __int64 *a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int *a9,
        unsigned __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+0h] [rbp-E8h]
  __int64 v44; // [rsp+0h] [rbp-E8h]
  __int64 v45; // [rsp+0h] [rbp-E8h]
  __int64 v46; // [rsp+0h] [rbp-E8h]
  __int64 v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v49[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v51; // [rsp+40h] [rbp-A8h] BYREF
  char v52; // [rsp+98h] [rbp-50h]
  unsigned int v53; // [rsp+A0h] [rbp-48h]
  char v54; // [rsp+A4h] [rbp-44h]

  v47 = sub_168B6C0((__int64)a1);
  v16 = sub_15F1540(*a1, 0);
  if ( (*(_BYTE *)(v16 + 8) & 0x7F) != 0x12 || v16 == 48 )
  {
    sub_168B9F0((__int64)v49, a1, a5, 0xFDAu, 0);
    sub_15F7200(v49);
    return (_WORD *)(&dword_0 + 1);
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 72);
    sub_1905D90(*a1, v17, a5, 0, 0);
    v18 = sub_BA85D0(v16 - 48);
    v23 = v18;
    if ( v18 )
    {
      v24 = *(_QWORD *)(v18 + 120);
      if ( !v24 )
      {
        v17 = *(_QWORD *)(v23 + 96);
        v45 = v23;
        sub_A794E0((__int64 *)(v17 + 88), v17, v19, v20, v21, v22);
        v23 = v45;
        v24 = *(_QWORD *)(v45 + 120);
      }
      v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v25 )
        goto LABEL_19;
      if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
      {
        v46 = v23;
        sub_BA8900(v23);
        v23 = v46;
        v25 = *(_QWORD *)(v46 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v26 = *(_QWORD **)(v25 + 8);
      if ( !v26 )
        goto LABEL_19;
      v27 = *(_QWORD *)(*v26 & 0xFFFFFFFFFFFFFFF0LL);
      v28 = (unsigned int)*(unsigned __int8 *)(v27 + 16) - 35;
      if ( (unsigned int)v28 > 1 )
      {
        v43 = v23;
        v27 = sub_F63050(v27, v17, v28, v20);
        v23 = v43;
      }
      v29 = v27 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v29 )
      {
        if ( *(_QWORD **)(v16 - 8) == a6 )
        {
          v34 = *(unsigned int *)(*a1 + 40);
          if ( !(_DWORD)v34 )
          {
            *(_DWORD *)byte_8 = 0;
            BUG();
          }
          v35 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v34 - 8);
          *(_BYTE *)(v35 + 9) &= ~0x10u;
        }
        if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        {
          v30 = sub_A74EC0(v47, v29);
          return sub_19DEE70(a1, 0, v30, a5, a6, 0, a2, a3, a7, a9, a10, a8, a11, a12, 0);
        }
        else
        {
          return sub_19E15D0(a1, nullptr, v29, a5, (__int64)a6, 0, a2, a3, a7, a9, a10, a8, a11, a12, 0);
        }
      }
      else
      {
LABEL_19:
        v44 = v23;
        sub_168B9F0((__int64)v49, a1, a5, 0x135Fu, 0);
        v32 = 0;
        if ( (*(_QWORD *)(v44 + 40) & 7) == 0 )
          v32 = *(_QWORD *)(v44 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = v32;
        if ( v52 )
        {
          sub_AE9DF0(&v51, v32, 5u);
        }
        else if ( v54 )
        {
          v38 = sub_168B9E0(v49);
          v41 = v50;
          if ( v50 )
            v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
          v48 = v41;
          v42 = sub_1587BC0(v38, &v48, v36, v37, v39, v40);
          sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v53 + 8), v33, 5u);
        }
        sub_15F7200(v49);
        return (_WORD *)(&dword_0 + 1);
      }
    }
    else
    {
      sub_168B9F0((__int64)v49, a1, a5, 0x10BAu, 0);
      v48 = *(_QWORD *)(v16 - 8);
      sub_15894B0((__int64)v49, &v48);
      sub_15F7200(v49);
      return (_WORD *)(&dword_0 + 1);
    }
  }
}
