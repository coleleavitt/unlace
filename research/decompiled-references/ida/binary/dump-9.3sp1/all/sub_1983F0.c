__int64 __fastcall sub_1983F0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int16 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  int v17; // r8d
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rbp
  __int64 v28; // rdx
  int v29; // eax
  int v30; // [rsp+Ch] [rbp-ECh]
  int v31; // [rsp+Ch] [rbp-ECh]
  __m128i v32; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C0h]
  __m128i v37; // [rsp+40h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-A8h]
  int v39; // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall **v40)(); // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  int v42; // [rsp+70h] [rbp-88h]
  __int128 v43; // [rsp+78h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-70h]
  __int64 v45; // [rsp+90h] [rbp-68h]
  __int128 v46; // [rsp+98h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-40h]

  v2 = *(_DWORD **)(a1 + 32);
  v48 = __readfsqword(0x28u);
  if ( (unsigned int)(*v2 - 56) <= 1 )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  if ( *(_BYTE *)a2 == 10 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v6 == 5 )
    {
      v7 = *(_QWORD *)(a1 + 56);
      v8 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v6 + 8) + 8LL));
      v34 = -1;
      v35 = 0;
      v33 = v8.m128i_i64[0];
      v32 = _mm_unpacklo_epi64(v8, v8);
      v40 = off_4DBD70;
      v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
      v43 = -1;
      LODWORD(v36) = 0;
      v38 = -1;
      v39 = -1;
      v41 = -1;
      v42 = -1;
      v44 = -1;
      v45 = 0;
      v47 = 0;
      v46 = 0;
      (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v7 + 56LL))(v7, &v35, &v32);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56));
      v10 = *(__int64 **)(a1 + 48);
      v11 = (__int16 *)v9;
      v12 = *v10;
      if ( !(v10[1] << 7) )
      {
LABEL_47:
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v45);
        }
        return 0;
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v12 + 8) & 2) != 0 )
        {
LABEL_11:
          v13 = *v10 + (v10[1] << 7);
          goto LABEL_12;
        }
        if ( *((_QWORD *)&v43 + 1) == -1 || *((_QWORD *)&v43 + 1) != *(_QWORD *)(v12 + 80) )
        {
          if ( (v38 == -1 || v38 != *(_QWORD *)(v12 + 32)) && (v41 == -1 || v41 != *(_QWORD *)(v12 + 56)) )
            goto LABEL_11;
          v14 = *(_QWORD **)(v12 + 96);
          v15 = *(_QWORD *)(a1 + 24);
          v16 = &v14[*(_QWORD *)(v12 + 104)];
          if ( v14 != v16 )
          {
LABEL_19:
            while ( *v14 != v15 )
            {
              if ( ++v14 == v16 )
                goto LABEL_21;
            }
            if ( v16 != v14 )
              goto LABEL_11;
          }
LABEL_21:
          if ( *((_QWORD *)&v43 + 1) != *(_QWORD *)(v12 + 80) )
          {
            if ( *(_QWORD *)(v12 + 32) == v38 )
              v17 = v11[1];
            else
              v17 = v11[2];
            goto LABEL_24;
          }
        }
        else
        {
          v14 = *(_QWORD **)(v12 + 96);
          v15 = *(_QWORD *)(a1 + 24);
          v16 = &v14[*(_QWORD *)(v12 + 104)];
          if ( v16 != v14 )
            goto LABEL_19;
        }
        v17 = *v11;
LABEL_24:
        if ( v17 < 0 )
        {
          if ( !under_debugger )
            sub_383060(51610);
          goto LABEL_59;
        }
        v30 = v17;
        v18 = sub_1981A0((_QWORD *)a1, (__int64 *)v12, v17);
        v21 = v30;
        if ( v18 )
        {
          v27 = *(_QWORD *)(v12 + 72) + v30;
          goto LABEL_52;
        }
        v10 = *(__int64 **)(a1 + 48);
        v22 = *v10;
        v13 = *v10 + (v10[1] << 7);
        if ( *v10 != v13 )
        {
          v23 = *v10;
          while ( 1 )
          {
            if ( v12 != v22 )
            {
              v24 = v22;
              if ( (*(_BYTE *)(v22 + 8) & 2) != 0 )
                break;
            }
LABEL_45:
            v23 = *v10;
            v22 += 128;
            v13 = *v10 + (v10[1] << 7);
            if ( v22 == v13 )
              goto LABEL_12;
          }
          while ( v23 != v13 )
          {
            v25 = v23;
            while ( v24 == v25 || *(_QWORD *)(v24 + 88) != *(_QWORD *)(v25 + 72) )
            {
              v25 += 128;
              if ( v25 == v13 )
                goto LABEL_35;
            }
            if ( (*(_BYTE *)(v25 + 8) & 2) == 0 )
            {
              if ( v12 != v25 )
                goto LABEL_45;
              v31 = v21;
              v26 = sub_1981A0((_QWORD *)a1, (__int64 *)v22, v21);
              v21 = v31;
              if ( !v26 )
              {
                v10 = *(__int64 **)(a1 + 48);
                goto LABEL_45;
              }
              v27 = *(_QWORD *)(v22 + 72) + v31;
LABEL_52:
              if ( v45 )
              {
                *(_QWORD *)&v46 = 0;
                qfree(v45);
              }
              if ( v27 != -1 )
              {
                sub_123A40((__int64)&v35, *(unsigned __int8 **)(a2 + 8), v19, v20);
                *(_QWORD *)(v36 + 8) = v27;
                HIDWORD(v35) = *(_DWORD *)(a2 + 4);
                sub_11CA10((char *)a2, (char *)&v35);
                v28 = *(_QWORD *)(a1 + 16);
                v29 = *(_DWORD *)(v28 + 24);
                BYTE1(v29) &= ~2u;
                LOBYTE(v29) = v29 | 0x80;
                *(_DWORD *)(v28 + 24) = v29;
                sub_11CDA0((__int64)&v35);
              }
              return 0;
            }
            v24 = v25;
          }
LABEL_35:
          if ( !under_debugger )
            sub_383060(51611);
LABEL_59:
          BUG();
        }
LABEL_12:
        v12 += 128;
        if ( v12 == v13 )
          goto LABEL_47;
      }
    }
  }
  return 0;
}
