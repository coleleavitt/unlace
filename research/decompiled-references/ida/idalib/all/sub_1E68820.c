void __fastcall sub_1E68820(__int64 a1, int a2, __m128i a3, double a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // edi
  int v24; // esi
  int v25; // r10d
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r8
  unsigned int v32; // edi
  int v33; // esi
  int v34; // r10d
  int v35; // r11d
  __int64 v36; // r10
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_1E605A0((_QWORD *)a1, a2);
  if ( !v5 )
    return;
  v9 = v5;
  v10 = *(_DWORD *)(a1 + 17320);
  if ( v9 != v10 )
  {
    v11 = *(_QWORD *)(a1 + 17296);
    v12 = *(_DWORD *)(a1 + 17312);
    if ( !v10 )
    {
      *(_DWORD *)(a1 + 17320) = v9;
      if ( !v12 )
        goto LABEL_14;
LABEL_6:
      v7 = v12 - 1;
      v13 = v7 & v9;
      v14 = v11 + 16LL * ((unsigned int)v7 & v9);
      v15 = *(_DWORD *)v14;
      if ( v9 == *(_DWORD *)v14 )
      {
LABEL_7:
        v16 = v14 + 4;
        *(_QWORD *)(a1 + 17324) = *(_QWORD *)v16;
        *(_WORD *)(a1 + 17332) = *(_WORD *)(v16 + 8);
        goto LABEL_8;
      }
      v8 = 1;
      v27 = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          if ( !v27 && v15 == -1 )
            v27 = v14;
          v13 = v7 & (v8 + v13);
          v14 = v11 + 16LL * v13;
          v15 = *(_DWORD *)v14;
          if ( v9 == *(_DWORD *)v14 )
            goto LABEL_7;
          if ( !v15 )
            break;
          v8 = (unsigned int)(v8 + 1);
        }
        if ( v27 )
          v14 = v27;
      }
      v6 = (unsigned int)(*(_DWORD *)(a1 + 17304) + 1);
      v11 = 3 * v12;
      if ( 4 * (int)v6 < (unsigned int)v11 )
      {
        v28 = v12 >> 3;
        if ( v12 - ((_DWORD)v6 + *(_DWORD *)(a1 + 17308)) > (unsigned int)v28 )
        {
LABEL_28:
          *(_DWORD *)(a1 + 17304) = v6;
          if ( *(_DWORD *)v14 )
            --*(_DWORD *)(a1 + 17308);
          *(_DWORD *)v14 = v9;
          *(_QWORD *)(v14 + 4) = 0;
          *(_WORD *)(v14 + 12) = 0;
          goto LABEL_7;
        }
        sub_1E61FD0(a1 + 17296, v12, v6, v28, v7, v8);
        v29 = *(_DWORD *)(a1 + 17312);
        if ( v29 )
        {
          v30 = v29 - 1;
          v31 = *(_QWORD *)(a1 + 17296);
          v32 = (v29 - 1) & v9;
          LODWORD(v6) = *(_DWORD *)(a1 + 17304) + 1;
          v14 = v31 + 16LL * v32;
          v33 = *(_DWORD *)v14;
          if ( v9 != *(_DWORD *)v14 )
          {
            v34 = 1;
            v26 = 0;
            if ( v33 )
            {
              while ( 1 )
              {
                if ( v33 == -1 && !v26 )
                  v26 = v14;
                v32 = v30 & (v34 + v32);
                v14 = v31 + 16LL * v32;
                v33 = *(_DWORD *)v14;
                if ( v9 == *(_DWORD *)v14 )
                  break;
                if ( !v33 )
                  goto LABEL_22;
                ++v34;
              }
            }
          }
          goto LABEL_28;
        }
LABEL_68:
        ++*(_DWORD *)(a1 + 17304);
        BUG();
      }
LABEL_14:
      sub_1E61FD0(a1 + 17296, 2 * v12, v6, v11, v7, v8);
      v20 = *(_DWORD *)(a1 + 17312);
      if ( v20 )
      {
        v21 = v20 - 1;
        v22 = *(_QWORD *)(a1 + 17296);
        v23 = (v20 - 1) & v9;
        LODWORD(v6) = *(_DWORD *)(a1 + 17304) + 1;
        v14 = v22 + 16LL * v23;
        v24 = *(_DWORD *)v14;
        if ( v9 != *(_DWORD *)v14 )
        {
          v25 = 1;
          v26 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              if ( v24 == -1 && !v26 )
                v26 = v14;
              v23 = v21 & (v25 + v23);
              v14 = v22 + 16LL * v23;
              v24 = *(_DWORD *)v14;
              if ( v9 == *(_DWORD *)v14 )
                break;
              if ( !v24 )
              {
LABEL_22:
                if ( v26 )
                  v14 = v26;
                goto LABEL_28;
              }
              ++v25;
            }
          }
        }
        goto LABEL_28;
      }
      goto LABEL_68;
    }
    if ( v12 )
    {
      v8 = v12 - 1;
      v7 = (unsigned int)v8 & v10;
      v6 = v11 + 16 * v7;
      v19 = *(_DWORD *)v6;
      if ( v10 == *(_DWORD *)v6 )
        goto LABEL_13;
      v35 = 1;
      v36 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          if ( !v36 && v19 == -1 )
            v36 = v6;
          v7 = (unsigned int)v8 & (v35 + (_DWORD)v7);
          v6 = v11 + 16LL * (unsigned int)v7;
          v19 = *(_DWORD *)v6;
          if ( v10 == *(_DWORD *)v6 )
            break;
          if ( !v19 )
          {
            if ( v36 )
              v6 = v36;
            goto LABEL_41;
          }
          ++v35;
        }
