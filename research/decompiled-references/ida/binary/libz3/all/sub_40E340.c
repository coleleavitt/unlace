__int64 __fastcall sub_40E340(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // rbp
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  int *v17; // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 *v31; // rbx
  __int64 *v32; // r15
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rsi
  unsigned int v36; // r15d
  __int64 *v37; // rbp
  __int64 *v38; // rbx
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned int v44; // ebx
  __int64 *v45; // rbp
  __int64 *v46; // r15
  unsigned int v47; // r15d
  unsigned int v48; // edx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  _QWORD *v52; // rax
  int v53; // [rsp+0h] [rbp-E8h]
  __int64 *v54; // [rsp+8h] [rbp-E0h]
  unsigned int v55; // [rsp+8h] [rbp-E0h]
  int v56[2]; // [rsp+18h] [rbp-D0h]
  __int64 *v57; // [rsp+20h] [rbp-C8h]
  __int64 v58; // [rsp+28h] [rbp-C0h]
  unsigned int v59; // [rsp+34h] [rbp-B4h]
  int v60[2]; // [rsp+40h] [rbp-A8h]
  int v61[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v62; // [rsp+58h] [rbp-90h]
  int v63[2]; // [rsp+60h] [rbp-88h] BYREF
  int v64[2]; // [rsp+68h] [rbp-80h] BYREF
  int v65[2]; // [rsp+70h] [rbp-78h] BYREF
  int v66[2]; // [rsp+78h] [rbp-70h]
  int v67[2]; // [rsp+80h] [rbp-68h] BYREF
  int v68[2]; // [rsp+88h] [rbp-60h]
  __int64 v69[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = *(__int64 **)(a3 + 192);
  *(_QWORD *)v56 = a1[1];
  *(_QWORD *)v61 = *(_QWORD *)v56;
  v62 = 0;
  if ( v7 )
  {
    *(_QWORD *)v60 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 != *(__int64 **)v60 )
    {
      v8 = *(_QWORD *)v56;
      v10 = a2;
      v59 = a5 + 1;
      v57 = v7;
      v7 = nullptr;
      while ( 1 )
      {
        v11 = *v57;
        *(_QWORD *)v66 = v8;
        *(_QWORD *)v65 = 0;
        *(_QWORD *)v68 = v8;
        *(_QWORD *)v67 = 0;
        sub_407990((_QWORD *)v11, a2, a3, (int)v57, a5, a6);
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        v13 = *(_QWORD *)v65;
        if ( *(_QWORD *)v65 )
        {
          v14 = *(_QWORD *)v66;
          v15 = (*(_DWORD *)(*(_QWORD *)v65 + 8LL))-- == 1;
          if ( v15 )
            sub_15D7BC0(v14, v13);
        }
        v16 = *a1;
        *(_QWORD *)v65 = v12;
        sub_43D1D0(v16 + 8, v12, 0, v59, v65, 1);
        *(_QWORD *)v64 = v7;
        v17 = v63;
        *(_QWORD *)v63 = *(_QWORD *)v56;
        sub_40E1F0((_QWORD *)v11, (__int64)v63, *(__int64 *)v65, v18, v19, v20);
        v7 = *(__int64 **)v64;
        *(_QWORD *)v56 = *(_QWORD *)v63;
        sub_407990((_QWORD *)v11, (__int64)v63, v21, v22, v23, v24);
        if ( *(_WORD *)(*(_QWORD *)(v11 + 16) + 4LL) == 2 )
        {
          sub_407990((_QWORD *)v11, (__int64)v63, v25, v26, v27, v28);
          sub_3D5800(*(std::ios_base **)(v11 + 16), v67, (__int64 *)v61);
          sub_43D1D0(*a1 + 8, *(_QWORD *)v67, 0, v59, v67, 1);
          v69[0] = *(_QWORD *)v67;
          if ( *(_QWORD *)v67 )
            ++*(_DWORD *)(*(_QWORD *)v67 + 8LL);
          v17 = (int *)v69;
          sub_407600((unsigned int **)v64, v69);
          v7 = *(__int64 **)v64;
          *(_QWORD *)v56 = *(_QWORD *)v63;
        }
        sub_407990((_QWORD *)v11, (__int64)v17, v25, v26, v27, v28);
        if ( *(_WORD *)(*(_QWORD *)(v11 + 16) + 4LL) == 2 && !*(_BYTE *)(a1[2] + 642) )
          break;
        v29 = *(_QWORD *)v65;
        if ( *(_QWORD *)v65 )
          ++*(_DWORD *)(*(_QWORD *)v65 + 8LL);
        if ( !v7 )
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v52[1] = v29;
          v7 = v52 + 1;
          *v52 = 0x100000002LL;
          LODWORD(a3) = 1;
          goto LABEL_17;
        }
        v30 = *((_DWORD *)v7 - 1);
        if ( v30 != *((_DWORD *)v7 - 2) )
        {
          v7[v30] = v29;
          a3 = v30 + 1;
          *((_DWORD *)v7 - 1) = a3;
          goto LABEL_16;
        }
        v47 = (3 * v30 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v30 + 8 >= v48 || v30 >= v47 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v69, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = (unsigned int *)sub_186B300(v7 - 1, v48);
        v50 = v49[1];
        v7 = (__int64 *)(v49 + 2);
        *v49 = v47;
        *(_QWORD *)&v49[2 * v50 + 2] = v29;
        a3 = (unsigned int)(v50 + 1);
        v49[1] = a3;
        if ( (_DWORD)v50 == -1 )
        {
LABEL_62:
          v36 = *(_DWORD *)(v11 + 96);
          if ( v36 <= 0xFFFE )
            goto LABEL_45;
          goto LABEL_33;
        }
LABEL_17:
        v31 = v7;
        v32 = v7;
        v54 = &v7[(unsigned int)a3];
        do
        {
          while ( 1 )
          {
            v33 = sub_15E1B70(a1[1]);
            if ( v33 )
              ++*(_DWORD *)(v33 + 8);
            v35 = *v32;
            if ( *v32 )
            {
              v15 = (*(_DWORD *)(v35 + 8))-- == 1;
              if ( v15 )
                break;
            }
            *v32++ = v33;
            if ( v54 == v32 )
              goto LABEL_24;
          }
          v58 = v33;
          sub_15D7BC0(*(_QWORD *)v56, v35);
          *v32++ = v58;
        }
        while ( v54 != v32 );
LABEL_24:
        v36 = *(_DWORD *)(v11 + 96);
        if ( v36 <= 0xFFFE )
          goto LABEL_45;
        v37 = &v7[*((unsigned int *)v7 - 1)];
        if ( v37 != v7 )
        {
          do
            sub_428900(v10, *v31++, a3, v34, a5, a6, v53, (char)v54);
          while ( v37 != v31 );
          goto LABEL_27;
        }
LABEL_33:
        *((_DWORD *)v7 - 1) = 0;
LABEL_34:
        v41 = *(_QWORD *)v67;
        if ( *(_QWORD *)v67 )
        {
          v42 = *(_QWORD *)v68;
          v15 = (*(_DWORD *)(*(_QWORD *)v67 + 8LL))-- == 1;
          if ( v15 )
            sub_15D7BC0(v42, v41);
        }
        a2 = *(_QWORD *)v65;
        if ( *(_QWORD *)v65 )
        {
          v43 = *(_QWORD *)v66;
          v15 = (*(_DWORD *)(*(_QWORD *)v65 + 8LL))-- == 1;
          if ( v15 )
            sub_15D7BC0(v43, a2);
        }
        if ( *(__int64 **)v60 == ++v57 )
          goto LABEL_65;
        v8 = a1[1];
      }
      if ( !v7 )
      {
        v36 = *(_DWORD *)(v11 + 96);
        if ( v36 > 0xFFFE )
          goto LABEL_55;
LABEL_45:
        v44 = 1;
        v55 = v36 + 2;
        if ( !v7 )
        {
          do
            ++v44;
          while ( v44 != v36 + 2 );
LABEL_55:
          v7 = nullptr;
          goto LABEL_34;
        }
        do
        {
          v45 = &v7[*((unsigned int *)v7 - 1)];
          while ( v45 == v7 )
          {
            if ( ++v44 == v55 )
              goto LABEL_27;
          }
          v46 = v7;
          do
            sub_429BB0(v10, *v46++, v44);
          while ( v45 != v46 );
          ++v44;
        }
        while ( v44 != v55 );
LABEL_27:
        v38 = v7;
        v39 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
        if ( (unsigned __int64)v7 < v39 )
        {
          do
          {
            while ( 1 )
            {
              v40 = *v38;
              if ( *v38 )
              {
                v15 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v15 )
                  break;
              }
              if ( (unsigned __int64)++v38 >= v39 )
                goto LABEL_33;
            }
            sub_15D7BC0(*(_QWORD *)v56, v40);
            ++v38;
          }
          while ( (unsigned __int64)v38 < v39 );
        }
        goto LABEL_33;
      }
      a3 = *((unsigned int *)v7 - 1);
LABEL_16:
      if ( !(_DWORD)a3 )
        goto LABEL_62;
      goto LABEL_17;
    }
    v7 = nullptr;
  }
LABEL_65:
  *(_QWORD *)v64 = v7;
  *(_QWORD *)v63 = *(_QWORD *)v56;
  sub_2334C0((__int64 *)v63);
  return sub_2B4F40((__int64 *)v61);
}

