signed int *__fastcall sub_B6A4E0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int *v10; // r12
  unsigned int *v11; // r13
  _BYTE *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbx
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  signed int *result; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned int v36; // r13d
  unsigned int v37; // ecx
  unsigned int *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r15d
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  int v46; // [rsp+0h] [rbp-138h]
  int v47; // [rsp+8h] [rbp-130h]
  unsigned int v48; // [rsp+Ch] [rbp-12Ch]
  unsigned int *v50; // [rsp+10h] [rbp-128h]
  signed int *v51; // [rsp+18h] [rbp-120h]
  char v52[8]; // [rsp+20h] [rbp-118h]
  char v53[8]; // [rsp+20h] [rbp-118h]
  void *v54; // [rsp+28h] [rbp-110h]
  _BYTE v55[16]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v56; // [rsp+40h] [rbp-F8h]
  __int64 v57; // [rsp+50h] [rbp-E8h] BYREF
  char v58; // [rsp+58h] [rbp-E0h]
  __int64 v59; // [rsp+60h] [rbp-D8h]
  void *v60; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+78h] [rbp-C0h]
  _BYTE v62[184]; // [rsp+80h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(_DWORD *)(v8 + 712);
  if ( v9 )
  {
    v27 = sub_B65120(a1, a2, a3, 0);
    sub_B725E0(&v57, a1, v27, 1);
    v28 = sub_180C100(a1 + 8400, 24);
    v29 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v28 + 8) = v58 & 3 | *(_BYTE *)(v28 + 8) & 0xFC;
    *(_QWORD *)v28 = off_1C57620;
    *(_QWORD *)(v28 + 16) = v59;
    if ( v29 )
    {
      v30 = *((_DWORD *)v29 - 1);
      if ( v30 == *((_DWORD *)v29 - 2) )
      {
        v36 = (3 * v30 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v30 + 8 >= v37 || v30 >= v36 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142((__int64 *)&v60, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v60);
          sub_233E40((__int64)&v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v29 - 1, v37);
        v39 = v38[1];
        v29 = v38 + 2;
        *v38 = v36;
        *(_QWORD *)(a1 + 8600) = v38 + 2;
        LODWORD(v38) = v39;
        v33 = &v29[v39];
        v32 = (_DWORD)v38 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v29[v31];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x18u);
      *v45 = 2;
      v32 = 1;
      v29 = v45 + 1;
      *(_QWORD *)(a1 + 8600) = v29;
      v33 = v29;
    }
    *v33 = v28;
    *((_DWORD *)v29 - 1) = v32;
    return sub_B68F30(a1, a2, a3, v28, 0, 0);
  }
  else if ( *(_BYTE *)(a1 + 7576) )
  {
    v60 = v62;
    v61 = 0x1000000000LL;
    if ( a2 )
    {
      v10 = a3;
      v11 = &a3[a2];
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v10 >> 1));
        if ( (*v10 & 1) != 0 )
        {
          v9 = v61;
          v14 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        }
        if ( v9 < HIDWORD(v61) )
        {
          v12 = v60;
        }
        else
        {
          v15 = (unsigned int)(2 * HIDWORD(v61));
          v9 = v61;
          v16 = (char *)v60;
          v12 = (_BYTE *)sub_186B270(8 * v15);
          if ( (_DWORD)v61 )
          {
            if ( (unsigned int)(v61 - 1) <= 2 || v12 == (char *)v60 + 8 )
            {
              v34 = 0;
              v35 = 8LL * (unsigned int)v61;
              do
              {
                *(_QWORD *)&v12[v34] = *(_QWORD *)&v16[v34];
                v34 += 8;
              }
              while ( v35 != v34 );
            }
            else
            {
              v17 = 0;
              v18 = 16LL * ((unsigned int)v61 >> 1);
              do
              {
                *(__m128i *)&v12[v17] = _mm_loadu_si128((const __m128i *)&v16[v17]);
                v17 += 16;
              }
              while ( v17 != v18 );
              if ( (v9 & 1) != 0 )
                *(_QWORD *)&v12[8 * (v9 & 0xFFFFFFFE)] = *(_QWORD *)&v16[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v16 != v62 && v16 )
          {
            *(_QWORD *)v52 = v12;
            sub_186B220(v16);
            v9 = v61;
            v12 = *(_BYTE **)v52;
          }
          v60 = v12;
          HIDWORD(v61) = v15;
        }
        v13 = v9;
        ++v10;
        ++v9;
        *(_QWORD *)&v12[8 * v13] = v14;
        LODWORD(v61) = v9;
      }
      while ( v10 != v11 );
      v8 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      v12 = v62;
    }
    v54 = v12;
    *(_QWORD *)v53 = *(_QWORD *)(v8 + 848);
    sub_180C5A0(&v57, "tseitin");
    v20 = sub_15E3760(v8, (int)&v57, v9, (int)v54, v53[0], v46, v47, (int)a3, (int)v62, *(int *)v53, v54);
    sub_B725E0(v55, a1, v20, 1);
    v21 = sub_180C100(a1 + 8400, 24);
    v22 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v21 + 8) = v55[8] & 3 | *(_BYTE *)(v21 + 8) & 0xFC;
    *(_QWORD *)v21 = off_1C57620;
    *(_QWORD *)(v21 + 16) = v56;
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
      {
        v40 = (3 * v23 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v23 + 8 >= v41 || v23 >= v40 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(&v57, "Overflow encountered when expanding vector", v4);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v57);
          sub_233E40((__int64)&v57);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = (unsigned int *)sub_186B300(v22 - 1, v41);
        v43 = v42[1];
        v22 = v42 + 2;
        *v42 = v40;
        *(_QWORD *)(a1 + 8600) = v42 + 2;
        LODWORD(v42) = v43;
        v26 = &v22[v43];
        v25 = (_DWORD)v42 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v22[v24];
      }
    }
    else
    {
      v44 = (_QWORD *)sub_186B270(0x18u);
      *v44 = 2;
      v25 = 1;
      v22 = v44 + 1;
      *(_QWORD *)(a1 + 8600) = v22;
      v26 = v22;
    }
    *v26 = v21;
    *((_DWORD *)v22 - 1) = v25;
    result = sub_B68F30(a1, v48, v50, v21, 0, 0);
    if ( v60 )
    {
      result = v51;
      if ( v60 != v51 )
        return (signed int *)sub_186B220(v60);
    }
  }
  else
  {
    return sub_B68F30(a1, a2, a3, 0, 0, 0);
  }
  return result;
}

