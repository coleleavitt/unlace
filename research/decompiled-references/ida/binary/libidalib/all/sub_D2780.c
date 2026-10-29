__int64 __fastcall sub_D2780(int a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  int v19; // eax
  size_t v20; // rdx
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int *v30; // rbp
  _QWORD *v31; // r14
  bool v32; // zf
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  int i; // ecx
  __int64 v46; // rsi
  __int64 v47; // r11
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  void *v54; // rax
  const void *v55; // rsi
  size_t n; // [rsp+0h] [rbp-F8h]
  size_t na; // [rsp+0h] [rbp-F8h]
  size_t nd; // [rsp+0h] [rbp-F8h]
  size_t nb; // [rsp+0h] [rbp-F8h]
  size_t ne; // [rsp+0h] [rbp-F8h]
  size_t nf; // [rsp+0h] [rbp-F8h]
  size_t nc; // [rsp+0h] [rbp-F8h]
  size_t ng; // [rsp+0h] [rbp-F8h]
  __int64 v64; // [rsp+8h] [rbp-F0h]
  __int64 v65; // [rsp+8h] [rbp-F0h]
  __int64 v66; // [rsp+8h] [rbp-F0h]
  __int64 v67; // [rsp+8h] [rbp-F0h]
  __int64 v68; // [rsp+8h] [rbp-F0h]
  __int64 v69; // [rsp+8h] [rbp-F0h]
  __int64 v70; // [rsp+8h] [rbp-F0h]
  __int64 v71; // [rsp+10h] [rbp-E8h]
  __int64 v72; // [rsp+10h] [rbp-E8h]
  __int64 v73; // [rsp+18h] [rbp-E0h]
  __int64 v74; // [rsp+18h] [rbp-E0h]
  __int64 v75; // [rsp+20h] [rbp-D8h]
  __int64 v76; // [rsp+20h] [rbp-D8h]
  __int64 v77; // [rsp+30h] [rbp-C8h]
  __int128 v78; // [rsp+38h] [rbp-C0h]
  int v79; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A0h]
  __int128 v81; // [rsp+60h] [rbp-98h]
  int v82; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-80h]
  __int128 v84; // [rsp+80h] [rbp-78h]
  int v85; // [rsp+90h] [rbp-68h] BYREF
  __int64 v86; // [rsp+98h] [rbp-60h]
  __int128 v87; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-40h]

  v4 = a2;
  v88 = __readfsqword(0x28u);
  v79 = -2;
  v81 = 0;
  v80 = -1;
  v10 = sub_CFEA0(a1, a2, (__int64)&v79);
  if ( !(_BYTE)v10 )
    goto LABEL_10;
  a2 = a3;
  if ( (unsigned __int8)sub_C61A0(&v79, a3) )
  {
LABEL_3:
    if ( v79 >= -1 && v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree();
    }
    return v10;
  }
  v11 = sub_C6150(a1);
  v12 = v11;
  if ( !v11 )
    goto LABEL_10;
  a2 = (unsigned int)v4;
  v9 = sub_CFA40((__int64)v11, v4);
  if ( !v9 )
    goto LABEL_10;
  if ( v4 < 0 )
    goto LABEL_10;
  if ( v4 >= (unsigned __int64)xmmword_2524F8 )
    goto LABEL_10;
  v6 = 7LL * v4;
  v14 = qword_2524F0 + 56LL * v4;
  if ( !v14 || (*(_BYTE *)(v14 + 36) & 2) != 0 )
    goto LABEL_10;
  v78 = 0;
  if ( *(_BYTE *)(v14 + 32) == 0xFF )
  {
    nf = qword_2524F0 + 56LL * v4;
    v71 = v9;
    v77 = qvector_reserve();
    *(_QWORD *)v77 = 0;
    *(_DWORD *)(v77 + 8) = -2;
    *(_OWORD *)(v77 + 24) = 0;
    *(_QWORD *)(v77 + 16) = -1;
    *(_QWORD *)&v78 = 1;
    *(_DWORD *)(v77 + 40) = v4;
    *(_QWORD *)v77 = nf;
    sub_B91A0(v77 + 8, (__int64)&v79);
    v15 = nf;
    v16 = v71;
    nc = xmmword_2524F8;
    if ( (_QWORD)xmmword_2524F8 )
    {
      v47 = 0;
      v48 = 0;
      do
      {
        if ( *(_BYTE *)(v47 + qword_2524F0 + 32) != 0xFF && *(_DWORD *)(v47 + qword_2524F0 + 44) == v4 )
        {
          v49 = v78;
          v50 = v77;
          if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
          {
            v76 = v16;
            v74 = v47;
            v72 = v48;
            v68 = v15;
            v77 = qvector_reserve();
            v50 = v77;
            v16 = v76;
            v49 = v78;
            v47 = v74;
            v48 = v72;
            v15 = v68;
          }
          v75 = v16;
          v73 = v15;
          v51 = v50 + 48 * v49;
          v71 = v48;
          *(_QWORD *)v51 = 0;
          *(_OWORD *)(v51 + 24) = 0;
          v52 = qword_2524F0;
          *(_DWORD *)(v51 + 8) = -2;
          *(_QWORD *)&v78 = v78 + 1;
          *(_QWORD *)(v51 + 16) = -1;
          *(_QWORD *)v51 = v47 + v52;
          v53 = qword_2524F0 + v47;
          *(_DWORD *)(v51 + 40) = v48;
          v67 = v47;
          sub_C7700(v53, v51 + 8, (_QWORD *)v12 + 5);
          v16 = v75;
          v15 = v73;
          v48 = v71;
          v47 = v67;
        }
        ++v48;
        v47 += 56;
      }
      while ( nc != v48 );
    }
  }
  else
  {
    na = qword_2524F0 + 56LL * v4;
    v64 = v9;
    v77 = qvector_reserve();
    *(_QWORD *)v77 = 0;
    *(_DWORD *)(v77 + 8) = -2;
    *(_OWORD *)(v77 + 24) = 0;
    *(_QWORD *)(v77 + 16) = -1;
    *(_QWORD *)&v78 = 1;
    *(_DWORD *)(v77 + 40) = v4;
    *(_QWORD *)v77 = na;
    sub_B91A0(v77 + 8, (__int64)&v79);
    v15 = na;
    v16 = v64;
    v17 = *(int *)(na + 44);
    if ( (v17 & 0x80000000) == 0LL && v17 < (unsigned __int64)xmmword_2524F8 )
    {
      if ( qword_2524F0 + 56 * v17 )
      {
        v71 = v64;
        v70 = qword_2524F0 + 56 * v17;
        v77 = qvector_reserve();
        *(_QWORD *)(v77 + 48) = 0;
        *(_DWORD *)(v77 + 56) = -2;
        *(_DWORD *)(v77 + 88) = -1;
        *(_OWORD *)(v77 + 72) = 0;
        *(_QWORD *)(v77 + 64) = -1;
        *(_QWORD *)&v78 = 2;
        *(_QWORD *)(v77 + 48) = v70;
        *(_DWORD *)(v77 + 88) = *(_DWORD *)(na + 44);
        sub_C7700(v70, v77 + 56, (_QWORD *)v12 + 5);
        v16 = v71;
        v15 = na;
      }
    }
  }
  v19 = *(_DWORD *)a3;
  v82 = -2;
  v84 = 0;
  if ( v19 < -1 )
  {
    v83 = *(_QWORD *)(a3 + 8);
    goto LABEL_76;
  }
  v20 = *(_QWORD *)(a3 + 16);
  v83 = 0;
  v84 = 0;
  if ( v20 )
  {
    v71 = v16;
    v69 = v15;
    ng = v20;
    v54 = (void *)qalloc_or_throw();
    v55 = *(const void **)(a3 + 8);
    v83 = (unsigned __int64)v54;
    *((_QWORD *)&v84 + 1) = ng;
    memcpy(v54, v55, ng);
    v19 = *(_DWORD *)a3;
    v15 = v69;
    v16 = v71;
    *(_QWORD *)&v84 = ng;
LABEL_76:
    v82 = v19;
    if ( v19 == -2 )
    {
      v42 = *(_DWORD *)(v15 + 44);
      if ( v42 < 0 || v42 >= *(_DWORD *)(dbg + 64LL) )
      {
        v44 = -1;
      }
      else
      {
        v66 = v16;
        ne = v15;
        v43 = sub_C7350(v15);
        v44 = 0;
        v15 = ne;
        v16 = v66;
        if ( v43 > 0 )
        {
          for ( i = 0; i != v43; ++i )
          {
            v46 = 1LL << i;
            v44 |= v46;
          }
        }
      }
      v83 &= v44;
    }
    goto LABEL_25;
  }
  v82 = v19;
