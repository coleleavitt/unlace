__int64 __fastcall sub_836AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int8 **v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rsi
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rdi
  __int64 v32; // rax
  char v33; // r15
  __int64 v34; // rax
  unsigned int j; // r15d
  __int64 v36; // rdx
  unsigned int v37; // r14d
  char *v38; // rdx
  char *v39; // rdi
  _BYTE *v40; // rsi
  char *v41; // rax
  char *v42; // rdi
  char *v43; // rdx
  char v44; // cl
  char v45; // si
  __int64 v46; // rbp
  char v47; // cl
  _BYTE *v48; // rdx
  __int64 v49; // r15
  __int64 v50; // r13
  __int64 v51; // rbp
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned int i; // r15d
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rbx
  unsigned int v59; // r14d
  __int64 v60; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  __int64 v62; // [rsp+8h] [rbp-80h]
  __int64 v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  unsigned int v66; // [rsp+18h] [rbp-70h]
  int v67; // [rsp+1Ch] [rbp-6Ch]
  void *v68; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v69; // [rsp+28h] [rbp-60h]
  char v70; // [rsp+2Ch] [rbp-5Ch]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]
  _BYTE s[64]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a4;
  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)v10;
  v12 = *(unsigned __int8 *)(*(_QWORD *)v10 + 16LL);
  if ( (_BYTE)v12 != 13 || ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1E7 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0:
      case 1:
        return 1;
      case 2:
        sub_828600(a1, a2 + 8, a3, a4);
        return 1;
      case 3:
        v27 = sub_2575D20(a1, v12, v11);
        v28 = a2 + 8;
        if ( *(_QWORD *)(a2 + 8) == v27 )
          sub_25807A0(&ptr, v28);
        else
          sub_2580530(&ptr, v28);
        v70 = 1;
        v69 = si128.m128i_i32[0];
        v68 = ptr;
        sub_828600(a1, (__int64)&v68, a3, v7);
        if ( v69 <= 0x40 )
          return 1;
        goto LABEL_33;
      case 4:
      case 7:
      case 0xB:
      case 0xC:
      case 0xD:
        v14 = *(_QWORD *)a1;
        v15 = sub_AC6DA0(*(_QWORD *)(a1 + 104));
        v16 = (unsigned __int8 **)sub_A2E1A0(v14, v15, 2189, 0);
        if ( v16 )
          sub_8356A0(v16, a3, 8u);
        return 0;
      case 5:
      case 6:
        if ( *(_BYTE *)(v9 + 16) != 14 )
          v9 = sub_B0D320(v9);
        v17 = *(_QWORD *)(v9 + 32);
        v18 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v60 = v7 + sub_70E2F0(v18, v17);
        if ( *(_DWORD *)a2 == 5 )
        {
          sub_828600(a1, a2 + 8, v17, v7);
          sub_828600(a1, a2 + 24, v17, v60);
          return 1;
        }
        v20 = a2 + 8;
        v21 = sub_2575D20(v18, v17, v19);
        if ( *(_QWORD *)(a2 + 8) == v21 )
          sub_25807A0(&ptr, v20);
        else
          sub_2580530(&ptr, v20);
        v70 = 1;
        v69 = si128.m128i_i32[0];
        v68 = ptr;
        sub_828600(a1, (__int64)&v68, v17, v7);
        if ( v69 > 0x40 && v68 )
          operator delete[](v68);
        v22 = a2 + 32;
        if ( v21 == *(_QWORD *)(a2 + 32) )
          sub_25807A0(&ptr, v22);
        else
          sub_2580530(&ptr, v22);
        v70 = 1;
        v69 = si128.m128i_i32[0];
        v68 = ptr;
        sub_828600(a1, (__int64)&v68, v17, v60);
        goto LABEL_19;
      case 8:
        if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 56 > 1 )
        {
          v9 = sub_B0D320(v9);
          v29 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v11 = *(_QWORD *)v29;
          LOBYTE(v12) = *(_BYTE *)(*(_QWORD *)v29 + 16LL);
        }
        v30 = *(_DWORD *)(v9 + 20);
        v62 = *(_QWORD *)(v9 + 32);
        v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        if ( (_BYTE)v12 == 57 )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v32 + 16) == 13 && ((*(_WORD *)(v32 + 18) >> 3) & 0x1FF) == 0x1B3 )
          {
            v33 = *(_BYTE *)(*(_QWORD *)(v31 + 17288) + 272LL);
            v69 = v30;
            if ( v30 > 0x40 )
            {
              sub_2585A50(&v68, 0, 0);
            }
            else
            {
              v68 = nullptr;
              if ( !v30 )
              {
                ptr = s;
                si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9A0);
                goto LABEL_89;
              }
            }
            if ( v33 )
            {
              a4 = 0;
              for ( i = 0; i < v30; ++i )
              {
                v64 = a4;
                v55 = v30 - 1 - i;
                sub_2586A80(&v68, *(_QWORD *)(a2 + 8) + a4 + 8, v55);
                a4 = v64 + 56;
              }
            }
            else
            {
              v34 = 0;
              for ( j = 0; j < v30; ++j )
              {
                v36 = j;
                v63 = v34;
                sub_2586A80(&v68, *(_QWORD *)(a2 + 8) + v34 + 8, v36);
                v34 = v63 + 56;
              }
            }
            v37 = v30 >> 3;
            ptr = s;
            si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9A0);
            if ( v37 )
            {
              v38 = &s[v37];
              v39 = s;
              if ( v37 > 8 )
              {
                sub_25D6230(&ptr, s, v37, 1);
                v40 = ptr;
                if ( v37 == si128.m128i_i64[0] )
                  goto LABEL_48;
                v39 = (char *)ptr + si128.m128i_i64[0];
                v38 = (char *)ptr + v37;
              }
              memset(v39, 0, v38 - v39);
              v40 = ptr;
LABEL_48:
              si128.m128i_i64[0] = v37;
              goto LABEL_49;
            }
