__int64 __fastcall sub_1FE2EB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // ebx
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  void **v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r13d
  __int64 v26; // r12
  int v27; // r13d
  __int64 v28; // rax
  __int64 *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 *v32; // rsi
  __int64 *v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // r12
  _BOOL4 v39; // r13d
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r12
  int v44; // r13d
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rax
  int v51; // r13d
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // r12
  int v57; // r14d
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r13
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 (__fastcall *v65)(__int64); // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rbp
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // r12
  __int64 v74; // rax
  int v75; // r13d
  __int64 v76; // r12
  int v77; // r13d
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // [rsp-10h] [rbp-68h]
  __int64 v83; // [rsp+8h] [rbp-50h] BYREF
  void *v84[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v85; // [rsp+20h] [rbp-38h]

  v6 = a2;
  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 0x26:
    case 0x28:
    case 0x2A:
    case 0x2B:
    case 0x2C:
      goto LABEL_5;
    case 2:
    case 3:
      v21 = *(_BYTE *)(a2 + 19);
      v22 = *(void ***)(a2 + 40);
      if ( (v21 & 2) != 0 )
      {
        LODWORD(v84[1]) = *((_DWORD *)v22 + 2);
        if ( LODWORD(v84[1]) > 0x40 )
          sub_2205510(v84);
        else
          v84[0] = *v22;
      }
      else
      {
        LODWORD(v84[1]) = 8 * ((v21 >> 2) & 0x1F);
        if ( SLODWORD(v84[1]) > 64 )
          sub_2205470(v84, v22, 0);
        else
          v84[0] = v22;
      }
      sub_2205760(v84, *a1);
      if ( LODWORD(v84[1]) > 0x40 && v84[0] )
        operator delete[](v84[0]);
      sub_1FE3950(a1[1], *(_QWORD *)(v6 + 32));
      goto LABEL_30;
    case 4:
    case 5:
    case 6:
      v9 = *(_QWORD *)(a2 + 32);
      v10 = a1[1];
      if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v11 = v9 & 7;
        if ( (v9 & 8) != 0 )
          v11 |= *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
        v12 = *(unsigned int *)(v10 + 20);
        v13 = v11;
        v83 = v10 + 8;
        v14 = *(unsigned int *)(v10 + 16);
        if ( v14 + 1 > v12 )
        {
          sub_2237220(v10 + 8, v10 + 24, v14 + 1, 4);
          v14 = *(unsigned int *)(v10 + 16);
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4 * v14) = v13;
        ++*(_DWORD *)(v10 + 16);
        v83 = v10;
        *(__m128 *)v84 = _mm_loadh_ps((const double *)&v83);
        sub_1FE2EB0(v84);
      }
      else
      {
        *(_BYTE *)v10 = 1;
      }
LABEL_30:
      v23 = a1[1];
      v24 = *(unsigned int *)(v23 + 16);
      v25 = (*(_WORD *)(v6 + 18) >> 6) & 7;
      if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 20) )
      {
        sub_2237220(v23 + 8, v23 + 24, v24 + 1, 4);
        v24 = *(unsigned int *)(v23 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4 * v24) = v25;
      v18 = a1[1];
      ++*(_DWORD *)(v23 + 16);
      v19 = (*(_BYTE *)(v6 + 18) >> 3) & 7;
      goto LABEL_16;
    case 7:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x29:
    case 0x33:
    case 0x34:
    case 0x37:
    case 0x38:
      result = a1[1];
      *(_BYTE *)result = 1;
      return result;
    case 8:
      v49 = a1[1];
      v50 = *(unsigned int *)(v49 + 16);
      v51 = *(_WORD *)(a2 + 18) >> 3;
      if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(v49 + 20) )
      {
        sub_2237220(v49 + 8, v49 + 24, v50 + 1, 4);
        v50 = *(unsigned int *)(v49 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v49 + 8) + 4 * v50) = v51;
      v52 = a1[1];
      ++*(_DWORD *)(v49 + 16);
      return sub_1FE3950(v52, *(_QWORD *)(a2 + 40));
    case 0xD:
      v18 = a1[1];
      v19 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
      goto LABEL_16;
    case 0xE:
    case 0xF:
      return sub_1FE3950(a1[1], *(_QWORD *)(a2 + 32));
    case 0x10:
      goto LABEL_52;
    case 0x11:
      sub_1FE3B30(a1[1], *(_QWORD *)(a2 + 40));
