__int64 __fastcall sub_3B8330(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  __int16 *v9; // rsi
  char v10; // al
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rsi
  unsigned __int64 *func; // rax
  int v23; // ecx
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __m128i v27; // xmm0
  __int64 v28; // r13
  __int64 v29; // r13
  unsigned __int64 v30; // r14
  __int64 v31; // r15
  __m128i v32; // xmm0
  __int64 v33; // r13
  __int64 v34; // r13
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // r15
  unsigned __int64 v39; // r14
  __m128i v40; // xmm0
  __m128i *v41; // r13
  __int64 v42; // r13
  unsigned __int64 v43; // r14
  __int64 v44; // r15
  _DWORD *v45; // r13
  __int64 v46; // r13
  unsigned __int64 v47; // r14
  __int64 v48; // r15
  __m128i si128; // xmm0
  __int64 v50; // r13
  __int64 v51; // r13
  __int64 v52; // r15
  unsigned __int64 v53; // r14
  char v54; // [rsp+0h] [rbp-68h]
  char v55; // [rsp+0h] [rbp-68h]
  __int16 v56; // [rsp+Eh] [rbp-5Ah] BYREF
  __int64 v57; // [rsp+10h] [rbp-58h] BYREF
  __int128 v58; // [rsp+18h] [rbp-50h]
  unsigned __int64 v59; // [rsp+28h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v57, &callui, a4, a5, a6);
    func = (unsigned __int64 *)get_func();
    if ( !func )
    {
      sub_2B1D90((unsigned int)"Please position the cursor within a function", (unsigned int)&v57, a3, v23, a5, a6, v54);
      return 0;
    }
    v8 = *func;
  }
  v9 = &v56;
  v56 = 3;
  if ( (unsigned int)sub_339AC0(
                       (unsigned int)"Reset decompiler information\n"
                                     "\n"
                                     "Reset remembered:\n"
                                     "<~L~ocal variable types:C>\n"
                                     "<~S~plit assignments:C>\n"
                                     "<#Instructions added or removed by the user#~U~ser-defined micro instructions:C>\n"
                                     "<#Forced arguments for ellipsis functions#~V~ararg fine tuning:C>\n"
                                     "<User-defined ~f~unction calls:C>\n"
                                     "<Disabled assignment ~p~ropagations:C>\n"
                                     "<All local ~i~nfo:C>\n"
                                     "<All ~c~aches:C>>\n"
                                     "\n",
                       (unsigned int)&v56,
                       a3,
                       3,
                       a5,
                       a6,
                       v54) )
  {
    v10 = v56;
    if ( !v56 )
      return 1;
    v12 = *(_QWORD *)(a1 + 16);
    v57 = 0;
    v58 = 0;
    if ( (v56 & 0x40) != 0 )
    {
      sub_2B3230(v12, v8);
      v51 = v58;
      if ( (_QWORD)v58 )
      {
        v52 = v58 + 14;
        v53 = v58 + 15;
        v51 = v58 - 1;
      }
      else
      {
        v53 = 16;
        v52 = 15;
      }
      v9 = (__int16 *)v57;
      if ( *((_QWORD *)&v58 + 1) < v53 )
      {
        v57 = qvector_reserve();
        v9 = (__int16 *)v57;
      }
      *(_QWORD *)&v58 = v53;
      *((_BYTE *)v9 + v52) = 0;
      qmemcpy((void *)(v57 + v51), " all_local_info", 15);
      v12 = *(_QWORD *)(a1 + 16);
      if ( (v56 & 0x80u) == 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (v56 & 1) != 0 )
      {
        sub_2132C0(v12, v8);
        v46 = v58;
        if ( (_QWORD)v58 )
        {
          v48 = v58 + 20;
          v47 = v58 + 21;
          v46 = v58 - 1;
        }
        else
        {
          v47 = 22;
          v48 = 21;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v47 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_425E50);
        *(_QWORD *)&v58 = v47;
        *((_BYTE *)v9 + v48) = 0;
        v50 = v57 + v46;
        *(__m128i *)v50 = si128;
        *(_QWORD *)(v50 + 13) = 0x73657079745F656CLL;
        v10 = v56;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( (v10 & 2) != 0 )
      {
        sub_2B5340(v12, v8);
        v42 = v58;
        if ( (_QWORD)v58 )
        {
          v44 = v58 + 6;
          v43 = v58 + 7;
          v42 = v58 - 1;
        }
        else
        {
          v43 = 8;
          v44 = 7;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v43 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        *(_QWORD *)&v58 = v43;
        *((_BYTE *)v9 + v44) = 0;
        v45 = (_DWORD *)(v57 + v42);
        *v45 = 1819308832;
        v10 = v56;
        *(_DWORD *)((char *)v45 + 3) = 1937009004;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( (v10 & 4) != 0 )
      {
        sub_2B5830(v12, v8);
        v37 = v58;
        if ( (_QWORD)v58 )
        {
          v38 = v58 + 17;
          v39 = v58 + 18;
          v37 = v58 - 1;
        }
        else
        {
          v39 = 19;
          v38 = 18;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v39 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        v40 = _mm_load_si128((const __m128i *)&xmmword_425E60);
        *(_QWORD *)&v58 = v39;
        *((_BYTE *)v9 + v38) = 0;
        v41 = (__m128i *)(v57 + v37);
        v41[1].m128i_i16[0] = 29550;
        v10 = v56;
        *v41 = v40;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( (v10 & 8) != 0 )
      {
        sub_2B3860(v12, v8);
        v34 = v58;
        if ( (_QWORD)v58 )
        {
          v36 = v58 + 13;
          v35 = v58 + 14;
          v34 = v58 - 1;
        }
        else
        {
          v35 = 15;
          v36 = 14;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v35 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        *(_QWORD *)&v58 = v35;
        *((_BYTE *)v9 + v36) = 0;
        qmemcpy((void *)(v57 + v34), " variadic_args", 14);
        v10 = v56;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( (v10 & 0x10) != 0 )
      {
        sub_3C09B0(v12, v8);
        v29 = v58;
        if ( (_QWORD)v58 )
        {
          v31 = v58 + 18;
          v30 = v58 + 19;
          v29 = v58 - 1;
        }
        else
        {
          v30 = 20;
          v31 = 19;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v30 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        v32 = _mm_load_si128((const __m128i *)&xmmword_425E70);
        *(_QWORD *)&v58 = v30;
        *((_BYTE *)v9 + v31) = 0;
        v33 = v57 + v29;
        *(__m128i *)v33 = v32;
        v10 = v56;
        *(_DWORD *)(v33 + 15) = 1936485473;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( (v10 & 0x20) != 0 )
      {
        sub_213310(v12, v8);
        v24 = v58;
        if ( (_QWORD)v58 )
        {
          v26 = v58 + 21;
          v25 = v58 + 22;
          v24 = v58 - 1;
        }
        else
        {
          v25 = 23;
          v26 = 22;
        }
        v9 = (__int16 *)v57;
        if ( *((_QWORD *)&v58 + 1) < v25 )
        {
          v57 = qvector_reserve();
          v9 = (__int16 *)v57;
        }
        v27 = _mm_load_si128((const __m128i *)&xmmword_425E80);
        *(_QWORD *)&v58 = v25;
        *((_BYTE *)v9 + v26) = 0;
        v28 = v57 + v24;
        *(__m128i *)v28 = v27;
        *(_QWORD *)(v28 + 14) = 0x736E6F6974616761LL;
        v10 = v56;
        v12 = *(_QWORD *)(a1 + 16);
      }
      if ( v10 >= 0 )
        goto LABEL_19;
    }
    sub_144450(v12, (__int64)v9);
    v13 = v58;
    if ( (_QWORD)v58 )
    {
      v14 = v58 + 10;
      v15 = v58 + 11;
      v13 = v58 - 1;
    }
    else
    {
      v15 = 12;
      v14 = 11;
    }
    v16 = v57;
    if ( *((_QWORD *)&v58 + 1) < v15 )
    {
      v57 = qvector_reserve();
      v16 = v57;
    }
    *(_QWORD *)&v58 = v15;
    *(_BYTE *)(v16 + v14) = 0;
    qmemcpy((void *)(v57 + v13), " all_caches", 11);
    v12 = *(_QWORD *)(a1 + 16);
LABEL_19:
    sub_145810(*(_QWORD *)(v12 + 112), v8, 0);
    if ( a2 )
      sub_3912F0(a2, 1);
    v21 = s1;
    if ( (_QWORD)v58 )
      LODWORD(v21) = v57;
    sub_338D50(
      (unsigned int)"AUTOHIDE REGISTRY\nThe following settings have been reset:%s",
      (_DWORD)v21,
      v17,
      v18,
      v19,
      v20,
      v55);
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    return 1;
  }
  return 0;
}
