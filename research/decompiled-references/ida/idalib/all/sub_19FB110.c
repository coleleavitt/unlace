__int64 __fastcall sub_19FB110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // rax
  _QWORD *v15; // rdi
  int v16; // edi
  int v17; // r10d
  __int64 v18; // r11
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  _DWORD *v25; // rdx
  int v26; // eax
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // r8d
  unsigned int v31; // esi
  int v32; // r11d
  __int64 v33; // r10
  int v34; // eax
  int v35; // esi
  unsigned int v36; // r14d
  int v37; // r10d
  int v38; // r10d
  __int64 v39; // r11
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  int v44; // edi
  unsigned int v45; // edx
  int v46; // edx
  int v47; // eax
  int v48; // r10d
  _QWORD *v49; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v50[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(unsigned int *)(a1 + 32);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v6 + 1, 8);
    v6 = *(unsigned int *)(a1 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) = a2;
  result = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
  *(_DWORD *)(a1 + 32) = result;
  while ( (_DWORD)result )
  {
    v8 = *(_DWORD *)(a1 + 120);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = v8 - 1;
    while ( 1 )
    {
      v11 = (unsigned int)result;
      v12 = *(_QWORD **)(v9 + 8LL * (unsigned int)result - 8);
      *(_DWORD *)(a1 + 32) = result - 1;
      if ( !v8 )
        goto LABEL_33;
      v11 = *(_QWORD *)(a1 + 104);
      v13 = v10 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
      v14 = v11 + 16LL * v13;
      v15 = *(_QWORD **)v14;
      if ( v12 != *(_QWORD **)v14 )
        break;
LABEL_8:
      v16 = *(_DWORD *)(v14 + 8);
      a5 = *(unsigned int *)(a1 + 132);
      if ( (v16 & (unsigned int)a5) == 0 )
        goto LABEL_26;
      result = *(unsigned int *)(a1 + 32);
      if ( !(_DWORD)result )
        return result;
    }
    if ( v15 != (_QWORD *)-4096LL )
    {
      v17 = 1;
      v18 = 0;
      while ( 1 )
      {
        if ( !v18 && v15 == (_QWORD *)-8192LL )
          v18 = v14;
        v13 = v10 & (v17 + v13);
        v14 = v11 + 16LL * v13;
        v15 = *(_QWORD **)v14;
        if ( v12 == *(_QWORD **)v14 )
          goto LABEL_8;
        if ( v15 == (_QWORD *)-4096LL )
          break;
        ++v17;
      }
      if ( v18 )
        v14 = v18;
    }
    v9 = 3 * v8;
    v19 = *(_DWORD *)(a1 + 112) + 1;
    a5 = (unsigned int)(4 * v19);
    if ( (unsigned int)a5 >= (unsigned int)v9 )
    {
LABEL_33:
      sub_E3DFA0((__int64 *)(a1 + 104), 2 * v8, v11, v9, a5, v10);
      v29 = *(_DWORD *)(a1 + 120);
      if ( !v29 )
        goto LABEL_92;
      v30 = v29 - 1;
      v11 = *(_QWORD *)(a1 + 104);
      v31 = (v29 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
      v19 = *(_DWORD *)(a1 + 112) + 1;
      v14 = v11 + 16LL * v31;
      v9 = *(_QWORD *)v14;
      if ( v12 == *(_QWORD **)v14 )
        goto LABEL_23;
      v32 = 1;
      v33 = 0;
      if ( v9 != -4096 )
      {
        while ( 1 )
        {
          if ( v33 || v9 != -8192 )
            v14 = v33;
          v31 = v30 & (v32 + v31);
          v10 = v11 + 16LL * v31;
          v9 = *(_QWORD *)v10;
          if ( v12 == *(_QWORD **)v10 )
          {
            v14 = v11 + 16LL * v31;
            goto LABEL_23;
          }
          if ( v9 == -4096 )
            break;
          ++v32;
          v33 = v14;
          v14 = v11 + 16LL * v31;
        }
        if ( v14 )
        {
LABEL_22:
          v9 = *(_QWORD *)v14;
LABEL_23:
          *(_DWORD *)(a1 + 112) = v19;
          if ( v9 != -4096 )
            --*(_DWORD *)(a1 + 116);
          goto LABEL_25;
        }
        v14 = v11 + 16LL * v31;
      }
    }
    else
    {
      v20 = v8 - *(_DWORD *)(a1 + 116) - v19;
      v21 = v8 >> 3;
      if ( (unsigned int)v20 > (unsigned int)v21 )
        goto LABEL_22;
      sub_E3DFA0((__int64 *)(a1 + 104), v8, v11, v20, v21, v10);
      v34 = *(_DWORD *)(a1 + 120);
      if ( !v34 )
      {
LABEL_92:
        ++*(_DWORD *)(a1 + 112);
        BUG();
      }
      v35 = v34 - 1;
      v11 = *(_QWORD *)(a1 + 104);
      v36 = (v34 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
      v19 = *(_DWORD *)(a1 + 112) + 1;
      v14 = v11 + 16LL * v36;
      v9 = *(_QWORD *)v14;
      if ( v12 == *(_QWORD **)v14 )
        goto LABEL_23;
      v37 = 1;
      v10 = 0;
      if ( v9 != -4096 )
      {
        while ( 1 )
        {
          if ( v10 || v9 != -8192 )
            v14 = v10;
          v10 = (unsigned int)(v37 + 1);
          v36 = v35 & (v37 + v36);
          v9 = *(_QWORD *)(v11 + 16LL * v36);
          if ( v12 == (_QWORD *)v9 )
          {
            v14 = v11 + 16LL * v36;
            goto LABEL_23;
          }
          if ( v9 == -4096 )
            break;
          ++v37;
          v10 = v14;
          v14 = v11 + 16LL * v36;
        }
        if ( v14 )
          goto LABEL_22;
        v14 = v11 + 16LL * v36;
      }
    }
    *(_DWORD *)(a1 + 112) = v19;
LABEL_25:
    *(_DWORD *)(v14 + 8) = 0;
    v8 = *(_DWORD *)(a1 + 120);
    v16 = 0;
    *(_QWORD *)v14 = v12;
    a5 = *(unsigned int *)(a1 + 132);
LABEL_26:
    v49 = v12;
    *(_BYTE *)(a1 + 136) = v16 != 0;
    if ( !v8 )
    {
      v50[0] = 0;
LABEL_52:
      sub_E3DFA0((__int64 *)(a1 + 104), 2 * v8, v11, v9, a5, v10);
      v43 = *(_DWORD *)(a1 + 120);
      if ( v43 )
      {
        v22 = (__int64)v49;
        v44 = v43 - 1;
        a5 = *(_QWORD *)(a1 + 104);
        v45 = (v43 - 1) & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
        v23 = a5 + 16LL * v45;
        v42 = *(_QWORD *)v23;
        if ( v49 != *(_QWORD **)v23 && v42 != -4096 )
        {
          v10 = a5 + 16LL * (v44 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4)));
          v48 = 1;
          v23 = 0;
          while ( 1 )
          {
            if ( !v23 && v42 == -8192 )
              v23 = v10;
            v45 = v44 & (v48 + v45);
            v10 = a5 + 16LL * v45;
            v42 = *(_QWORD *)v10;
            if ( v49 == *(_QWORD **)v10 )
              goto LABEL_72;
            if ( v42 == -4096 )
              break;
            ++v48;
          }
          if ( !v23 )
          {
LABEL_72:
            v23 = a5 + 16LL * v45;
            goto LABEL_54;
          }
          v42 = *(_QWORD *)v23;
        }
LABEL_54:
        v46 = *(_DWORD *)(a1 + 112);
        v50[0] = v23;
        LODWORD(v11) = v46 + 1;
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 112);
        v22 = (__int64)v49;
        v50[0] = 0;
        v42 = 0x10102464C457FLL;
        LODWORD(v11) = v47 + 1;
        v23 = 0;
      }
      goto LABEL_48;
    }
    v10 = v8 - 1;
    v22 = (unsigned int)v10 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
    v23 = v11 + 16 * v22;
    v24 = *(_QWORD *)v23;
    if ( v12 == *(_QWORD **)v23 )
      goto LABEL_28;
    v38 = 1;
    v39 = 0;
    if ( v24 != -4096 )
    {
      while ( 1 )
      {
        if ( !v39 && v24 == -8192 )
          v39 = v23;
        v22 = (unsigned int)v10 & (v38 + (_DWORD)v22);
        v23 = v11 + 16LL * (unsigned int)v22;
        v24 = *(_QWORD *)v23;
        if ( v12 == *(_QWORD **)v23 )
          break;
        if ( v24 == -4096 )
        {
          if ( v39 )
            v23 = v39;
          goto LABEL_45;
        }
        ++v38;
      }
LABEL_28:
      a5 = *(_DWORD *)(v23 + 8) | (unsigned int)a5;
      v25 = (_DWORD *)(v23 + 8);
      v26 = a5;
      goto LABEL_29;
    }
