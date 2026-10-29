void __fastcall sub_EDA870(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // esi
  bool v21; // zf
  __int64 *v22; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // rbx
  unsigned int v27; // esi
  __int64 **v28; // rax
  __int64 *v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rbx
  __int64 *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rbx
  unsigned int v35; // esi
  int v36; // ecx
  int v37; // r11d
  __int64 *v38; // r10
  int v39; // edi
  int v40; // r11d
  __int64 *v41; // r13
  int v42; // edi
  int v43; // r11d
  __int64 *v44; // r13
  int v45; // edi
  __int64 **v46; // r11
  unsigned __int64 v48; // [rsp+8h] [rbp-78h]
  __int64 *v49; // [rsp+20h] [rbp-60h]
  int v50; // [rsp+28h] [rbp-58h]
  __int64 *v51; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v52[8]; // [rsp+40h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v6 = a1 + 1;
    if ( a2 != a1 + 1 )
    {
      v7 = a3;
      v48 = (unsigned __int64)&a1[((unsigned __int64)((char *)(a2 - 2) - (char *)a1) >> 3) + 2];
      while ( 1 )
      {
        v16 = *v6;
        v17 = *a1;
        v51 = (__int64 *)v17;
        v18 = *(_QWORD *)(v17 + 128);
        if ( v18
          || (sub_7052B0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104), (__int64)a3, a4, a5, a6),
              (v18 = *(_QWORD *)(v17 + 128)) != 0) )
        {
          v18 = *(_QWORD *)(v18 + 88);
        }
        v19 = v7[9];
        v51 = (__int64 *)v18;
        v20 = *(_DWORD *)(v19 + 80);
        if ( v20 )
        {
          a6 = v20 - 1;
          a5 = *(_QWORD *)(v19 + 64);
          a4 = (unsigned int)a6 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
          a3 = (__int64 *)(a5 + 16 * a4);
          v8 = *a3;
          if ( v18 == *a3 )
            goto LABEL_5;
          v43 = 1;
          v44 = nullptr;
          if ( v8 != -4096 )
          {
            while ( 1 )
            {
              if ( v8 == -8192 && !v44 )
                v44 = a3;
              a4 = (unsigned int)a6 & (v43 + (_DWORD)a4);
              a3 = (__int64 *)(a5 + 16LL * (unsigned int)a4);
              v8 = *a3;
              if ( v18 == *a3 )
                break;
              if ( v8 == -4096 )
              {
                if ( v44 )
                  a3 = v44;
                goto LABEL_76;
              }
              ++v43;
            }
LABEL_5:
            v9 = a3[1];
            goto LABEL_6;
          }
LABEL_76:
          v45 = *(_DWORD *)(v19 + 72);
          v52[0] = a3;
          a4 = (unsigned int)(v45 + 1);
          a5 = (unsigned int)(4 * a4);
          if ( (unsigned int)a5 < 3 * v20 )
          {
            a5 = v20 >> 3;
            if ( v20 - *(_DWORD *)(v19 + 76) - (unsigned int)a4 > (unsigned int)a5 )
              goto LABEL_21;
            goto LABEL_20;
          }
        }
        else
        {
          v52[0] = 0;
        }
        v20 *= 2;
LABEL_20:
        sub_7055A0(v19 + 64, v20, (__int64)a3, a4, a5, a6);
        sub_A6DD20((__int64 *)(v19 + 64), (__int64 *)&v51, v52);
        v18 = (__int64)v51;
        a3 = (__int64 *)v52[0];
        a4 = (unsigned int)(*(_DWORD *)(v19 + 72) + 1);
LABEL_21:
        v21 = *a3 == -4096;
        *(_DWORD *)(v19 + 72) = a4;
        if ( !v21 )
          --*(_DWORD *)(v19 + 76);
        *a3 = v18;
        v9 = 0;
        a3[1] = 0;
LABEL_6:
        v51 = (__int64 *)v16;
        v10 = *(_QWORD *)(v16 + 128);
        if ( v10
          || (sub_7052B0((__int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104), (__int64)a3, a4, a5, a6),
              (v10 = *(_QWORD *)(v16 + 128)) != 0) )
        {
          v10 = *(_QWORD *)(v10 + 88);
        }
        v11 = v7[9];
        v51 = (__int64 *)v10;
        v12 = *(_DWORD *)(v11 + 80);
        if ( !v12 )
        {
          v52[0] = 0;
LABEL_73:
          v12 *= 2;
LABEL_74:
          sub_7055A0(v11 + 64, v12, (__int64)a3, a4, a5, a6);
          sub_A6DD20((__int64 *)(v11 + 64), (__int64 *)&v51, v52);
          v10 = (__int64)v51;
          a3 = (__int64 *)v52[0];
          a4 = (unsigned int)(*(_DWORD *)(v11 + 72) + 1);
LABEL_69:
          v21 = *a3 == -4096;
          *(_DWORD *)(v11 + 72) = a4;
          if ( !v21 )
            --*(_DWORD *)(v11 + 76);
          *a3 = v10;
          v14 = 0;
          a3[1] = 0;
          goto LABEL_11;
        }
        a6 = v12 - 1;
        a5 = *(_QWORD *)(v11 + 64);
        a4 = (unsigned int)a6 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        a3 = (__int64 *)(a5 + 16 * a4);
        v13 = *a3;
        if ( v10 != *a3 )
        {
          v40 = 1;
          v41 = nullptr;
          if ( v13 == -4096 )
          {
LABEL_67:
            v42 = *(_DWORD *)(v11 + 72);
            v52[0] = a3;
            a4 = (unsigned int)(v42 + 1);
            a5 = (unsigned int)(4 * a4);
            if ( (unsigned int)a5 >= 3 * v12 )
              goto LABEL_73;
            a5 = v12 >> 3;
            if ( v12 - *(_DWORD *)(v11 + 76) - (unsigned int)a4 <= (unsigned int)a5 )
              goto LABEL_74;
            goto LABEL_69;
          }
          while ( 1 )
          {
            if ( !v41 && v13 == -8192 )
              v41 = a3;
            a4 = (unsigned int)a6 & (v40 + (_DWORD)a4);
            a3 = (__int64 *)(a5 + 16LL * (unsigned int)a4);
            v13 = *a3;
            if ( v10 == *a3 )
              break;
            if ( v13 == -4096 )
            {
              if ( v41 )
                a3 = v41;
              goto LABEL_67;
            }
            ++v40;
          }
        }
        v14 = a3[1];
LABEL_11:
        v15 = *v6;
        if ( v9 <= v14 )
        {
          v22 = v6;
          v49 = v6;
          while ( 1 )
          {
            v31 = *(v22 - 1);
            v32 = v22;
            v51 = (__int64 *)v31;
            v33 = *(_QWORD *)(v31 + 128);
            if ( v33
              || (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), 0, a4, a5, a6),
                  (v33 = *(_QWORD *)(v31 + 128)) != 0) )
            {
              v33 = *(_QWORD *)(v33 + 88);
            }
            v34 = v7[9];
            v51 = (__int64 *)v33;
            v35 = *(_DWORD *)(v34 + 80);
            if ( v35 )
            {
              a6 = v35 - 1;
              a5 = *(_QWORD *)(v34 + 64);
              a4 = (unsigned int)a6 & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
              v23 = (__int64 *)(a5 + 16 * a4);
              v24 = *v23;
              if ( v33 == *v23 )
                goto LABEL_26;
              v37 = 1;
              v38 = nullptr;
              if ( v24 != -4096 )
              {
                while ( 1 )
                {
                  if ( v24 == -8192 && !v38 )
                    v38 = v23;
                  a4 = (unsigned int)a6 & (v37 + (_DWORD)a4);
                  v23 = (__int64 *)(a5 + 16LL * (unsigned int)a4);
                  v24 = *v23;
                  if ( v33 == *v23 )
                    break;
                  if ( v24 == -4096 )
                  {
                    if ( v38 )
                      v23 = v38;
                    goto LABEL_59;
                  }
                  ++v37;
                }
LABEL_26:
                v25 = v23[1];
                goto LABEL_27;
              }
LABEL_59:
              v39 = *(_DWORD *)(v34 + 72);
              v52[0] = v23;
              a4 = (unsigned int)(v39 + 1);
              a5 = (unsigned int)(4 * a4);
              if ( (unsigned int)a5 < 3 * v35 )
              {
                a5 = v35 >> 3;
                if ( v35 - *(_DWORD *)(v34 + 76) - (unsigned int)a4 > (unsigned int)a5 )
                  goto LABEL_40;
                goto LABEL_39;
              }
            }
            else
            {
              v52[0] = 0;
            }
            v35 *= 2;
LABEL_39:
            sub_7055A0(v34 + 64, v35, v33, a4, a5, a6);
            sub_A6DD20((__int64 *)(v34 + 64), (__int64 *)&v51, v52);
            v33 = (__int64)v51;
            a4 = (unsigned int)(*(_DWORD *)(v34 + 72) + 1);
            v23 = (__int64 *)v52[0];
LABEL_40:
            v21 = *v23 == -4096;
            *(_DWORD *)(v34 + 72) = a4;
            if ( !v21 )
              --*(_DWORD *)(v34 + 76);
            *v23 = v33;
            v25 = 0;
            v23[1] = 0;
LABEL_27:
            v51 = (__int64 *)v15;
            a3 = *(__int64 **)(v15 + 128);
            if ( a3
              || (sub_7052B0((__int64 *)(*(_QWORD *)(v15 + 104) + 96LL), *(_QWORD *)(v15 + 104), 0, a4, a5, a6),
                  (a3 = *(__int64 **)(v15 + 128)) != nullptr) )
            {
              a3 = (__int64 *)a3[11];
            }
            v26 = v7[9];
            v51 = a3;
            v27 = *(_DWORD *)(v26 + 80);
            a5 = v26 + 64;
            if ( !v27 )
            {
              v52[0] = 0;
LABEL_56:
              v27 *= 2;
LABEL_57:
              sub_7055A0(v26 + 64, v27, (__int64)a3, a4, a5, a6);
              sub_A6DD20((__int64 *)(v26 + 64), (__int64 *)&v51, v52);
              a3 = v51;
              a4 = (unsigned int)(*(_DWORD *)(v26 + 72) + 1);
              v28 = (__int64 **)v52[0];
              goto LABEL_52;
            }
            a6 = *(_QWORD *)(v26 + 64);
            a4 = (v27 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
            v28 = (__int64 **)(a6 + 16 * a4);
            v29 = *v28;
            if ( a3 == *v28 )
              goto LABEL_31;
            if ( v29 != (__int64 *)-4096LL )
            {
              v50 = 1;
              v46 = nullptr;
              while ( 1 )
              {
                if ( v29 == (__int64 *)-8192LL && !v46 )
                  v46 = v28;
                a4 = (v27 - 1) & (v50 + (_DWORD)a4);
                v28 = (__int64 **)(a6 + 16LL * (unsigned int)a4);
                v29 = *v28;
                if ( a3 == *v28 )
                  break;
                if ( v29 == (__int64 *)-4096LL )
                {
                  if ( v46 )
                    v28 = v46;
                  goto LABEL_50;
                }
                ++v50;
              }
LABEL_31:
              v30 = v28[1];
              goto LABEL_32;
            }
LABEL_50:
            v36 = *(_DWORD *)(v26 + 72);
            v52[0] = v28;
            a4 = (unsigned int)(v36 + 1);
            a6 = (unsigned int)(4 * a4);
            if ( (unsigned int)a6 >= 3 * v27 )
              goto LABEL_56;
            a6 = v27 >> 3;
            if ( v27 - *(_DWORD *)(v26 + 76) - (unsigned int)a4 <= (unsigned int)a6 )
              goto LABEL_57;
LABEL_52:
            v21 = *v28 + 512 == nullptr;
            *(_DWORD *)(v26 + 72) = a4;
            if ( !v21 )
              --*(_DWORD *)(v26 + 76);
            *v28 = a3;
            v28[1] = nullptr;
            v30 = nullptr;
LABEL_32:
            --v22;
            if ( v25 <= (__int64)v30 )
              break;
            v22[1] = *v22;
          }
          *v32 = v15;
          v6 = v49 + 1;
          if ( v49 + 1 == (__int64 *)v48 )
            return;
        }
        else
        {
          if ( a1 != v6 )
            memmove(a1 + 1, a1, (char *)v6 - (char *)a1);
          ++v6;
          *a1 = v15;
          if ( v6 == (__int64 *)v48 )
            return;
        }
      }
    }
  }
}