LABEL_52:
      v8 = *(_QWORD *)(a2 + 24);
      return sub_1FE3950(a1[1], v8);
    case 0x18:
      return sub_1FE3950(a1[1], *(_QWORD *)(a2 + 40));
    case 0x19:
      goto LABEL_39;
    case 0x1A:
      v26 = a1[1];
      v27 = *(unsigned __int16 *)(a2 + 22);
      v28 = *(unsigned int *)(v26 + 16);
      if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(v26 + 20) )
      {
        sub_2237220(v26 + 8, v26 + 24, v28 + 1, 4);
        v28 = *(unsigned int *)(v26 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v26 + 8) + 4 * v28) = v27;
      ++*(_DWORD *)(v26 + 16);
      v29 = (__int64 *)(a2 + 48);
      v30 = a2 + 48 + 8LL * *(unsigned __int16 *)(a2 + 22);
      if ( a2 + 48 != v30 )
      {
        do
        {
          v31 = *v29++;
          sub_1FE3950(a1[1], v31);
        }
        while ( (__int64 *)v30 != v29 );
      }
LABEL_39:
      v32 = *(__int64 **)(v6 + 24);
      sub_1FE3950(a1[1], v32);
      v33 = (__int64 *)*a1;
      v34 = *(unsigned int *)(*a1 + 8LL);
      v35 = *(unsigned int *)(*a1 + 12LL);
      v36 = *(_WORD *)(v6 + 20) >> 2;
      if ( v34 + 1 > v35 )
      {
        v32 = v33 + 2;
        sub_2237220(*a1, v33 + 2, v34 + 1, 4);
        v34 = *((unsigned int *)v33 + 2);
      }
      v37 = *v33;
      *(_DWORD *)(*v33 + 4 * v34) = v36;
      ++*((_DWORD *)v33 + 2);
      v38 = a1[1];
      v39 = (*(_BYTE *)(v6 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F63050(v6, v32, v37, v35))
         && (*(_BYTE *)(v6 + 18) & 0x20) != 0;
      v40 = *(unsigned int *)(v38 + 16);
      v41 = *(unsigned int *)(v38 + 20);
      if ( v40 + 1 > v41 )
      {
        v32 = (__int64 *)(v38 + 24);
        sub_2237220(v38 + 8, v38 + 24, v40 + 1, 4);
        v40 = *(unsigned int *)(v38 + 16);
      }
      v42 = *(_QWORD *)(v38 + 8);
      *(_DWORD *)(v42 + 4 * v40) = v39;
      ++*(_DWORD *)(v38 + 16);
      v43 = a1[1];
      if ( *(_BYTE *)(v6 + 16) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F63050(v6, v32, v42, v41) )
      {
        v44 = *(_BYTE *)(v6 + 18) >> 7;
      }
      else
      {
        v44 = 0;
      }
      v45 = *(unsigned int *)(v43 + 16);
      v46 = *(unsigned int *)(v43 + 20);
      if ( v45 + 1 > v46 )
      {
        v32 = (__int64 *)(v43 + 24);
        sub_2237220(v43 + 8, v43 + 24, v45 + 1, 4);
        v45 = *(unsigned int *)(v43 + 16);
      }
      v47 = *(_QWORD *)(v43 + 8);
      *(_DWORD *)(v47 + 4 * v45) = v44;
      v18 = a1[1];
      ++*(_DWORD *)(v43 + 16);
      v19 = (*(_BYTE *)(v6 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F63050(v6, v32, v47, v46))
         && (*(_BYTE *)(v6 + 18) & 0x40) != 0;
      goto LABEL_16;
    case 0x21:
      sub_1FE3950(a1[1], *(_QWORD *)(a2 + 32));
      v62 = *(_QWORD *)(a2 + 40);
      if ( ((*(__int64 *)(v62 + 8) >> 1) & 3) == 2 )
      {
        v63 = a1[1];
        v79 = *(_QWORD *)(v62 + 16);
        v83 = v63 + 8;
        if ( v79 )
        {
          v83 = v63;
          *(__m128 *)v84 = _mm_loadh_ps((const double *)&v83);
          sub_1FE2EB0(v84);
          goto LABEL_76;
        }
      }
      else
      {
        v63 = a1[1];
      }
      v64 = *(unsigned int *)(v63 + 16);
      if ( v64 + 1 > (unsigned __int64)*(unsigned int *)(v63 + 20) )
      {
        sub_2237220(v63 + 8, v63 + 24, v64 + 1, 4);
        v64 = *(unsigned int *)(v63 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v63 + 8) + 4 * v64) = 0;
      ++*(_DWORD *)(v63 + 16);
LABEL_76:
      result = (__int64)sub_F61C10(v6);
      if ( result )
      {
        v65 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL);
        if ( v65 == sub_A01140 )
          result = sub_B70A60(result);
        else
          result = v65(result);
LABEL_20:
        v20 = a1[1];
        if ( result )
        {
          if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 18 > 0x3F )
LABEL_90:
            *(_BYTE *)v20 = 1;
          else
            return sub_1FE3A00(a1[1], *(_QWORD *)(result + 40));
        }
        else
        {
LABEL_100:
          result = *(unsigned int *)(v20 + 16);
          if ( result + 1 > (unsigned __int64)*(unsigned int *)(v20 + 20) )
          {
            sub_2237220(v20 + 8, v20 + 24, result + 1, 4);
            result = *(unsigned int *)(v20 + 16);
          }
          *(_DWORD *)(*(_QWORD *)(v20 + 8) + 4 * result) = 0;
          ++*(_DWORD *)(v20 + 16);
        }
      }
      return result;
    case 0x2D:
      v66 = sub_F5E4D0(a2);
      v67 = a1[1];
      if ( v66 )
      {
        if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 18 > 0x3F )
          *(_BYTE *)v67 = 1;
        else
          sub_1FE3A00(a1[1], *(_QWORD *)(v66 + 40));
      }
      else
      {
        v80 = *(unsigned int *)(v67 + 16);
        if ( v80 + 1 > (unsigned __int64)*(unsigned int *)(v67 + 20) )
        {
          sub_2237220(v67 + 8, v67 + 24, v80 + 1, 4);
          v80 = *(unsigned int *)(v67 + 16);
        }
        *(_DWORD *)(*(_QWORD *)(v67 + 8) + 4 * v80) = 0;
        ++*(_DWORD *)(v67 + 16);
      }
      v68 = a1[1];
      sub_F5E520((__int64)v84, a2);
      return sub_1FE3C20(v68, a2, v69, v70, v71, v72, (__int64)v84[0], (__int64)v84[1], v85);
    case 0x2E:
      v53 = *(_QWORD *)(a2 + 32);
      v54 = a1[1];
      if ( v53 )
      {
        if ( (*(_BYTE *)(v53 + 28) & 0x7Fu) - 18 > 0x3F )
          *(_BYTE *)v54 = 1;
        else
          sub_1FE3A00(a1[1], *(_QWORD *)(v53 + 40));
      }
      else
      {
        v81 = *(unsigned int *)(v54 + 16);
        if ( v81 + 1 > (unsigned __int64)*(unsigned int *)(v54 + 20) )
        {
          sub_2237220(v54 + 8, v54 + 24, v81 + 1, 4);
          v81 = *(unsigned int *)(v54 + 16);
        }
        *(_DWORD *)(*(_QWORD *)(v54 + 8) + 4 * v81) = 0;
        ++*(_DWORD *)(v54 + 16);
      }
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v8 = *(_QWORD *)(a2 + 48);
      else
        v8 = *(_QWORD *)(a2 + 8);
      return sub_1FE3950(a1[1], v8);
    case 0x2F:
    case 0x30:
      result = (__int64)sub_F60F10(a2, a2, a3, a4, a5, a6);
      goto LABEL_20;
    case 0x31:
      v55 = a1[1];
      v56 = a2 + 48;
      v57 = *(_DWORD *)(a2 + 20);
      v58 = *(unsigned int *)(v55 + 16);
      v59 = *(unsigned int *)(v55 + 20);
      if ( v58 + 1 > v59 )
      {
        LODWORD(a2) = v55 + 24;
        sub_2237220(v55 + 8, v55 + 24, v58 + 1, 4);
        v58 = *(unsigned int *)(v55 + 16);
      }
      v60 = *(_QWORD *)(v55 + 8);
      *(_DWORD *)(v60 + 4 * v58) = v57;
      ++*(_DWORD *)(v55 + 16);
      v61 = v56 + 24LL * *(unsigned int *)(v6 + 20);
      while ( v61 != v56 )
      {
        v82 = *(_QWORD *)(v56 + 16);
        v56 += 24;
        sub_1FE3C20(a1[1], a2, v60, v59, a5, a6, *(_QWORD *)(v56 - 24), *(_QWORD *)(v56 - 16), v82);
      }
      return sub_1FE3B30(a1[1], *(_QWORD *)(v6 + 32));
    case 0x32:
      v73 = a1[1];
      v74 = *(unsigned int *)(v73 + 16);
      v75 = *(_WORD *)(a2 + 20) & 0x7FFF;
      if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(v73 + 20) )
      {
        sub_2237220(v73 + 8, v73 + 24, v74 + 1, 4);
        v74 = *(unsigned int *)(v73 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v73 + 8) + 4 * v74) = v75;
      ++*(_DWORD *)(v73 + 16);
      v76 = a1[1];
      v77 = *(unsigned __int16 *)(a2 + 22);
      v78 = *(unsigned int *)(v76 + 16);
      if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(v76 + 20) )
      {
        sub_2237220(v76 + 8, v76 + 24, v78 + 1, 4);
        v78 = *(unsigned int *)(v76 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v76 + 8) + 4 * v78) = v77;
      v18 = a1[1];
      ++*(_DWORD *)(v76 + 16);
      v19 = (unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)(a2 + 16)) >> 8) >> 7;
      goto LABEL_16;
    case 0x35:
      v48 = *(_QWORD *)(a2 + 32);
      v20 = a1[1];
      if ( !v48 )
        goto LABEL_100;
      result = (*(_BYTE *)(v48 + 28) & 0x7Fu) - 18;
      if ( (unsigned int)result > 0x3F )
        goto LABEL_90;
      return sub_1FE3A00(a1[1], *(_QWORD *)(v48 + 40));
    case 0x36:
      sub_1FE3950(a1[1], *(_QWORD *)(a2 + 40));
LABEL_5:
      v8 = *(_QWORD *)(a2 + 32);
      return sub_1FE3950(a1[1], v8);
    case 0x39:
    case 0x3A:
      sub_1FE3950(a1[1], *(_QWORD *)(a2 + 32));
      v15 = a1[1];
      v16 = *(_DWORD *)(a2 + 20);
      v17 = *(unsigned int *)(v15 + 16);
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 20) )
      {
        sub_2237220(v15 + 8, v15 + 24, v17 + 1, 4);
        v17 = *(unsigned int *)(v15 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v17) = v16;
      v18 = a1[1];
      ++*(_DWORD *)(v15 + 16);
      v19 = (*(_BYTE *)(a2 + 18) >> 3) & 0xF;
LABEL_16:
      result = *(unsigned int *)(v18 + 16);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(v18 + 20) )
      {
        sub_2237220(v18 + 8, v18 + 24, result + 1, 4);
        result = *(unsigned int *)(v18 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(v18 + 8) + 4 * result) = v19;
      ++*(_DWORD *)(v18 + 16);
      return result;
  }
}
