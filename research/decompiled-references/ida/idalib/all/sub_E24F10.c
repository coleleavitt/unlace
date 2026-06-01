_QWORD *__fastcall sub_E24F10(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbp
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // r11d
  unsigned __int64 v32; // r10
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edi
  __int64 v39; // r8
  unsigned int v40; // esi
  int v41; // r10d
  __int64 *v42; // r9
  int v43; // eax
  int v44; // esi
  __int64 v45; // r8
  unsigned int v46; // r14d
  int v47; // r9d
  __int64 *v48; // rdi
  __int64 v49; // [rsp+0h] [rbp-40h]

  result = (_QWORD *)*a1;
  if ( *a1 )
  {
    v5 = (_QWORD *)result[4];
    v6 = v5[1];
    v7 = v6 + 32LL * *((unsigned int *)v5 + 4);
    if ( v6 == v7 )
      goto LABEL_69;
    v8 = v6 + 32;
    if ( a3 != *(_DWORD *)(v6 + 8) )
    {
      while ( 1 )
      {
        v6 = v8;
        if ( v8 == v7 )
          break;
        v8 += 32;
        if ( *(_DWORD *)(v8 - 24) == a3 )
          goto LABEL_6;
      }
LABEL_69:
      sub_EDE580(a2, *v5);
      BUG();
    }
LABEL_6:
    v9 = *(_QWORD **)(v6 + 16);
    v14 = sub_EDE580(a2, *v5);
    if ( (*v9 & 2) != 0 )
      BUG();
    v15 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    v16 = *(_QWORD *)(v15 + 128);
    if ( !v16 )
    {
      v23 = *(_QWORD *)(v15 + 104);
      v24 = *(_QWORD *)(v23 + 96);
      v10 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v24 & 1) == 0 )
      {
        v11 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v24 & 2) == 0 )
            goto LABEL_9;
          v12 = *(_QWORD *)(v11 + 18360);
          v25 = v23 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v12 )
          {
            v26 = *(_QWORD *)(v11 + 2352);
            *(_QWORD *)(v11 + 2432) += 24LL;
            v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v11 + 2360) >= v27 + 24 && v26 )
            {
              *(_QWORD *)(v11 + 2352) = v27 + 24;
              v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v49 = v12;
              v28 = sub_986170(v11 + 2352, 24, 24, 3, v12, v13);
              v12 = v49;
              v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v28 = v12;
            v25 = v27 | 4;
            *(_DWORD *)(v28 + 8) = 0;
            *(_QWORD *)(v28 + 16) = v23;
          }
          v10 = v25 & 0xFFFFFFFFFFFFFFFELL;
          v24 = v10 | 1;
          *(_QWORD *)(v23 + 96) = v10 | 1;
        }
      }
      if ( v10 )
      {
        v10 &= 4u;
        if ( (_DWORD)v10 )
        {
          v29 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v29 )
          {
            v30 = *(_QWORD *)v29;
            v10 = *(unsigned int *)(*(_QWORD *)v29 + 12LL);
            if ( v29[2] != (_DWORD)v10 )
            {
              v29[2] = v10;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v23);
            }
          }
        }
      }
      if ( !*(_QWORD *)(v15 + 128) )
        goto LABEL_9;
      v16 = *(_QWORD *)(v15 + 128);
    }
    v16 = *(_QWORD *)(v16 + 88);
