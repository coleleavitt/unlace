char __fastcall sub_199EDB0(__int64 **a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  char v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rdi
  int v33; // eax
  __int64 (__fastcall *v34)(__int64); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int v42; // ebp
  unsigned int v43; // ebx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __m128 *v57; // rdi
  __int64 *v58; // rax
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  int v64; // ecx
  __m128 *v65; // rdi
  _BYTE *v66; // rbx
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  size_t v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 *v79; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v80; // [rsp+8h] [rbp-30h]

  v5 = **a1;
  v6 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v6 == 38 )
  {
    v7 = *(_QWORD *)(v5 + 112);
    if ( (*(_BYTE *)(v7 + 83) & 2) == 0
      || ((v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL), v8 != sub_B94CC0)
        ? (v9 = v8(v7))
        : (v9 = sub_B709C0(v7)),
          (*(_BYTE *)(v9 + 82) & 0x40) != 0) )
    {
      if ( (*(_BYTE *)(v7 + 87) & 0x20) != 0 && *(_QWORD *)(v7 + 176) )
      {
        sub_188E6E0(a1[2], *(_DWORD *)a1[1], v7, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
        v5 = **a1;
        goto LABEL_9;
      }
      goto LABEL_31;
    }
    LOBYTE(v12) = sub_B98FC0(v7, a2);
    if ( (_BYTE)v12 )
    {
      if ( *(char *)(v7 + 82) < 0 )
      {
        if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
          return v12;
        v51 = sub_B8C3D0(v7, a2, v47, v48, v49, v50);
        v52 = *v51;
        v12 = *((unsigned int *)v51 + 2);
        v53 = v52 + 8 * v12;
        if ( v52 >= v53 )
        {
          if ( v52 == v53 )
            return v12;
          if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 195 )
          {
            v12 = v53 + 8;
            while ( v52 != v12 )
            {
              v77 = *(_QWORD *)v12;
              v12 += 8;
              if ( *(_WORD *)(v77 + 36) == 195 )
                goto LABEL_110;
            }
            return v12;
          }
        }
        else
        {
          v12 = v52;
          while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 195 )
          {
            v12 += 8;
            if ( v53 == v12 )
              return v12;
          }
          if ( v53 == v12 )
            return v12;
        }
      }
LABEL_110:
      sub_1885A80(a1[2], *(_DWORD *)a1[1], v7, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
      v5 = **a1;
      goto LABEL_9;
    }
    LODWORD(v79) = 0;
    if ( sub_B98FE0(v7, &v79, v47, v48) )
    {
      sub_1885680(a1[2], *(_DWORD *)a1[1], v7, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
      v5 = **a1;
      goto LABEL_9;
    }
    LODWORD(v79) = 0;
    if ( sub_B99060(v7, &v79, v74, v75) )
    {
      sub_18854F0(a1[2], *(_DWORD *)a1[1], v7, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
      v5 = **a1;
      goto LABEL_9;
    }
LABEL_31:
    v5 = **a1;
    goto LABEL_9;
  }
  if ( v6 == 36 )
  {
    v5 = *(_QWORD *)(v5 + 112);
    v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL);
    if ( (*(_BYTE *)(v5 + 83) & 2) != 0 )
    {
      if ( v34 == sub_B94CD0 )
        v12 = sub_B709C0(v5);
      else
        v12 = v34(v5);
      if ( (*(_BYTE *)(v12 + 82) & 0x40) == 0 )
      {
        if ( *(char *)(v5 + 82) < 0 )
        {
          if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
            return v12;
          v39 = sub_B8C3D0(v5, a2, v35, v36, v37, v38);
          v40 = *v39;
          v12 = *((unsigned int *)v39 + 2);
          v41 = v40 + 8 * v12;
          if ( v40 >= v41 )
          {
            if ( v40 == v41 )
              return v12;
            if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 195 )
            {
              v12 = v41 + 8;
              while ( v40 != v12 )
              {
                v76 = *(_QWORD *)v12;
                v12 += 8;
                if ( *(_WORD *)(v76 + 36) == 195 )
                  goto LABEL_63;
              }
              return v12;
            }
          }
          else
          {
            v12 = v40;
            while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 195 )
            {
              v12 += 8;
              if ( v41 == v12 )
                return v12;
            }
            if ( v41 == v12 )
              return v12;
          }
        }
LABEL_63:
        sub_1885830((__int64)a1[2], *(_DWORD *)a1[1], v5);
      }
      v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL);
    }
    v18 = v34(v5);
    if ( (*(_QWORD *)(v18 + 80) & 0x40000LL) != 0 || ((*(_QWORD *)(v18 + 80) >> 16) & 8) != 0 )
      goto LABEL_27;
