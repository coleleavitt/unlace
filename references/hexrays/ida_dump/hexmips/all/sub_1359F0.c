__int64 __fastcall sub_1359F0(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rax
  _DWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __m128i v8; // xmm0
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r13
  _DWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // esi
  __int64 v18; // rdi
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rsi
  unsigned __int64 **v27; // rax
  _DWORD *v28; // [rsp+10h] [rbp-138h]
  int v29; // [rsp+20h] [rbp-128h]
  int v30; // [rsp+24h] [rbp-124h]
  _QWORD *v31; // [rsp+28h] [rbp-120h]
  char v32; // [rsp+30h] [rbp-118h]
  int v33; // [rsp+34h] [rbp-114h]
  unsigned __int64 *v34; // [rsp+38h] [rbp-110h]
  unsigned int v35; // [rsp+40h] [rbp-108h]
  int v36; // [rsp+44h] [rbp-104h]
  int v37; // [rsp+48h] [rbp-100h]
  int v38; // [rsp+4Ch] [rbp-FCh]
  __m128i v39; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v41[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+88h] [rbp-C0h]
  __int64 v44[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-90h]
  __int64 v47; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-70h] BYREF
  __m128i v49; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v50; // [rsp+F8h] [rbp-50h]
  char v51; // [rsp+100h] [rbp-48h]
  unsigned __int64 v52; // [rsp+108h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 440) == 0;
  v52 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v36 = 0;
    v34 = nullptr;
    v35 = 0;
    v38 = 2 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    v3 = 0;
    while ( 1 )
    {
      v4 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v3);
      v28 = v4;
      if ( !v4[23] && v4[22] == v38 && ((*v4 - 2) & 0xFFFFFFFD) != 0 )
        break;
