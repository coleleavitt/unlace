__int64 __fastcall sub_AA1E60(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rax
  char v9; // al
  char v10; // al
  __int64 v11; // r10
  _DWORD *v12; // rax
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int *v17; // rax
  char v18; // al
  __int64 v19; // r10
  _DWORD *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  void *v23; // r12
  __int64 v24; // rsi
  char *v25; // rdi
  int v26; // edx
  __int64 v27; // rsi
  char *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // r12d
  __int64 v32; // rax
  _QWORD *v33; // rdx
  int v34; // eax
  unsigned int v35; // esi
  __int64 v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned int *v40; // rax
  __int64 v41; // rax
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  unsigned int *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-78h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  unsigned __int8 v50; // [rsp+8h] [rbp-70h]
  unsigned __int8 v51; // [rsp+8h] [rbp-70h]
  unsigned int v52; // [rsp+10h] [rbp-68h]
  void *v53; // [rsp+10h] [rbp-68h]
  __int64 v54; // [rsp+18h] [rbp-60h]
  __int64 v55; // [rsp+18h] [rbp-60h]
  int v56; // [rsp+20h] [rbp-58h] BYREF
  char v57; // [rsp+24h] [rbp-54h]
  __int64 v58; // [rsp+28h] [rbp-50h]
  int v59; // [rsp+30h] [rbp-48h] BYREF
  char v60; // [rsp+34h] [rbp-44h]
  __int64 v61; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned int *)(a3 + 32);
  result = sub_FF9F70(a1[63], v5);
  if ( !(_BYTE)result )
  {
    v48 = a1[1];
    v7 = **(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8LL * a2);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    if ( !*(_WORD *)(v7 + 4) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
      if ( v8 )
      {
        if ( *v8 == 5 )
        {
          v34 = v8[1];
          if ( v34 == 6 || !v34 )
            return sub_A72BE0(v7, v48);
        }
        else if ( !*v8 && v8[1] == 4 )
        {
          return sub_A72BE0(v7, v48);
        }
      }
    }
    v9 = *(_BYTE *)(a3 + 37);
    if ( *(_BYTE *)(a3 + 36) )
    {
      if ( !v9 )
      {
        v10 = sub_A72E00(v7);
        v11 = a2;
        if ( !v10
          || (v41 = sub_FF9B20(a1[63]), v11 = a2, *(_DWORD *)(**(_QWORD **)(v41 + 544) + 4LL * (unsigned int)v5) <= 1u)
          && (v47 = sub_FF9B20(a1[63]),
              v11 = a2,
              (*(_DWORD *)(**(_QWORD **)(v47 + 544) + 4LL * (unsigned int)v5) & 0xFFFFFFFD) != 0) )
        {
          v52 = -2;
        }
        else
        {
          v55 = v11;
          v57 &= 0xFCu;
          v60 &= 0xFCu;
          v51 = sub_A72E00(v7);
          v56 = 0;
          v58 = 0;
          v59 = 1;
          v61 = 0;
          v53 = qword_1C7F2C0;
          sub_1849700(qword_1C7F2C0, a3, &v56);
          sub_182CBA0(v53, &v59);
          v60 &= ~1u;
          v59 = 1;
          sub_27B900((__int64)(a1 + 2), (int)&v56, v51, v42, v43, v44);
          v45 = (unsigned int *)sub_15E1B70(a1[2]);
          v52 = sub_A7A500(a1, v45);
          sub_25A130((char *)&v56);
          v11 = v55;
        }
        v12 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8 * v11)) + 24);
        if ( v12
          && *v12 == 5
          && !v12[1]
          && (*(_DWORD *)(**(_QWORD **)(sub_FF9B20(a1[63]) + 544) + 4 * v5) & 0xFFFFFFFD) == 0 )
        {
LABEL_17:
          v13 = sub_A72E00(v7);
          sub_27B900((__int64)(a1 + 2), a3, v13, v14, v15, v16);
          v17 = (unsigned int *)sub_15E1B70(a1[2]);
          v52 = sub_A7A500(a1, v17);
        }
