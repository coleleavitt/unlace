void __fastcall sub_E47460(__int64 *p_p_ptr, const char *a2)
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
  _BYTE *v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  _BYTE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rdi
  __int64 (*v33)(); // rax
  int v34; // r14d
  unsigned int v35; // r14d
  _BYTE *v36; // rax
  _BYTE *v37; // rax
  void ***v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  const char *v41; // r13
  size_t v42; // r12
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // r12
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // ax
  size_t v51; // rax
  char *v52; // rdx
  int v53; // ecx
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rdi
  _BYTE *v57; // rax
  unsigned __int16 v58; // ax
  void *v59; // [rsp+0h] [rbp-198h] BYREF
  __int64 v60; // [rsp+8h] [rbp-190h]
  __int64 v61; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v62[4]; // [rsp+20h] [rbp-178h] BYREF
  __int16 v63; // [rsp+40h] [rbp-158h]
  _QWORD v64[4]; // [rsp+50h] [rbp-148h] BYREF
  __int16 v65; // [rsp+70h] [rbp-128h]
  __int64 v66; // [rsp+80h] [rbp-118h]
  void *ptr; // [rsp+B0h] [rbp-E8h] BYREF
  size_t v68; // [rsp+B8h] [rbp-E0h]
  __int64 v69; // [rsp+C0h] [rbp-D8h]
  _WORD v70[12]; // [rsp+C8h] [rbp-D0h] BYREF
  void *v71; // [rsp+E0h] [rbp-B8h] BYREF
  int v72; // [rsp+E8h] [rbp-B0h]
  _OWORD v73[2]; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+110h] [rbp-88h]
  void **p_ptr; // [rsp+120h] [rbp-78h] BYREF
  int v76; // [rsp+128h] [rbp-70h]
  const char *v77; // [rsp+130h] [rbp-68h]
  unsigned __int64 v78; // [rsp+138h] [rbp-60h]
  _BYTE *v79; // [rsp+140h] [rbp-58h]
  char v80; // [rsp+148h] [rbp-50h]
  int v81; // [rsp+14Ch] [rbp-4Ch]
  void **v82; // [rsp+150h] [rbp-48h]

  v3 = p_p_ptr;
  v4 = (__int64)a2;
  v5 = ((unsigned __int8)a2[18] >> 3) & 0xF;
  if ( (unsigned int)v5 - 4 <= 1 )
  {
    v2 = &v71;
    v11 = *(_QWORD *)(*(_QWORD *)(*p_p_ptr + 8) + 17448LL);
    v71 = v73;
    sub_E391F0(&v71, *(_BYTE **)(v11 + 216), *(_QWORD *)(v11 + 216) + *(_QWORD *)(v11 + 224));
    v12 = *(_DWORD *)(v11 + 260);
    v73[1] = _mm_loadu_si128((const __m128i *)(v11 + 248));
    v74 = *(_QWORD *)(v11 + 264);
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
            v18 = v16 * sub_A97D20((__int64)p_p_ptr, (__int64)a2);
            v19 = (v18 != 64) + 9LL;
            if ( v18 != 64 )
              v17 = "__simd128_";
            v20 = strlen(v15);
            sub_227B910(v3[1], v19 + v20);
            v21 = sub_995540(v3[1], v17);
            sub_995540(v21, v15);
LABEL_21:
            if ( v71 != v2 + 2 )
              operator delete(v71);
            return;
          }
        }
      }
