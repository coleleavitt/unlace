void __fastcall sub_1720E50(__int64 *a1, __int64 a2, __int64 a3, char a4, char a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rdi
  char v17; // al
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // [rsp+18h] [rbp-310h]
  __int128 v29; // [rsp+20h] [rbp-308h] BYREF
  __int64 v30; // [rsp+30h] [rbp-2F8h]
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-2E8h] BYREF
  char *v32; // [rsp+48h] [rbp-2E0h]
  __m128i si128; // [rsp+50h] [rbp-2D8h]
  __int64 v34; // [rsp+60h] [rbp-2C8h]
  __int128 v35; // [rsp+68h] [rbp-2C0h] BYREF
  __int64 v36; // [rsp+78h] [rbp-2B0h]
  char v37; // [rsp+80h] [rbp-2A8h]
  __int64 v38; // [rsp+88h] [rbp-2A0h]
  __int64 v39; // [rsp+90h] [rbp-298h]
  __int64 v40; // [rsp+98h] [rbp-290h]
  __int64 *v41; // [rsp+A0h] [rbp-288h]
  __int64 v42; // [rsp+A8h] [rbp-280h]
  int v43; // [rsp+B0h] [rbp-278h]
  char v44; // [rsp+B4h] [rbp-274h]
  __int64 v45; // [rsp+B8h] [rbp-270h] BYREF
  __int64 v46; // [rsp+100h] [rbp-228h] BYREF
  __int64 v47; // [rsp+108h] [rbp-220h]
  __int64 (*v48)(); // [rsp+1C8h] [rbp-160h]
  __int64 v49; // [rsp+1D0h] [rbp-158h]
  char v50; // [rsp+1D8h] [rbp-150h]
  __int64 v51; // [rsp+1E8h] [rbp-140h] BYREF
  __int64 v52; // [rsp+1F0h] [rbp-138h]
  int v53[62]; // [rsp+230h] [rbp-F8h] BYREF

  v9 = (_QWORD *)a1[1];
  BYTE4(v31) = 0;
  LODWORD(v31) = (a5 != 0) + 19;
  v32 = nullptr;
  si128 = 0u;
  v34 = 0;
  v41 = &v45;
  v10 = *v9;
  v11 = *(__int64 (**)(void))(*v9 + 48LL);
  LOBYTE(v40) = 0;
  v42 = 8;
  v43 = 0;
  v44 = 1;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v26 = v11();
    v9 = (_QWORD *)a1[1];
    v12 = v26;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    v28 = v12;
    v25 = v13();
    v12 = v28;
    v14 = v25;
  }
  sub_16FF270((__int64)&v46, *a1, v14, v12, (unsigned int *)&v31, a6, 0);
  sub_17038E0((__int64)&v31);
  sub_16FF160((__int64)&v51, (std::__detail::_List_node_base *)&v51);
  v35 = 0;
  v32 = (char *)"const";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v31 = nullptr;
  LODWORD(v34) = 0;
  v37 = v37 & 0x80 | 0x40;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  sub_1706C30((__int64)&v46, (__int64)&v31);
  sub_1705410((__int64)&v35);
  v35 = 0;
  v32 = (char *)"volatile";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v31 = nullptr;
  LODWORD(v34) = 0;
  v37 = v37 & 0x80 | 0x40;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  sub_1706C30((__int64)&v46, (__int64)&v31);
  sub_1705410((__int64)&v35);
  if ( (*(_BYTE *)sub_168B6E0((__int64)a1) & 1) != 0 )
  {
    v32 = (char *)"restrict";
    LODWORD(v34) = 0;
    v35 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v31 = nullptr;
    v36 = 0;
    v37 = v37 & 0x80 | 0x40;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_1706C30((__int64)&v46, (__int64)&v31);
    sub_1705410((__int64)&v35);
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) == 0 )
    goto LABEL_8;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x10) != 0 && ((*(_DWORD *)a3 >> 12) & 0x7Fu) - 25 <= 1 )
  {
    v32 = "final";
    LODWORD(v34) = 0;
    v35 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v31 = nullptr;
    v36 = 0;
    v37 = v37 & 0x80 | 0x40;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_1706C30((__int64)&v46, (__int64)&v31);
    sub_1705410((__int64)&v35);
  }
  if ( a4 )
  {
    v32 = (char *)"operator";
    LODWORD(v34) = 0;
    v35 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v31 = nullptr;
    v36 = 0;
    v37 = v37 & 0x80 | 0x40;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_1706C30((__int64)&v46, (__int64)&v31);
    sub_1705410((__int64)&v35);
  }
  if ( a5 )
  {
    v48 = sub_16FE610;
    v22 = *a1;
    v29 = 0;
    v23 = *(_QWORD *)(v22 + 544);
    v50 = 1;
    v49 = 0;
    v30 = 0;
    sub_16FF1B0(&v31, (__int64)&v46, v23, 0, (__int64 *)&v29);
    sub_1705410((__int64)&v29);
    v24 = *(_DWORD *)(a1[1] + 8);
    sub_1A65F80(*a1, a2, 6, &v31, (v24 & 4) != 0, (v24 & 0x20) != 0);
    v48 = nullptr;
    v31 = &off_2C4EFD0;
    v49 = 0;
    sub_1705410((__int64)&v35);
    nullsub_1203(&v31);
    sub_16FF8C0((__int64)&v51, v52);
    v16 = (__int64 *)*a1;
  }
  else
  {
LABEL_8:
    sub_16FF8C0((__int64)&v51, v52);
    if ( a5 == 1 || !a4 )
    {
      v16 = (__int64 *)*a1;
    }
    else
    {
      v15 = sub_15AC7E0(a3);
      v16 = (__int64 *)*a1;
      if ( v15 == 2 && ((*(_DWORD *)a3 >> 12) & 0x7F) == 0x1C )
      {
        v17 = *(_BYTE *)(a3 + 1);
        if ( (v17 & 3) == 0 && (v17 & 0xC) == 0 && (*(_BYTE *)(a3 + 2) & 8) == 0 )
        {
          if ( a2 )
          {
            v18 = *(_DWORD *)(a2 + 8);
            if ( (v18 & 8) != 0 && (v18 & 0x5A0) == 0 )
            {
              v19 = *(_QWORD *)(a3 + 8);
              if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != 0
                && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
                                   - 35) <= 1u )
              {
                sub_17204D0(v16, v19, 0, 0, 0, 0, (__int64)&v46);
                v16 = (__int64 *)*a1;
              }
            }
          }
        }
      }
    }
  }
  v20 = a1[1];
  v21 = 0;
  if ( v46 != v47 )
    v21 = v46;
  if ( v20 )
    sub_1700D50((__int64)v16, v20, v53, v21, -1431655765 * ((v47 - v46) >> 5));
  sub_1700A70((__int64)&v46);
}