LABEL_25:
        if ( v52 != -2 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 8848LL) + v52) != 1 )
        {
          ++*((_DWORD *)a1 + 116);
          sub_A7AF60(a1);
          v21 = a1[102];
          if ( v21 )
          {
            v22 = *(unsigned int *)(v21 - 4);
            if ( (_DWORD)v22 )
            {
              v49 = v21 + 40 * v22;
              do
              {
                v23 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v21 + 8);
                v24 = v21 + 24;
                v21 += 40;
                sub_182CBA0(v23, v24);
              }
              while ( v21 != v49 );
              v21 = a1[102];
            }
            *(_DWORD *)(v21 - 4) = 0;
          }
          if ( !*((_DWORD *)a1 + 209) && !*((_DWORD *)a1 + 210) )
            goto LABEL_51;
          v25 = (char *)a1[103];
          v26 = 0;
          v27 = *((unsigned int *)a1 + 208);
          v28 = &v25[12 * v27];
          v29 = a1[103];
          if ( v25 == v28 )
            goto LABEL_50;
          do
          {
            while ( *(_DWORD *)(v29 + 4) )
            {
              *(_DWORD *)(v29 + 4) = 0;
              v29 += 12;
              if ( v28 == (char *)v29 )
                goto LABEL_40;
            }
            v29 += 12;
            ++v26;
          }
          while ( v28 != (char *)v29 );
LABEL_40:
          if ( (unsigned int)v27 <= 0x10 || 3 * (int)v27 >= (unsigned int)(4 * v26) )
          {
LABEL_50:
            *(_QWORD *)((char *)a1 + 836) = 0;
LABEL_51:
            sub_A8A140(a1[63], a3, (__int64)(a1 + 72));
            sub_9936C0(*(_QWORD *)(*a1 + 16LL), v52 >> 1);
            sub_AA1680(a1, v52, a1 + 106, a1 + 107, a1 + 108);
            return sub_A72BE0(v7, v48);
          }
          if ( v25 )
          {
            sub_186B220(v25);
            v30 = *((_DWORD *)a1 + 208);
            a1[103] = 0;
            v31 = v30 >> 1;
            *((_DWORD *)a1 + 208) = v31;
            v32 = sub_186B270(12LL * v31);
            if ( !v31 )
              goto LABEL_49;
          }
          else
          {
            a1[103] = 0;
            v35 = (unsigned int)v27 >> 1;
            *((_DWORD *)a1 + 208) = v35;
            v31 = v35;
            v32 = sub_186B270(12LL * v35);
          }
          v33 = (_QWORD *)v32;
          if ( v31 != 1 )
          {
            do
            {
              *v33 = 0;
              v33 += 3;
              *(_QWORD *)((char *)v33 - 12) = 0;
            }
            while ( (_QWORD *)(v32 + 24LL * (v31 >> 1)) != v33 );
            if ( (v31 & 1) == 0 )
              goto LABEL_49;
            v33 = (_QWORD *)(v32 + 12LL * (v31 & 0x7FFFFFFE));
          }
          *v33 = 0;
LABEL_49:
          a1[103] = v32;
          goto LABEL_50;
        }
      }
    }
    else if ( !v9 )
    {
      v18 = sub_A72E00(v7);
      v19 = a2;
      if ( v18
        && ((v36 = sub_FF9B20(a1[63]),
             v19 = a2,
             (*(_DWORD *)(**(_QWORD **)(v36 + 544) + 4LL * (unsigned int)v5) & 0xFFFFFFFD) != 0)
         || (v46 = sub_FF9B20(a1[63]), v19 = a2, *(_DWORD *)(**(_QWORD **)(v46 + 544) + 4LL * (unsigned int)v5) <= 1u)) )
      {
        v54 = v19;
        v50 = sub_A72E00(v7);
        sub_992C20((__int64)&v56, a3);
        sub_27B900((__int64)(a1 + 2), (int)&v56, v50, v37, v38, v39);
        v40 = (unsigned int *)sub_15E1B70(a1[2]);
        v52 = sub_A7A500(a1, v40);
        sub_25A130((char *)&v56);
        v19 = v54;
      }
      else
      {
        v52 = -2;
      }
      v20 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8 * v19)) + 24);
      if ( v20 && *v20 == 5 && !v20[1] && *(_DWORD *)(**(_QWORD **)(sub_FF9B20(a1[63]) + 544) + 4 * v5) <= 1u )
        goto LABEL_17;
      goto LABEL_25;
    }
    return sub_A72BE0(v7, v48);
  }
  return result;
}