LABEL_89:
            v40 = s;
            v37 = 0;
LABEL_49:
            sub_2592CE0(&v68, v40, v37, a4, a5);
            v41 = (char *)ptr;
            v42 = (char *)ptr + si128.m128i_i64[0];
            if ( !*(_BYTE *)(a1 + 96) )
            {
              if ( ptr == v42 )
                goto LABEL_58;
              v43 = v42 - 1;
              if ( ptr >= v42 - 1 )
                goto LABEL_55;
              do
              {
                v44 = *v41;
                v45 = *v43;
                ++v41;
                --v43;
                *(v41 - 1) = v45;
                v43[1] = v44;
              }
              while ( v41 < v43 );
              v41 = (char *)ptr;
              v42 = (char *)ptr + si128.m128i_i64[0];
            }
            if ( v41 != v42 )
            {
LABEL_55:
              v46 = 2 * v7;
              do
              {
                v47 = *v41++;
                v48 = (_BYTE *)(v46 + *(_QWORD *)(a1 + 8));
                v46 += 2;
                *v48 = v47;
                v48[1] = 1;
              }
              while ( v42 != v41 );
              v42 = (char *)ptr;
            }
LABEL_58:
            if ( v42 != s )
              free(v42);
LABEL_19:
            if ( v69 > 0x40 )
            {
LABEL_33:
              if ( v68 )
                operator delete[](v68);
            }
            return 1;
          }
        }
        v49 = sub_70E2F0(v31, v62);
        if ( !v30 )
          return 1;
        v50 = v7;
        v51 = 0;
        v52 = 56LL * v30;
        do
        {
          result = sub_836AC0(a1, v51 + *(_QWORD *)(a2 + 8), v62, v50);
          if ( !(_BYTE)result )
            return result;
          v51 += 56;
          v50 += v49;
        }
        while ( v51 != v52 );
        break;
      case 9:
        v23 = *(unsigned __int8 *)(v9 + 16);
        if ( (unsigned __int8)(*(_BYTE *)(v9 + 16) - 4) <= 2u || v23 == 2 )
          goto LABEL_23;
        if ( v23 != 3 )
        {
          if ( (unsigned __int8)(v12 - 2) > 4u )
            return 0;
          v53 = sub_B0D320(v9);
          v9 = v53;
          if ( !v53 )
            return 0;
          v23 = *(unsigned __int8 *)(v53 + 16);
LABEL_23:
          if ( (unsigned int)(v23 - 2) > 1 )
            return 0;
        }
        v61 = sub_70E2F0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(v9 + 32));
        v24 = *(unsigned int *)(a2 + 16);
        v67 = *(_DWORD *)(a2 + 20);
        v66 = v24;
        if ( (_DWORD)v24 )
        {
          v25 = v7;
          v26 = 0;
          v65 = 56 * v24;
          do
          {
            if ( !(unsigned __int8)sub_836AC0(a1, v26 + *(_QWORD *)(a2 + 8), *(_QWORD *)(v9 + 32), v25) )
              return 0;
            v26 += 56;
            v25 += v61;
          }
          while ( v65 != v26 );
          v56 = *(unsigned int *)(a2 + 16);
          v57 = *(_DWORD *)(a2 + 20);
        }
        else
        {
          v57 = *(_DWORD *)(a2 + 20);
          v56 = 0;
        }
        if ( (_DWORD)v56 == v57 )
          return 1;
        v58 = *(_QWORD *)(a2 + 8) + 56 * v56;
        if ( v66 == v67 )
          return 1;
        while ( 1 )
        {
          v59 = v66;
          if ( !(unsigned __int8)sub_836AC0(a1, v58, *(_QWORD *)(v9 + 32), v7 + v61 * v66) )
            break;
          ++v66;
          if ( v67 == v59 + 1 )
            return 1;
        }
        return 0;
      case 0xA:
        return sub_837240(a1, a2, a3, a4);
    }
  }
  return 1;
}

