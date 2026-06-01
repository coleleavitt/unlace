__int64 __fastcall sub_1E85930(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 (__fastcall *a9)(unsigned __int64))
{
  __int64 (__fastcall *v10)(_QWORD); // rbx
  _QWORD *v11; // rax
  unsigned __int8 (__fastcall *v12)(_QWORD *); // r12
  _QWORD *v13; // r15
  unsigned int v14; // ebx
  __m128 v15; // xmm1
  __int64 *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // r8
  char *v20; // r14
  _QWORD *v21; // r15
  unsigned __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v28; // r13
  unsigned int v29; // r12d
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v34; // [rsp+14h] [rbp-114h]
  __m128i v35; // [rsp+20h] [rbp-108h] BYREF
  __int64 v36; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+48h] [rbp-E0h]
  __int64 v39; // [rsp+50h] [rbp-D8h]
  _BYTE v40[64]; // [rsp+58h] [rbp-D0h] BYREF
  void *v41[2]; // [rsp+98h] [rbp-90h]
  __int64 v42; // [rsp+A8h] [rbp-80h]
  _QWORD *v43; // [rsp+B0h] [rbp-78h]
  __m128 v44; // [rsp+B8h] [rbp-70h]
  __int64 v45; // [rsp+C8h] [rbp-60h]
  __int64 v46; // [rsp+D0h] [rbp-58h]
  __int64 v47; // [rsp+D8h] [rbp-50h]
  __int64 v48; // [rsp+E0h] [rbp-48h]

  v10 = (__int64 (__fastcall *)(_QWORD))a5;
  v34 = a3;
  v11 = sub_F60F10(a1, (__int64)a2, a3, a4, a5, a6);
  v12 = (unsigned __int8 (__fastcall *)(_QWORD *))a7;
  v13 = v11;
  if ( ((unsigned __int8)v10 & 1) != 0 )
    v10 = *(__int64 (__fastcall **)(_QWORD))((char *)v10 + *v11 - 1);
  v14 = v10(v11);
  if ( !(_BYTE)v14 )
    goto LABEL_7;
  if ( (a7 & 1) != 0 )
    v12 = *(unsigned __int8 (__fastcall **)(_QWORD *))(*v13 + a7 - 1);
  if ( v12(v13) )
  {
LABEL_7:
    v35.m128i_i32[2] = v34;
    v35.m128i_i64[0] = (a4 + 17832) | 6;
    sub_B85890(&v36, v35.m128i_i64[0]);
    ptr = v40;
    v15 = (__m128)_mm_load_si128(&v35);
    v39 = 0x800000000LL;
    v37 = 0;
    v45 = v36;
    v48 = 0x101010000LL;
    *(_OWORD *)v41 = 0;
    v42 = 0;
    v43 = a2;
    v44 = v15;
    v46 = 0;
    v47 = 0;
    sub_1A395A0((__int64)&v37);
    v16 = &v37;
    if ( v13 )
      v13 += 8;
    if ( (unsigned __int8)sub_1A48440((__int64)a2, (__int64)&v37, (__int64)v13, 0) )
    {
      v18 = ptr;
      *(_WORD *)((char *)&v48 + 3) = 0;
      v20 = (char *)ptr + 8 * (unsigned int)v39;
      if ( ptr != v20 )
      {
        v21 = ptr;
        v14 = 0;
        if ( ((unsigned __int8)a9 & 1) == 0 )
        {
          while ( 1 )
          {
            v28 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x47 )
            {
              v29 = a9(*v21 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (_BYTE)v29 )
              {
                v30 = (__int64 *)(*(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF0LL);
                v31 = *v30;
                if ( *(_BYTE *)(*v30 + 16) != 26 )
                  v31 = sub_F63050(*v30, v16, v31, v18);
                v16 = (__int64 *)v34;
                v32 = sub_18B0530((__int64)a2, v34, v31, 0.0, v15);
                if ( !v32 || (unsigned int)sub_F63060(v32) )
                  goto LABEL_21;
                v14 = v29;
              }
            }
            if ( v20 == (char *)++v21 )
              goto LABEL_22;
          }
        }
        while ( 1 )
        {
          v22 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0x47 )
          {
            v23 = (*(__int64 (__fastcall **)(unsigned __int64))((char *)a9 + *(_QWORD *)v22 - 1))(*v21 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (_BYTE)v23 )
            {
              v24 = (__int64 *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v25 = *v24;
              if ( *(_BYTE *)(*v24 + 16) != 26 )
                v25 = sub_F63050(*v24, v16, v25, v18);
              v16 = (__int64 *)v34;
              v26 = sub_18B0530((__int64)a2, v34, v25, 0.0, v15);
              if ( !v26 || (unsigned int)sub_F63060(v26) )
                goto LABEL_21;
              v14 = v23;
            }
          }
          if ( v20 == (char *)++v21 )
            goto LABEL_22;
        }
      }
      v14 = 0;
      goto LABEL_29;
    }
LABEL_21:
    v14 = 0;
LABEL_22:
    if ( BYTE3(v48) )
    {
      if ( (_DWORD)v37 == 5 )
      {
        if ( !BYTE4(v48) )
        {
LABEL_29:
          if ( v41[0] )
            sub_1A39780((char *)v41[0]);
          if ( ptr != v40 )
            free(ptr);
          return v14;
        }
LABEL_44:
        sub_1A445B0((__int64)v43, (__int64)&v37, v17, (__int64)v18, v19);
        goto LABEL_29;
      }
      if ( !v41[1] || (*(_BYTE *)(v43[29] + 46LL) & 0x20) == 0 )
        goto LABEL_29;
      sub_1663B80(v43, (__int64)&v37);
    }
    if ( !BYTE4(v48) || (_DWORD)v37 != 5 )
      goto LABEL_29;
    goto LABEL_44;
  }
  return v14;
}
