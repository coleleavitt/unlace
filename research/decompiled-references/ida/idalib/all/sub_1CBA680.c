__int64 __fastcall sub_1CBA680(__int64 a1, unsigned __int64 a2, __int64 *a3, __int32 a4, unsigned __int8 a5)
{
  _BYTE *v8; // rax
  __int64 v9; // rsi
  _BYTE *v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // r15
  unsigned __int64 *v15; // rbp
  unsigned __int64 v16; // r14
  _QWORD *v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  void *v20; // rdi
  void **v21; // rbx
  void **v22; // rdx
  void *v23; // rdi
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v29[2]; // [rsp+0h] [rbp-218h]
  int v30[2]; // [rsp+0h] [rbp-218h]
  unsigned __int8 v31; // [rsp+Fh] [rbp-209h]
  __int64 v32; // [rsp+18h] [rbp-200h] BYREF
  int v33[2]; // [rsp+20h] [rbp-1F8h] BYREF
  int v34[2]; // [rsp+28h] [rbp-1F0h]
  int v35[4]; // [rsp+30h] [rbp-1E8h]
  int v36[2]; // [rsp+40h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-1C8h]
  unsigned int v38; // [rsp+58h] [rbp-1C0h]
  __int64 v39; // [rsp+60h] [rbp-1B8h] BYREF
  void *v40; // [rsp+80h] [rbp-198h]
  unsigned __int64 *v41; // [rsp+88h] [rbp-190h]
  int v42[2]; // [rsp+A0h] [rbp-178h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp-170h]
  char v44[8]; // [rsp+130h] [rbp-E8h] BYREF
  void *v45; // [rsp+138h] [rbp-E0h]
  int v46[2]; // [rsp+140h] [rbp-D8h]
  _BYTE v47[64]; // [rsp+148h] [rbp-D0h] BYREF
  void *v48[2]; // [rsp+188h] [rbp-90h]
  int v49[2]; // [rsp+198h] [rbp-80h]
  int v50[2]; // [rsp+1A0h] [rbp-78h]
  __m128i v51; // [rsp+1A8h] [rbp-70h] BYREF
  __int64 v52; // [rsp+1B8h] [rbp-60h] BYREF
  __int64 v53[2]; // [rsp+1C0h] [rbp-58h]
  char v54[8]; // [rsp+1D0h] [rbp-48h]

  v8 = sub_F22E90(a3);
  v9 = *((_QWORD *)v8 + 1);
  v10 = v8;
  v45 = v47;
  *(_OWORD *)v48 = 0;
  v51.m128i_i64[0] = v9;
  *(_QWORD *)v46 = 0x800000000LL;
  v51.m128i_i32[2] = a4;
  *(_QWORD *)v44 = 0;
  *(_QWORD *)v49 = 0;
  *(_QWORD *)v50 = a1;
  sub_B85890(&v52, v9);
  *(_OWORD *)v53 = 0;
  *(_QWORD *)v54 = 0x101010000LL;
  sub_1A395A0((__int64)v44);
  *(_OWORD *)v35 = 0;
  *(_QWORD *)v34 = 0x101010101LL;
  *(_QWORD *)v33 = &off_2BE4400;
  sub_1A6BD60(v36, a1, &v51, LODWORD(v53[1]), a2, nullptr, 0.0, 0.0, (__int64)v33, 1, 0, 0, 0, 1u);
  if ( *(_QWORD *)v36 && (v11 = v38) != 0 && (v11 = (unsigned __int64)ptr, *(_QWORD *)ptr) )
  {
    sub_168B9B0((__int64)v42, a1 + 8, 4284);
    sub_AE9DF0((unsigned __int8 **)v42, *((_QWORD *)v10 + 1), 9u);
    sub_1A60AF0(a1, (__int64)v36, (void **)v42, 1u);
    if ( *(_QWORD *)v42 && v43 )
      sub_1580C40(v43, *(unsigned __int64 *)v42);
    v25 = *(_QWORD *)(a1 + 248);
    v26 = 0;
    if ( v38 )
    {
      v26 = *(_QWORD *)ptr;
      if ( *(_QWORD *)ptr )
      {
        v27 = sub_16C47B0(*(_QWORD *)ptr);
        v26 = v27;
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 68 >= 7 )
            v26 = 0;
        }
      }
    }
    sub_F22AA0((unsigned __int64 *)v42, v26);
    v31 = 0;
    *a3 = sub_A80CA0(v25, 0, 0, *(__int64 *)v42);
  }
  else if ( a5 )
  {
    sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), v51.m128i_u32[2], 0x10BBu, 0);
    v32 = v51.m128i_i64[0];
    sub_15894B0((__int64)v42, &v32);
    sub_15F7200(v42);
    v31 = a5;
  }
  else
  {
    v31 = 1;
  }
  v14 = v41;
  v15 = (unsigned __int64 *)v40;
  if ( v41 != v40 )
  {
    do
    {
      v16 = *v15;
      if ( *v15 )
      {
        v11 = v15[1];
        if ( v11 )
        {
          if ( v16 < v11 || v16 > v11 + 14848 )
          {
            v17 = *(_QWORD **)(v16 + 528);
            v18 = &v17[8 * (unsigned __int64)*(unsigned int *)(v16 + 536)];
            if ( v17 != v18 )
            {
              do
              {
                while ( 1 )
                {
                  v18 -= 8;
                  v19 = (_QWORD *)v18[3];
                  if ( v19 == v18 + 5 )
                    break;
                  *(_QWORD *)v29 = v17;
                  operator delete(v19);
                  v17 = *(_QWORD **)v29;
                  if ( *(_QWORD **)v29 == v18 )
                    goto LABEL_12;
                }
              }
              while ( v17 != v18 );
LABEL_12:
              v18 = *(_QWORD **)(v16 + 528);
            }
            if ( v18 != (_QWORD *)(v16 + 544) )
              free(v18);
            v20 = *(void **)(v16 + 416);
            if ( v20 != (void *)(v16 + 432) )
              free(v20);
            v21 = (void **)(v16 + 384);
            v22 = (void **)(v16 + 64);
            do
            {
              while ( 1 )
              {
                v23 = *v21;
                if ( *v21 == v21 + 2 )
                  break;
                *(_QWORD *)v30 = v22;
                v21 -= 4;
                operator delete(v23);
                v22 = *(void ***)v30;
                if ( *(void ***)v30 == v21 )
                  goto LABEL_20;
              }
              v21 -= 4;
            }
            while ( v21 != v22 );
LABEL_20:
            operator delete((void *)v16, 0x3A0u);
          }
          else
          {
            v12 = *(unsigned int *)(v11 + 14976);
            *(_DWORD *)(v11 + 14976) = v12 + 1;
            *(_QWORD *)(v11 + 8 * v12 + 14848) = v16;
          }
        }
      }
      v15 += 3;
    }
    while ( v14 != v15 );
    v15 = (unsigned __int64 *)v40;
  }
  if ( v15 )
    operator delete(v15);
  if ( ptr != &v39 )
    free(ptr);
  if ( !v54[3] )
  {
LABEL_37:
    if ( !v54[4] || *(_DWORD *)v44 != 5 )
      goto LABEL_31;
LABEL_39:
    sub_1A445B0(*(__int64 *)v50, (__int64)v44, v11, v12, v13);
    goto LABEL_31;
  }
  if ( *(_DWORD *)v44 == 5 )
  {
    if ( !v54[4] )
      goto LABEL_31;
    goto LABEL_39;
  }
  if ( v48[1] && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50 + 232LL) + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(*(_QWORD **)v50, (__int64)v44);
    goto LABEL_37;
  }
LABEL_31:
  if ( v48[0] )
    sub_1A39780((char *)v48[0]);
  if ( v45 != v47 )
    free(v45);
  return v31;
}
