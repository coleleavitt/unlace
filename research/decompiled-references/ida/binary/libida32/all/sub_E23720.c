void __fastcall sub_E23720(__int64 *p_p_ptr, const char *a2)
{
  void **v2; // r13
  __int64 *v3; // rbp
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int16 v14; // ax
  const char *v15; // r12
  int v16; // ebx
  const char *v17; // r14
  int v18; // eax
  __int64 v19; // rbx
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  _BYTE *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r15d
  __int64 v34; // rdi
  __int64 (*v35)(); // rax
  int v36; // r14d
  unsigned int v37; // r14d
  _BYTE *v38; // rax
  _BYTE *v39; // rax
  void ***v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  const char *v43; // r13
  size_t v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rdi
  unsigned int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r12
  unsigned __int16 v51; // ax
  unsigned __int16 v52; // ax
  size_t v53; // rax
  char *v54; // rdx
  int v55; // ecx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rdi
  _BYTE *v59; // rax
  unsigned __int16 v60; // ax
  void *v61; // [rsp+0h] [rbp-198h] BYREF
  __int64 v62; // [rsp+8h] [rbp-190h]
  __int64 v63; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v64[4]; // [rsp+20h] [rbp-178h] BYREF
  __int16 v65; // [rsp+40h] [rbp-158h]
  _QWORD v66[4]; // [rsp+50h] [rbp-148h] BYREF
  __int16 v67; // [rsp+70h] [rbp-128h]
  __int64 v68; // [rsp+80h] [rbp-118h]
  void *ptr; // [rsp+B0h] [rbp-E8h] BYREF
  size_t v70; // [rsp+B8h] [rbp-E0h]
  __int64 v71; // [rsp+C0h] [rbp-D8h]
  _WORD v72[12]; // [rsp+C8h] [rbp-D0h] BYREF
  void *v73; // [rsp+E0h] [rbp-B8h] BYREF
  int v74; // [rsp+E8h] [rbp-B0h]
  _OWORD v75[2]; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+110h] [rbp-88h]
  void **p_ptr; // [rsp+120h] [rbp-78h] BYREF
  int v78; // [rsp+128h] [rbp-70h]
  const char *v79; // [rsp+130h] [rbp-68h]
  unsigned __int64 v80; // [rsp+138h] [rbp-60h]
  _BYTE *v81; // [rsp+140h] [rbp-58h]
  char v82; // [rsp+148h] [rbp-50h]
  int v83; // [rsp+14Ch] [rbp-4Ch]
  void **v84; // [rsp+150h] [rbp-48h]

  v3 = p_p_ptr;
  v4 = (__int64)a2;
  v5 = ((unsigned __int8)a2[18] >> 3) & 0xF;
  if ( (unsigned int)v5 - 4 <= 1 )
  {
    v2 = &v73;
    v11 = *(_QWORD *)(*(_QWORD *)(*p_p_ptr + 8) + 17448LL);
    v73 = v75;
    sub_E154B0(&v73, *(_BYTE **)(v11 + 216), *(_QWORD *)(v11 + 216) + *(_QWORD *)(v11 + 224));
    v12 = *(_DWORD *)(v11 + 260);
    v75[1] = _mm_loadu_si128((const __m128i *)(v11 + 248));
    v76 = *(_QWORD *)(v11 + 264);
    p_p_ptr = *(__int64 **)(*p_p_ptr + 8);
    LOBYTE(v13) = 0;
    if ( v12 <= 0x1F )
      v13 = (0xF8000222uLL >> v12) & 1;
    if ( (unsigned int)(*(_DWORD *)(p_p_ptr[2181] + 248) - 3) > 1 || (_BYTE)v13 )
    {
      a2 = *(const char **)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFF0LL);
      if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 5 )
      {
        v15 = "poly8_t";
        v22 = 1LL << ((unsigned __int8)(*((_WORD *)a2 + 9) >> 3) + 74);
        if ( (v22 & 0x801) == 0 )
        {
          v15 = "poly16_t";
          if ( (v22 & 0x10100) != 0 )
            v15 = "poly64_t";
        }
        goto LABEL_18;
      }
      v14 = (*((_WORD *)a2 + 9) >> 3) & 0x1FF;
      if ( v14 == 451 )
      {
        v15 = "int16_t";
        goto LABEL_18;
      }
      if ( v14 > 0x1C3u )
      {
        if ( v14 == 480 )
        {
          v15 = "float16_t";
          goto LABEL_18;
        }
        if ( v14 <= 0x1E0u )
        {
          if ( v14 == 452 )
          {
            v15 = "int32_t";
            goto LABEL_18;
          }
          if ( v14 == 454 )
          {
            v15 = "int64_t";
            goto LABEL_18;
          }
        }
        else
        {
          if ( v14 == 482 )
          {
            v15 = "float64_t";
            goto LABEL_18;
          }
          if ( v14 < 0x1E2u )
          {
            v15 = "float32_t";
            goto LABEL_18;
          }
          if ( v14 == 485 )
          {
            v15 = "bfloat16_t";
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( v14 == 443 )
        {
          v15 = "uint16_t";
          goto LABEL_18;
        }
        if ( v14 <= 0x1BBu )
        {
          if ( v14 == 104 )
          {
            v15 = "mfloat8_t";
            goto LABEL_18;
          }
          if ( v14 == 438 )
          {
            v15 = "uint8_t";
            goto LABEL_18;
          }
        }
        else
        {
          if ( v14 == 446 )
          {
            v15 = "uint64_t";
            goto LABEL_18;
          }
          if ( v14 == 449 )
          {
            v15 = "int8_t";
LABEL_18:
            v16 = *(_DWORD *)(v4 + 20);
            v17 = "__simd64_";
            v18 = v16 * sub_A73FE0((__int64)p_p_ptr, (__int64)a2);
            v19 = (v18 != 64) + 9LL;
            if ( v18 != 64 )
              v17 = "__simd128_";
            v20 = strlen(v15);
            sub_2257BD0(v3[1], v19 + v20);
            v21 = sub_971800(v3[1], v17);
            sub_971800(v21, v15);
LABEL_21:
            if ( v73 != v2 + 2 )
              operator delete(v73);
            return;
          }
        }
      }
LABEL_28:
      v15 = "uint32_t";
      goto LABEL_18;
    }
    v50 = (__int64 *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFF0LL);
    a2 = (const char *)*v50;
    sub_A73FE0((__int64)p_p_ptr, *v50);
    v51 = *(_WORD *)(*v50 + 18);
    if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 5 )
    {
      v52 = (v51 >> 3) & 0x1FF;
      if ( v52 == 443 )
      {
        v53 = j__strlen("Poly16");
        v54 = "Poly16";
      }
      else if ( v52 > 0x1BBu )
      {
        if ( ((v52 + 67) & 0x1FFu) > 1 )
          goto LABEL_28;
        v53 = j__strlen("Poly64");
        v54 = "Poly64";
      }
      else
      {
        if ( v52 != 438 )
          goto LABEL_28;
        v53 = j__strlen("Poly8");
        v54 = "Poly8";
      }
    }
    else
    {
      v60 = (v51 >> 3) & 0x1FF;
      if ( v60 == 451 )
      {
        v53 = j__strlen("Int16");
        v54 = "Int16";
      }
      else if ( v60 > 0x1C3u )
      {
        if ( v60 == 480 )
        {
          v53 = j__strlen("Float16");
          v54 = (char *)"Float16";
        }
        else if ( v60 <= 0x1E0u )
        {
          if ( v60 == 452 )
          {
            v53 = j__strlen("Int32");
            v54 = "Int32";
          }
          else
          {
            if ( v60 > 0x1C6u )
              goto LABEL_28;
            v53 = j__strlen("Int64");
            v54 = "Int64";
          }
        }
        else if ( v60 == 482 )
        {
          v53 = j__strlen("Float64");
          v54 = "Float64";
        }
        else if ( v60 >= 0x1E2u )
        {
          if ( v60 != 485 )
            goto LABEL_28;
          v53 = j__strlen("Bfloat16");
          v54 = "Bfloat16";
        }
        else
        {
          v53 = j__strlen("Float32");
          v54 = "Float32";
        }
      }
      else if ( v60 == 444 )
      {
        v53 = j__strlen("Uint32");
        v54 = "Uint32";
      }
      else if ( v60 > 0x1BCu )
      {
        if ( v60 > 0x1BEu )
        {
          if ( v60 != 449 )
            goto LABEL_28;
          v53 = j__strlen("Int8");
          v54 = "Int8";
        }
        else
        {
          v53 = j__strlen("Uint64");
          v54 = "Uint64";
        }
      }
      else
      {
        switch ( v60 )
        {
          case 0x1B6u:
            v53 = j__strlen("Uint8");
            v54 = "Uint8";
            break;
          case 0x1BBu:
            v53 = j__strlen("Uint16");
            v54 = "Uint16";
            break;
          case 0x68u:
            v53 = j__strlen("Mfloat8");
            v54 = "Mfloat8";
            break;
          default:
            goto LABEL_28;
        }
      }
    }
    v64[3] = v53;
    v55 = *(_DWORD *)(v4 + 20);
    v66[0] = v64;
    v66[2] = "x";
    LODWORD(v68) = v55;
    ptr = v66;
    v65 = 1283;
    v71 = v68;
    v67 = 770;
    v72[4] = 2306;
    p_ptr = &ptr;
    v64[0] = "__";
    v64[2] = v54;
    LOWORD(v81) = 770;
    v79 = "_t";
    sub_222F820(&v61, &p_ptr);
    v56 = sub_2257BD0(v3[1], v62);
    sub_22581D0(v56, v61, v62);
    if ( v61 != &v63 )
      operator delete(v61);
    goto LABEL_21;
  }
  if ( (unsigned int)v5 - 6 <= 1 )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFF0LL) + 18LL);
    LOWORD(v9) = (unsigned __int16)v9 >> 3;
    v10 = (unsigned int)(v9 + 74);
    LOWORD(v10) = v10 & 0x1FF;
    switch ( v10 )
    {
      case 0LL:
        if ( v5 == 6 )
        {
          v43 = "__SVUint8_t";
          v44 = j__strlen("__SVUint8_t");
        }
        else
        {
          v43 = "__SVBool_t";
          v44 = j__strlen("__SVBool_t");
        }
        break;
      case 5LL:
        v43 = "__SVUint16_t";
        v44 = j__strlen("__SVUint16_t");
        break;
      case 6LL:
        v43 = "__SVUint32_t";
        v44 = j__strlen("__SVUint32_t");
        break;
      case 7LL:
        v43 = "__SVUint64_t";
        v44 = j__strlen("__SVUint64_t");
        break;
      case 11LL:
        v43 = "__SVInt8_t";
        v44 = j__strlen("__SVInt8_t");
        break;
      case 13LL:
        v43 = "__SVInt16_t";
        v44 = j__strlen("__SVInt16_t");
        break;
      case 14LL:
        v43 = "__SVInt32_t";
        v44 = j__strlen("__SVInt32_t");
        break;
      case 15LL:
        v43 = "__SVInt64_t";
        v44 = j__strlen("__SVInt64_t");
        break;
      case 42LL:
        v43 = "__SVFloat16_t";
        v44 = j__strlen("__SVFloat16_t");
        break;
      case 43LL:
        v43 = "__SVFloat32_t";
        v44 = j__strlen("__SVFloat32_t");
        break;
      case 44LL:
        v43 = "__SVFloat64_t";
        v44 = j__strlen("__SVFloat64_t");
        break;
      case 47LL:
        v43 = "__SVBfloat16_t";
        v44 = j__strlen("__SVBfloat16_t");
        break;
      default:
        goto LABEL_28;
    }
    v45 = sub_A73FE0(*(_QWORD *)(*p_p_ptr + 8), (__int64)a2);
    v46 = p_p_ptr[1];
    v47 = 8 * v45;
    if ( (((unsigned __int8)a2[18] >> 3) & 0xF) != 7 )
      v47 = v45;
    sub_971800(v46, "9__SVE_VLSI");
    sub_E157C0(v3[1], v43, v44);
    v48 = sub_971800(v3[1], "Lj");
    v49 = sub_2257BD0(v48, v47);
    sub_971800(v49, "EE");
  }
  else if ( ((v5 + 8) & 0xFu) > 4 )
  {
    v23 = sub_971800(p_p_ptr[1], "Dv");
    v24 = sub_2257BD0(v23, *((unsigned int *)a2 + 5));
    v26 = *(_BYTE **)(v24 + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v24 + 24) )
    {
      sub_2257CD0(v24, 95);
    }
    else
    {
      v27 = (__int64)(v26 + 1);
      *(_QWORD *)(v24 + 32) = v26 + 1;
      *v26 = 95;
    }
    v28 = ((unsigned __int8)a2[18] >> 3) & 0xF;
    if ( v28 == 2 )
    {
      v58 = p_p_ptr[1];
      v59 = *(_BYTE **)(v58 + 32);
      if ( (unsigned __int64)v59 >= *(_QWORD *)(v58 + 24) )
      {
        sub_2257CD0(v58, 112);
      }
      else
      {
        *(_QWORD *)(v58 + 32) = v59 + 1;
        *v59 = 112;
      }
    }
    else if ( v28 == 3 )
    {
      v29 = p_p_ptr[1];
      v30 = *(_BYTE **)(v29 + 32);
      if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
      {
        sub_2257CD0(v29, 98);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v30 + 1;
        *v30 = 98;
      }
    }
    else
    {
      sub_E1BE40((__int64)p_p_ptr, *((_QWORD *)a2 + 4), (__int64)v26, v27, v25);
    }
  }
  else
  {
    v2 = &ptr;
    v6 = *((_QWORD *)a2 + 4);
    v70 = 0;
    ptr = v72;
    v71 = 20;
    v78 = 2;
    p_ptr = (void **)&off_2BC1F40;
    v82 = 0;
    v83 = 1;
    v81 = nullptr;
    v80 = 0;
    v79 = nullptr;
    v84 = &ptr;
    sub_2257B70(&p_ptr, 0, 0, 0);
    a2 = "__rvv_";
    p_p_ptr = (__int64 *)&p_ptr;
    sub_971800((__int64)&p_ptr, "__rvv_");
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 18LL);
    LOWORD(v7) = (unsigned __int16)v7 >> 3;
    v8 = (unsigned int)(v7 + 74);
    LOWORD(v8) = v8 & 0x1FF;
    switch ( v8 )
    {
      case 0LL:
        if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 8 )
          sub_971800((__int64)&p_ptr, "uint8");
        else
          sub_971800((__int64)&p_ptr, "bool");
        break;
      case 5LL:
        sub_971800((__int64)&p_ptr, "uint16");
        break;
      case 6LL:
        sub_971800((__int64)&p_ptr, "uint32");
        break;
      case 7LL:
        sub_971800((__int64)&p_ptr, "uint64");
        break;
      case 11LL:
        sub_971800((__int64)&p_ptr, "int8");
        break;
      case 13LL:
        sub_971800((__int64)&p_ptr, "int16");
        break;
      case 14LL:
        sub_971800((__int64)&p_ptr, "int32");
        break;
      case 15LL:
        sub_971800((__int64)&p_ptr, "int64");
        break;
      case 43LL:
        sub_971800((__int64)&p_ptr, "float32");
        break;
      case 44LL:
        sub_971800((__int64)&p_ptr, "float64");
        break;
      case 46LL:
        sub_971800((__int64)&p_ptr, "float16");
        break;
      default:
        goto LABEL_28;
    }
    v31 = *(_QWORD *)(*v3 + 8);
    v32 = ((*(_BYTE *)(v4 + 18) >> 3) & 0xFu) - 10;
    if ( (unsigned int)v32 > 2 )
    {
      v33 = sub_A73FE0(*(_QWORD *)(*v3 + 8), v4);
      v31 = *(_QWORD *)(*v3 + 8);
    }
    else
    {
      v33 = dword_23D1648[v32];
    }
    v34 = *(_QWORD *)(v31 + 17448);
    v35 = *(__int64 (**)())(*(_QWORD *)v34 + 280LL);
    if ( v35 == sub_A32170 )
    {
      v36 = (int)v73;
    }
    else
    {
      v73 = (void *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v35)(v34, *(_QWORD *)(v31 + 2320), 0, 0);
      v36 = (int)v73;
      v74 = v57;
    }
    v37 = v36 << 6;
    if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 8 )
    {
      v38 = v81;
      if ( (unsigned __int64)v81 >= v80 )
      {
        sub_2257CD0(&p_ptr, 109);
      }
      else
      {
        ++v81;
        *v38 = 109;
      }
      if ( v37 <= v33 )
      {
        sub_2257BD0(&p_ptr, v33 / v37);
      }
      else
      {
        v39 = v81;
        if ( (unsigned __int64)v81 >= v80 )
        {
          v40 = (void ***)sub_2257CD0(&p_ptr, 102);
        }
        else
        {
          v40 = &p_ptr;
          ++v81;
          *v39 = 102;
        }
        sub_2257BD0(v40, v37 / v33);
      }
    }
    else
    {
      sub_2257BD0(&p_ptr, v37 / v33);
    }
    sub_971800((__int64)&p_ptr, "_t");
    sub_971800(v3[1], "9__RVV_VLSI");
    sub_E157C0(v3[1], ptr, v70);
    v41 = sub_971800(v3[1], "Lj");
    v42 = sub_2257BD0(v41, v33);
    sub_971800(v42, "EE");
    p_ptr = (void **)&unk_2C4C288;
    sub_2257A60(&p_ptr);
    if ( ptr != v72 )
      free(ptr);
  }
}

