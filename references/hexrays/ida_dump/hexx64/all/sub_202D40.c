__int64 __fastcall sub_202D40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  char v6; // al
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 *v9; // rsi
  int v10; // r15d
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // rdi
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // ebx
  _QWORD *v19; // rdi
  int v20; // eax
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 tinfo_size; // rax
  unsigned __int64 v24; // xmm1_8
  int v25; // eax
  __int64 v26; // [rsp+18h] [rbp-F8h]
  char v27; // [rsp+23h] [rbp-EDh]
  unsigned int v28; // [rsp+24h] [rbp-ECh]
  __int64 v30; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-C0h] BYREF
  char v35; // [rsp+58h] [rbp-B8h]
  unsigned int v36; // [rsp+5Ch] [rbp-B4h]
  _QWORD v37[2]; // [rsp+60h] [rbp-B0h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+80h] [rbp-90h]
  int v40; // [rsp+88h] [rbp-88h]
  __int64 v41; // [rsp+90h] [rbp-80h]
  __int128 v42; // [rsp+98h] [rbp-78h]
  __int64 v43; // [rsp+A8h] [rbp-68h]
  __int128 v44; // [rsp+B0h] [rbp-60h]
  _QWORD v45[10]; // [rsp+C0h] [rbp-50h] BYREF

  v4 = *(_DWORD *)(a2 + 72);
  v45[3] = __readfsqword(0x28u);
  v28 = v4;
  v6 = *(_BYTE *)(a3 + 32);
  if ( v6 == 1 )
  {
    v7 = *(int *)(a3 + 24);
  }
  else
  {
    if ( v6 != 5 )
      ((void (__noreturn *)(void))sub_201340)();
    v7 = *(_QWORD *)(a3 + 24);
  }
  v35 = v6;
  v8 = *(_DWORD *)(a3 + 40);
  v9 = (__int64 *)a3;
  v34 = v7;
  v36 = v8;
  v30 = 0;
  v31 = 0;
  v26 = sub_2024F0(a2, a3, (__int64)&v30, &v31);
  v10 = (*(_BYTE *)(a3 + 48) & 8) == 0 ? 4 : 6;
  if ( (_BYTE)v30 )
    v10 = ((*(_BYTE *)(a3 + 48) & 8) == 0 ? 4 : 6) | 0x20;
  if ( v35 == 5 )
  {
    v9 = *(__int64 **)(a1 + 56);
    v10 |= (unsigned __int8)sub_1F0A50(&v34, (__int64)v9, 1, v26) << 7;
  }
  else if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
  {
    if ( v35 != 1 )
      sub_201320();
    v9 = v37;
    LODWORD(v37[0]) = v34;
    LODWORD(v38[0]) = v36;
    sub_1F0840(*(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), (int *)v37, (int *)v38);
    v35 = 1;
    v34 = SLODWORD(v37[0]);
    v36 = v38[0];
  }
  v11 = v31;
  if ( v31 )
  {
    v12 = sub_1C3110(*(_QWORD *)(v31 + 8), 0, 0);
    v13 = *(_QWORD *)(a1 + 56);
    if ( v12 )
    {
      if ( v28 )
      {
        v27 = *(_BYTE *)v13 & 1;
        if ( !v27 )
        {
LABEL_35:
          if ( v35 != 5 )
            goto LABEL_14;
          if ( v27 )
            goto LABEL_14;
          v21 = *(_DWORD **)a3;
          v22 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
          if ( *(_QWORD *)a3 == v22 )
            goto LABEL_14;
          while ( *(_DWORD *)(v13 + 64) - 1 != *v21 )
          {
            if ( (_DWORD *)v22 == ++v21 )
              goto LABEL_14;
          }
          if ( v21 == (_DWORD *)v22 )
            goto LABEL_14;
          v32 = -1;
          v33 = 0;
          if ( !(unsigned __int8)sub_22D230(v13, &v32, 0, &v33)
            || v34 != v32
            || (tinfo_size = get_tinfo_size(0, v33, 0), v36 != tinfo_size) )
          {
            clear_tinfo_t(&v33);
            v13 = *(_QWORD *)(a1 + 56);
            goto LABEL_14;
          }
          v37[0] = 0;
          v37[1] = 0;
          sub_32F770(&v34, v37);
          LODWORD(v38[0]) = 0;
          v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v28)).m128i_u64[0];
          copy_argloc(v38, v37);
          v41 = 0;
          v39 = v26;
          v40 = 1;
          v43 = 0;
          v45[0] = 0;
          v42 = 0;
          v44 = 0;
          copy_tinfo_t(v45, &v33);
          v25 = v40;
          v45[1] = v24;
          v45[2] = 0;
          BYTE1(v25) = BYTE1(v40) & 0x7E;
          v40 = v25 | 0x100000;
          v14 = sub_1F6560(*(_QWORD *)(a1 + 56), (__int64)v38, 0);
          sub_83E20(v38);
          cleanup_argloc(v37);
          clear_tinfo_t(&v33);
          if ( v14 == -1 )
          {
            v13 = *(_QWORD *)(a1 + 56);
            goto LABEL_14;
          }
          goto LABEL_18;
        }
      }
      v27 = 0;
    }
    else if ( v28 )
    {
      v27 = *(_BYTE *)v13 & 1;
      if ( !v27 )
      {
LABEL_14:
        v14 = sub_1F6FD0(v13, v11, v28, v26, v10, a1 + 48);
        goto LABEL_18;
      }
    }
    else
    {
      v27 = 1;
    }
    v15 = *(_QWORD *)(v11 + 8);
    LODWORD(v38[0]) = 0;
    copy_argloc(v38, v15);
    v39 = v26;
    v14 = sub_1F0540((__int64 *)(v13 + 432), (__int64)v38);
    cleanup_argloc(v38);
    if ( v14 != -1 )
      goto LABEL_18;
    v13 = *(_QWORD *)(a1 + 56);
    goto LABEL_35;
  }
  v19 = *(_QWORD **)(a1 + 56);
  if ( !v28 || (*(_BYTE *)v19 & 1) != 0 )
  {
    v9 = &v34;
    v14 = sub_1F06E0(v19 + 54, (__int64)&v34, v26);
    if ( v14 != -1 )
      goto LABEL_18;
    v19 = *(_QWORD **)(a1 + 56);
  }
  if ( v35 == 1 )
  {
    v20 = sub_1F6B00(v19, v34, v36, &v30, v28, v26, v10);
  }
  else
  {
    if ( v35 != 5 )
      sub_201340(v19, v9, v36, a1 + 48);
    v20 = sub_232C90((_DWORD)v19, v34, v36, (unsigned int)&v30, v28, v26, v10, a1 + 48);
  }
  v14 = v20;
LABEL_18:
  if ( *(_BYTE *)(a1 + 48) )
  {
    v17 = -36;
  }
  else
  {
    v16 = **(_QWORD **)(a1 + 64) + 104LL * v14;
    if ( !(unsigned __int8)sub_1C3110(v16, 0, 0) )
      *(_DWORD *)(v16 + 24) |= 0x2000000u;
    v17 = 0;
    *(_DWORD *)(a1 + 44) = v14;
  }
  clear_tinfo_t(&v30);
  return v17;
}
