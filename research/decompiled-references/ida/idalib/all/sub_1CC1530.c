__int64 __fastcall sub_1CC1530(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        double a7)
{
  __int64 *v10; // rsi
  int v11; // ecx
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // r13d
  unsigned int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // rax
  unsigned __int8 v19; // r11
  __int64 v20; // r13
  unsigned __int8 v21; // r11
  __int64 v22; // r9
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // r11
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp-8h] [rbp-1C0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-1B0h]
  __int64 *v44; // [rsp+8h] [rbp-1B0h]
  int v45; // [rsp+10h] [rbp-1A8h]
  unsigned __int8 v46; // [rsp+18h] [rbp-1A0h]
  unsigned __int8 v47; // [rsp+18h] [rbp-1A0h]
  unsigned __int8 v48; // [rsp+20h] [rbp-198h]
  unsigned __int8 v49; // [rsp+20h] [rbp-198h]
  __int64 v50; // [rsp+20h] [rbp-198h]
  unsigned __int8 v51; // [rsp+20h] [rbp-198h]
  __int64 v52; // [rsp+28h] [rbp-190h]
  bool v53; // [rsp+3Fh] [rbp-179h] BYREF
  __int64 v54; // [rsp+40h] [rbp-178h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-170h] BYREF
  __int64 v56; // [rsp+50h] [rbp-168h] BYREF
  __int64 v57; // [rsp+58h] [rbp-160h] BYREF
  void *v58; // [rsp+70h] [rbp-148h] BYREF
  __int64 v59; // [rsp+78h] [rbp-140h]
  _BYTE v60[48]; // [rsp+80h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-100h]
  _BYTE v63[48]; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD v64[2]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v66; // [rsp+110h] [rbp-A8h] BYREF
  char v67; // [rsp+168h] [rbp-50h]
  unsigned int v68; // [rsp+170h] [rbp-48h]
  char v69; // [rsp+174h] [rbp-44h]

  sub_F22A90(v64, *(_QWORD *)(a4 + 8));
  v10 = &v54;
  v54 = v64[0];
  sub_F22C70((__int64)&v56, &v54);
  v11 = v56;
  if ( !v56 )
    return 0;
  if ( *(char *)(v56 + 28) < 0 )
    return 1;
  if ( (((*(_BYTE *)(v56 + 28) & 0x7D) + 60) & 0x7B) != 0 )
  {
    v23 = sub_1CB2FB0(a4, (__int64)&v54, a7);
    sub_168B9F0((__int64)v64, (__int64 *)(a1 + 8), v23, 0x13F3u, 0);
    sub_15F7200(v64);
    sub_168B9F0((__int64)v64, (__int64 *)(a1 + 8), *(_DWORD *)(v56 + 24), 0x18EFu, 0);
    v10 = &v56;
    sub_1CBDAC0((__int64)v64, &v56);
    sub_15F7200(v64);
    v11 = v56;
  }
  if ( ((*(_DWORD *)a4 + 2147483642) & 0x7FFFFFFFu) <= 1 )
  {
    v13 = *(_DWORD *)((*(_QWORD *)(a4 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 16);
  }
  else
  {
    v45 = v11;
    v12 = sub_F1E510(a4, (__int64)v10, a7);
    v11 = v45;
    v13 = v12;
  }
  v43 = sub_1D72550(a1, a3, a2, v11, (unsigned int)&v57, v13, a5, a6);
  if ( !v43 )
    return 1;
  v58 = v60;
  v59 = 0x300000000LL;
  ptr = v63;
  v62 = 0x300000000LL;
  sub_BBD810(a3, (__int64)&v58);
  if ( (_DWORD)v59 )
  {
    sub_BBDAC0(v56, (__int64)&ptr);
    v14 = sub_175BCD0(a1, a2, (__int64)v58, (unsigned int)v59, v56, &v53, (__int64)ptr, (unsigned int)v62);
    if ( (_BYTE)v14 )
      goto LABEL_10;
    if ( !v53 )
    {
      v46 = v43;
      v44 = (__int64 *)(a1 + 8);
      v16 = sub_1CB2FB0(a4, v40, a7);
      sub_168B9F0((__int64)v64, (__int64 *)(a1 + 8), v16, 0x142Du, 0);
      v17 = &v56;
      v18 = sub_1CBDAC0((__int64)v64, &v56);
      v19 = v46;
      v20 = v18;
      if ( *(_BYTE *)(v18 + 120) )
      {
        v17 = (__int64 *)a2;
        sub_AE9DF0((unsigned __int8 **)(v18 + 32), a2, 0xAu);
        v19 = v46;
      }
      else if ( *(_BYTE *)(v18 + 132) )
      {
        v32 = sub_168B9E0((_QWORD *)v18);
        v36 = v46;
        v37 = v32;
        v38 = *(_QWORD *)(v20 + 16);
        if ( v38 )
        {
          v50 = v37;
          v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
          v37 = v50;
          v36 = v46;
        }
        v55 = v38;
        v51 = v36;
        v39 = sub_1587BC0(v37, (__int64 *)&v55, v37, v33, v34, v35);
        v17 = (__int64 *)a2;
        sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v20 + 128) + 8), a2, 0xAu);
        v19 = v51;
      }
      v48 = v19;
      v55 = sub_F1E510(a4, (__int64)v17, a7);
      sub_1587DB0(v20, (__int64 *)&v55);
      sub_15F7200(v64);
      sub_168B9F0((__int64)v64, v44, *(_DWORD *)(a2 + 24), 0x172Eu, 0);
      v21 = v48;
      if ( v67 )
      {
        sub_AE9DF0(&v66, a2, 0xAu);
        v21 = v48;
      }
      else if ( v69 )
      {
        v24 = sub_168B9E0(v64);
        v28 = v48;
        v29 = v24;
        v30 = v65;
        if ( v65 )
        {
          v52 = v29;
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
          v29 = v52;
          v28 = v48;
        }
        v49 = v28;
        v55 = v30;
        v31 = sub_1587BC0(v29, (__int64 *)&v55, v29, v25, v26, v27);
        sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v68 + 8), a2, 0xAu);
        v21 = v49;
      }
      v47 = v21;
      sub_15F7200(v64);
      sub_168B9F0((__int64)v64, v44, *(_DWORD *)(v56 + 24), 0x172Eu, 0);
      sub_1CBDAC0((__int64)v64, &v56);
      sub_15F7200(v64);
      sub_17574E0(a1, a2, (__int64)v58, (unsigned int)v59, v56, v22, (__int64)ptr, (unsigned int)v62);
      v14 = v47;
      goto LABEL_10;
    }
  }
  v14 = 0;
LABEL_10:
  if ( ptr != v63 )
    free(ptr);
  if ( v58 != v60 )
    free(v58);
  return v14;
}