LABEL_9:
    v17 = *(_QWORD *)(v14 + 72);
    v18 = *(_DWORD *)(v17 + 80);
    v19 = v17 + 64;
    if ( !v18 )
      goto LABEL_36;
    v13 = v18 - 1;
    v20 = *(_QWORD *)(v17 + 64);
    v21 = v13 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
    v10 = v20 + 16LL * v21;
    v22 = *(_QWORD *)v10;
    if ( v16 == *(_QWORD *)v10 )
      return v9;
    v31 = 1;
    v32 = 0;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        if ( !v32 && v22 == -8192 )
          v32 = v10;
        v21 = v13 & (v31 + v21);
        v10 = v20 + 16LL * v21;
        v22 = *(_QWORD *)v10;
        if ( v16 == *(_QWORD *)v10 )
          return v9;
        if ( v22 == -4096 )
          break;
        ++v31;
      }
      if ( v32 )
        v10 = v32;
    }
    v11 = 3 * v18;
    v33 = *(_DWORD *)(v17 + 72) + 1;
    v12 = (unsigned int)(4 * v33);
    if ( (unsigned int)v12 < (unsigned int)v11 )
    {
      v34 = v18 - *(_DWORD *)(v17 + 76) - v33;
      v35 = v18 >> 3;
      if ( (unsigned int)v34 > (unsigned int)v35 )
      {
        v36 = *(_QWORD *)v10;
        goto LABEL_33;
      }
      sub_7055A0(v19, v18, v10, v34, v35, v13);
      v43 = *(_DWORD *)(v17 + 80);
      if ( v43 )
      {
        v44 = v43 - 1;
        v45 = *(_QWORD *)(v17 + 64);
        v46 = (v43 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v33 = *(_DWORD *)(v17 + 72) + 1;
        v10 = v45 + 16LL * v46;
        v36 = *(_QWORD *)v10;
        if ( v16 != *(_QWORD *)v10 )
        {
          v47 = 1;
          v48 = nullptr;
          if ( v36 != -4096 )
          {
            while ( 1 )
            {
              if ( !v48 && v36 == -8192 )
                v48 = (__int64 *)v10;
              v46 = v44 & (v47 + v46);
              v10 = v45 + 16LL * v46;
              v36 = *(_QWORD *)v10;
              if ( v16 == *(_QWORD *)v10 )
                goto LABEL_33;
              if ( v36 == -4096 )
              {
                if ( !v48 )
                  break;
                v36 = *v48;
                v10 = (unsigned __int64)v48;
                goto LABEL_33;
              }
              ++v47;
            }
          }
LABEL_39:
          *(_DWORD *)(v17 + 72) = v33;
LABEL_35:
          *(_QWORD *)v10 = v16;
          *(_QWORD *)(v10 + 8) = 0;
          return v9;
        }
        goto LABEL_33;
      }
    }
    else
    {
LABEL_36:
      sub_7055A0(v19, 2 * v18, v10, v11, v12, v13);
      v37 = *(_DWORD *)(v17 + 80);
      if ( v37 )
      {
        v38 = v37 - 1;
        v39 = *(_QWORD *)(v17 + 64);
        v40 = (v37 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v33 = *(_DWORD *)(v17 + 72) + 1;
        v10 = v39 + 16LL * v40;
        v36 = *(_QWORD *)v10;
        if ( v16 != *(_QWORD *)v10 )
        {
          v41 = 1;
          v42 = nullptr;
          if ( v36 != -4096 )
          {
            while ( 1 )
            {
              if ( v36 == -8192 && !v42 )
                v42 = (__int64 *)v10;
              v40 = v38 & (v41 + v40);
              v10 = v39 + 16LL * v40;
              v36 = *(_QWORD *)v10;
              if ( v16 == *(_QWORD *)v10 )
                goto LABEL_33;
              if ( v36 == -4096 )
              {
                if ( !v42 )
                  goto LABEL_39;
                v36 = *v42;
                v10 = (unsigned __int64)v42;
                goto LABEL_33;
              }
              ++v41;
            }
          }
          goto LABEL_39;
        }
LABEL_33:
        *(_DWORD *)(v17 + 72) = v33;
        if ( v36 != -4096 )
          --*(_DWORD *)(v17 + 76);
        goto LABEL_35;
      }
    }
    ++*(_DWORD *)(v17 + 72);
    BUG();
  }
  return result;
}
