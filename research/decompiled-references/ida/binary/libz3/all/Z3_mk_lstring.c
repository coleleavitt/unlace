__int64 __fastcall Z3_mk_lstring(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  char **exception; // r15
  char v6; // r14
  unsigned int v7; // r15d
  _QWORD *v8; // rax
  unsigned int *v9; // rax
  unsigned __int8 *v10; // r14
  unsigned int *v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  size_t v16; // rsi
  unsigned int v17; // ebp
  unsigned int *v18; // rax
  int *v19; // r15
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  int *v22; // r14
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rbp
  char *v33; // rax
  _BYTE *v34; // r8
  char *v35; // r11
  int v36; // esi
  __int64 v37; // [rsp+8h] [rbp-B0h]
  _BYTE *v38; // [rsp+8h] [rbp-B0h]
  char v39; // [rsp+17h] [rbp-A1h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v41; // [rsp+38h] [rbp-80h]
  _BYTE v42[120]; // [rsp+40h] [rbp-78h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v39 = v6;
  if ( v6 )
    sub_297B40();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v7 = *a3;
    v8 = (_QWORD *)sub_186B270(0x10u);
    *v8 = 2;
    v9 = (unsigned int *)(v8 + 1);
    v37 = a2;
    v10 = &a3[a2];
    v11 = v9;
    while ( 1 )
    {
      *v9 = v7;
      v12 = *(v11 - 1);
      ++a3;
      v13 = (unsigned int)(v12 + 1);
      *(v11 - 1) = v13;
      if ( a3 == v10 )
        break;
      v14 = *(v11 - 2);
      v7 = *a3;
      if ( v14 == (_DWORD)v13 )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 4 * v15 + 8;
        v17 = v15;
        if ( 4 * v12 + 12 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v11 - 2, v16);
        v11 = v18 + 2;
        *v18 = v17;
        v9 = &v18[v18[1] + 2];
      }
      else
      {
        v9 = &v11[v13];
      }
    }
    v19 = (int *)v11;
    v20 = 0;
    ptr = v42;
    v21 = v42;
    v41 = 0x1000000000LL;
    v22 = (int *)&v11[v37];
    while ( 1 )
    {
      v23 = *v19++;
      *(_DWORD *)&v21[4 * v20] = v23;
      v20 = (unsigned int)(v41 + 1);
      LODWORD(v41) = v41 + 1;
      if ( v19 == v22 )
        break;
      if ( (unsigned int)v20 >= HIDWORD(v41) )
      {
        v24 = (unsigned int)(2 * HIDWORD(v41));
        v25 = sub_186B270(4 * v24);
        v20 = (unsigned int)v41;
        v26 = (char *)ptr;
        v21 = (_BYTE *)v25;
        if ( (_DWORD)v41 )
        {
          if ( (unsigned int)(v41 - 1) <= 2 || (unsigned __int64)(v25 - ((_QWORD)ptr + 4)) <= 8 )
          {
            v33 = (char *)ptr;
            v34 = v21;
            v35 = (char *)ptr + 4 * (unsigned int)v41;
            do
            {
              v36 = *(_DWORD *)v33;
              v33 += 4;
              v34 += 4;
              *((_DWORD *)v34 - 1) = v36;
            }
            while ( v35 != v33 );
          }
          else
          {
            v27 = 0;
            do
            {
              *(__m128i *)&v21[v27] = _mm_loadu_si128((const __m128i *)&v26[v27]);
              v27 += 16;
            }
            while ( 16LL * ((unsigned int)v20 >> 2) != v27 );
            v28 = v20 & 0xFFFFFFFC;
            if ( (v20 & 3) != 0 )
            {
              *(_DWORD *)&v21[4 * v28] = *(_DWORD *)&v26[4 * v28];
              v29 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v29 < (unsigned int)v20 )
              {
                v30 = (unsigned int)(v28 + 2);
                *(_DWORD *)&v21[4 * v29] = *(_DWORD *)&v26[4 * v29];
                if ( (unsigned int)v30 < (unsigned int)v20 )
                  *(_DWORD *)&v21[4 * v30] = *(_DWORD *)&v26[4 * v30];
              }
            }
          }
        }
        if ( v26 != v42 && v26 )
        {
          v38 = v21;
          sub_186B220(v26);
          v20 = (unsigned int)v41;
          v21 = v38;
        }
        ptr = v21;
        HIDWORD(v41) = v24;
      }
    }
  }
  else
  {
    v11 = nullptr;
    ptr = v42;
    v41 = 0x1000000000LL;
  }
  v31 = sub_1648610(a1 + 464, &ptr);
  sub_251FD0(a1, v31);
  if ( v39 )
  {
    sub_2BB620(v31);
    if ( ptr != v42 && ptr )
      sub_186B220(ptr);
    if ( v11 )
      sub_186B220(v11 - 2);
    byte_1C7EBA0 = 1;
  }
  else
  {
    if ( ptr != v42 && ptr )
      sub_186B220(ptr);
    if ( v11 )
      sub_186B220(v11 - 2);
  }
  return v31;
}