LABEL_28:
      v15 = "uint32_t";
      goto LABEL_18;
    }
    v48 = (__int64 *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFF0LL);
    a2 = (const char *)*v48;
    sub_A97D20((__int64)p_p_ptr, *v48);
    v49 = *(_WORD *)(*v48 + 18);
    if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 5 )
    {
      v50 = (v49 >> 3) & 0x1FF;
      if ( v50 == 443 )
      {
        v51 = j__strlen("Poly16");
        v52 = "Poly16";
      }
      else if ( v50 > 0x1BBu )
      {
        if ( ((v50 + 67) & 0x1FFu) > 1 )
          goto LABEL_28;
        v51 = j__strlen("Poly64");
        v52 = "Poly64";
      }
      else
      {
        if ( v50 != 438 )
          goto LABEL_28;
        v51 = j__strlen("Poly8");
        v52 = "Poly8";
      }
    }
    else
    {
      v58 = (v49 >> 3) & 0x1FF;
      if ( v58 == 451 )
      {
        v51 = j__strlen("Int16");
        v52 = "Int16";
      }
      else if ( v58 > 0x1C3u )
      {
        if ( v58 == 480 )
        {
          v51 = j__strlen("Float16");
          v52 = (char *)"Float16";
        }
        else if ( v58 <= 0x1E0u )
        {
          if ( v58 == 452 )
          {
            v51 = j__strlen("Int32");
            v52 = "Int32";
          }
          else
          {
            if ( v58 > 0x1C6u )
              goto LABEL_28;
            v51 = j__strlen("Int64");
            v52 = "Int64";
          }
        }
        else if ( v58 == 482 )
        {
          v51 = j__strlen("Float64");
          v52 = "Float64";
        }
        else if ( v58 >= 0x1E2u )
        {
          if ( v58 != 485 )
            goto LABEL_28;
          v51 = j__strlen("Bfloat16");
          v52 = "Bfloat16";
        }
        else
        {
          v51 = j__strlen("Float32");
          v52 = "Float32";
        }
      }
      else if ( v58 == 444 )
      {
        v51 = j__strlen("Uint32");
        v52 = "Uint32";
      }
      else if ( v58 > 0x1BCu )
      {
        if ( v58 > 0x1BEu )
        {
          if ( v58 != 449 )
            goto LABEL_28;
          v51 = j__strlen("Int8");
          v52 = "Int8";
        }
        else
        {
          v51 = j__strlen("Uint64");
          v52 = "Uint64";
        }
      }
      else
      {
        switch ( v58 )
        {
          case 0x1B6u:
            v51 = j__strlen("Uint8");
            v52 = "Uint8";
            break;
          case 0x1BBu:
            v51 = j__strlen("Uint16");
            v52 = "Uint16";
            break;
          case 0x68u:
            v51 = j__strlen("Mfloat8");
            v52 = "Mfloat8";
            break;
          default:
            goto LABEL_28;
        }
      }
    }
    v62[3] = v51;
    v53 = *(_DWORD *)(v4 + 20);
    v64[0] = v62;
    v64[2] = "x";
    LODWORD(v66) = v53;
    ptr = v64;
    v63 = 1283;
    v69 = v66;
    v65 = 770;
    v70[4] = 2306;
    p_ptr = &ptr;
    v62[0] = "__";
    v62[2] = v52;
    LOWORD(v79) = 770;
    v77 = "_t";
    sub_2253560(&v59, &p_ptr);
    v54 = sub_227B910(v3[1], v60);
    sub_227BF10(v54, v59, v60);
    if ( v59 != &v61 )
      operator delete(v59);
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
          v41 = "__SVUint8_t";
          v42 = j__strlen("__SVUint8_t");
        }
        else
        {
          v41 = "__SVBool_t";
          v42 = j__strlen("__SVBool_t");
        }
        break;
      case 5LL:
        v41 = "__SVUint16_t";
        v42 = j__strlen("__SVUint16_t");
        break;
      case 6LL:
        v41 = "__SVUint32_t";
        v42 = j__strlen("__SVUint32_t");
        break;
      case 7LL:
        v41 = "__SVUint64_t";
        v42 = j__strlen("__SVUint64_t");
        break;
      case 11LL:
        v41 = "__SVInt8_t";
        v42 = j__strlen("__SVInt8_t");
        break;
      case 13LL:
        v41 = "__SVInt16_t";
        v42 = j__strlen("__SVInt16_t");
        break;
      case 14LL:
        v41 = "__SVInt32_t";
        v42 = j__strlen("__SVInt32_t");
        break;
      case 15LL:
        v41 = "__SVInt64_t";
        v42 = j__strlen("__SVInt64_t");
        break;
      case 42LL:
        v41 = "__SVFloat16_t";
        v42 = j__strlen("__SVFloat16_t");
        break;
      case 43LL:
        v41 = "__SVFloat32_t";
        v42 = j__strlen("__SVFloat32_t");
        break;
      case 44LL:
        v41 = "__SVFloat64_t";
        v42 = j__strlen("__SVFloat64_t");
        break;
      case 47LL:
        v41 = "__SVBfloat16_t";
        v42 = j__strlen("__SVBfloat16_t");
        break;
      default:
        goto LABEL_28;
    }
    v43 = sub_A97D20(*(_QWORD *)(*p_p_ptr + 8), (__int64)a2);
    v44 = p_p_ptr[1];
    v45 = 8 * v43;
    if ( (((unsigned __int8)a2[18] >> 3) & 0xF) != 7 )
      v45 = v43;
    sub_995540(v44, "9__SVE_VLSI");
    sub_E39500(v3[1], v41, v42);
    v46 = sub_995540(v3[1], "Lj");
    v47 = sub_227B910(v46, v45);
    sub_995540(v47, "EE");
  }
  else if ( ((v5 + 8) & 0xFu) > 4 )
  {
    v23 = sub_995540(p_p_ptr[1], "Dv");
    v24 = sub_227B910(v23, *((unsigned int *)a2 + 5));
    v25 = *(_BYTE **)(v24 + 32);
    if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
    {
      sub_227BA10(v24, 95);
    }
    else
    {
      *(_QWORD *)(v24 + 32) = v25 + 1;
      *v25 = 95;
    }
    v26 = ((unsigned __int8)a2[18] >> 3) & 0xF;
    if ( v26 == 2 )
    {
      v56 = p_p_ptr[1];
      v57 = *(_BYTE **)(v56 + 32);
      if ( (unsigned __int64)v57 >= *(_QWORD *)(v56 + 24) )
      {
        sub_227BA10(v56, 112);
      }
      else
      {
        *(_QWORD *)(v56 + 32) = v57 + 1;
        *v57 = 112;
      }
    }
    else if ( v26 == 3 )
    {
      v27 = p_p_ptr[1];
      v28 = *(_BYTE **)(v27 + 32);
      if ( (unsigned __int64)v28 >= *(_QWORD *)(v27 + 24) )
      {
        sub_227BA10(v27, 98);
      }
      else
      {
        *(_QWORD *)(v27 + 32) = v28 + 1;
        *v28 = 98;
      }
    }
    else
    {
      sub_E3FB80(p_p_ptr, *((_QWORD *)a2 + 4));
    }
  }
  else
  {
    v2 = &ptr;
    v6 = *((_QWORD *)a2 + 4);
    v68 = 0;
    ptr = v70;
    v69 = 20;
    v76 = 2;
    p_ptr = (void **)&off_2BEBEE0;
    v80 = 0;
    v81 = 1;
    v79 = nullptr;
    v78 = 0;
    v77 = nullptr;
    v82 = &ptr;
    sub_227B8B0(&p_ptr, 0, 0, 0);
    a2 = "__rvv_";
    p_p_ptr = (__int64 *)&p_ptr;
    sub_995540((__int64)&p_ptr, "__rvv_");
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 18LL);
    LOWORD(v7) = (unsigned __int16)v7 >> 3;
    v8 = (unsigned int)(v7 + 74);
    LOWORD(v8) = v8 & 0x1FF;
    switch ( v8 )
    {
      case 0LL:
        if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 8 )
          sub_995540((__int64)&p_ptr, "uint8");
        else
          sub_995540((__int64)&p_ptr, "bool");
        break;
      case 5LL:
        sub_995540((__int64)&p_ptr, "uint16");
        break;
      case 6LL:
        sub_995540((__int64)&p_ptr, "uint32");
        break;
      case 7LL:
        sub_995540((__int64)&p_ptr, "uint64");
        break;
      case 11LL:
        sub_995540((__int64)&p_ptr, "int8");
        break;
      case 13LL:
        sub_995540((__int64)&p_ptr, "int16");
        break;
      case 14LL:
        sub_995540((__int64)&p_ptr, "int32");
        break;
      case 15LL:
        sub_995540((__int64)&p_ptr, "int64");
        break;
      case 43LL:
        sub_995540((__int64)&p_ptr, "float32");
        break;
      case 44LL:
        sub_995540((__int64)&p_ptr, "float64");
        break;
      case 46LL:
        sub_995540((__int64)&p_ptr, "float16");
        break;
      default:
        goto LABEL_28;
    }
    v29 = *(_QWORD *)(*v3 + 8);
    v30 = ((*(_BYTE *)(v4 + 18) >> 3) & 0xFu) - 10;
    if ( (unsigned int)v30 > 2 )
    {
      v31 = sub_A97D20(*(_QWORD *)(*v3 + 8), v4);
      v29 = *(_QWORD *)(*v3 + 8);
    }
    else
    {
      v31 = dword_23F57A8[v30];
    }
    v32 = *(_QWORD *)(v29 + 17448);
    v33 = *(__int64 (**)())(*(_QWORD *)v32 + 280LL);
    if ( v33 == sub_A55EB0 )
    {
      v34 = (int)v71;
    }
    else
    {
      v71 = (void *)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v33)(v32, *(_QWORD *)(v29 + 2320), 0, 0);
      v34 = (int)v71;
      v72 = v55;
    }
    v35 = v34 << 6;
    if ( ((*(_BYTE *)(v4 + 18) >> 3) & 0xF) == 8 )
    {
      v36 = v79;
      if ( (unsigned __int64)v79 >= v78 )
      {
        sub_227BA10(&p_ptr, 109);
      }
      else
      {
        ++v79;
        *v36 = 109;
      }
      if ( v35 <= v31 )
      {
        sub_227B910(&p_ptr, v31 / v35);
      }
      else
      {
        v37 = v79;
        if ( (unsigned __int64)v79 >= v78 )
        {
          v38 = (void ***)sub_227BA10(&p_ptr, 102);
        }
        else
        {
          v38 = &p_ptr;
          ++v79;
          *v37 = 102;
        }
        sub_227B910(v38, v35 / v31);
      }
    }
    else
    {
      sub_227B910(&p_ptr, v35 / v31);
    }
    sub_995540((__int64)&p_ptr, "_t");
    sub_995540(v3[1], "9__RVV_VLSI");
    sub_E39500(v3[1], ptr, v68);
    v39 = sub_995540(v3[1], "Lj");
    v40 = sub_227B910(v39, v31);
    sub_995540(v40, "EE");
    p_ptr = (void **)&unk_2C76288;
    sub_227B7A0(&p_ptr);
    if ( ptr != v70 )
      free(ptr);
  }
}
