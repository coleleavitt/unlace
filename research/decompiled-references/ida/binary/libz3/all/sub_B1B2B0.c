__int64 __fastcall sub_B1B2B0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int **a4)
{
  __int64 v5; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // edx
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  int v13; // r14d
  __int64 v14; // rax
  unsigned int *v15; // rbx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  unsigned int *v23; // r15
  unsigned int v24; // r14d
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  unsigned int v29; // r14d
  unsigned int *v30; // rax
  unsigned int *v31; // r15
  unsigned int v32; // ebx
  int v33; // eax
  unsigned int *v34; // rax
  unsigned int *v35; // r15
  unsigned int v36; // ebx
  unsigned int *v37; // rbx
  _DWORD *v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // eax
  _DWORD *v41; // rax
  _DWORD *v42; // rdi
  unsigned int *v43; // r8
  unsigned int *v44; // r14
  int v45; // edx
  __int64 v46; // rax
  int v47; // r9d
  __int64 v48; // rax
  unsigned int *v49; // rdi
  int v50; // r15d
  unsigned int *v51; // rdx
  unsigned int v52; // esi
  __int64 v53; // rcx
  unsigned int v54; // eax
  unsigned int v56; // r15d
  size_t v57; // rsi
  unsigned int *v58; // rax
  char **exception; // r12
  unsigned int v61; // [rsp+8h] [rbp-F0h]
  unsigned int v62; // [rsp+Ch] [rbp-ECh]
  unsigned int v64; // [rsp+4Ch] [rbp-ACh] BYREF
  unsigned int v65; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-A4h] BYREF
  int v67; // [rsp+58h] [rbp-A0h] BYREF
  int v68; // [rsp+5Ch] [rbp-9Ch] BYREF
  int v69; // [rsp+60h] [rbp-98h] BYREF
  int v70; // [rsp+64h] [rbp-94h] BYREF
  int v71; // [rsp+68h] [rbp-90h] BYREF
  int v72; // [rsp+6Ch] [rbp-8Ch] BYREF
  int v73; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+74h] [rbp-84h] BYREF
  unsigned int *v75; // [rsp+78h] [rbp-80h] BYREF
  unsigned int *v76; // [rsp+80h] [rbp-78h] BYREF
  unsigned int *v77; // [rsp+88h] [rbp-70h] BYREF
  unsigned int *v78; // [rsp+90h] [rbp-68h] BYREF
  unsigned int *v79; // [rsp+98h] [rbp-60h] BYREF
  __int64 v80[11]; // [rsp+A0h] [rbp-58h] BYREF

  v5 = *a2;
  v61 = dword_1C7ED20;
  if ( *a2 )
  {
    v62 = 0;
    do
    {
      if ( v62 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = *(_DWORD *)(*a3 + 4LL * v62);
      v8 = dword_1C7ED20;
      v9 = dword_1C7ED20;
      if ( dword_1C7ED24 != v7 )
      {
        v9 = v7 ^ 1;
        if ( v7 == dword_1C7ED20 )
          v9 = dword_1C7ED24;
      }
      v10 = *(_DWORD *)(v5 + 4LL * v62);
      if ( v10 != dword_1C7ED24 )
      {
        v8 = dword_1C7ED24;
        if ( v10 != dword_1C7ED20 )
          v8 = v10 ^ 1;
      }
      v68 = v8;
      v69 = v9;
      v11 = (unsigned int *)(sub_186B270(0x10u) + 8);
      *v11 = v61;
      *((_QWORD *)v11 - 1) = 0x100000002LL;
      v76 = v11;
      sub_B0E5E0(&v76, (unsigned int *)&v68);
      sub_B0E5E0(&v76, (unsigned int *)&v69);
      v12 = v76;
      v13 = sub_B19E50(a1, (__int64 *)&v76);
      if ( v12 )
        sub_186B220(v12 - 2);
      v14 = sub_186B270(0x10u);
      *(_DWORD *)(v14 + 8) = v13;
      v15 = (unsigned int *)(v14 + 8);
      v16 = dword_1C7ED24;
      *(_QWORD *)v14 = 0x100000002LL;
      v17 = *(_DWORD *)(*a3 + 4LL * v62);
      v18 = dword_1C7ED20;
      v19 = dword_1C7ED20;
      if ( v17 != v16 )
      {
        v19 = v17 ^ 1;
        if ( v17 == dword_1C7ED20 )
          v19 = v16;
      }
      if ( v61 != v16 )
      {
        v18 = v16;
        if ( v61 != dword_1C7ED20 )
          v18 = v61 ^ 1;
      }
      v20 = *a2;
      v70 = v18;
      v71 = v19;
      v21 = *(_DWORD *)(v20 + 4LL * v62);
      v22 = (unsigned int *)sub_186B270(0x10u);
      v22[2] = v21;
      v22 += 2;
      *((_QWORD *)v22 - 1) = 0x100000002LL;
      v77 = v22;
      sub_B0E5E0(&v77, (unsigned int *)&v70);
      sub_B0E5E0(&v77, (unsigned int *)&v71);
      v23 = v77;
      v24 = sub_B19E50(a1, (__int64 *)&v77);
      if ( v23 )
        sub_186B220(v23 - 2);
      v64 = v24;
      v75 = v15;
      sub_B0E290(&v75, &v64);
      v25 = *(_DWORD *)(*a2 + 4LL * v62);
      v26 = dword_1C7ED20;
      v27 = dword_1C7ED20;
      if ( v25 != dword_1C7ED24 )
      {
        v27 = v25 ^ 1;
        if ( v25 == dword_1C7ED20 )
          v27 = dword_1C7ED24;
      }
      if ( v61 != dword_1C7ED24 )
      {
        v26 = dword_1C7ED24;
        if ( v61 != dword_1C7ED20 )
          v26 = v61 ^ 1;
      }
      v28 = *a3;
      v72 = v26;
      v73 = v27;
      v29 = *(_DWORD *)(v28 + 4LL * v62);
      v30 = (unsigned int *)sub_186B270(0x10u);
      v30[2] = v29;
      v30 += 2;
      *((_QWORD *)v30 - 1) = 0x100000002LL;
      v78 = v30;
      sub_B0E5E0(&v78, (unsigned int *)&v72);
      sub_B0E5E0(&v78, (unsigned int *)&v73);
      v31 = v78;
      v32 = sub_B19E50(a1, (__int64 *)&v78);
      if ( v31 )
        sub_186B220(v31 - 2);
      v65 = v32;
      sub_B0E290(&v75, &v65);
      v33 = *(_DWORD *)(*a3 + 4LL * v62);
      v74 = *(_DWORD *)(*a2 + 4LL * v62);
      LODWORD(v80[0]) = v33;
      v34 = (unsigned int *)(sub_186B270(0x10u) + 8);
      *v34 = v61;
      *((_QWORD *)v34 - 1) = 0x100000002LL;
      v79 = v34;
      sub_B0E5E0(&v79, &v74);
      sub_B0E5E0(&v79, (unsigned int *)v80);
      v35 = v79;
      v36 = sub_B19E50(a1, (__int64 *)&v79);
      if ( v35 )
        sub_186B220(v35 - 2);
      v66 = v36;
      sub_B0E290(&v75, &v66);
      v37 = v75;
      v38 = (_DWORD *)sub_186B270(0x10u);
      *(_QWORD *)v38 = 2;
      v39 = *v37;
      v38[1] = 1;
      v38[2] = v39;
      v40 = v37[1];
      v38[1] = 2;
      v38[3] = v40;
      v41 = (_DWORD *)sub_186B300(v38, 0x14u);
      *v41 = 3;
      v42 = v41;
      v43 = v41 + 2;
      v44 = v41;
      v41[v41[1] + 2] = v37[2];
      v45 = v41[1];
      v46 = (unsigned int)(v45 + 1);
      v42[1] = v46;
      if ( (_DWORD)v46 == *v42 )
      {
        v56 = (unsigned int)(3 * v46 + 1) >> 1;
        v57 = 4 * v56 + 8;
        if ( 4 * v45 + 12 >= (unsigned int)v57 || (unsigned int)v46 >= v56 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v80, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v80);
          sub_233E40((__int64)v80);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v58 = (unsigned int *)sub_186B300(v42, v57);
        *v58 = v56;
        v44 = v58;
        v43 = v58 + 2;
        v46 = v58[1];
      }
      v47 = dword_1C7ED20;
      v43[v46] = v37[3];
      v48 = *(v43 - 1) + 1;
      v49 = &v43[v48];
      *(v43 - 1) = v48;
      if ( v49 == v43 )
      {
        *(v43 - 1) = 0;
LABEL_47:
        v50 = v47;
      }
      else
      {
        v50 = dword_1C7ED24;
        v51 = v43;
        v52 = 0;
        while ( 1 )
        {
          v54 = *v51;
          if ( *v51 == v50 )
            break;
          if ( v54 != v47 )
          {
            v53 = v52++;
            v43[v53] = v54;
          }
          if ( v49 == ++v51 )
          {
            *(v43 - 1) = v52;
            if ( !v52 )
              goto LABEL_47;
            if ( v52 == 1 )
              v50 = *v43;
            else
              v50 = sub_B156E0(*(__int64 **)(a1 + 8), v52, v43);
            break;
          }
        }
      }
      sub_186B220(v44);
      v67 = v50;
      sub_B0E5E0(a4, (unsigned int *)&v67);
      *v37 = sub_B1A120(a1, v61, *(_DWORD *)(*a2 + 4LL * v62));
      v37[1] = sub_B1A120(a1, v61, *(_DWORD *)(*a3 + 4LL * v62));
      v37[2] = sub_B1A120(a1, *(_DWORD *)(*a2 + 4LL * v62), *(_DWORD *)(*a3 + 4LL * v62));
      v61 = sub_B0BBE0(a1, v37);
      sub_186B220(v37 - 2);
      v5 = *a2;
      ++v62;
    }
    while ( *a2 );
  }
  return v61;
}

