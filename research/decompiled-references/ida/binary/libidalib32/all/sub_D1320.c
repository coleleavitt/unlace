__int64 __fastcall sub_D1320(int a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  int v18; // eax
  size_t v19; // rdx
  _DWORD *v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int *v27; // r12
  _QWORD *v28; // r15
  bool v29; // zf
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  int i; // ecx
  __int64 v43; // rsi
  __int64 v44; // r11
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdi
  void *v51; // rax
  const void *v52; // rsi
  __int64 v53; // [rsp+0h] [rbp-F8h]
  int *v54; // [rsp+0h] [rbp-F8h]
  size_t n; // [rsp+8h] [rbp-F0h]
  size_t na; // [rsp+8h] [rbp-F0h]
  size_t nd; // [rsp+8h] [rbp-F0h]
  size_t nb; // [rsp+8h] [rbp-F0h]
  size_t ne; // [rsp+8h] [rbp-F0h]
  size_t nc; // [rsp+8h] [rbp-F0h]
  __int64 v61; // [rsp+10h] [rbp-E8h]
  __int64 v62; // [rsp+10h] [rbp-E8h]
  __int64 v63; // [rsp+18h] [rbp-E0h]
  __int64 v64; // [rsp+18h] [rbp-E0h]
  __int64 v65; // [rsp+20h] [rbp-D8h]
  __int64 v66; // [rsp+20h] [rbp-D8h]
  __int64 v67; // [rsp+30h] [rbp-C8h]
  __int128 v68; // [rsp+38h] [rbp-C0h]
  int v69; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-A0h]
  __int128 v71; // [rsp+60h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-80h]
  __int128 v74; // [rsp+80h] [rbp-78h]
  int v75; // [rsp+90h] [rbp-68h] BYREF
  __int64 v76; // [rsp+98h] [rbp-60h]
  __int128 v77; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-40h]

  v3 = a2;
  v78 = __readfsqword(0x28u);
  v69 = -2;
  v71 = 0;
  v70 = -1;
  v8 = sub_CE8E0(a1, a2, (__int64)&v69);
  if ( !(_BYTE)v8 )
    goto LABEL_15;
  a2 = a3;
  if ( (unsigned __int8)sub_C4D40(&v69, a3) )
  {
LABEL_3:
    if ( v69 >= -1 && v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree();
    }
    return v8;
  }
  if ( !a1 )
    goto LABEL_15;
  v11 = qword_251410;
  v12 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v12 )
    goto LABEL_15;
  while ( a1 != *(_DWORD *)v11 )
  {
    v11 += 232;
    if ( v12 == v11 )
      goto LABEL_15;
  }
  if ( !v11 )
    goto LABEL_15;
  a2 = (unsigned int)v3;
  v10 = sub_CE480(v11, v3);
  if ( !v10 )
    goto LABEL_15;
  if ( v3 < 0 )
    goto LABEL_15;
  if ( v3 >= (unsigned __int64)xmmword_251378 )
    goto LABEL_15;
  v6 = 7LL * v3;
  v14 = qword_251370 + 56LL * v3;
  v53 = v14;
  if ( !v14 || (*(_BYTE *)(v14 + 36) & 2) != 0 )
    goto LABEL_15;
  v68 = 0;
  if ( *(_BYTE *)(v14 + 32) == 0xFF )
  {
    v61 = v10;
    v67 = qvector_reserve();
    *(_QWORD *)v67 = 0;
    *(_DWORD *)(v67 + 8) = -2;
    *(_OWORD *)(v67 + 24) = 0;
    *(_QWORD *)(v67 + 16) = -1;
    *(_QWORD *)&v68 = 1;
    *(_DWORD *)(v67 + 40) = v3;
    *(_QWORD *)v67 = v53;
    sub_B8C30(v67 + 8, (__int64)&v69);
    v15 = v61;
    nb = xmmword_251378;
    if ( (_QWORD)xmmword_251378 )
    {
      v44 = 0;
      v45 = 0;
      do
      {
        if ( *(_BYTE *)(v44 + qword_251370 + 32) != 0xFF && *(_DWORD *)(v44 + qword_251370 + 44) == v3 )
        {
          v46 = v68;
          v47 = v67;
          if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
          {
            v66 = v15;
            v64 = v45;
            v62 = v44;
            v67 = qvector_reserve();
            v47 = v67;
            v15 = v66;
            v46 = v68;
            v45 = v64;
            v44 = v62;
          }
          v65 = v15;
          v63 = v45;
          v48 = v47 + 48 * v46;
          v61 = v44;
          *(_QWORD *)v48 = 0;
          *(_OWORD *)(v48 + 24) = 0;
          v49 = qword_251370;
          *(_DWORD *)(v48 + 8) = -2;
          *(_QWORD *)&v68 = v68 + 1;
          *(_QWORD *)(v48 + 16) = -1;
          *(_QWORD *)v48 = v44 + v49;
          v50 = qword_251370 + v44;
          *(_DWORD *)(v48 + 40) = v45;
          sub_C6270(v50, v48 + 8, (_QWORD *)(v11 + 40));
          v15 = v65;
          v45 = v63;
          v44 = v61;
        }
        ++v45;
        v44 += 56;
      }
      while ( nb != v45 );
    }
  }
  else
  {
    n = v10;
    v67 = qvector_reserve();
    *(_QWORD *)v67 = 0;
    *(_DWORD *)(v67 + 8) = -2;
    *(_OWORD *)(v67 + 24) = 0;
    *(_QWORD *)(v67 + 16) = -1;
    *(_QWORD *)&v68 = 1;
    *(_DWORD *)(v67 + 40) = v3;
    *(_QWORD *)v67 = v53;
    sub_B8C30(v67 + 8, (__int64)&v69);
    v15 = n;
    v16 = *(int *)(v53 + 44);
    if ( (v16 & 0x80000000) == 0LL && v16 < (unsigned __int64)xmmword_251378 )
    {
      if ( qword_251370 + 56 * v16 )
      {
        v61 = n;
        nc = qword_251370 + 56 * v16;
        v67 = qvector_reserve();
        *(_QWORD *)(v67 + 48) = 0;
        *(_DWORD *)(v67 + 56) = -2;
        *(_DWORD *)(v67 + 88) = -1;
        *(_OWORD *)(v67 + 72) = 0;
        *(_QWORD *)(v67 + 64) = -1;
        *(_QWORD *)&v68 = 2;
        *(_QWORD *)(v67 + 48) = nc;
        *(_DWORD *)(v67 + 88) = *(_DWORD *)(v53 + 44);
        sub_C6270(nc, v67 + 56, (_QWORD *)(v11 + 40));
        v15 = v61;
      }
    }
  }
  v18 = *(_DWORD *)a3;
  v72 = -2;
  v74 = 0;
  if ( v18 < -1 )
  {
    v73 = *(_QWORD *)(a3 + 8);
    goto LABEL_81;
  }
  v19 = *(_QWORD *)(a3 + 16);
  v73 = 0;
  v74 = 0;
  if ( v19 )
  {
    v61 = v15;
    ne = v19;
    v51 = (void *)qalloc_or_throw();
    v52 = *(const void **)(a3 + 8);
    v73 = (unsigned __int64)v51;
    *((_QWORD *)&v74 + 1) = ne;
    memcpy(v51, v52, ne);
    v18 = *(_DWORD *)a3;
    v15 = v61;
    *(_QWORD *)&v74 = ne;
LABEL_81:
    v72 = v18;
    if ( v18 == -2 )
    {
      v39 = *(_DWORD *)(v53 + 44);
      if ( v39 < 0 || v39 >= *(_DWORD *)(dbg + 64LL) )
      {
        v41 = -1;
      }
      else
      {
        nd = v15;
        v40 = sub_C5EC0(v53);
        v41 = 0;
        v15 = nd;
        if ( v40 > 0 )
        {
          for ( i = 0; i != v40; ++i )
          {
            v43 = 1LL << i;
            v41 |= v43;
          }
        }
      }
      v73 &= v41;
    }
    goto LABEL_30;
  }
  v72 = v18;