LABEL_45:
    v40 = *(_DWORD *)(a1 + 112);
    v9 = 3 * v8;
    v50[0] = v23;
    v11 = (unsigned int)(v40 + 1);
    if ( 4 * (int)v11 >= (unsigned int)v9 )
      goto LABEL_52;
    v41 = v8 - *(_DWORD *)(a1 + 116) - (unsigned int)v11;
    if ( (unsigned int)v41 <= v8 >> 3 )
    {
      sub_E3DFA0((__int64 *)(a1 + 104), v8, v11, v41, a5, v10);
      sub_E3BC70((__int64 *)(a1 + 104), (__int64 *)&v49, v50);
      v22 = (__int64)v49;
      LODWORD(v11) = *(_DWORD *)(a1 + 112) + 1;
      v23 = v50[0];
      v42 = *(_QWORD *)v50[0];
    }
    else
    {
      v42 = *(_QWORD *)v23;
      v22 = (__int64)v12;
    }
LABEL_48:
    *(_DWORD *)(a1 + 112) = v11;
    if ( v42 != -4096 )
      --*(_DWORD *)(a1 + 116);
    *(_QWORD *)v23 = v22;
    v25 = (_DWORD *)(v23 + 8);
    *(_DWORD *)(v23 + 8) = 0;
    v26 = *(_DWORD *)(a1 + 132);
LABEL_29:
    *v25 = v26;
    v27 = *(__int64 (__fastcall **)(__int64))(*v12 + 64LL);
    if ( v27 == sub_6EF210 )
      v28 = sub_B7F750(v12, v50, (__int64)v25, v22, a5, v10);
    else
      v28 = v27((__int64)v12);
    sub_BC97E0((__int64 *)a1, v28);
    result = *(unsigned int *)(a1 + 32);
  }
  return result;
}
