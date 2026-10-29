__int64 __fastcall sub_6E2CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // esi
  int v26; // eax
  __int64 v27; // r8
  int v28; // r11d
  unsigned int v29; // edi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  int v34; // esi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // r10d
  _QWORD *v39; // r9
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdi
  int v43; // r9d
  _QWORD *v44; // r8
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 v47; // [rsp+8h] [rbp-40h]

  v9 = *(_QWORD *)(a3 + 128);
  if ( v9
    || (sub_6E2580((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), a3, a4, a5, a6),
        (v9 = *(_QWORD *)(a3 + 128)) != 0) )
  {
    v9 = *(_QWORD *)(v9 + 88);
  }
  if ( (*(_BYTE *)(v9 + 74) & 1) == 0 )
    return 1;
  sub_6E2580((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 128) + 1LL) & 4) == 0 )
  {
    sub_6E2580((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v11, v12, v13, v14);
    if ( !*(_DWORD *)(*(_QWORD *)(v9 + 128) + 20LL) )
      return 1;
  }
  v15 = (_BYTE *)sub_A647E0(*(_QWORD *)(a1 + 48));
  v16 = v15;
  if ( !v15[32] )
  {
    if ( !v15 )
      return 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v15 + 16LL))(v15, v9);
    v25 = *((_DWORD *)v16 + 20);
    v26 = 0;
    if ( !v25 )
      goto LABEL_35;
    v24 = v25 - 1;
    v27 = *((_QWORD *)v16 + 8);
    v28 = 1;
    v21 = nullptr;
    v29 = v24 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v30 = (_QWORD *)(v27 + 16LL * v29);
    v31 = *v30;
    if ( v9 == *v30 )
    {
LABEL_20:
      v32 = v30[1];
      return sub_6E8900(a1, a2, v9, a4, v32, 0);
    }
    while ( v31 != -4096 )
    {
      if ( v31 == -8192 && !v21 )
        v21 = v30;
      v29 = v24 & (v29 + v28);
      v30 = (_QWORD *)(v27 + 16LL * v29);
      v31 = *v30;
      if ( v9 == *v30 )
        goto LABEL_20;
      ++v28;
    }
    if ( !v21 )
      v21 = v30;
    v22 = (unsigned int)(*((_DWORD *)v16 + 18) + 1);
    v26 = 2 * v25;
    v23 = (unsigned int)(4 * v22);
    if ( (unsigned int)v23 < 3 * v25 )
    {
      if ( v25 >> 3 >= v25 - *((_DWORD *)v16 + 19) - (unsigned int)v22 )
      {
        sub_6E2A40((__int64)(v16 + 64), v25, (__int64)v21, v22, v23, v24);
        v40 = *((_DWORD *)v16 + 20);
        v21 = nullptr;
        LODWORD(v22) = *((_DWORD *)v16 + 18) + 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          v42 = *((_QWORD *)v16 + 8);
          v43 = 1;
          v44 = nullptr;
          LODWORD(v45) = v41 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
          v21 = (_QWORD *)(v42 + 16LL * (unsigned int)v45);
          v46 = *v21;
          if ( v9 != *v21 )
          {
            while ( v46 != -4096 )
            {
              if ( v46 == -8192 && !v44 )
                v44 = v21;
              v45 = v41 & (unsigned int)(v45 + v43);
              v21 = (_QWORD *)(v42 + 16 * v45);
              v46 = *v21;
              if ( v9 == *v21 )
                goto LABEL_32;
              ++v43;
            }
            if ( v44 )
              v21 = v44;
          }
        }
      }
    }
    else
    {
LABEL_35:
      sub_6E2A40((__int64)(v16 + 64), v26, (__int64)v21, v22, v23, v24);
      v33 = *((_DWORD *)v16 + 20);
      v21 = nullptr;
      LODWORD(v22) = *((_DWORD *)v16 + 18) + 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        v35 = *((_QWORD *)v16 + 8);
        LODWORD(v36) = (v33 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v21 = (_QWORD *)(v35 + 16LL * (unsigned int)v36);
        v37 = *v21;
        if ( v9 != *v21 )
        {
          v38 = 1;
          v39 = nullptr;
          while ( v37 != -4096 )
          {
            if ( v37 == -8192 && !v39 )
              v39 = v21;
            v36 = v34 & (unsigned int)(v36 + v38);
            v21 = (_QWORD *)(v35 + 16 * v36);
            v37 = *v21;
            if ( v9 == *v21 )
              goto LABEL_32;
            ++v38;
          }
          if ( v39 )
            v21 = v39;
        }
      }
    }
LABEL_32:
    *((_DWORD *)v16 + 18) = v22;
    if ( *v21 != -4096 )
      --*((_DWORD *)v16 + 19);
    *v21 = v9;
    v32 = 0;
    v21[1] = 0;
    return sub_6E8900(a1, a2, v9, a4, v32, 0);
  }
  if ( !v15 )
    return 1;
  v17 = sub_F84A60(v15, v9);
  v47 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
  if ( v47 == *(_QWORD *)v17 )
    return 1;
  v18 = *(_QWORD *)v17;
  while ( 1 )
  {
    v19 = sub_F84DC0(v16, v9, *(_QWORD *)(*(_QWORD *)v18 + 104LL));
    result = sub_6E8900(a1, a2, v9, a4, v19, *(_QWORD *)(*(_QWORD *)v18 + 104LL));
    if ( !(_BYTE)result )
      break;
    v18 += 8;
    if ( v47 == v18 )
      return 1;
  }
  return result;
}
