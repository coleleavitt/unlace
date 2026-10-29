unsigned __int64 __fastcall sub_1C37DC0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r9
  _BYTE *v5; // rbp
  _BYTE *v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  __int64 v11; // r12
  char v12; // cl
  __int64 v13; // r9
  bool v14; // zf
  int v15; // esi
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  char v24; // cl
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned __int64 v29; // rbx
  __int64 v31; // [rsp+0h] [rbp-108h]
  unsigned __int64 v32; // [rsp+8h] [rbp-100h]
  __m128i v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v36; // [rsp+38h] [rbp-D0h]
  __m128i v37; // [rsp+40h] [rbp-C8h] BYREF
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  _BYTE v40[32]; // [rsp+60h] [rbp-A8h] BYREF
  void *v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h]
  _BYTE v43[120]; // [rsp+90h] [rbp-78h] BYREF

  sub_18C3E40(a1);
  sub_190D5E0(a1, a3);
  sub_17A2E10(a1);
  sub_15F7280(&v35, a1, nullptr, 0, 0, v4);
  v5 = v36;
  v6 = v43;
  v42 = 0x400000000LL;
  v7 = v40;
  v8 = *((unsigned int *)v36 + 332);
  v9 = *((_QWORD *)v36 + 165);
  v39 = 0x400000000LL;
  v41 = v43;
  v8 *= 32;
  ptr = v40;
  v31 = v9 + v8;
  v10 = *((_WORD *)v36 + 780);
  if ( v9 == v9 + v8 )
  {
    v26 = 0;
    v25 = 0;
  }
  else
  {
    v11 = v9;
    do
    {
      if ( (*(_BYTE *)(v11 + 24) & 0x40) == 0 )
      {
        v32 = sub_1A2E400(a1, v11, *(_DWORD *)(v11 + 8), v10 == 2, a3, a4);
        v23 = sub_1A2E640(a1, *((__m128i **)v5 + 192), v11);
        v24 = *(_BYTE *)(v11 + 24);
        if ( (v24 & 8) != 0 )
        {
          v15 = *(_DWORD *)(v11 + 8);
          v16 = 0;
          v17 = 0;
        }
        else
        {
          v12 = v24 & 3;
          if ( v12 == 3 )
          {
            v15 = *(_DWORD *)(v11 + 8);
            v16 = 0;
            v17 = 3;
          }
          else
          {
            v13 = *(_QWORD *)v11;
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) && *((_WORD *)v5 + 780) == 2 )
            {
              sub_1AF9960(*(_QWORD *)(a1 + 760), v23, *(_QWORD *)v11, *((unsigned __int16 *)v5 + 781));
              v13 = *(_QWORD *)v11;
              v12 = *(_BYTE *)(v11 + 24) & 3;
            }
            v14 = v12 == 1;
            v15 = *(_DWORD *)(v11 + 8);
            v16 = v13;
            v17 = !v14 + 1;
          }
        }
        sub_EEE200((__int64)&v37, v15, v17, v16);
        v18 = (unsigned int)v42;
        a3 = (__m128)_mm_load_si128(&v37);
        v19 = (unsigned int)v42 + 1LL;
        if ( v19 > HIDWORD(v42) )
        {
          v34 = (__m128i)a3;
          sub_2237220(&v41, v43, v19, 16);
          v18 = (unsigned int)v42;
          a3 = (__m128)_mm_load_si128(&v34);
        }
        *((__m128 *)v41 + v18) = a3;
        v20 = (unsigned int)v39;
        LODWORD(v42) = v42 + 1;
        v21 = (unsigned int)v39 + 1LL;
        v22 = v32 & 0xFFFFFFFFFFFFFFFELL;
        if ( v21 > HIDWORD(v39) )
        {
          sub_2237220(&ptr, v40, v21, 8);
          v20 = (unsigned int)v39;
          v22 = v32 & 0xFFFFFFFFFFFFFFFELL;
        }
        *((_QWORD *)ptr + v20) = v22;
        v10 = *((_WORD *)v5 + 780);
        LODWORD(v39) = v39 + 1;
      }
      v11 += 32;
    }
    while ( v31 != v11 );
    v6 = v41;
    v25 = (unsigned int)v42;
    v7 = ptr;
    v26 = v39;
  }
  v27 = *((_QWORD *)v5 + 191);
  v28 = *((_QWORD *)v5 + 192);
  v29 = sub_EEF660(*(_QWORD **)(a1 + 248), a2, v10, (__int64)v6, v25, v27, (__int64)v7, v26, v28);
  sub_B7A170(v27, *(_QWORD *)(v29 + 8LL * *(unsigned int *)(v29 + 8) + 32));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 104LL))(v28);
  if ( ptr != v40 )
    free(ptr);
  if ( v41 != v43 )
    free(v41);
  if ( v36 )
    sub_15F2350(&v35, v36);
  return v29;
}
