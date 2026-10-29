__int64 __fastcall sub_6875D0(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebp
  __int64 result; // rax
  __int64 *v11; // rax
  __int64 v12; // r12
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  void *v23; // rdi
  void *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edi
  int v27; // edx
  unsigned int v28; // edi
  int v29; // edx
  int v30; // edx
  signed int v31; // ecx
  unsigned int v32; // edi
  int v33; // edx
  signed int v34; // edi
  __int64 v35; // rax
  unsigned __int8 (__fastcall *v36)(unsigned int *, _QWORD, __int64, _QWORD); // rax
  int v37; // r14d
  _DWORD *v38; // rcx
  _DWORD *v39; // rax
  void *v40; // rdi
  int v41; // [rsp+0h] [rbp-F8h]
  void *v42; // [rsp+8h] [rbp-F0h]
  unsigned int v43; // [rsp+8h] [rbp-F0h]
  unsigned int v44; // [rsp+8h] [rbp-F0h]
  unsigned int v45; // [rsp+8h] [rbp-F0h]
  void **v46; // [rsp+10h] [rbp-E8h]
  int v47; // [rsp+18h] [rbp-E0h]
  int v48; // [rsp+18h] [rbp-E0h]
  int v49; // [rsp+1Ch] [rbp-DCh]
  unsigned int v50; // [rsp+1Ch] [rbp-DCh]
  int v51[2]; // [rsp+20h] [rbp-D8h]
  int v52; // [rsp+28h] [rbp-D0h]
  __int64 v53; // [rsp+30h] [rbp-C8h]
  int v54[2]; // [rsp+38h] [rbp-C0h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+48h] [rbp-B0h]
  void *v57; // [rsp+60h] [rbp-98h] BYREF
  __int128 v58; // [rsp+68h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-80h]
  int v60; // [rsp+80h] [rbp-78h]
  void *v61; // [rsp+90h] [rbp-68h] BYREF
  __int128 v62; // [rsp+98h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-50h]
  int v64; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-40h]

  LODWORD(v42) = a5;
  v65 = __readfsqword(0x28u);
  if ( (int)a3 <= 0 )
    return 645;
  v6 = *a2;
  v8 = a3;
  switch ( (int)v6 )
  {
    case 0:
    case 1:
      goto LABEL_4;
    case 2:
      v11 = *((__int64 **)a2 + 1);
      v59 = 0;
      v60 = -1;
      v63 = 0;
      v64 = -1;
      v58 = 0;
      v62 = 0;
      v56 = 0;
      v57 = nullptr;
      v61 = nullptr;
      ptr = nullptr;
      v12 = *v11;
      v47 = 0;
      v46 = &v57;
      *(_QWORD *)v51 = *v11 + 24 * v11[1];
      if ( *(_QWORD *)v51 == *v11 )
      {
        result = 1214;
        goto LABEL_60;
      }
      do
      {
        HIDWORD(v42) = *(unsigned __int16 *)(v12 + 18);
        result = sub_6875D0(a1, v12, *(unsigned __int16 *)(v12 + 18), 0, (char *)&dword_0 + 1);
        if ( (_DWORD)result )
        {
          v23 = ptr;
          goto LABEL_56;
        }
        v13 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 == 2 )
        {
          v23 = ptr;
          result = 1096;
          goto LABEL_56;
        }
        if ( v13 > 2 )
        {
          if ( (unsigned int)(v13 - 3) <= 1 )
          {
            v23 = ptr;
            v37 = *(_DWORD *)(v12 + 8);
            v38 = (char *)ptr + 4 * v56;
            if ( ptr != v38 )
            {
              v39 = ptr;
              while ( v37 != *v39 )
              {
                if ( v38 == ++v39 )
                  goto LABEL_51;
              }
              if ( v39 != v38 )
              {
                result = 653;
                goto LABEL_56;
              }
            }
LABEL_51:
            if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v56 + 1, 4);
              v38 = (char *)ptr + 4 * v56;
            }
            *v38 = v37;
            *(_QWORD *)&v56 = v56 + 1;
          }
        }
        else if ( v13 == 1 )
        {
          *(_QWORD *)v54 = _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(*(_DWORD *)(v12 + 8)),
                             _mm_cvtsi32_si128(*(_DWORD *)(v12 + 8) + HIDWORD(v42))).m128i_u64[0];
          if ( (unsigned __int8)rangeset_t_has_common(&v61, v54, 0) )
          {
            v23 = ptr;
            result = 652;
            goto LABEL_56;
          }
          rangeset_t_add((int)&v61, (int)v54, v14, v15, v16, v17, v41, v42, (__int64)v46, v47, v51[0], (int)&v61, v53);
        }
        v54[0] = *(unsigned __int16 *)(v12 + 16);
        v54[1] = HIDWORD(v42) + v54[0];
        if ( (unsigned __int8)rangeset_t_has_common(v46, v54, 0) )
        {
          v23 = ptr;
          result = 654;
          goto LABEL_56;
        }
        rangeset_t_add((int)v46, (int)v54, v18, v19, v20, v21, v41, v42, (__int64)v46, v47, v51[0], v52, v53);
        v22 = *(unsigned __int16 *)(v12 + 16);
        if ( v22 < v48 )
        {
          v23 = ptr;
          result = 663;
          goto LABEL_56;
        }
        v12 += 24;
        v50 = HIDWORD(v42) + v49;
        v47 = HIDWORD(v42) + v22;
      }
      while ( v12 != *(_QWORD *)v51 );
      if ( a4 )
      {
        if ( (unsigned __int8)rangeset_t_has_common2(a4, v46) )
        {
          v23 = ptr;
          result = 655;
          goto LABEL_56;
        }
        rangeset_t_add2((int)v46);
        v23 = ptr;
        v24 = ptr;
        if ( (_QWORD)v58 != 1 )
        {
          result = 656;
          goto LABEL_56;
        }
        if ( *(_DWORD *)v57 || v8 != *((_DWORD *)v57 + 1) )
        {
          result = 657;
LABEL_56:
          if ( v23 )
          {
            v43 = result;
            *(_QWORD *)&v56 = 0;
            qfree(v23);
            v40 = v61;
            result = v43;
          }
          else
          {
            v40 = v61;
          }
          if ( v40 )
          {
            v44 = result;
            *(_QWORD *)&v62 = 0;
            qfree(v40);
            result = v44;
          }
LABEL_60:
          if ( v57 )
          {
            v45 = result;
            *(_QWORD *)&v58 = 0;
            qfree(v57);
            return v45;
          }
          return result;
        }
      }
      else
      {
        v24 = ptr;
      }
      v23 = v24;
      result = 658;
      if ( v8 < v50 )
        goto LABEL_56;
      if ( v24 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v24);
      }
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v57);
        LODWORD(v6) = *a2;
      }
      else
      {
LABEL_43:
        LODWORD(v6) = *a2;
      }
