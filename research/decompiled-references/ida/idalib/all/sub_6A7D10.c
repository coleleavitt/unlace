__int64 __fastcall sub_6A7D10(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  int v8; // ebp
  __int64 result; // rax
  __int64 *v11; // rax
  __int64 v12; // r12
  int v13; // eax
  __m128i v14; // xmm0
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  void *v25; // rdi
  void *v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // edi
  int v30; // edx
  unsigned int v31; // edi
  int v32; // edx
  int v33; // edx
  signed int v34; // ecx
  unsigned int v35; // edi
  int v36; // edx
  signed int v37; // edi
  __int64 v38; // rax
  unsigned __int8 (__fastcall *v39)(unsigned int *, _QWORD, __int64, _QWORD); // rax
  int v40; // r15d
  _DWORD *v41; // rcx
  _DWORD *v42; // rax
  void *v43; // rdi
  int v44; // [rsp+0h] [rbp-F8h]
  unsigned int v45; // [rsp+0h] [rbp-F8h]
  unsigned int v46; // [rsp+0h] [rbp-F8h]
  unsigned int v47; // [rsp+0h] [rbp-F8h]
  int v48; // [rsp+4h] [rbp-F4h]
  int v49; // [rsp+4h] [rbp-F4h]
  void **v50; // [rsp+8h] [rbp-F0h]
  __int64 v51; // [rsp+10h] [rbp-E8h]
  int v52[2]; // [rsp+18h] [rbp-E0h]
  int v53[2]; // [rsp+18h] [rbp-E0h]
  int v54[2]; // [rsp+20h] [rbp-D8h]
  int v55; // [rsp+28h] [rbp-D0h]
  __int64 v56[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v58; // [rsp+48h] [rbp-B0h]
  void *v59; // [rsp+60h] [rbp-98h] BYREF
  __int128 v60; // [rsp+68h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-80h]
  int v62; // [rsp+80h] [rbp-78h]
  void *v63; // [rsp+90h] [rbp-68h] BYREF
  __int128 v64; // [rsp+98h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-50h]
  int v66; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]

  v44 = a5;
  v67 = __readfsqword(0x28u);
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
      v61 = 0;
      v62 = -1;
      v65 = 0;
      v66 = -1;
      v60 = 0;
      v64 = 0;
      v58 = 0;
      v59 = nullptr;
      v63 = nullptr;
      ptr = nullptr;
      v12 = *v11;
      LODWORD(v51) = 0;
      v52[0] = 0;
      v50 = &v59;
      *(_QWORD *)v54 = *v11 + 24 * v11[1];
      if ( *(_QWORD *)v54 == *v11 )
      {
        result = 1214;
        goto LABEL_60;
      }
      do
      {
        HIWORD(v51) = *(_WORD *)(v12 + 18);
        v48 = HIWORD(v51);
        result = sub_6A7D10(a1, v12, HIWORD(v51), 0, 1);
        if ( (_DWORD)result )
        {
          v25 = ptr;
          goto LABEL_56;
        }
        v13 = *(_DWORD *)v12;
        if ( *(_DWORD *)v12 == 2 )
        {
          v25 = ptr;
          result = 1096;
          goto LABEL_56;
        }
        if ( v13 > 2 )
        {
          if ( (unsigned int)(v13 - 3) <= 1 )
          {
            v25 = ptr;
            v40 = *(_DWORD *)(v12 + 8);
            v41 = (char *)ptr + 4 * v58;
            if ( ptr != v41 )
            {
              v42 = ptr;
              while ( v40 != *v42 )
              {
                if ( v41 == ++v42 )
                  goto LABEL_51;
              }
              if ( v42 != v41 )
              {
                result = 653;
                goto LABEL_56;
              }
            }
LABEL_51:
            if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v58 + 1, 4);
              v41 = (char *)ptr + 4 * v58;
            }
            *v41 = v40;
            *(_QWORD *)&v58 = v58 + 1;
          }
        }
        else if ( v13 == 1 )
        {
          v14 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v12 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v12 + 8) + (unsigned int)HIWORD(v51)));
          *(__m128i *)v56 = _mm_unpacklo_epi32(v14, _mm_cmpgt_epi32((__m128i)0LL, v14));
          if ( (unsigned __int8)rangeset_t_has_common(&v63, v56, 0) )
          {
            v25 = ptr;
            result = 652;
            goto LABEL_56;
          }
          rangeset_t_add((int)&v63, (int)v56, v15, v16, v17, v18, v44, v50, v51, v52[0], v54[0], (int)&v63, v56[0]);
        }
        v19 = *(unsigned __int16 *)(v12 + 16);
        v56[0] = *(unsigned __int16 *)(v12 + 16);
        v56[1] = v48 + v19;
        if ( (unsigned __int8)rangeset_t_has_common(v50, v56, 0) )
        {
          v25 = ptr;
          result = 654;
          goto LABEL_56;
        }
        rangeset_t_add((int)v50, (int)v56, v20, v21, v22, v23, v44, v50, v51, v52[0], v54[0], v55, v56[0]);
        v24 = *(unsigned __int16 *)(v12 + 16);
        if ( v24 < (int)v51 )
        {
          v25 = ptr;
          result = 663;
          goto LABEL_56;
        }
        v12 += 24;
        *(_QWORD *)v52 = HIWORD(v51) + *(_QWORD *)v53;
        LODWORD(v51) = v24 + v49;
      }
      while ( v12 != *(_QWORD *)v54 );
      if ( a4 )
      {
        if ( (unsigned __int8)rangeset_t_has_common2(a4, v50) )
        {
          v25 = ptr;
          result = 655;
          goto LABEL_56;
        }
        rangeset_t_add2((int)v50);
        v25 = ptr;
        v26 = ptr;
        if ( (_QWORD)v60 != 1 )
        {
          result = 656;
          goto LABEL_56;
        }
        if ( *(_QWORD *)v59 || (v27 = v8, v8 != *((_QWORD *)v59 + 1)) )
        {
          result = 657;
LABEL_56:
          if ( v25 )
          {
            v45 = result;
            *(_QWORD *)&v58 = 0;
            qfree(v25);
            v43 = v63;
            result = v45;
          }
          else
          {
            v43 = v63;
          }
          if ( v43 )
          {
            v46 = result;
            *(_QWORD *)&v64 = 0;
            qfree(v43);
            result = v46;
          }
LABEL_60:
          if ( v59 )
          {
            v47 = result;
            *(_QWORD *)&v60 = 0;
            qfree(v59);
            return v47;
          }
          return result;
        }
      }
      else
      {
        v26 = ptr;
        v27 = v8;
      }
      v25 = v26;
      result = 658;
      if ( v27 < *(_QWORD *)v52 )
        goto LABEL_56;
      if ( v26 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v26);
      }
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63);
      }
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59);
        LODWORD(v6) = *a2;
      }
      else
      {
LABEL_43:
        LODWORD(v6) = *a2;
      }
