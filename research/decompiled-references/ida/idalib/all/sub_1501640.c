void __fastcall sub_1501640(__int64 a1, int a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned __int16 v6; // r12
  int *v7; // r13
  __int64 *v8; // rdi
  int v9; // r9d
  void *v10; // rdi
  int v11; // ecx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  __int64 *v17; // rdi
  size_t v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // r13
  unsigned int v30; // eax
  unsigned int v31; // r12d
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // rax
  _BYTE *v38; // r12
  _BYTE *v39; // r13
  _BYTE *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+0h] [rbp-518h]
  __int64 v47; // [rsp+0h] [rbp-518h]
  __int64 v48; // [rsp+0h] [rbp-518h]
  __int64 v49; // [rsp+0h] [rbp-518h]
  unsigned int v50; // [rsp+8h] [rbp-510h]
  char v52; // [rsp+33h] [rbp-4E5h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-4E4h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-4E0h] BYREF
  int v55; // [rsp+3Ch] [rbp-4DCh] BYREF
  void *ptr; // [rsp+40h] [rbp-4D8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-4D0h]
  _BYTE v58[64]; // [rsp+50h] [rbp-4C8h] BYREF
  __int64 v59; // [rsp+90h] [rbp-488h] BYREF
  _QWORD *v60; // [rsp+98h] [rbp-480h]
  __int64 v61; // [rsp+A0h] [rbp-478h]
  _QWORD v62[5]; // [rsp+A8h] [rbp-470h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-448h] BYREF
  unsigned int *v64; // [rsp+E0h] [rbp-438h] BYREF
  void **v65; // [rsp+E8h] [rbp-430h]
  __int64 v66; // [rsp+F0h] [rbp-428h]
  void *v67[2]; // [rsp+F8h] [rbp-420h] BYREF
  _QWORD v68[3]; // [rsp+108h] [rbp-410h] BYREF
  __int64 v69; // [rsp+120h] [rbp-3F8h] BYREF
  void *v70; // [rsp+130h] [rbp-3E8h] BYREF
  __int64 v71; // [rsp+138h] [rbp-3E0h]
  _BYTE v72[256]; // [rsp+140h] [rbp-3D8h] BYREF
  unsigned __int8 *v73[3]; // [rsp+240h] [rbp-2D8h] BYREF
  _QWORD v74[5]; // [rsp+258h] [rbp-2C0h] BYREF
  __int64 v75; // [rsp+280h] [rbp-298h] BYREF
  __int64 v76; // [rsp+368h] [rbp-1B0h]
  __int64 v77; // [rsp+370h] [rbp-1A8h] BYREF
  _BYTE *v78; // [rsp+378h] [rbp-1A0h]
  __int64 v79; // [rsp+380h] [rbp-198h]
  _BYTE v80[320]; // [rsp+388h] [rbp-190h] BYREF
  __int64 v81; // [rsp+4C8h] [rbp-50h]
  char v82; // [rsp+4D0h] [rbp-48h]

  v6 = *(_WORD *)(a1 + 32);
  v70 = v72;
  v71 = 0x2000000000LL;
  ptr = v58;
  v57 = 0x800000000LL;
  v53 = 0;
  v50 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v6 == 33 || v6 == 36 )
        {
          v11 = v53;
          v12 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          v46 = v11;
          sub_14634E0(v12, (int *)(a1 + 16));
          v13 = sub_14FFE40(a1, *(_DWORD *)(a1 + 40), v6, v46, 0, a4, a5);
          if ( v13 )
          {
            v14 = (unsigned int)v71;
            v15 = (unsigned int)v71 + 1LL;
            if ( v15 > HIDWORD(v71) )
            {
              v47 = v13;
              sub_2237220(&v70, v72, v15, 8);
              v14 = (unsigned int)v71;
              v13 = v47;
            }
            *((_QWORD *)v70 + v14) = v13;
            LODWORD(v71) = v71 + 1;
          }
          v16 = j__strlen(&byte_22F0C30);
          if ( !(unsigned __int8)sub_156A150(a1, 1643, &byte_22F0C30, v16) )
            goto LABEL_22;
          LOWORD(v73[0]) = 73;
          sub_15680D0(a1, v73, 1, 3);
          v6 = *(_WORD *)(a1 + 32);
          if ( v6 == 63 )
          {
LABEL_24:
            v17 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v17, (int *)(a1 + 16));
            v6 = *(_WORD *)(a1 + 32);
          }
        }
        if ( v6 != 22 )
          break;
        sub_1564840(v73, a1, a1 + 16, 1631);
        sub_AEA040((__int64)v73);
        sub_14FFE40(a1, *(_DWORD *)(a1 + 16), 0x24u, v53, 0, a4, a5);
        v6 = *(_WORD *)(a1 + 32);
      }
      if ( v6 == 63 )
        goto LABEL_24;
      if ( v6 == 1 || (unsigned __int16)(v6 - 456) <= 2u || v6 == 460 )
      {
LABEL_9:
        v7 = (int *)(a1 + 16);
        goto LABEL_10;
      }
      if ( v6 == 3 )
      {
        v41 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v41 + 760) )
        {
          *(_BYTE *)(v41 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v41 + 48) + 6LL) = 1;
        }
        v42 = *(_QWORD *)(a1 + 96);
        v34 = *(_QWORD *)(a1 + 2072) == 0;
        *(_WORD *)(a1 + 32) = 1;
        sub_172A9A0(*(_QWORD *)(v42 + 656), *(_QWORD *)(v42 + 608), (unsigned int)!v34 + 2);
