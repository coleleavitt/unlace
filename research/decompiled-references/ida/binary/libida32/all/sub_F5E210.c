unsigned __int64 __fastcall sub_F5E210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // r13
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rcx
  bool v42; // zf
  int v43; // esi
  _QWORD *v44; // [rsp+10h] [rbp-98h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  _QWORD *v46; // [rsp+38h] [rbp-70h] BYREF
  __int64 v47; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-60h]
  __m128 v49; // [rsp+50h] [rbp-58h] BYREF
  char v50; // [rsp+60h] [rbp-48h]

  v9 = *(char **)(a1 + 16);
  v44 = sub_EBA840(*(_QWORD *)(a1 + 24), v9, a3, a4, a5, a6);
  result = sub_A56850(a2, (__int64)v9, v10, v11, v12, v13);
  if ( result != v15 )
  {
    v18 = v15;
    v19 = result;
    while ( 1 )
    {
      v20 = sub_F55F20(*(__int64 **)(v19 + 16), (__int64)v9, v15, v16, v17);
      v25 = sub_F3F530(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v9, v21, v22, v23, v24);
      v26 = (__int64)v25;
      if ( (*(_BYTE *)(v19 + 12) & 1) == 0 )
        goto LABEL_4;
      sub_EB4570(&v49, a1 + 560, (__int64)v25);
      if ( !v50 )
        goto LABEL_4;
      v31 = sub_F5E070(v44 + 9, v26, v27, v28, v29, v30);
      v32 = *(_QWORD *)(a1 + 24);
      v33 = 32;
      v45 = v31 - a3;
      v34 = -(__int64)(((*(_BYTE *)(*(_QWORD *)(v32 + 2320) + 172LL) & 0x20) == 0)
                     + (unsigned __int64)*(unsigned int *)(a1 + 40)
                     + 2);
      if ( *(_DWORD *)(*(_QWORD *)a1 + 136LL) != 1 )
        v33 = *(unsigned __int8 *)(*(_QWORD *)(v32 + 17448) + 8LL);
      v35 = sub_A742B0(v32, v33);
      v47 = v26;
      v48 = v34 * v35;
      if ( !(unsigned __int8)sub_A49FE0((__int64 *)(a1 + 888), &v47, &v46) )
        break;
      sub_EB51F0(&v49, v46, (_QWORD *)(*(_QWORD *)(a1 + 888) + 16LL * *(unsigned int *)(a1 + 904)), a1 + 888, 1);
LABEL_15:
      sub_F59E60(a1 + 32, 8 * v45 + 1);
LABEL_4:
      v9 = (char *)v26;
      v19 += 24LL;
      result = sub_F5E210(a1, v26, a3);
      if ( v19 == v18 )
        return result;
    }
    v37 = v46;
    v38 = (unsigned int)(*(_DWORD *)(a1 + 896) + 1);
    v39 = *(_DWORD *)(a1 + 904);
    v49.m128_u64[0] = (unsigned __int64)v46;
    v40 = (unsigned int)(4 * v38);
    v41 = 2 * v39;
    if ( (unsigned int)v40 >= 3 * v39 )
    {
      v43 = 2 * v39;
    }
    else
    {
      v41 = v39 - *(_DWORD *)(a1 + 900) - (unsigned int)v38;
      if ( (unsigned int)v41 > v39 >> 3 )
      {
LABEL_12:
        v42 = *v37 == -4096;
        *(_DWORD *)(a1 + 896) = v38;
        if ( !v42 )
          --*(_DWORD *)(a1 + 900);
        *v37 = v47;
        v46 = v37;
        v37[1] = v48;
        sub_EB51F0(&v49, v37, (_QWORD *)(*(_QWORD *)(a1 + 888) + 16LL * v39), a1 + 888, 1);
        goto LABEL_15;
      }
      v43 = v39;
    }
    sub_6E50A0(a1 + 888, v43, v38, v41, v40, v36);
    sub_A49FE0((__int64 *)(a1 + 888), &v47, &v49);
    v39 = *(_DWORD *)(a1 + 904);
    v37 = (_QWORD *)v49.m128_u64[0];
    LODWORD(v38) = *(_DWORD *)(a1 + 896) + 1;
    goto LABEL_12;
  }
  return result;
}

