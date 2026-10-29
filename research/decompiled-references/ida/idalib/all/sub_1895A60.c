void __fastcall sub_1895A60(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // [rsp+48h] [rbp-21B0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-21B0h]
  _WORD v35[2]; // [rsp+50h] [rbp-21A8h] BYREF
  int v36; // [rsp+54h] [rbp-21A4h]
  int v37; // [rsp+58h] [rbp-21A0h]
  int v38; // [rsp+5Ch] [rbp-219Ch]
  unsigned __int8 *v39; // [rsp+60h] [rbp-2198h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-2190h]
  int v41; // [rsp+80h] [rbp-2178h] BYREF
  __int64 v42; // [rsp+88h] [rbp-2170h]
  __int64 v43; // [rsp+90h] [rbp-2168h]
  int v44; // [rsp+98h] [rbp-2160h]
  __int64 v45; // [rsp+A0h] [rbp-2158h]
  __int16 v46; // [rsp+A8h] [rbp-2150h]
  void *v47; // [rsp+B0h] [rbp-2148h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-2140h]
  _BYTE v49[64]; // [rsp+C0h] [rbp-2138h] BYREF
  void *ptr; // [rsp+100h] [rbp-20F8h] BYREF
  __int64 v51; // [rsp+108h] [rbp-20F0h]
  _BYTE v52[256]; // [rsp+110h] [rbp-20E8h] BYREF
  _BYTE v53[8168]; // [rsp+210h] [rbp-1FE8h] BYREF

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 88);
    if ( v4 )
    {
      v5 = (_QWORD *)sub_168B6C0((__int64)a1);
      v47 = v49;
      v48 = 0x800000000LL;
      sub_1895720((__int64)a1, v4, (__int64)&v47);
      v6 = v48;
      if ( !(_DWORD)v48 )
      {
        v31 = v47;
        if ( v47 == v49 )
          return;
        goto LABEL_22;
      }
      v7 = 0;
      ptr = v52;
      v51 = 0x2000000000LL;
      v8 = 0;
      do
      {
        v9 = *((_QWORD *)v47 + v8);
        if ( *(char *)(v9 + 28) >= 0 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          v41 = 6;
          v46 = 0;
          v11 = *a1;
          v43 = v10;
          LODWORD(v10) = *(_DWORD *)(a2 + 24);
          v35[0] = 3;
          v36 = v10;
          v37 = v10;
          v38 = v10;
          v42 = 0;
          v44 = 0;
          v45 = v9;
          sub_1A19220((unsigned int)v53, v11, (unsigned int)&v41, (unsigned int)v35, 0, 0, 0, 1);
          v12 = sub_1A1D600((unsigned int)v53, *a1, (unsigned int)&v41, (unsigned int)v35, 0, 0, 0);
          v15 = sub_19A3E60(*a1, v12, v13) & 0xFFFFFFFFFFFFFFFELL;
          if ( v15 )
          {
            v16 = v5[294];
            v5[304] += 32LL;
            v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v5[295] >= v17 + 32 && v16 )
            {
              v5[294] = v17 + 32;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v34 = v15;
              v32 = sub_986170((__int64)(v5 + 294), 32, 32, 3, v14, v15);
              v15 = v34;
              v18 = v32;
              v17 = v32;
            }
            sub_B98A40(v18, (__int64)v5, v9, 0, 0, v15, 0);
            v19 = (unsigned int)v51;
            v20 = (unsigned int)v51 + 1LL;
            if ( v20 > HIDWORD(v51) )
            {
              sub_2237220(&ptr, v52, v20, 8);
              v19 = (unsigned int)v51;
            }
            *((_QWORD *)ptr + v19) = v17;
            v21 = *(_QWORD *)(v9 + 48);
            LODWORD(v51) = v51 + 1;
            v22 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450((__int64)v5, v21) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v22 + 16) == 48 )
            {
              v27 = sub_F60F10(*v22, v21, v23, v24, v25, v26);
              v28 = sub_1A69EF0(*a1, v27);
              v29 = v28;
              if ( v28 )
              {
                sub_1910D40(*a1, *(unsigned int *)(v9 + 24), v28, 1);
                v33 = (_QWORD *)*a1;
                sub_168B9B0((__int64)&v39, (__int64)a1, 2949);
                v30 = sub_A71450((__int64)v5, *(_QWORD *)(v9 + 48));
                sub_AE9DF0(&v39, v30, 8u);
                sub_16602B0(v33, *(_DWORD *)(v9 + 24), v29, (__int64)&v39, 0);
                if ( v39 )
                {
                  if ( v40 )
                    sub_1580C40(v40, (unsigned __int64)v39);
                }
              }
            }
          }
          sub_1A0BB10(v53);
          v6 = v48;
        }
        v8 = (unsigned int)(v7 + 1);
        v7 = v8;
      }
      while ( (unsigned int)v8 < v6 );
      sub_BA9E40(a2, (__int64)v5, ptr, v51);
      if ( ptr != v52 )
        free(ptr);
      v31 = v47;
      if ( v47 != v49 )
LABEL_22:
        free(v31);
    }
  }
}
