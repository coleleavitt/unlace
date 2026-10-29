void __fastcall sub_1E693A0(__int64 a1, unsigned int a2, unsigned int a3, int a4, __m128i a5, double a6)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebp
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  unsigned int *v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edi
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdi
  int v31; // esi
  int v32; // r10d
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rcx
  int v36; // eax
  int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // rdi
  int v40; // esi
  int v41; // r10d
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r11
  int *v46; // [rsp+0h] [rbp-58h]
  int v47; // [rsp+0h] [rbp-58h]
  __int64 v48[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = sub_1E605A0((_QWORD *)a1, a3);
  if ( !v10 )
    return;
  v14 = v10;
  v15 = *(_DWORD *)(a1 + 17320);
  if ( v14 != v15 )
  {
    v16 = *(_QWORD *)(a1 + 17296);
    v17 = *(_DWORD *)(a1 + 17312);
    if ( !v15 )
    {
      *(_DWORD *)(a1 + 17320) = v14;
      if ( !v17 )
        goto LABEL_16;
LABEL_6:
      v12 = v17 - 1;
      v18 = v12 & v14;
      v19 = v16 + 16LL * ((unsigned int)v12 & v14);
      v20 = *(_DWORD *)v19;
      if ( v14 == *(_DWORD *)v19 )
      {
LABEL_7:
        v21 = v19 + 4;
        *(_QWORD *)(a1 + 17324) = *(_QWORD *)v21;
        *(_WORD *)(a1 + 17332) = *(_WORD *)(v21 + 8);
        goto LABEL_8;
      }
      v13 = 1;
      v34 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          if ( !v34 && v20 == -1 )
            v34 = v19;
          v18 = v12 & (v13 + v18);
          v19 = v16 + 16LL * v18;
          v20 = *(_DWORD *)v19;
          if ( v14 == *(_DWORD *)v19 )
            goto LABEL_7;
          if ( !v20 )
            break;
          v13 = (unsigned int)(v13 + 1);
        }
        if ( v34 )
          v19 = v34;
      }
      v11 = (unsigned int)(*(_DWORD *)(a1 + 17304) + 1);
      v16 = 3 * v17;
      if ( 4 * (int)v11 < (unsigned int)v16 )
      {
        v35 = v17 >> 3;
        if ( v17 - ((_DWORD)v11 + *(_DWORD *)(a1 + 17308)) > (unsigned int)v35 )
        {
LABEL_30:
          *(_DWORD *)(a1 + 17304) = v11;
          if ( *(_DWORD *)v19 )
            --*(_DWORD *)(a1 + 17308);
          *(_DWORD *)v19 = v14;
          *(_QWORD *)(v19 + 4) = 0;
          *(_WORD *)(v19 + 12) = 0;
          goto LABEL_7;
        }
        sub_1E61FD0(a1 + 17296, v17, v11, v35, v12, v13);
        v36 = *(_DWORD *)(a1 + 17312);
        if ( v36 )
        {
          v37 = v36 - 1;
          v38 = *(_QWORD *)(a1 + 17296);
          LODWORD(v39) = (v36 - 1) & v14;
          LODWORD(v11) = *(_DWORD *)(a1 + 17304) + 1;
          v19 = v38 + 16LL * (unsigned int)v39;
          v40 = *(_DWORD *)v19;
          if ( v14 != *(_DWORD *)v19 )
          {
            v41 = 1;
            v33 = 0;
            if ( v40 )
            {
              while ( 1 )
              {
                if ( v40 == -1 && !v33 )
                  v33 = v19;
                v39 = v37 & (unsigned int)(v39 + v41);
                v19 = v38 + 16 * v39;
                v40 = *(_DWORD *)v19;
                if ( v14 == *(_DWORD *)v19 )
                  break;
                if ( !v40 )
                  goto LABEL_24;
                ++v41;
              }
            }
          }
          goto LABEL_30;
        }
LABEL_72:
        ++*(_DWORD *)(a1 + 17304);
        BUG();
      }
LABEL_16:
      sub_1E61FD0(a1 + 17296, 2 * v17, v11, v16, v12, v13);
      v27 = *(_DWORD *)(a1 + 17312);
      if ( v27 )
      {
        v28 = v27 - 1;
        v29 = *(_QWORD *)(a1 + 17296);
        LODWORD(v30) = (v27 - 1) & v14;
        LODWORD(v11) = *(_DWORD *)(a1 + 17304) + 1;
        v19 = v29 + 16LL * (unsigned int)v30;
        v31 = *(_DWORD *)v19;
        if ( v14 != *(_DWORD *)v19 )
        {
          v32 = 1;
          v33 = 0;
          if ( v31 )
          {
            while ( 1 )
            {
              if ( !v33 && v31 == -1 )
                v33 = v19;
              v30 = v28 & (unsigned int)(v30 + v32);
              v19 = v29 + 16 * v30;
              v31 = *(_DWORD *)v19;
              if ( v14 == *(_DWORD *)v19 )
                break;
              if ( !v31 )
              {
LABEL_24:
                if ( v33 )
                  v19 = v33;
                goto LABEL_30;
              }
              ++v32;
            }
          }
        }
        goto LABEL_30;
      }
      goto LABEL_72;
    }
    v12 = a1 + 17320;
    if ( v17 )
    {
      v13 = (v17 - 1) & v15;
      v11 = v16 + 16 * v13;
      v26 = *(_DWORD *)v11;
      if ( v15 == *(_DWORD *)v11 )
        goto LABEL_15;
      if ( v26 )
      {
        v47 = 1;
        v45 = 0;
        while ( 1 )
        {
          if ( !v45 && v26 == -1 )
            v45 = v11;
          v13 = (v17 - 1) & (v47 + (_DWORD)v13);
          v11 = v16 + 16LL * (unsigned int)v13;
          v26 = *(_DWORD *)v11;
          if ( v15 == *(_DWORD *)v11 )
            break;
          if ( !v26 )
          {
            if ( v45 )
              v11 = v45;
            goto LABEL_43;
          }
          ++v47;
        }
LABEL_15:
        v11 += 4;
        *(_QWORD *)v11 = *(_QWORD *)(a1 + 17324);
        *(_WORD *)(v11 + 8) = *(_WORD *)(a1 + 17332);
        v17 = *(_DWORD *)(a1 + 17312);
        *(_DWORD *)(a1 + 17320) = v14;
        if ( !v17 )
          goto LABEL_16;
        goto LABEL_6;
      }
LABEL_43:
      v42 = *(_DWORD *)(a1 + 17304);
      v48[0] = v11;
      v43 = v42 + 1;
      v13 = (unsigned int)(4 * v43);
      if ( (unsigned int)v13 < 3 * v17 )
      {
        v13 = v17 >> 3;
        if ( v17 - *(_DWORD *)(a1 + 17308) - v43 > (unsigned int)v13 )
        {
LABEL_45:
          *(_DWORD *)(a1 + 17304) = v43;
          if ( *(_DWORD *)v11 )
            --*(_DWORD *)(a1 + 17308);
          v44 = *(_DWORD *)(a1 + 17320);
          *(_QWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 12) = 0;
          *(_DWORD *)v11 = v44;
          goto LABEL_15;
        }
        v46 = (int *)(a1 + 17320);
LABEL_50:
        sub_1E61FD0(a1 + 17296, v17, v11, v16, v12, v13);
        sub_1E60090((__int64 *)(a1 + 17296), v46, v48);
        v11 = v48[0];
        v16 = *(_QWORD *)(a1 + 17296);
        v43 = *(_DWORD *)(a1 + 17304) + 1;
        goto LABEL_45;
      }
    }
    else
    {
      v48[0] = 0;
    }
    v46 = (int *)(a1 + 17320);
    v17 *= 2;
    goto LABEL_50;
  }
LABEL_8:
  v22 = (unsigned int *)(a1 + 17324);
  if ( *(_BYTE *)(a1 + 17333) )
  {
    sub_1E68450(a1, a2, a3, a4, a5, a6);
  }
  else if ( !*v22 )
  {
    v23 = sub_A62AC0(*(_QWORD *)(a1 + 248));
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v23 + 32), (unsigned int)(a2 == 3) + 7172, a3, v23, v24, v25) != 1 )
    {
      *v22 = a3;
      *(_DWORD *)(a1 + 17328) = a4;
      *(_BYTE *)(a1 + 17332) = a2;
    }
  }
}
