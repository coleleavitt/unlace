void __fastcall sub_17534A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  bool v17; // zf
  __int64 v18; // r14
  __int64 v19; // r14
  void **v20; // rdi
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-3E8h]
  __int64 v33; // [rsp+0h] [rbp-3E8h]
  void **p_ptr; // [rsp+8h] [rbp-3E0h]
  void *v35[2]; // [rsp+10h] [rbp-3D8h] BYREF
  _DWORD v36[32]; // [rsp+20h] [rbp-3C8h] BYREF
  void *v37; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-340h]
  _DWORD v39[32]; // [rsp+B0h] [rbp-338h] BYREF
  void *ptr; // [rsp+130h] [rbp-2B8h] BYREF
  __int64 v41; // [rsp+138h] [rbp-2B0h]
  _DWORD v42[170]; // [rsp+140h] [rbp-2A8h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !(_BYTE)v8 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v32 = v15;
      v6 = v12;
LABEL_8:
      v41 = 0x2000000001LL;
      ptr = v42;
      v16 = 160LL * v12 + v32;
      v17 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v42[0] = -1;
      if ( v17 )
      {
        v18 = 160 * v6;
      }
      else
      {
        v15 = a1 + 8;
        v18 = 640;
      }
      v19 = v15 + v18;
      if ( v19 != v15 )
      {
        do
        {
          while ( 1 )
          {
            *(_DWORD *)(v15 + 8) = 0;
            *(_QWORD *)v15 = v15 + 16;
            *(_DWORD *)(v15 + 12) = 32;
            if ( (_DWORD)v41 )
              break;
            v15 += 160;
            if ( v19 == v15 )
              goto LABEL_15;
          }
          v20 = (void **)v15;
          v15 += 160;
          sub_A6DB70(v20, (char **)&ptr);
        }
        while ( v19 != v15 );
LABEL_15:
        if ( ptr != v42 )
          free(ptr);
      }
      v39[0] = -1;
      v21 = 35;
      ptr = v42;
      v37 = v39;
      v38 = 0x2000000001LL;
      v41 = 0x2000000001LL;
      v22 = 1;
      v42[0] = -1;
      do
      {
        if ( v22 + 1 <= (unsigned __int64)HIDWORD(v41) )
        {
          *((_DWORD *)ptr + v22) = -1;
        }
        else
        {
          sub_2237220(&ptr, v42, v22 + 1, 4);
          *((_DWORD *)ptr + (unsigned int)v41) = -1;
        }
        v22 = (unsigned int)(v41 + 1);
        LODWORD(v41) = v41 + 1;
        --v21;
      }
      while ( v21 );
      v23 = v32;
      if ( v16 == v32 )
      {
LABEL_26:
        if ( ptr != v42 )
          free(ptr);
        if ( v37 != v39 )
          free(v37);
        operator delete(v32, 160LL * v12, 8);
        return;
      }
      while ( 1 )
      {
        if ( !(unsigned __int8)sub_2222ED0(v23, &v37) )
          goto LABEL_34;
        while ( *(_QWORD *)v23 == v23 + 16 )
        {
          v23 += 160;
          if ( v16 == v23 )
            goto LABEL_26;
          if ( !(unsigned __int8)sub_2222ED0(v23, &v37) )
          {
LABEL_34:
            if ( !(unsigned __int8)sub_2222ED0(v23, &ptr) )
            {
              sub_1745860(a1, v23, v35);
              sub_1744C20((char ***)v35[0], (char ***)v23);
              *((__m128i *)v35[0] + 9) = _mm_loadu_si128((const __m128i *)(v23 + 144));
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
        }
        free(*(void **)v23);
        v23 += 160;
        if ( v16 == v23 )
          goto LABEL_26;
      }
    }
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      if ( !(_BYTE)v8 )
      {
        v32 = *(_QWORD *)(a1 + 8);
        v13 = 160LL * (unsigned int)v10;
        v12 = *(_DWORD *)(a1 + 16);
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 10240;
        v32 = v11;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        v15 = v14;
        *(_QWORD *)(a1 + 8) = v14;
        goto LABEL_8;
      }
      LODWORD(v6) = 64;
    }
  }
  v36[0] = -1;
  v24 = 35;
  v39[0] = -1;
  v35[0] = v36;
  v35[1] = (void *)0x2000000001LL;
  v38 = 0x2000000001LL;
  v25 = 1;
  v37 = v39;
  do
  {
    if ( v25 + 1 <= (unsigned __int64)HIDWORD(v38) )
    {
      *((_DWORD *)v37 + v25) = -1;
    }
    else
    {
      sub_2237220(&v37, v39, v25 + 1, 4);
      *((_DWORD *)v37 + (unsigned int)v38) = -1;
    }
    v25 = (unsigned int)(v38 + 1);
    LODWORD(v38) = v38 + 1;
    --v24;
  }
  while ( v24 );
  v26 = a1 + 8;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v26 = *(_QWORD *)(a1 + 8);
  v33 = v26 + 640;
  p_ptr = &ptr;
LABEL_46:
  if ( !(unsigned __int8)sub_2222ED0(v26, v35) )
  {
LABEL_57:
    if ( !(unsigned __int8)sub_2222ED0(v26, &v37) )
    {
      *p_ptr = p_ptr + 2;
      p_ptr[1] = (void *)0x2000000000LL;
      v27 = *(unsigned int *)(v26 + 8);
      if ( (_DWORD)v27 )
        sub_1744C20((char ***)p_ptr, (char ***)v26);
      *((__m128i *)p_ptr + 9) = _mm_loadu_si128((const __m128i *)(v26 + 144));
      p_ptr += 20;
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)v26 != v26 + 16 )
    {
      free(*(void **)v26);
      v26 += 160;
      if ( v26 == v33 )
        break;
      goto LABEL_46;
    }
    v26 += 160;
    if ( v26 == v33 )
      break;
    if ( !(unsigned __int8)sub_2222ED0(v26, v35) )
      goto LABEL_57;
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v31 = sub_22300B0(160LL * (unsigned int)v6, 8, v27, v28, v29, v30);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v31;
  }
  sub_17531C0(a1, (__int64)&ptr, (__int64)p_ptr);
  if ( v37 != v39 )
    free(v37);
  if ( v35[0] != v36 )
    free(v35[0]);
}
