void __fastcall sub_14A7280(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v8; // r9
  int v9; // eax
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  const char *v16; // rdx
  size_t v17; // rax
  __int64 v18; // rdx
  char *v19; // rsi
  __int64 v20; // rax
  char *v21; // [rsp+8h] [rbp-250h]
  char v22; // [rsp+1Bh] [rbp-23Dh] BYREF
  unsigned int v23; // [rsp+1Ch] [rbp-23Ch] BYREF
  _DWORD v24[6]; // [rsp+20h] [rbp-238h] BYREF
  void *v25; // [rsp+38h] [rbp-220h]
  __int64 v26; // [rsp+48h] [rbp-210h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-1F8h] BYREF
  char v28; // [rsp+68h] [rbp-1F0h]
  __int64 v29; // [rsp+6Ch] [rbp-1ECh]
  char v30; // [rsp+74h] [rbp-1E4h]
  void *v31; // [rsp+78h] [rbp-1E0h]
  __int64 v32; // [rsp+80h] [rbp-1D8h]
  _BYTE v33[24]; // [rsp+88h] [rbp-1D0h] BYREF
  const __m128i *v34; // [rsp+A0h] [rbp-1B8h] BYREF
  int *v35; // [rsp+A8h] [rbp-1B0h]
  __int64 v36; // [rsp+B0h] [rbp-1A8h]
  __int64 v37; // [rsp+B8h] [rbp-1A0h]
  int v38[10]; // [rsp+F0h] [rbp-168h] BYREF
  void *v39; // [rsp+118h] [rbp-140h]
  __int64 v40; // [rsp+128h] [rbp-130h] BYREF
  __int64 v41; // [rsp+138h] [rbp-120h] BYREF
  void *ptr; // [rsp+140h] [rbp-118h]
  __int64 v43; // [rsp+150h] [rbp-108h] BYREF
  void *v44; // [rsp+170h] [rbp-E8h]
  int v45; // [rsp+17Ch] [rbp-DCh]
  int v46; // [rsp+190h] [rbp-C8h]
  int v47; // [rsp+194h] [rbp-C4h]

  sub_147A4A0((__int64)v38, (__int64)&a1[31].m128i_i64[1]);
  v34 = a1;
  v35 = v38;
  v36 = a2;
  v37 = a3;
  sub_14906F0(a1, v38, 0, 0, 0, a4, a5, v8, (__int64 (__fastcall *)(__int64, int *, __int64))sub_149E8E0, (__int64)&v34);
  v9 = v47;
  if ( !*(_DWORD *)(a2 + 88) )
    *(_DWORD *)(a2 + 88) = v46;
  if ( v9 )
    *(_DWORD *)(a2 + 92) = v9;
  v10 = *(_DWORD *)(a2 + 136);
  if ( v10 )
  {
    v11 = 1LL << **(_DWORD **)(a2 + 128);
    if ( (v11 & 0xB7) == 0 )
    {
      if ( (v11 & 0x40) == 0 )
      {
LABEL_8:
        LODWORD(v34) = 0;
        sub_147B3A0(a2, &v34);
        v12 = *(_QWORD *)(a2 + 128) + 144LL * (unsigned int)v34;
        if ( (v38[0] & 0x7C000000) != 0 )
        {
          v34 = (const __m128i *)(*(_QWORD *)(a2 + 128) + 144LL * (unsigned int)v34 + 56);
          v35 = (int *)a3;
          v36 = (__int64)a1;
          sub_15AC6E0(v38, &sub_14A7DB0, &v34);
        }
        v22 = 1;
        v23 = 0;
        if ( !(unsigned __int8)sub_147E590((__int64)a1, (bool *)&v22, &v23) )
          goto LABEL_11;
        v16 = "& ";
        if ( !v22 )
          v16 = "&& ";
        v21 = (char *)v16;
        v17 = j__strlen(v16);
        sub_9EC740((__int64)v24, *(_DWORD *)(a3 + 20), v21, v17, 0);
        v18 = v23;
        *(_BYTE *)(v12 + 56) = (8 * (v22 & 1)) | *(_BYTE *)(v12 + 56) & 0xF7;
        *(_DWORD *)(v12 + 80) = v18;
        sub_1564820(&v34, a1, v18, 1583);
        v19 = "&";
        if ( !v22 )
          v19 = (char *)"&&";
        sub_149E970((unsigned __int8 **)&v34, (__int64)v19);
        v20 = sub_15AFC10(*(unsigned int *)(a3 + 4));
        sub_149E970((unsigned __int8 **)&v34, v20);
        v29 = 0;
        v30 = 0;
        v31 = v33;
        v32 = 0;
        v33[0] = 0;
        v33[16] = 0;
        v27[0] = v23;
        v27[1] = v23;
        v28 = 1;
        if ( v23 )
        {
          sub_14A2370((__int64 *)&v34, (unsigned __int64)v27);
          if ( !v24[0] )
          {
LABEL_29:
            if ( v31 != v33 )
              operator delete(v31);
            goto LABEL_31;
          }
        }
        else if ( !v24[0] )
        {
LABEL_31:
          sub_AEA040((__int64)&v34);
          if ( v23 )
            *(_DWORD *)(a2 + 92) = v23;
          if ( v25 != &v26 )
            operator delete(v25);
          goto LABEL_11;
        }
        if ( v24[1] )
          sub_14A2370((__int64 *)&v34, (unsigned __int64)v24);
        goto LABEL_29;
      }
      v13 = *(_QWORD *)(a2 + 128);
      v14 = v13 + 144LL * (unsigned int)(v10 - 1);
      while ( v14 != v13 )
      {
        v15 = 1LL << *(_DWORD *)(v13 + 144);
        if ( (v15 & 0xB7) != 0 )
          break;
        v13 += 144;
        if ( (v15 & 0x40) == 0 )
          goto LABEL_8;
      }
    }
  }
LABEL_11:
  if ( v45 )
    free(v44);
  sub_15DCED0(v41, &v41);
  if ( ptr != &v43 )
    free(ptr);
  if ( v39 != &v40 )
    free(v39);
}
