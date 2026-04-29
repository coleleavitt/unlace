unsigned __int64 __fastcall sub_2BD000(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v9; // r12
  unsigned int tinfo_size; // eax
  __int64 v11; // rbp
  size_t v12; // r9
  __int64 v13; // r8
  const void *v14; // r10
  size_t v15; // r11
  __int64 v16; // rsi
  __int64 v17; // rdx
  size_t v18; // r8
  const void *v19; // r9
  __int64 v20; // rbp
  size_t v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rbp
  size_t v25; // r9
  __int64 v26; // r8
  void *v27; // r10
  size_t v28; // r11
  __int64 v29; // rsi
  size_t v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *exception; // rbx
  size_t v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  size_t v39; // [rsp+10h] [rbp-78h]
  size_t v40; // [rsp+10h] [rbp-78h]
  size_t v41; // [rsp+10h] [rbp-78h]
  void *v42; // [rsp+18h] [rbp-70h]
  const void *v43; // [rsp+18h] [rbp-70h]
  const void *v44; // [rsp+18h] [rbp-70h]
  __int64 v45; // [rsp+20h] [rbp-68h]
  __int64 v46; // [rsp+20h] [rbp-68h]
  size_t v47; // [rsp+20h] [rbp-68h]
  size_t v48; // [rsp+28h] [rbp-60h]
  size_t v49; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v52; // [rsp+48h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v5 = a2[1];
  if ( v5 )
  {
    sub_3324A0(a1, v5);
    if ( a2[1] )
    {
      v9 = 0;
      do
      {
        src = nullptr;
        v24 = *a2 + 80 * v9;
        *(_OWORD *)n = 0;
        if ( !(unsigned __int8)append_argloc(&src) )
        {
          exception = __cxa_allocate_exception(0x30u);
          *(_QWORD *)exception = off_4D6390;
          exception[2] = -22;
          *((_QWORD *)exception + 2) = -1;
          sub_813C0((__int64)(exception + 6), "argloc too complex to serialize");
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
        }
        sub_3324A0(a1, LODWORD(n[0]));
        v25 = n[0];
        v26 = a1[1];
        v27 = src;
        v28 = n[0];
        if ( v26 )
        {
          --v26;
          v28 = n[0] + v26;
        }
        v29 = *a1;
        v30 = v28 + 1;
        if ( a1[2] < v28 + 1 )
        {
          v48 = v28;
          v45 = v26;
          v42 = src;
          v39 = n[0];
          v36 = v28 + 1;
          v31 = qvector_reserve(a1, v29, v30, 1);
          v28 = v48;
          v26 = v45;
          *a1 = v31;
          v29 = v31;
          v27 = v42;
          v25 = v39;
          v30 = v36;
        }
        a1[1] = v30;
        *(_BYTE *)(v29 + v28) = 0;
        memmove((void *)(v26 + *a1), v27, v25);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v24 + 64), 0);
        sub_3324A0(a1, tinfo_size);
        if ( a3 )
        {
          v11 = *a3 + 48 * v9;
          sub_3324A0(a1, *(unsigned int *)(v11 + 8));
          v12 = *(_QWORD *)(v11 + 8);
          v13 = a1[1];
          v14 = *(const void **)v11;
          v15 = v12;
          if ( v13 )
          {
            --v13;
            v15 = v12 + v13;
          }
          v16 = *a1;
          v17 = v15 + 1;
          if ( a1[2] < v15 + 1 )
          {
            v49 = v15;
            v46 = v13;
            v43 = *(const void **)v11;
            v40 = *(_QWORD *)(v11 + 8);
            v37 = v15 + 1;
            v32 = qvector_reserve(a1, v16, v17, 1);
            v15 = v49;
            v13 = v46;
            v14 = v43;
            v12 = v40;
            *a1 = v32;
            v16 = v32;
            v17 = v37;
          }
          a1[1] = v17;
          *(_BYTE *)(v16 + v15) = 0;
          memmove((void *)(v13 + *a1), v14, v12);
          sub_3324A0(a1, *(unsigned int *)(v11 + 32));
          v18 = *(_QWORD *)(v11 + 32);
          v19 = *(const void **)(v11 + 24);
          v20 = a1[1];
          v21 = v18;
          if ( v20 )
          {
            --v20;
            v21 = v18 + v20;
          }
          v22 = *a1;
          v23 = v21 + 1;
          if ( a1[2] < v21 + 1 )
          {
            v47 = v21;
            v44 = v19;
            v41 = v18;
            v38 = v21 + 1;
            v33 = qvector_reserve(a1, v22, v23, 1);
            v21 = v47;
            v19 = v44;
            v18 = v41;
            v23 = v38;
            *a1 = v33;
            v22 = v33;
          }
          a1[1] = v23;
          *(_BYTE *)(v22 + v21) = 0;
          memmove((void *)(v20 + *a1), v19, v18);
        }
        else
        {
          sub_2B7130(a1, v24 + 64);
        }
        ++v9;
      }
      while ( v9 < a2[1] );
    }
  }
  v6 = a1[1];
  if ( v6 <= 8 )
  {
    if ( (unsigned __int64)a1[2] <= 9 )
    {
      sub_2AE1A0(a1, 10);
      v6 = a1[1];
    }
    memset((void *)(*a1 + v6), 0, 10 - v6);
    v34 = *a1;
    a1[1] = 10;
    *(_BYTE *)(v34 + 9) = 0;
  }
  return v52 - __readfsqword(0x28u);
}
