__int64 __fastcall sub_AB92E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // r13
  __int64 v4; // rdx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  unsigned int v9; // eax
  int v10; // eax
  char v11; // di
  unsigned int v12; // eax
  int v13; // eax
  __int64 result; // rax
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rsi
  _DWORD *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdi
  unsigned int *v22; // rax
  void *v23; // rax
  void *v24; // r13
  _QWORD *v25; // r12
  int *v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  _DWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // r14
  __int64 v34; // rdi
  __int64 v35; // r14
  _DWORD *v36; // rbx
  _QWORD *v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rdi
  int v43; // esi
  int v44; // r14d
  int v45; // r14d
  __int64 v46; // rax
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int *v49; // rax
  _QWORD *v50; // r12
  int v51; // edx
  _QWORD *v52; // rax
  __int64 v53; // [rsp+0h] [rbp-110h]
  int v54; // [rsp+8h] [rbp-108h]
  __m128i v55; // [rsp+10h] [rbp-100h] BYREF
  int v56; // [rsp+20h] [rbp-F0h]
  void *v57; // [rsp+28h] [rbp-E8h]
  __int64 v58; // [rsp+30h] [rbp-E0h]
  _DWORD *v59; // [rsp+38h] [rbp-D8h]
  __int64 v60; // [rsp+40h] [rbp-D0h]
  _DWORD *v61; // [rsp+48h] [rbp-C8h]
  unsigned int *v62; // [rsp+50h] [rbp-C0h]
  __int64 v63; // [rsp+58h] [rbp-B8h]
  int v64; // [rsp+64h] [rbp-ACh]
  __int64 v65; // [rsp+68h] [rbp-A8h]
  int v66[2]; // [rsp+70h] [rbp-A0h]
  _DWORD *v67; // [rsp+78h] [rbp-98h]
  __int64 v68; // [rsp+80h] [rbp-90h]
  int v69; // [rsp+88h] [rbp-88h]
  unsigned int v70; // [rsp+8Ch] [rbp-84h]
  unsigned int v71; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+9Ch] [rbp-74h] BYREF
  __int128 v73; // [rsp+A0h] [rbp-70h] BYREF
  __m128i v74; // [rsp+B0h] [rbp-60h]
  _QWORD *v75; // [rsp+C0h] [rbp-50h] BYREF
  char v76; // [rsp+C8h] [rbp-48h]

  v7 = a2;
  if ( (int)a2 <= (int)a3 )
  {
    v9 = a3;
    a3 = a2;
    v7 = v9;
  }
  v10 = 33 * ((4097 * v7 + 2127912214) ^ ((unsigned int)(4097 * v7 + 2127912214) >> 19) ^ 0xC761C23C);
  v11 = (9 * (v10 + 29) - 59) ^ ((9 * (((v10 + 374761393) << 9) ^ (unsigned int)(v10 - 369570787)) - 42973499) >> 16);
  v12 = 33 * ((4097 * a3 + 2127912214) ^ ((4097 * a3 + 2127912214) >> 19) ^ 0xC761C23C);
  v13 = 9 * (((v12 + 374761393) << 9) ^ (v12 - 369570787)) - 42973499;
  result = (unsigned __int8)((v11 ^ 9)
                           - (v13 ^ BYTE2(v13) ^ 9)
                           - (v13 ^ BYTE2(v13) ^ 9)
                           + (v11 ^ 9)
                           - (v13 ^ BYTE2(v13) ^ 9));
  v15 = *(_BYTE *)(a1 + result + 592);
  *(_BYTE *)(a1 + result + 592) = v15 + 1;
  if ( v15 == -1 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    v17 = a3;
    ++*(_DWORD *)(a1 + 76);
    v60 = 8LL * a3;
    v18 = **(_DWORD ***)(v16 + v60);
    v19 = **(_DWORD ***)(v16 + 8 * v7);
    v58 = 8 * v7;
    v59 = v18;
    v61 = v19;
    v20 = sub_966380(a1, v18, v19);
    v21 = *(_QWORD *)(a1 + 16);
    v71 = v20;
    sub_9936C0(v21, v20 >> 1);
    v22 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v17)) + 24) + 8LL);
    if ( *((_BYTE *)v22 + 8) )
      sub_DBF6E(0);
    v23 = (void *)*v22;
    if ( (_DWORD)v23 )
    {
      v57 = v23;
      v24 = nullptr;
      v25 = nullptr;
      v68 = (__int64)&v75;
      *(_QWORD *)v66 = &v73;
      v55 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C56830), (__m128i)(unsigned __int64)sub_AB3570);
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(a1 + 504);
          v31 = *(_QWORD *)(v30 + v60);
          LODWORD(v30) = *(_DWORD *)(*(_QWORD *)(v30 + v58) + 4LL * (_QWORD)v24);
          v69 = *(_DWORD *)(v31 + 4LL * (_QWORD)v24);
          LODWORD(v75) = (_DWORD)v24;
          v70 = v30;
          v32 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v73 = v59;
          v63 = v32;
          v76 = 0;
          v67 = (_DWORD *)sub_15DCAD0(v32, v66[0], 0);
          v33 = v67;
          sub_15D0DF0(v68);
          if ( v33 )
            ++v67[2];
          v34 = *(_QWORD *)(a1 + 24);
          LODWORD(v75) = (_DWORD)v24;
          v76 = 0;
          v35 = v68;
          *(_QWORD *)&v73 = v61;
          v36 = (_DWORD *)sub_15DCAD0(v34, v66[0], 0);
          sub_15D0DF0(v35);
          if ( v36 )
            ++v36[2];
          v72 = sub_966380(a1, v67, v36);
          v74 = 0u;
          v73 = 0;
          v37 = (_QWORD *)operator new(0x18u);
          *v37 = a1;
          v38 = _mm_load_si128(&v55);
          v37[1] = &v72;
          v37[2] = &v71;
          *(_QWORD *)&v73 = v37;
          v39 = *(_QWORD *)(a1 + 24);
          v74 = v38;
          v28 = *(_QWORD *)(v39 + 912) == 0;
          v62 = &v71;
          v65 = v39;
          if ( !v28 )
          {
            v40 = sub_AB3570(*(__int64 **)v66);
            v41 = v40;
            if ( v40 )
              ++*(_DWORD *)(v40 + 8);
            v75 = nullptr;
            sub_966750(a1, v40, -1, 0, 0, -1, (__int64 ***)v68, v54, v55.m128i_i32[0], v55.m128i_i32[2], v56, v57);
            if ( v75 )
              sub_186B220(v75 - 1);
            if ( v41 )
            {
              v28 = (*(_DWORD *)(v41 + 8))-- == 1;
              if ( v28 )
                sub_15D7BC0(v65, v41);
            }
          }
          v42 = *(_QWORD *)(a1 + 16);
          v43 = *(_DWORD *)(a1 + 8);
          v44 = v69;
          v64 = v70 ^ 1;
          sub_B6A4A0(v42, v43, v69, v70 ^ 1, v72 ^ 1, 0, 0);
          v44 ^= 1u;
          sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v44, v70, v72 ^ 1, 0, 0);
          sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v69, v70, v72, 0, 0);
          sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v44, v64, v72, 0, 0);
          sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v72, v71 ^ 1, 0, 0);
          v45 = v72 ^ 1;
          if ( v25 )
          {
            v46 = *((unsigned int *)v25 - 1);
            if ( (_DWORD)v46 == *((_DWORD *)v25 - 2) )
            {
              v47 = (unsigned int)(3 * v46 + 1) >> 1;
              v48 = 4 * v47 + 8;
              if ( 4 * (int)v46 + 8 >= (unsigned int)v48 || (unsigned int)v46 >= v47 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_139F3A((__int64 *)v68, "Overflow encountered when expanding vector", v4);
                v5 = v68;
                v6 = (_QWORD *)v68;
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v6);
                sub_233E40(v5);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v70 = (unsigned int)(3 * v46 + 1) >> 1;
              v49 = (unsigned int *)sub_186B300(v25 - 1, v48);
              v25 = v49 + 2;
              *v49 = v70;
              v26 = (int *)&v49[v49[1] + 2];
            }
            else
            {
              v26 = (int *)v25 + v46;
            }
          }
          else
          {
            v52 = (_QWORD *)sub_186B270(0x10u);
            v25 = v52 + 1;
            *v52 = 2;
            v26 = (int *)(v52 + 1);
          }
          *v26 = v45;
          v27 = v65;
          ++*((_DWORD *)v25 - 1);
          if ( *(_QWORD *)(v27 + 912) )
            std::__ostream_insert<char,std::char_traits<char>>();
          if ( v74.m128i_i64[0] )
            ((void (__fastcall *)(_QWORD, _QWORD, __int64))v74.m128i_i64[0])(*(_QWORD *)v66, *(_QWORD *)v66, 3);
          if ( v36 )
          {
            v28 = v36[2]-- == 1;
            if ( v28 )
              sub_15D7BC0(v63, v36);
          }
          v29 = v67;
          if ( v67 )
          {
            v70 = v67[2];
            v28 = v70 == 1;
            v67[2] = v70 - 1;
            if ( v28 )
              break;
          }
          v24 = (char *)v24 + 1;
          if ( v57 == v24 )
            goto LABEL_37;
        }
        v24 = (char *)v24 + 1;
        sub_15D7BC0(v63, v29);
      }
      while ( v57 != v24 );
    }
    else
    {
      v25 = nullptr;
      v68 = (__int64)&v75;
      v62 = &v71;
    }
LABEL_37:
    v75 = v25;
    sub_AB8CB0((_QWORD *)v68, v62);
    v50 = v75;
    if ( v75 )
      v51 = *((_DWORD *)v75 - 1);
    else
      v51 = 0;
    sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v51, (_DWORD)v75, 0, 0, 1);
    result = v53;
    if ( v50 )
      return sub_186B220(v50 - 1);
  }
  return result;
}

