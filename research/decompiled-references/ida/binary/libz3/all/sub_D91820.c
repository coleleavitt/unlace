void __fastcall sub_D91820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r10d
  __int64 *v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // r12
  int v16; // esi
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r12
  __int64 *v25; // rax
  int v26; // r10d
  __int64 *v27; // r13
  __int64 *v28; // r11
  __int64 v29; // rdx
  __int64 *v30; // rsi
  __int64 *v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // [rsp+8h] [rbp-A0h]
  int v34; // [rsp+10h] [rbp-98h]
  size_t v35; // [rsp+10h] [rbp-98h]
  __int64 v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  int v42; // [rsp+40h] [rbp-68h]
  size_t v43; // [rsp+40h] [rbp-68h]
  unsigned int v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h]
  int v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  int v48; // [rsp+50h] [rbp-58h]
  __int64 v49[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 144);
  v5 = &v4[2 * *(unsigned int *)(a1 + 152)];
  if ( v4 != v5 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v5 == v4 )
        return;
    }
    if ( v5 != v4 )
    {
      v7 = *v4;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v4[1] + 32);
        sub_D90770(v49, a1, a2, v8);
        v38 = v49[1];
        v33 = v49[0];
        sub_135F9B0(a3, v7, v49[0]);
        v9 = *(unsigned int *)(a4 + 8);
        v10 = *(_QWORD *)(v8 + 16);
        v11 = 2 * v9;
        if ( 3 * (int)v9 < (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
        {
          v24 = v11;
          v45 = v10;
          v42 = 2 * v9;
          v35 = 8LL * v11;
          v25 = (__int64 *)sub_186B270(v35);
          v26 = v42;
          v14 = v35;
          v12 = v25;
          v10 = v45;
          if ( v42 )
          {
            v46 = v42;
            v43 = v35;
            v36 = v10;
            memset(v25, 0, 8 * v24);
            v10 = v36;
            v14 = v43;
            v26 = v46;
          }
          v27 = *(__int64 **)a4;
          v13 = v26 - 1;
          v15 = (__int64 *)((char *)v12 + v14);
          v28 = (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8));
          if ( *(__int64 **)a4 != v28 )
          {
            do
            {
              while ( (unsigned __int64)*v27 <= 1 )
              {
                if ( v28 == ++v27 )
                  goto LABEL_45;
              }
              v29 = 8LL * (*(_DWORD *)(*v27 + 12) & v13);
              v30 = &v12[(unsigned __int64)v29 / 8];
              if ( v14 == v29 )
              {
LABEL_49:
                if ( v12 == v30 )
                {
LABEL_57:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v31 = v12;
                while ( *v31 )
                {
                  if ( v30 == ++v31 )
                    goto LABEL_57;
                }
              }
              else
              {
                v31 = &v12[(unsigned __int64)v29 / 8];
                while ( *v31 )
                {
                  if ( v15 == ++v31 )
                    goto LABEL_49;
                }
              }
              v32 = *v27++;
              *v31 = v32;
            }
            while ( v28 != v27 );
LABEL_45:
            v28 = *(__int64 **)a4;
          }
          if ( v28 )
          {
            v48 = v26;
            v47 = v14;
            v44 = v26 - 1;
            v37 = v10;
            sub_186B220(v28);
            v26 = v48;
            v14 = v47;
            v13 = v44;
            v10 = v37;
          }
          *(_QWORD *)a4 = v12;
          *(_DWORD *)(a4 + 8) = v26;
          *(_DWORD *)(a4 + 16) = 0;
        }
        else
        {
          v12 = *(__int64 **)a4;
          v13 = v9 - 1;
          v14 = 8 * v9;
          v15 = (__int64 *)(*(_QWORD *)a4 + v14);
        }
        v16 = *(_DWORD *)(v10 + 12);
        v17 = 8LL * (v16 & v13);
        v18 = &v12[(unsigned __int64)v17 / 8];
        if ( v17 != v14 )
        {
          v19 = &v12[(unsigned __int64)v17 / 8];
          v20 = nullptr;
          while ( 1 )
          {
            v21 = *v19;
            if ( (unsigned __int64)*v19 > 1 )
            {
              if ( *(_DWORD *)(v21 + 12) == v16 && v10 == v21 )
              {
                *v19 = v10;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v21 )
              {
                if ( v20 )
                  goto LABEL_55;
                v20 = v19;
                goto LABEL_56;
              }
              v20 = v19;
            }
            if ( ++v19 == v15 )
              goto LABEL_20;
          }
        }
        v20 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v18 == v12 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v22 = *v12;
          if ( (unsigned __int64)*v12 <= 1 )
            break;
          if ( *(_DWORD *)(v22 + 12) == v16 && v10 == v22 )
          {
            *v12 = v10;
            goto LABEL_25;
          }
LABEL_19:
          ++v12;
        }
        if ( v22 )
          break;
        if ( v20 )
LABEL_55:
          --*(_DWORD *)(a4 + 16);
        else
          v20 = v12;
LABEL_56:
        *v20 = v10;
        ++*(_DWORD *)(a4 + 12);
LABEL_25:
        if ( v33 )
        {
          v34 = *(_DWORD *)(v33 + 8);
          *(_DWORD *)(v33 + 8) = v34 - 1;
          if ( v34 == 1 )
            sub_15D7BC0(v38, v33);
        }
        v23 = v4 + 2;
        if ( v5 != v4 + 2 )
        {
          while ( 1 )
          {
            v7 = *v23;
            v4 = v23;
            if ( (unsigned __int64)*v23 > 1 )
              break;
            v23 += 2;
            if ( v5 == v23 )
              return;
          }
          if ( v5 != v23 )
            continue;
        }
        return;
      }
      v20 = v12;
      goto LABEL_19;
    }
  }
}