LABEL_76:
    if ( !(unsigned int)sub_B984E0(v18) )
      goto LABEL_31;
LABEL_27:
    v19 = (__int64)a1[2];
    if ( (*(_BYTE *)(*(_QWORD *)(v19 + 232) + 12LL) & 0x10) != 0 )
    {
      v20 = (__int64 *)sub_B72690(v5 + 72);
      if ( v20 )
        v20 -= 8;
      sub_1884910(v19, *(_DWORD *)a1[1], v20, 0, v21, v22);
    }
    goto LABEL_31;
  }
  if ( (unsigned int)v6 - 35 > 3 )
    goto LABEL_9;
  if ( (unsigned int)sub_B77890(**a1) && (unsigned int)sub_B77890(v5) == 15 )
  {
    v66 = *(_BYTE **)(v5 + 112);
    if ( (v66[83] & 2) == 0
      || (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v66 + 32LL))(v66) + 82) & 0x40) != 0 )
    {
      goto LABEL_31;
    }
    if ( sub_B98230(v66, a2) )
    {
      sub_185D2A0(a1[2], *(_DWORD *)a1[1], (__int64)v66);
      v5 = **a1;
      goto LABEL_9;
    }
    if ( !sub_B98360(v66, a2) )
      goto LABEL_31;
    sub_1883360(a1[2], *(_DWORD *)a1[1], (__int64)v66);
    v5 = **a1;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x25 )
      goto LABEL_25;
    v67 = sub_B72690(v5 + 72);
    if ( !v67 )
      BUG();
    v68 = *(_QWORD *)(v67 + 64);
    if ( !v68 || (*(_BYTE *)(v68 + 10) & 0x20) == 0 )
    {
LABEL_25:
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      if ( (*(_QWORD *)(v18 + 80) & 0x40000LL) != 0 || ((*(_QWORD *)(v18 + 80) >> 16) & 8) != 0 )
        goto LABEL_27;
      goto LABEL_76;
    }
    v69 = *(_QWORD *)(v5 + 112);
    if ( sub_B996F0(v69, a2) )
      sub_185D0F0((__int64)a1[2], *(_DWORD *)a1[1], v69, v70, v71, v72);
    else
      sub_185CDC0((__int64)a1[2], *(_DWORD *)a1[1], v69, v70, v71, v72);
    v5 = **a1;
  }
LABEL_9:
  if ( (*(_BYTE *)(v5 + 83) & 2) != 0 )
  {
    v10 = (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) + 82) & 0x40) == 0;
    v11 = *a1;
    if ( v10 )
    {
      v54 = sub_183C740((__int64)a1[2], (_DWORD *)*v11);
      if ( BYTE1(v54) )
        sub_186C610((__int64)a1[2], *(_DWORD *)a1[1], **a1, BYTE1(v54), v55, v56, *(double *)a3.m128_u64, a4);
      v11 = *a1;
    }
    v5 = *v11;
  }
  v10 = (unsigned __int8)sub_B7F7D0(v5) == 0;
  v12 = (__int64)*a1;
  if ( v10 )
  {
    v13 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      v14 = *(_QWORD *)v12;
      v15 = 0;
      while ( 1 )
      {
        if ( !sub_B8C400(v14, 0) && (unsigned __int8)sub_B7F7D0(v14) )
          sub_1910D40((__int64)a1[2], *(unsigned int *)a1[1], v14, *(unsigned __int8 *)a1[3], v16, v17, a3, a4);
        v12 = *(_QWORD *)(v14 + 104);
        if ( (v12 & 1) != 0 )
        {
          if ( v15 )
            return v12;
          v30 = v12 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_42;
        }
        if ( (v12 & 2) != 0 )
        {
          if ( v15 )
            return v12;
          v23 = v12 & 0xFFFFFFFFFFFFFFFCLL;
          v15 = 1;
          v24 = (_QWORD *)v23;
          if ( v23 )
          {
            v25 = *(_QWORD *)(v23 + 18360);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v23 + 2352);
              v24[304] += 24LL;
              v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v24[295] >= v27 + 24 && v26 )
              {
                v24[294] = v27 + 24;
                v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v28 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v16, v17);
                v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v28 = v25;
              v29 = v27 | 4;
              *(_DWORD *)(v28 + 8) = 0;
              *(_QWORD *)(v28 + 16) = v14;
            }
            else
            {
              v29 = v14 & 0xFFFFFFFFFFFFFFFBLL;
            }
            v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
            v12 = v30 | 1;
            *(_QWORD *)(v14 + 104) = v30 | 1;
LABEL_42:
            v12 &= 0xFFFFFFFFFFFFFFF8LL;
            v15 = 1;
            v31 = v12;
            if ( v30 && (v30 & 4) != 0 && v12 )
            {
              v32 = *(_QWORD *)v12;
              v33 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
              if ( *(_DWORD *)(v31 + 8) != v33 )
              {
                *(_DWORD *)(v31 + 8) = v33;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 152LL))(v32, v14);
              }
              v12 = *(_QWORD *)(v31 + 16);
              v15 = 1;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v12 &= 0xFFFFFFFFFFFFFFFCLL;
          if ( v12 )
            goto LABEL_19;
        }
        v12 = 0;