LABEL_28:
      if ( (unsigned int)(v6 - 3) > 1 || (_BYTE)v44 )
      {
LABEL_6:
        result = 0;
      }
      else
      {
        v32 = sub_6A66A0(a1, v6, a2[2], v8);
        result = 1085;
        if ( v32 != 1 )
        {
          result = 1086;
          if ( v32 != 2 )
            result = 0;
        }
      }
      break;
    case 3:
      v28 = a1[2];
      v29 = a2[2];
      v30 = (unsigned __int16)v29;
      result = 647;
      v31 = HIWORD(v29);
      if ( *(_DWORD *)(v28 + 64) > v30 )
      {
        result = 648;
        if ( v31 <= 0x1F )
          goto LABEL_26;
      }
      return result;
    case 4:
      v34 = *(_DWORD *)(a1[2] + 64LL);
      v35 = a2[2];
      v36 = (unsigned __int16)v35;
      result = 650;
      v37 = HIWORD(v35);
      if ( v34 <= v36 )
        return result;
      result = 651;
      if ( v34 <= v37 )
        return result;
LABEL_26:
      if ( !a4 )
        goto LABEL_28;
      result = 649;
      if ( !*(_QWORD *)(a4 + 8) )
        goto LABEL_28;
      return result;
    case 5:
      v33 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8LL);
      if ( v33 < 0 )
        return 1095;
      result = 1095;
      if ( v33 >= *(_DWORD *)(a1[2] + 64LL) )
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
      if ( *((_QWORD *)a2 + 1) != -1 )
        goto LABEL_4;
      return result;
    default:
      v38 = sub_6B1FD0(a1, v6, a3);
      if ( v38 )
      {
        v39 = *(unsigned __int8 (__fastcall **)(unsigned int *, _QWORD, __int64, _QWORD))(v38 + 32);
        if ( !v39 || v39(a2, (unsigned int)v8, a4, (unsigned __int8)v44) )
          goto LABEL_43;
      }
      return 646;
  }
  return result;
}