LABEL_36:
      v3 = ++v36;
      if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 440) )
        return v35;
    }
    if ( !v34 )
    {
      v27 = (unsigned __int64 **)sub_10C6E0(*(_QWORD *)(a1 + 784), 0);
      if ( !v27 )
      {
        if ( !under_debugger )
          sub_37E160(50433);
LABEL_80:
        BUG();
      }
      v34 = *v27;
    }
    v5 = *(_DWORD *)(a1 + 440);
    v41[0] = 0;
    v33 = v5;
    v41[1] = 0;
    v42 = 0;
    v43 = 0;
    sub_1BEFC0(v28, a1, v41, 0);
    v39 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    sub_1BED50(v28, &v39, 1, v6, v7);
    v37 = v28[22];
    v30 = v37 >> 1;
    if ( v37 <= 0 )
    {
LABEL_33:
      v18 = v42;
      if ( !v42 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v29 = 0;
    v31 = nullptr;
    v32 = 2;
    while ( !v29 )
    {
      v8 = _mm_load_si128(&v39);
      v47 = 0;
      v50 = 0xFFFFFFFF00000001LL;
      v51 = 1;
      v48 = 0;
      v49 = v8;
      v31 = sub_FFFA0(v34, (__int64)&v47);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      if ( v31 == (_QWORD *)*v34 )
        goto LABEL_33;
      v9 = v31 + 3;
LABEL_14:
      if ( v9[1] )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          while ( 1 )
          {
            v12 = *(unsigned int *)(*v9 + 4 * v11);
            if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 64) )
            {
              if ( !under_debugger )
                sub_37E160(52719);
              goto LABEL_80;
            }
            v13 = *(__int64 **)(*(_QWORD *)(a1 + 528) + 8 * v12);
            if ( !sub_A58A0((__int64)v13, v41, v13[6], 0, 0) )
            {
              v14 = (_DWORD *)v13[7];
              if ( v14 )
              {
                if ( (unsigned int)(*v14 - 42) <= 0xA )
                  break;
              }
            }
LABEL_16:
            v11 = ++v10;
            if ( (unsigned __int64)v10 >= v9[1] )
              goto LABEL_32;
          }
          v44[0] = 0;
          v44[1] = 0;
          v45 = 0;
          v46 = 0;
          v15 = *v28;
          if ( (unsigned int)(*v28 - 3) > 1 )
          {
            v40[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
                   & (*(_QWORD *)(a1 + 1440) + *((_QWORD *)v28 + 1) + v29);
            v40[1] = v30;
            sub_311E30(&v45, v40);
            goto LABEL_26;
          }
          v16 = v28[2];
          if ( v29 )
          {
            if ( v15 == 4 )
            {
              v17 = HIWORD(v16);
              goto LABEL_25;
            }
          }
          else if ( v15 == 4 )
          {
            v16 = (unsigned __int16)v16;
          }
          v17 = v29 + v16;
LABEL_25:
          sub_5FC80(v44, v17, v30);
LABEL_26:
          sub_120480((__int64)&v47, (__int64)v13, v13[7], 0);
          sub_60500(&v47, v41);
          sub_313340((char *)&v48 + 8, &v42);
          if ( (unsigned __int8)sub_60620(&v47, v44) && (unsigned __int8)sub_3131C0(&v45, (char *)&v48 + 8) )
          {
            v35 += (unsigned __int8)sub_10F910(v13, v13[7], v32);
            if ( v33 != *(_QWORD *)(a1 + 440) )
            {
              if ( *((_QWORD *)&v48 + 1) )
              {
                v49.m128i_i64[0] = 0;
                qfree(*((_QWORD *)&v48 + 1));
              }
              qfree(v47);
              if ( v45 )
              {
                *(_QWORD *)&v46 = 0;
                qfree(v45);
              }
              qfree(v44[0]);
              v18 = v42;
              if ( !v42 )
              {
LABEL_35:
                qfree(v41[0]);
                goto LABEL_36;
              }
LABEL_34:
              *(_QWORD *)&v43 = 0;
              qfree(v18);
              goto LABEL_35;
            }
            if ( *((_QWORD *)&v48 + 1) )
            {
              v49.m128i_i64[0] = 0;
              qfree(*((_QWORD *)&v48 + 1));
            }
            qfree(v47);
            if ( v45 )
            {
              *(_QWORD *)&v46 = 0;
              qfree(v45);
            }
            qfree(v44[0]);
            goto LABEL_16;
          }
          if ( *((_QWORD *)&v48 + 1) )
          {
            v49.m128i_i64[0] = 0;
            qfree(*((_QWORD *)&v48 + 1));
          }
          qfree(v47);
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45);
          }
          ++v10;
          qfree(v44[0]);
          v11 = v10;
        }
        while ( (unsigned __int64)v10 < v9[1] );
      }
LABEL_32:
      v32 = 3;
      v29 += v30;
      if ( v37 <= v29 )
        goto LABEL_33;
    }
    v20 = *v34;
    if ( (*v31 & 2) != 0 )
    {
      v23 = v31;
      if ( (_QWORD *)v20 == v31 )
      {
        v18 = v42;
        if ( !v42 )
          goto LABEL_35;
        goto LABEL_34;
      }
      goto LABEL_54;
    }
    v21 = (_QWORD *)v31[2];
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = (_QWORD *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
      v24 = *v22;
      if ( (*v22 & 2) == 0 && (_QWORD *)v22[2] == v31 )
      {
        while ( 1 )
        {
          v25 = v22;
          v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
          v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v24 & 2) != 0 )
            break;
          v22 = (_QWORD *)v26;
          if ( *(_QWORD **)(v26 + 16) != v25 )
            goto LABEL_52;
        }
        v31 = (_QWORD *)v26;
LABEL_53:
        v23 = v31;
        if ( v31 == (_QWORD *)v20 )
          goto LABEL_33;
LABEL_54:
        v9 = v23 + 3;
        if ( v39.m128i_i8[8] != *((_BYTE *)v23 + 56) || v39.m128i_i64[0] + v29 != v23[6] )
          goto LABEL_32;
        goto LABEL_14;
      }
    }
    else
    {
      do
      {
        v22 = v21;
        v21 = (_QWORD *)v21[1];
      }
      while ( (*(_BYTE *)v21 & 2) == 0 );
    }
LABEL_52:
    v31 = v22;
    goto LABEL_53;
  }
  return 0;
}