LABEL_19:
        if ( v13 != v12 )
        {
          v14 = v12;
          if ( v12 )
            continue;
        }
        return v12;
      }
    }
  }
  else
  {
    v42 = sub_B77DB0(*(_QWORD *)v12);
    v43 = sub_B77EF0(**a1);
    if ( v43 )
    {
      v12 = (__int64)*a1;
      v44 = **a1;
      if ( v42 == 1 )
      {
        if ( (*(_BYTE *)(v44 + 84) & 3) == 0 )
          return v12;
      }
      else
      {
        v43 = *(_DWORD *)a1[1];
      }
    }
    else
    {
      v43 = *(_DWORD *)a1[1];
      v60 = sub_B77930(**a1);
      if ( v60 )
        *(_DWORD *)(v60 + 8) = *(_DWORD *)a1[1];
      else
        sub_B77E40(**a1, v42, v43);
      v44 = **a1;
    }
    v45 = *(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v44 + 16) & 4) != 0 )
      v45 = *(_QWORD *)v45;
    if ( (*(_BYTE *)(v45 + 8) & 0x7Fu) - 59 > 2 )
      goto LABEL_74;
    v61 = v45 - 64;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v61 + 16);
      v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v62 & 4) != 0 )
        v63 = *(_QWORD *)v63;
      v64 = *(_BYTE *)(v63 + 8) & 0x7F;
      if ( (unsigned int)(v64 - 59) > 2 )
        break;
      v61 = v63 - 64;
      if ( !v61 )
        goto LABEL_74;
    }
    if ( (unsigned int)(v64 - 34) > 5 || v63 == 72 || (v65 = (__m128 *)a1[2], !v65[707].m128_i32[2]) )
    {
LABEL_74:
      v46 = *(_BYTE *)(v44 + 84);
      if ( (v46 & 3) != 0 )
      {
        LOBYTE(v12) = sub_1E3D740(a1[2], v43, v44, 0, 0, 0);
      }
      else
      {
        *(_BYTE *)(v44 + 84) = v46 | 8;
        v57 = (__m128 *)(a1[2] + 1580);
        v58 = (__int64 *)**a1;
        LODWORD(v80) = v43;
        v79 = v58;
        sub_18C98A0(v57, (__int64 *)&v79);
        if ( (unsigned __int8)sub_224A960() )
        {
          v79 = *a1;
          v80 = a1[2];
          v73 = j__strlen("DeferInstantiation");
          sub_224C660("DeferInstantiation", v73, sub_18BC570, &v79);
        }
        v59 = a1[2][32];
        v12 = *(_QWORD *)(*(_QWORD *)v59 + 72LL);
        if ( (void (*)())v12 != nullsub_152 )
          LOBYTE(v12) = ((__int64 (__fastcall *)(__int64, __int64))v12)(v59, **a1);
      }
    }
    else
    {
      v79 = (__int64 *)v44;
      LODWORD(v80) = v43;
      LOBYTE(v12) = sub_18C98A0(v65 + 975, (__int64 *)&v79);
    }
  }
  return v12;
}
