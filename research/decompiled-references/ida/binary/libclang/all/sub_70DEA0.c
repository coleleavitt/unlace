__int64 __fastcall sub_70DEA0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // ebx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  _QWORD v28[2]; // [rsp+0h] [rbp-1D8h] BYREF
  int v29; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-1C0h]
  __int64 v31; // [rsp+20h] [rbp-1B8h]
  __int128 v32; // [rsp+28h] [rbp-1B0h]
  __int64 v33; // [rsp+38h] [rbp-1A0h]
  __int64 *v34; // [rsp+40h] [rbp-198h] BYREF
  int v35; // [rsp+48h] [rbp-190h]
  __int128 v36; // [rsp+50h] [rbp-188h]
  __int64 v37; // [rsp+60h] [rbp-178h]
  char v38; // [rsp+68h] [rbp-170h]
  int v39; // [rsp+6Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+70h] [rbp-168h]
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __m128i si128; // [rsp+88h] [rbp-150h]
  _BYTE v43[320]; // [rsp+98h] [rbp-140h] BYREF

  v8 = 0;
  v9 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v35 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v34 = (__int64 *)&off_49DA340;
  p_ptr = &ptr;
  ptr = v43;
  v38 = 0;
  v39 = 1;
  v37 = 0;
  v36 = 0;
  sub_2623850(&v34, 0, 0, 0, a5, a6);
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(v10 + 16);
  v12 = v10;
  if ( (_BYTE)v11 == 41 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
    goto LABEL_13;
  v10 = sub_B0D320(v10);
  v12 = *v9;
  if ( v10 )
  {
LABEL_2:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
LABEL_3:
      a2 = sub_B167E0(v12, v8);
      v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_4:
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(unsigned __int8 *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_5;
    }
  }
  v11 = *(unsigned __int8 *)(v12 + 16);
  v10 = v12;
LABEL_13:
  if ( (unsigned int)(v11 - 42) <= 1 )
  {
LABEL_14:
    while ( (*(_BYTE *)(v10 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 42 <= 1 )
          break;
        v10 = sub_B0D320(v10);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          goto LABEL_17;
      }
    }
LABEL_17:
    v12 = *v9;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 > 1 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(v10 + 8);
  v14 = *(unsigned __int8 *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v12 = v10;
  v8 = (unsigned int)(v14 - 42);
  if ( (unsigned int)v8 <= 1 )
  {
    v10 = sub_B0D320(v10);
    if ( !v10 )
    {
      v12 = *v9;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
LABEL_5:
  if ( (unsigned int)(v14 - 25) > 1 )
  {
    if ( (v13 & 7) != 0 || (v13 & 8) != 0 )
    {
      v26 = sub_B0CF30(a2, v8) & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD **)v26;
      v19 = v26;
      if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) == 32 )
        goto LABEL_22;
    }
    else
    {
      v17 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD **)v17;
      v19 = v17;
      if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 32 )
      {
LABEL_22:
        v20 = v18[4] & 0xFFFFFFFFFFFFFFF0LL;
        v21 = *(_QWORD *)v20;
        if ( *(_BYTE *)(*(_QWORD *)v20 + 16LL) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_B0D320(v21) )
        {
          v22 = v18[4];
          v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v23 + 16) == 26 )
          {
            if ( (*(_WORD *)(v23 + 22) & 0x3C0) == 0 )
              goto LABEL_25;
          }
          else if ( (*(_WORD *)(sub_B0D320(v23) + 22) & 0x3C0) == 0 )
          {
            goto LABEL_25;
          }
          v28[0] = &v29;
          v32 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v33 = 0;
          v28[1] = a1;
          v27 = sub_6DC670((__int64)a1, v22, (__int64)sub_6DE030, (__int64)v28);
          v19 = sub_6C5350((__int64)a1, v27, v18[5]);
        }
LABEL_25:
        v24 = *(_QWORD *)(a1[269] + 8LL);
        if ( *(_DWORD *)(a1[2161] + 340LL) > 9u )
          v25 = sub_A633A0(a1, v24, 0);
        else
          v25 = sub_A37140(a1, v24, 0);
        (*(void (__fastcall **)(__int64, unsigned __int64, __int64 **, _QWORD))(*(_QWORD *)v25 + 184LL))(
          v25,
          v19,
          &v34,
          0);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        goto LABEL_7;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v18[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 32 )
      goto LABEL_25;
    v18 = (_QWORD *)sub_B0D320(v18);
    if ( !v18 )
      goto LABEL_25;
    goto LABEL_22;
  }
  sub_70DA70(a1, (__int64)&v34, a2);
LABEL_7:
  v15 = sub_25D5270(ptr, si128.m128i_i64[0]);
  v34 = &qword_4A6EA70[2];
  sub_2623770(&v34);
  if ( ptr != v43 )
    free(ptr);
  return v15;
}

