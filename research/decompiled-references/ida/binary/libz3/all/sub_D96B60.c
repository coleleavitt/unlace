__int64 __fastcall sub_D96B60(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v6; // r13
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  _QWORD *v16; // rsi
  unsigned int v17; // eax
  _DWORD *v18; // r15
  double v19; // xmm0_8
  void *v20; // rsi
  unsigned int v21; // edx
  unsigned int v22; // r15d
  _QWORD *v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  _DWORD *v29; // r12
  bool v30; // zf
  __int64 (__fastcall ***v31)(__int64); // r12
  _DWORD *v32; // rbx
  unsigned int v33; // eax
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  int v40; // esi
  __int64 *v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  _DWORD **v46; // r12
  unsigned __int64 v47; // rdx
  __int64 *v48; // r15
  unsigned int v49; // edx
  unsigned int v50; // ebx
  _QWORD *v51; // r12
  _DWORD *v52; // rbx
  _DWORD *v53; // r15
  __int64 (__fastcall *v54)(__int64); // rax
  __int64 v55; // rbp
  __int64 (__fastcall **v56)(__int64); // rbx
  __int64 (__fastcall **v57)(__int64); // rbp
  __int64 (__fastcall *v58)(__int64); // rsi
  __int64 (__fastcall **v59)(__int64); // rdi
  __int64 (__fastcall *v60)(__int64); // rsi
  __int64 (__fastcall **v61)(__int64); // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  _QWORD *v64; // rdi
  __int64 v65; // rax
  __int64 (__fastcall **v66)(__int64); // rbx
  __int64 (__fastcall **v67)(__int64); // rdi
  __int64 (__fastcall **v68)(__int64); // rdi
  __int64 i; // rax
  __int64 j; // rax
  char **exception; // rbp
  __int64 v72; // rdx
  void *v73; // [rsp+0h] [rbp-1A8h]
  unsigned int v74; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v75; // [rsp+8h] [rbp-1A0h]
  _QWORD *v76; // [rsp+18h] [rbp-190h]
  char v77[8]; // [rsp+20h] [rbp-188h] BYREF
  int v78[2]; // [rsp+28h] [rbp-180h] BYREF
  void *ptr; // [rsp+30h] [rbp-178h] BYREF
  void *v80; // [rsp+38h] [rbp-170h] BYREF
  __int64 v81[13]; // [rsp+40h] [rbp-168h] BYREF
  _DWORD *v82; // [rsp+A8h] [rbp-100h]

  sub_EE4940(v77, "ackermannize_bv", *a2);
  sub_EE5110("ackermannize");
  sub_EE4F60("ackermannize");
  *(_QWORD *)v78 = 0;
  v6 = *a2;
  v7 = (*a2)[9];
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_BYTE *)(v7 + 3) >> 6;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
LABEL_4:
      if ( v8 == 2 )
        v9 = (unsigned int)(*(_DWORD *)(v7 + 4) - 1);
      else
        v9 = *(unsigned int *)(v7 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      v8 = *(_BYTE *)(v7 + 3) >> 6;
    }
    while ( !v8 );
    if ( v8 != 1 )
      goto LABEL_4;
  }
  v9 = (unsigned int)(*(_DWORD *)(v7 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v9 )
    goto LABEL_15;
  v10 = *v6;
  if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 864);
    v12 = 0;
    goto LABEL_9;
  }
  v14 = nullptr;
  v12 = 0;
LABEL_38:
  v39 = v6[9];
  v40 = 17;
  while ( 1 )
  {
    if ( *(char *)(v39 + 3) < 0 )
    {
      if ( *(_BYTE *)(v39 + 3) >> 6 != 2 )
      {
        v41 = (__int64 *)(*(_QWORD *)(v39 + 16) + 8 * v12);
        goto LABEL_42;
      }
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v39 + 4) == (_DWORD)v12 )
      break;
LABEL_45:
    v39 = *(_QWORD *)(v39 + 16);
    if ( !--v40 )
    {
      sub_233F80((__int64 *)(v10 + 616), (_DWORD *)v6 + 18);
      v14 = *(_QWORD **)v78;
      v41 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8 * v12);
      goto LABEL_42;
    }
  }
  v41 = (__int64 *)(v39 + 8);