LABEL_30:
  a2 = v15;
  na = v15;
  sub_C68E0(v53, v15, (__int64)&v72);
  v10 = na;
  v20 = qword_2515B0;
  v6 = *(int *)(v53 + 44);
  v53 = na;
  if ( qword_2515B0 )
  {
    *(_DWORD *)qword_2515B0 = a1;
    a2 = 17;
    v20[7] = v6;
    *((_QWORD *)v20 + 5) = na + 32 * v6;
    if ( (int)sub_CC780((__int64)v20, 17) > 0 )
    {
      v21 = na;
      HIDWORD(qword_2511A0) = 0;
      if ( dword_24411C == v3 )
      {
        sub_D0DD0(na);
      }
      else
      {
        if ( dword_244118 != v3 )
          goto LABEL_34;
        dword_244124 = sub_CF9D0(na, v3);
      }
      v21 = na;
LABEL_34:
      sub_D0110(v21, 0);
      if ( dword_251408 )
      {
        v22 = qword_251410;
        v23 = qword_251410 + 232 * xmmword_251418;
        if ( qword_251410 != v23 )
        {
          while ( dword_251408 != *(_DWORD *)v22 )
          {
            v22 += 232;
            if ( v23 == v22 )
              goto LABEL_41;
          }
          if ( v22 )
            dword_244120 = sub_D0B80(*(_QWORD *)(v22 + 40), 0);
        }
      }
LABEL_41:
      if ( !(unsigned __int8)sub_10E220() )
      {
        callui(15, 0, &callui, v24, v25, v26, na, na, v61, v63);
        v54 = (int *)(v67 + 48 * v68);
        if ( v54 != (int *)v67 )
        {
          v27 = (int *)v67;
          v28 = (_QWORD *)(v11 + 40);
          do
          {
            v75 = -2;
            v76 = -1;
            v77 = 0;
            if ( (unsigned __int8)sub_C6270(*(_QWORD *)v27, (__int64)&v75, v28) )
            {
              if ( !(unsigned __int8)sub_C4D40(v27 + 2, (__int64)&v75) )
              {
                v29 = qword_251040 == nullptr;
                *(_BYTE *)(*(_QWORD *)v27 + 35LL) = 3;
                v30 = v27[10];
                if ( !v29 && (v30 & 0x80000000) == 0LL && v30 < (unsigned __int64)xmmword_251378 )
                {
                  v31 = qword_251370 + 56 * v30;
                  if ( v31 )
                  {
                    v32 = *(_QWORD *)(v31 + 48);
                    if ( v32 )
                    {
                      *(_BYTE *)(v32 + 140) = *(_BYTE *)(v31 + 35);
                      sub_B8C30(v32 + 96, (__int64)&v75);
                    }
                  }
                }
              }
            }
            if ( v75 >= -1 && v76 )
            {
              *(_QWORD *)&v77 = 0;
              qfree();
            }
            v27 += 12;
          }
          while ( v54 != v27 );
        }
        if ( qword_251040 )
        {
          TGroup::freeBuffer(qword_251040);
          TView::drawView(qword_251040);
        }
      }
      if ( v72 >= -1 && v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree();
      }
      if ( v67 )
      {
        if ( (_QWORD)v68 )
        {
          v33 = 0;
          v34 = v67;
          do
          {
            v35 = v34 + 48 * v33;
            if ( *(int *)(v35 + 8) >= -1 && *(_QWORD *)(v35 + 16) )
            {
              *(_QWORD *)(v35 + 24) = 0;
              qfree();
              v34 = v67;
            }
            ++v33;
          }
          while ( (_QWORD)v68 != v33 );
        }
        qfree();
      }
      goto LABEL_3;
    }
  }
  if ( v72 >= -1 && v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  if ( v67 )
  {
    if ( (_QWORD)v68 )
    {
      v36 = 0;
      v37 = v67;
      do
      {
        v38 = v37 + 48 * v36;
        if ( *(int *)(v38 + 8) >= -1 && *(_QWORD *)(v38 + 16) )
        {
          *(_QWORD *)(v38 + 24) = 0;
          qfree();
          v37 = v67;
        }
        ++v36;
      }
      while ( (_QWORD)v68 != v36 );
    }
    qfree();
  }
LABEL_15:
  if ( v69 >= -1 && v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  v8 = 0;
  sub_8F660((__int64)"Debugger: failed to update register value\n", a2, v6, v7, v9, v10, v53);
  return v8;
}