LABEL_25:
  a2 = v16;
  v65 = v16;
  nd = v15;
  sub_C7D60(v15, v16, (__int64)&v82);
  v9 = v65;
  v21 = qword_252758;
  v22 = *(int *)(nd + 44);
  n = v65;
  v6 = v22;
  v23 = v65 + 32 * v22;
  if ( qword_252758 )
  {
    *(_DWORD *)qword_252758 = a1;
    a2 = 17;
    v21[9] = v6;
    *((_QWORD *)v21 + 6) = v23;
    if ( (int)sub_CDCF0((__int64)v21, 17) > 0 )
    {
      v24 = v65;
      HIDWORD(qword_252280) = 0;
      if ( dword_245174 == v4 )
      {
        sub_D21D0(v65);
      }
      else
      {
        if ( dword_245170 != v4 )
          goto LABEL_29;
        qword_245180 = sub_D0F90(v65, v4);
      }
      v24 = v65;
LABEL_29:
      sub_D1C20(v24, 0);
      if ( dword_252588 )
      {
        v25 = qword_252590;
        v26 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
        if ( qword_252590 != v26 )
        {
          while ( dword_252588 != *(_DWORD *)v25 )
          {
            v25 += 256;
            if ( v26 == v25 )
              goto LABEL_36;
          }
          if ( v25 )
            qword_245178 = sub_D1F80(*(_QWORD *)(v25 + 40), 0);
        }
      }
LABEL_36:
      if ( !(unsigned __int8)sub_10E500() )
      {
        callui(15, 0, &callui, v27, v28, v29, v65, v65, v71, v73);
        nb = v77 + 48 * v78;
        if ( nb != v77 )
        {
          v30 = (int *)v77;
          v31 = v12 + 10;
          do
          {
            v85 = -2;
            v86 = -1;
            v87 = 0;
            if ( (unsigned __int8)sub_C7700(*(_QWORD *)v30, (__int64)&v85, v31) )
            {
              if ( !(unsigned __int8)sub_C61A0(v30 + 2, (__int64)&v85) )
              {
                v32 = qword_252120 == nullptr;
                *(_BYTE *)(*(_QWORD *)v30 + 35LL) = 3;
                v33 = v30[10];
                if ( !v32 && (v33 & 0x80000000) == 0LL && v33 < (unsigned __int64)xmmword_2524F8 )
                {
                  v34 = qword_2524F0 + 56 * v33;
                  if ( v34 )
                  {
                    v35 = *(_QWORD *)(v34 + 48);
                    if ( v35 )
                    {
                      *(_BYTE *)(v35 + 140) = *(_BYTE *)(v34 + 35);
                      sub_B91A0(v35 + 96, (__int64)&v85);
                    }
                  }
                }
              }
            }
            if ( v85 >= -1 && v86 )
            {
              *(_QWORD *)&v87 = 0;
              qfree();
            }
            v30 += 12;
          }
          while ( (int *)nb != v30 );
        }
        if ( qword_252120 )
        {
          TGroup::freeBuffer(qword_252120);
          TView::drawView(qword_252120);
        }
      }
      if ( v82 >= -1 && v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree();
      }
      if ( v77 )
      {
        if ( (_QWORD)v78 )
        {
          v36 = 0;
          v37 = v77;
          do
          {
            v38 = v37 + 48 * v36;
            if ( *(int *)(v38 + 8) >= -1 && *(_QWORD *)(v38 + 16) )
            {
              *(_QWORD *)(v38 + 24) = 0;
              qfree();
              v37 = v77;
            }
            ++v36;
          }
          while ( (_QWORD)v78 != v36 );
        }
        qfree();
      }
      goto LABEL_3;
    }
  }
  if ( v82 >= -1 && v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  if ( v77 )
  {
    if ( (_QWORD)v78 )
    {
      v39 = 0;
      v40 = v77;
      do
      {
        v41 = v40 + 48 * v39;
        if ( *(int *)(v41 + 8) >= -1 && *(_QWORD *)(v41 + 16) )
        {
          *(_QWORD *)(v41 + 24) = 0;
          qfree();
          v40 = v77;
        }
        ++v39;
      }
      while ( (_QWORD)v78 != v39 );
    }
    qfree();
  }
LABEL_10:
  if ( v79 >= -1 && v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  v10 = 0;
  sub_8F740((__int64)"Debugger: failed to update register value\n", a2, v6, v7, v8, v9, n);
  return v10;
}

