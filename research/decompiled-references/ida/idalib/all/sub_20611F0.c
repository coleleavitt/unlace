__int64 __fastcall sub_20611F0(_QWORD *a1, char *a2, char *a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r12
  __int64 **v17; // rdx
  __int64 v18; // r12
  __int64 *v19; // r13
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdi
  int v32; // r8d
  unsigned int v33; // edx
  __int64 *v34; // rax
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 *v37; // rdx
  int v38; // eax
  int v39; // esi
  __int64 v40; // r8
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdi
  int v48; // r8d
  unsigned int v49; // ecx
  __int64 *v50; // rax
  __int64 v51; // r9
  int v52; // eax
  int v53; // r10d
  __int64 v54; // r9
  int v55; // eax
  int v56; // r10d
  __int64 v57; // r9
  char *v58; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v59; // [rsp+10h] [rbp-38h] BYREF
  __int64 v60[6]; // [rsp+18h] [rbp-30h] BYREF

  switch ( *(_BYTE *)a1 )
  {
    case 0xA:
      result = sub_205C220((__int64)a1, (__int64)a2, a3);
      goto LABEL_3;
    case 0xB:
      result = sub_205CA10((__int64)a1, a2, a3);
      goto LABEL_3;
    case 0xC:
      result = sub_205D550((__int64)a1, (__int64)a2, (__int64)a3);
      goto LABEL_3;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      sub_2EB590((__int64)a1, (__int64)a2, (__int64)a3, a4);
    case 0x11:
      v21 = *(_QWORD *)sub_20CB0D0(a1);
      v60[0] = (__int64)a3;
      v26 = sub_2059520(v21 + 1608, v60, v22, v23, v24, v25);
      result = *v26;
      if ( *v26 )
        goto LABEL_4;
      *(_BYTE *)(*(a1 - 4) + 1LL) &= ~2u;
      v27 = sub_20CB0D0(a1);
      v28 = *(a1 - 4);
      v29 = *(_QWORD *)v27;
      v30 = *(_DWORD *)(*(_QWORD *)v27 + 1624LL);
      v31 = *(_QWORD *)(v29 + 1608);
      if ( !v30 )
        goto LABEL_23;
      v32 = v30 - 1;
      v33 = (v30 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v34 = (__int64 *)(v31 + 16LL * v33);
      v35 = *v34;
      if ( v28 == *v34 )
        goto LABEL_22;
      v55 = 1;
      if ( v35 == -4096 )
        goto LABEL_23;
      while ( 1 )
      {
        v56 = v55 + 1;
        v33 = v32 & (v55 + v33);
        v34 = (__int64 *)(v31 + 16LL * v33);
        v57 = *v34;
        if ( v28 == *v34 )
          break;
        v55 = v56;
        if ( v57 == -4096 )
          goto LABEL_23;
      }
LABEL_22:
      *v34 = -8192;
      --*(_DWORD *)(v29 + 1616);
      ++*(_DWORD *)(v29 + 1620);
LABEL_23:
      *v26 = (__int64)a1;
      sub_20166C0(a1 - 4, (__int64)a3);
      result = *(a1 - 4);
      *(_BYTE *)(result + 1) |= 2u;
      return result;
    case 0x12:
      result = sub_2060DC0((__int64)a1, (__int64)a2, (__int64)a3);
      goto LABEL_3;
    case 0x13:
      if ( (unsigned __int8)(*a3 - 13) > 3u )
      {
        v58 = nullptr;
        goto LABEL_31;
      }
      v58 = a3;
      v18 = *(_QWORD *)sub_20CB0D0(a1);
      v19 = (__int64 *)(v18 + 1632);
      if ( !(unsigned __int8)sub_2053450((__int64 *)(v18 + 1632), (__int64 *)&v58, &v59) )
      {
        v36 = *(unsigned int *)(v18 + 1648);
        v37 = v59;
        v38 = *(_DWORD *)(v18 + 1640) + 1;
        v39 = 2 * v36;
        v40 = (unsigned int)(4 * v38);
        v60[0] = (__int64)v59;
        if ( (unsigned int)v40 < 3 * (int)v36 )
        {
          if ( (int)v36 - *(_DWORD *)(v18 + 1644) - v38 > (unsigned int)v36 >> 3 )
          {
LABEL_28:
            v41 = *v37 == -4096;
            *(_DWORD *)(v18 + 1640) = v38;
            if ( !v41 )
              --*(_DWORD *)(v18 + 1644);
            v42 = (__int64)v58;
            v37[1] = 0;
            *v37 = v42;
            goto LABEL_31;
          }
          v39 = v36;
        }
        sub_2059670((__int64)v19, v39, (__int64)v59, v36, v40, v20);
        sub_2053450(v19, (__int64 *)&v58, v60);
        v37 = (__int64 *)v60[0];
        v38 = *(_DWORD *)(v18 + 1640) + 1;
        goto LABEL_28;
      }
      result = v59[1];
      if ( !result )
      {
LABEL_31:
        result = sub_205E630((__int64)a1, a3);
        goto LABEL_3;
      }
      v17 = (__int64 **)a1[1];
      if ( v17 != *(__int64 ***)(result + 8) )
        goto LABEL_12;
LABEL_3:
      if ( result )
      {
LABEL_4:
        v6 = result;
        sub_20CDD90(a1, result);
        return sub_205B240(a1, v6, v7, v8);
      }
      return result;
    case 0x14:
      v10 = sub_20CA940(a3);
      if ( (unsigned __int8)(*(_BYTE *)v10 - 13) >= 4u )
        v10 = 0;
      v11 = *(_QWORD *)sub_20CB0D0(a1);
      v60[0] = v10;
      v16 = sub_2059A90(v11 + 1656, v60, v12, v13, v14, v15);
      result = *v16;
      if ( *v16 )
      {
        v17 = (__int64 **)a1[1];
        if ( v17 == *(__int64 ***)(result + 8) )
          goto LABEL_4;
LABEL_12:
        result = sub_205E4A0(0x31u, (_BYTE *)result, v17, 0);
        goto LABEL_3;
      }
      v43 = sub_20CB0D0(a1);
      v44 = *(a1 - 4);
      v45 = *(_QWORD *)v43;
      v46 = *(_DWORD *)(*(_QWORD *)v43 + 1672LL);
      v47 = *(_QWORD *)(v45 + 1656);
      if ( !v46 )
        goto LABEL_36;
      v48 = v46 - 1;
      v49 = (v46 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v50 = (__int64 *)(v47 + 16LL * v49);
      v51 = *v50;
      if ( v44 == *v50 )
        goto LABEL_35;
      v52 = 1;
      if ( v51 != -4096 )
      {
        while ( 1 )
        {
          v53 = v52 + 1;
          v49 = v48 & (v52 + v49);
          v50 = (__int64 *)(v47 + 16LL * v49);
          v54 = *v50;
          if ( v44 == *v50 )
            break;
          v52 = v53;
          if ( v54 == -4096 )
            goto LABEL_36;
        }
LABEL_35:
        *v50 = -8192;
        --*(_DWORD *)(v45 + 1664);
        ++*(_DWORD *)(v45 + 1668);
      }
LABEL_36:
      *v16 = (__int64)a1;
      sub_20166C0(a1 - 4, v10);
      result = *(_QWORD *)(v10 + 8);
      if ( result != a1[1] )
        a1[1] = result;
      return result;
    case 0x15:
      result = sub_205B940((__int64)a1, (__int64)a2, (__int64)a3);
      goto LABEL_3;
  }
}