LABEL_42:
  v11 = *v41;
  if ( v14 )
  {
    while ( 1 )
    {
      v17 = *((_DWORD *)v14 - 1);
      if ( v17 == *((_DWORD *)v14 - 2) )
        break;
      ++v12;
      v14[v17] = v11;
      *((_DWORD *)v14 - 1) = v17 + 1;
      if ( v12 == v9 )
        goto LABEL_15;
LABEL_11:
      v6 = *a2;
      v10 = **a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x20) == 0 )
        goto LABEL_38;
      v11 = *(_QWORD *)(v10 + 864);
    }
    v35 = (3 * v17 + 1) >> 1;
    v36 = 8 * v35 + 8;
    if ( 8 * v17 + 8 >= (unsigned int)v36 || v17 >= v35 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_1759B8(v81, "Overflow encountered when expanding vector", v72);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v81);
      sub_233E40((__int64)v81);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v74 = (3 * v17 + 1) >> 1;
    v37 = (unsigned int *)sub_186B300(v14 - 1, v36);
    v38 = v37[1];
    v14 = v37 + 2;
    *(_QWORD *)v78 = v37 + 2;
    *v37 = v74;
    LODWORD(v37) = v38;
    v16 = &v14[v38];
    v15 = (_DWORD)v37 + 1;
  }
  else
  {
LABEL_9:
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = v13 + 1;
    *v13 = 2;
    v15 = 1;
    *(_QWORD *)v78 = v14;
    v16 = v14;
  }
  ++v12;
  *v16 = v11;
  *((_DWORD *)v14 - 1) = v15;
  if ( v12 != v9 )
    goto LABEL_11;