LABEL_13:
        v6 += 4;
        *(_QWORD *)v6 = *(_QWORD *)(a1 + 17324);
        *(_WORD *)(v6 + 8) = *(_WORD *)(a1 + 17332);
        v12 = *(_DWORD *)(a1 + 17312);
        *(_DWORD *)(a1 + 17320) = v9;
        if ( !v12 )
          goto LABEL_14;
        goto LABEL_6;
      }
LABEL_41:
      v37 = *(_DWORD *)(a1 + 17304);
      v40[0] = v6;
      v38 = v37 + 1;
      v7 = (unsigned int)(4 * v38);
      if ( (unsigned int)v7 < 3 * v12 )
      {
        v7 = v12 >> 3;
        if ( v12 - *(_DWORD *)(a1 + 17308) - v38 > (unsigned int)v7 )
        {
LABEL_43:
          *(_DWORD *)(a1 + 17304) = v38;
          v7 = *(unsigned int *)v6;
          if ( (_DWORD)v7 )
            --*(_DWORD *)(a1 + 17308);
          v39 = *(_DWORD *)(a1 + 17320);
          *(_QWORD *)(v6 + 4) = 0;
          *(_WORD *)(v6 + 12) = 0;
          *(_DWORD *)v6 = v39;
          goto LABEL_13;
        }
LABEL_48:
        sub_1E61FD0(a1 + 17296, v12, v6, v11, v7, v8);
        sub_1E60090((__int64 *)(a1 + 17296), (int *)(a1 + 17320), v40);
        v6 = v40[0];
        v11 = *(_QWORD *)(a1 + 17296);
        v38 = *(_DWORD *)(a1 + 17304) + 1;
        goto LABEL_43;
      }
    }
    else
    {
      v40[0] = 0;
    }
    v12 *= 2;
    goto LABEL_48;
  }
LABEL_8:
  v17 = (unsigned int *)(a1 + 17324);
  if ( !*(_BYTE *)(a1 + 17333) )
  {
    v18 = *v17;
    *(_BYTE *)(a1 + 17333) = 1;
    if ( v18 )
      sub_1E68450(a1, *(unsigned __int8 *)(a1 + 17332), *v17, *(_DWORD *)(a1 + 17328), a3, a4);
  }
}