LABEL_28:
      if ( (unsigned int)(v6 - 3) > 1 || (_BYTE)v42 )
      {
LABEL_6:
        result = 0;
      }
      else
      {
        v29 = sub_685F50(a1, v6, a2[2], v8);
        result = 1085;
        if ( v29 != 1 )
        {
          result = 1086;
          if ( v29 != 2 )
            result = 0;
        }
      }
      break;
    case 3:
      v25 = a1[2];
      v26 = a2[2];
      v27 = (unsigned __int16)v26;
      result = 647;
      v28 = HIWORD(v26);
      if ( *(_DWORD *)(v25 + 64) > v27 )
      {
        result = 648;
        if ( v28 <= 0x1F )
          goto LABEL_26;
      }
      return result;
    case 4:
      v31 = *(_DWORD *)(a1[2] + 64LL);
      v32 = a2[2];
      v33 = (unsigned __int16)v32;
      result = 650;
      v34 = HIWORD(v32);
      if ( v31 <= v33 )
        return result;
      result = 651;
      if ( v31 <= v34 )
        return result;
LABEL_26:
      if ( !a4 )
        goto LABEL_28;
      result = 649;
      if ( !*(_QWORD *)(a4 + 8) )
        goto LABEL_28;
      return result;
    case 5:
      v30 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL);
      if ( v30 < 0 )
        return 1095;
      result = 1095;
      if ( v30 >= *(_DWORD *)(a1[2] + 64LL) )
        return result;
LABEL_4:
      if ( !a4 )
        goto LABEL_6;
      result = 649;
      if ( !*(_QWORD *)(a4 + 8) )
        goto LABEL_6;
      return result;
    case 6:
      result = 1094;
      if ( a2[2] != -1 )
        goto LABEL_4;
      return result;
    default:
      v35 = sub_6917B0(a1, v6, a3);
      if ( v35 )
      {
        v36 = *(unsigned __int8 (__fastcall **)(unsigned int *, _QWORD, __int64, _QWORD))(v35 + 32);
        if ( !v36 || v36(a2, v8, a4, (unsigned __int8)v42) )
          goto LABEL_43;
      }
      return 646;
  }
  return result;
}