LABEL_74:
        v10 = ptr;
        if ( ptr == v58 )
          goto LABEL_14;
LABEL_13:
        free(v10);
        goto LABEL_14;
      }
      if ( v6 == 73 )
        break;
      if ( v6 == 25 )
        goto LABEL_9;
      v59 = 0;
      v61 = 0x200000000LL;
      v60 = v62;
      v62[3] = &v63;
      v65 = v67;
      v62[2] = a1 + 504;
      v62[4] = 0x200000000LL;
      v64 = nullptr;
      v66 = 0x200000000LL;
      v68[0] = a1 + 504;
      v68[1] = &v69;
      v68[2] = 0x200000000LL;
      if ( v6 == 119 || v6 == 166 )
      {
        v73[1] = (unsigned __int8 *)v74;
        v73[2] = (unsigned __int8 *)0x200000000LL;
        v74[2] = a1 + 504;
        v74[4] = 0x200000000LL;
        v55 = 0;
        v73[0] = nullptr;
        v74[3] = &v75;
        v24 = sub_14977F0(a1, 0, &v55, (__int64)&v59, (__int64 *)v73, nullptr, a4, a5);
        v25 = (unsigned int)v57;
        v26 = (unsigned int)v57 + 1LL;
        if ( v26 > HIDWORD(v57) )
        {
          v49 = v24;
          sub_2237220(&ptr, v58, v26, 8);
          v25 = (unsigned int)v57;
          v24 = v49;
        }
        *((_QWORD *)ptr + v25) = v24;
        LODWORD(v57) = v57 + 1;
        sub_147A450(v73);
      }
      else
      {
        v21 = sub_1567B60(a1, &v59, &v64, 0, 3);
        v22 = (unsigned int)v57;
        v23 = (unsigned int)v57 + 1LL;
        if ( v23 > HIDWORD(v57) )
        {
          v48 = v21;
          sub_2237220(&ptr, v58, v23, 8);
          v22 = (unsigned int)v57;
          v21 = v48;
        }
        *((_QWORD *)ptr + v22) = v21;
        LODWORD(v57) = v57 + 1;
      }
      sub_147A450(&v64);
      sub_147A450(&v59);
      v6 = *(_WORD *)(a1 + 32);
    }
    v27 = *(_QWORD *)(a1 + 8);
    v54 = *(_DWORD *)(a1 + 16);
    v28 = *(_QWORD *)(v27 + 2944);
    if ( v28 >= *(unsigned int *)(v27 + 2912) )
      v29 = sub_14180A0(v27, 1u);
    else
      v29 = *(_QWORD *)(v27 + 2904) + 24 * v28;
    if ( *(_WORD *)(v29 + 16) == 3 )
    {
      v44 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v44 + 760) )
      {
        *(_BYTE *)(v44 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v44 + 48) + 6LL) = 1;
      }
      v45 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      sub_1711900(*(_QWORD *)(v45 + 656), *(_QWORD *)(v45 + 608));
      goto LABEL_74;
    }
    v30 = sub_13D0F00(v29);
    v31 = v30;
    if ( v30 == 5 )
      break;
    if ( v30 )
    {
      if ( v30 <= 0xA && ((1LL << v30) & 0x4C6) != 0 )
        goto LABEL_9;
      v32 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v32, (int *)(a1 + 16));
      v33 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v33, (int *)(a1 + 16));
      if ( v31 == 19 )
      {
        v59 = (unsigned int)v59 & 0xFE000000;
        v34 = *(_WORD *)(a1 + 32) == 22;
        v55 = 0;
        v60 = nullptr;
        v61 = 0;
        v62[0] = 0;
        if ( v34 )
        {
          v55 = *(_DWORD *)(a1 + 16);
          sub_14FEAB0(a1, (char *)&v59);
        }
        v52 = 0;
        v64 = &v54;
        v67[0] = &v52;
        v67[1] = &v55;
        v68[0] = &v53;
        v65 = (void **)a1;
        v66 = (__int64)&v59;
        sub_147A4A0((__int64)v73, a1 + 504);
        v35 = *(_QWORD *)(a1 + 96);
        v81 = 0;
        v78 = v80;
        v76 = v35;
        v77 = 0;
        v79 = 0x400000000LL;
        v36 = *(_QWORD *)(v35 + 512);
        *(_QWORD *)(v35 + 512) = &v77;
        v81 = v36;
        v82 = 0;
        sub_1494F10(
          a1,
          (__int64)v73,
          (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_14F3F70,
          (__int64)&v64,
          0,
          a4,
          a5);
        v37 = j__strlen(&byte_22F0C30);
        sub_1569A00(a1, 63, 1647, &byte_22F0C30, v37);
        if ( !v82 )
        {
          sub_1818070(v76, v81, 0);
          v82 = 1;
        }
        v38 = v78;
        v39 = &v78[80 * (unsigned int)v79];
        if ( v78 != v39 )
        {
          do
          {
            v40 = v38;
            v38 += 80;
            sub_15B6850(v40);
          }
          while ( v39 != v38 );
          v39 = v78;
        }
        if ( v39 != v80 )
          free(v39);
        sub_147A5F0((__int64)v73);
      }
      else if ( v31 < 0x13 || v31 - 21 > 1 )
      {
        sub_1564820(v73, a1, v54, 1763);
        sub_AEA040((__int64)v73);
        LODWORD(v73[0]) = 4784153;
        sub_15680D0(a1, v73, 2, 1);
      }
      else if ( a2 == 10 )
      {
        v53 = v31;
      }
      else
      {
        sub_1564820(v73, a1, v54, 1757);
        sub_AEA040((__int64)v73);
      }
LABEL_22:
      v6 = *(_WORD *)(a1 + 32);
    }
    else
    {
      sub_1564840(v73, a1, v29, 1774);
      sub_AEA040((__int64)v73);
      LOWORD(v73[0]) = 63;
      sub_15680D0(a1, v73, 1, 0);
      v6 = *(_WORD *)(a1 + 32);
    }
  }
  v7 = (int *)(a1 + 16);
  v43 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v43, (int *)(a1 + 16));
  v50 = v54;
LABEL_10:
  if ( sub_13D0E90((__int64)v7, 5) )
  {
    v8 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v8, v7);
  }
  else
  {
    sub_1564840(v73, a1, v7, 1765);
    v18 = j__strlen("\n@end\n");
    sub_9EC740((__int64)&v64, *(_DWORD *)(a1 + 16), "\n@end\n", v18, 0);
    if ( (_DWORD)v64 && HIDWORD(v64) )
      sub_14FA6F0((__int64 *)v73, (unsigned __int64)&v64);
    if ( v67[0] != v68 )
      operator delete(v67[0]);
    sub_AEA040((__int64)v73);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    sub_1564820(v73, a1, v19, 2040);
    v20 = sub_1895420(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL));
    sub_AE9DF0(v73, v20, 2u);
    sub_AEA040((__int64)v73);
    v50 = *(_DWORD *)(a1 + 16);
  }
  sub_18AB010(
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
    v50,
    (_DWORD)v70,
    v71,
    v9,
    (__int64)ptr,
    (unsigned int)v57);
  v10 = ptr;
  if ( ptr != v58 )
    goto LABEL_13;
LABEL_14:
  if ( v70 != v72 )
    free(v70);
}