LABEL_15:
  sub_D9C010((int)v81, *(_QWORD *)(a1 + 16), a1 + 24, a1 + 32, (int)v78, 0, v73);
  v18 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2CB0(v18, *a2, 1);
  ++v18[8];
  v19 = *(double *)(a1 + 40);
  ptr = v18;
  if ( (unsigned __int8)sub_D9E2A0(v81, &ptr, v19) )
  {
    v20 = ptr;
    if ( ptr )
      ++*((_DWORD *)ptr + 8);
    v21 = *(_DWORD *)(a3 + 8);
    v22 = *(_DWORD *)(a3 + 12);
    if ( v21 >= v22 )
    {
      v42 = 2 * v22;
      v43 = sub_186B270(8 * v42);
      v21 = *(_DWORD *)(a3 + 8);
      v44 = *(_QWORD **)a3;
      v23 = (_QWORD *)v43;
      if ( v21 )
      {
        if ( v21 - 1 <= 2 || (_QWORD *)v43 == v44 + 1 )
        {
          for ( i = 0; i != v21; ++i )
            v23[i] = v44[i];
        }
        else
        {
          v45 = 0;
          do
          {
            *(__m128i *)&v23[v45] = _mm_loadu_si128((const __m128i *)&v44[v45]);
            v45 += 2;
          }
          while ( 2LL * (v21 >> 1) != v45 );
          if ( (v21 & 1) != 0 )
            v23[v21 & 0xFFFFFFFE] = v44[v21 & 0xFFFFFFFE];
        }
      }
      if ( v44 != (_QWORD *)(a3 + 16) && v44 )
      {
        v76 = v23;
        sub_186B220(v44);
        v21 = *(_DWORD *)(a3 + 8);
        v23 = v76;
      }
      *(_QWORD *)a3 = v23;
      *(_DWORD *)(a3 + 12) = v42;
    }
    else
    {
      v23 = *(_QWORD **)a3;
    }
    v23[v21] = v20;
    v24 = *a2;
    *(_DWORD *)(a3 + 8) = v21 + 1;
    if ( (*((_BYTE *)v24 + 123) & 4) != 0 )
    {
      v25 = ptr;
      v80 = v82;
      if ( v82 )
        ++v82[32];
      v26 = sub_D97520(*(_QWORD *)(a1 + 16), &v80);
      v27 = sub_1336AB0(v25[1], v26);
      v28 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v29 = (_DWORD *)v25[1];
      if ( v29 && (v30 = v29[2] == 1, --v29[2], v30) )
      {
        (**(void (__fastcall ***)(_DWORD *))v29)(v29);
        sub_186B220(v29);
        v31 = (__int64 (__fastcall ***)(__int64))v80;
        v25[1] = v28;
        if ( v31 )
          goto LABEL_28;
      }
      else
      {
        v31 = (__int64 (__fastcall ***)(__int64))v80;
        v25[1] = v27;
        if ( v31 )
        {
LABEL_28:
          v30 = (*((_DWORD *)v31 + 32))-- == 1;
          if ( v30 )
          {
            v54 = **v31;
            if ( v54 == sub_38D2C0 )
            {
              v55 = *((unsigned int *)v31 + 6);
              v56 = v31[2];
              *v31 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
              v57 = &v56[2 * v55];
              if ( v56 != v57 )
              {
                while ( (unsigned __int64)*v56 <= 1 )
                {
                  v56 += 2;
                  if ( v57 == v56 )
                    goto LABEL_108;
                }
                if ( v56 != v57 )
                {
                  v58 = *v56;
                  v59 = v31[1];
                  if ( *v56 )
                  {
                    v30 = (*((_DWORD *)v58 + 2))-- == 1;
                    if ( v30 )
                      goto LABEL_95;
                  }
                  while ( 1 )
                  {
                    v60 = v56[1];
                    if ( v60 )
                    {
                      v30 = (*((_DWORD *)v60 + 2))-- == 1;
                      if ( v30 )
                        sub_15D7BC0(v59, v60);
                    }
                    v61 = v56 + 2;
                    if ( v57 == v56 + 2 )
                      break;
                    while ( 1 )
                    {
                      v58 = *v61;
                      v56 = v61;
                      if ( (unsigned __int64)*v61 > 1 )
                        break;
                      v61 += 2;
                      if ( v57 == v61 )
                        goto LABEL_108;
                    }
                    if ( v61 == v57 )
                      break;
                    v59 = v31[1];
                    v30 = (*((_DWORD *)v58 + 2))-- == 1;
                    if ( v30 )
                    {
LABEL_95:
                      sub_15D7BC0(v59, v58);
                      v59 = v31[1];
                    }
                  }
                }
              }
LABEL_108:
              sub_1695230(v31 + 9);
              v66 = v31[8];
              if ( v66 )
              {
                (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v66)(v31[8]);
                sub_186B220(v66);
              }
              v67 = v31[5];
              if ( v67 )
                sub_186B220(v67);
              v68 = v31[2];
              if ( v68 )
                sub_186B220(v68);
            }
            else
            {
              v54((__int64)v31);
            }
            sub_186B220(v31);
          }
        }
      }
    }
    v32 = ptr;
    v33 = (*((_DWORD *)ptr + 30) + 1) & 0x3FFFFFF | *((_DWORD *)ptr + 30) & 0xFC000000;
    v30 = (*((_DWORD *)ptr + 8))-- == 1;
    v32[30] = v33;
    if ( v30 )
    {
      sub_ED44E0(v32);
      sub_186B220(v32);
    }
    sub_D9B6E0(v81);
    if ( *(_QWORD *)v78 )
LABEL_32:
      sub_186B220((void *)(*(_QWORD *)v78 - 8LL));
  }
  else
  {
    v46 = *(_DWORD ***)a3;
    v47 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
    if ( *(_QWORD *)a3 < v47 )
    {
      do
      {
        v53 = *v46;
        if ( *v46 )
        {
          v30 = v53[8]-- == 1;
          if ( v30 )
          {
            v75 = v47;
            sub_ED44E0(v53);
            sub_186B220(v53);
            v47 = v75;
          }
        }
        ++v46;
      }
      while ( (unsigned __int64)v46 < v47 );
    }
    v48 = *a2;
    *(_DWORD *)(a3 + 8) = 0;
    v49 = 0;
    if ( v48 )
    {
      ++*((_DWORD *)v48 + 8);
      v49 = *(_DWORD *)(a3 + 8);
    }
    v50 = *(_DWORD *)(a3 + 12);
    if ( v49 >= v50 )
    {
      v62 = 2 * v50;
      v63 = sub_186B270(8 * v62);
      v49 = *(_DWORD *)(a3 + 8);
      v64 = *(_QWORD **)a3;
      v51 = (_QWORD *)v63;
      if ( v49 )
      {
        if ( v49 - 1 <= 2 || (_QWORD *)v63 == v64 + 1 )
        {
          for ( j = 0; j != v49; ++j )
            v51[j] = v64[j];
        }
        else
        {
          v65 = 0;
          do
          {
            *(__m128i *)&v51[v65] = _mm_loadu_si128((const __m128i *)&v64[v65]);
            v65 += 2;
          }
          while ( v65 != 2LL * (v49 >> 1) );
          if ( (v49 & 1) != 0 )
            v51[v49 & 0xFFFFFFFE] = v64[v49 & 0xFFFFFFFE];
        }
      }
      if ( v64 != (_QWORD *)(a3 + 16) && v64 )
      {
        sub_186B220(v64);
        v49 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v51;
      *(_DWORD *)(a3 + 12) = v62;
    }
    else
    {
      v51 = *(_QWORD **)a3;
    }
    v51[v49] = v48;
    v52 = ptr;
    *(_DWORD *)(a3 + 8) = v49 + 1;
    if ( v52 )
    {
      v30 = v52[8]-- == 1;
      if ( v30 )
      {
        sub_ED44E0(v52);
        sub_186B220(v52);
      }
    }
    sub_D9B6E0(v81);
    if ( *(_QWORD *)v78 )
      goto LABEL_32;
  }
  return sub_EE4A00(v77);
}

