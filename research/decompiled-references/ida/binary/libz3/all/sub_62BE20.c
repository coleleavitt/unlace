__int64 __fastcall sub_62BE20(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // rsi
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // r13d
  __int64 v25; // r14
  unsigned __int64 v26; // r12
  __int64 v27; // r10
  bool v28; // al
  int v29; // edx
  bool v30; // al
  int v31; // edx
  __int64 v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // r10
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  int *v41; // [rsp+0h] [rbp-2E8h]
  int v42[2]; // [rsp+0h] [rbp-2E8h]
  int v43[2]; // [rsp+0h] [rbp-2E8h]
  bool v44; // [rsp+0h] [rbp-2E8h]
  bool v45; // [rsp+0h] [rbp-2E8h]
  bool v46; // [rsp+0h] [rbp-2E8h]
  bool v47; // [rsp+0h] [rbp-2E8h]
  __int64 v48; // [rsp+8h] [rbp-2E0h]
  unsigned __int64 v49; // [rsp+8h] [rbp-2E0h]
  unsigned __int64 v50; // [rsp+8h] [rbp-2E0h]
  int v51; // [rsp+10h] [rbp-2D8h]
  int v52[2]; // [rsp+10h] [rbp-2D8h]
  _QWORD *v53; // [rsp+18h] [rbp-2D0h]
  int v54; // [rsp+20h] [rbp-2C8h]
  __int64 v55; // [rsp+28h] [rbp-2C0h]
  __int64 v56; // [rsp+28h] [rbp-2C0h]
  __int64 v57; // [rsp+30h] [rbp-2B8h]
  __int64 v58; // [rsp+30h] [rbp-2B8h]
  void *ptr; // [rsp+38h] [rbp-2B0h]
  void *ptra; // [rsp+38h] [rbp-2B0h]
  __int64 v61; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-298h] BYREF
  int v63[2]; // [rsp+58h] [rbp-290h] BYREF
  __m128i v64; // [rsp+60h] [rbp-288h] BYREF
  int v65[2]; // [rsp+70h] [rbp-278h] BYREF
  __int64 v66; // [rsp+78h] [rbp-270h]
  int v67[2]; // [rsp+80h] [rbp-268h] BYREF
  _BYTE *v68; // [rsp+110h] [rbp-1D8h]
  int v69; // [rsp+118h] [rbp-1D0h]
  __int64 v70; // [rsp+120h] [rbp-1C8h]
  _QWORD v71[19]; // [rsp+128h] [rbp-1C0h] BYREF
  int v72; // [rsp+1C0h] [rbp-128h]
  __int64 (__fastcall **v73)(); // [rsp+1C8h] [rbp-120h] BYREF
  int v74; // [rsp+258h] [rbp-90h]
  __int64 v75; // [rsp+260h] [rbp-88h]
  __int64 v76; // [rsp+268h] [rbp-80h]
  __int64 v77; // [rsp+270h] [rbp-78h]
  __int64 v78; // [rsp+278h] [rbp-70h]
  __int64 v79; // [rsp+280h] [rbp-68h]
  __int64 v80; // [rsp+288h] [rbp-60h]
  __int64 v81; // [rsp+290h] [rbp-58h]
  _BYTE v82[80]; // [rsp+298h] [rbp-50h] BYREF

  v4 = a2[15].m128i_i64[0];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = a1;
  a2[17].m128i_i64[1] = 0xFFFFFFFFLL;
  sub_1662C60(&a2[15], v5, 0);
  v7 = *(unsigned int *)(a1 + 56);
  v8 = a1 + 8 * v7;
  if ( (_DWORD)v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v6 + 80);
      v6 += 8;
      sub_1662C60(&a2[15], v9 & 0xFFFFFFFFFFFFFFF8LL, 0);
    }
    while ( v8 != v6 );
  }
  v10 = a2[15].m128i_i64[0];
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    result = sub_1662B00(&a2[15], v11);
    if ( (_BYTE)result )
      return result;
    v55 = a2->m128i_i64[0];
    v62 = a2->m128i_i64[0];
    if ( (_DWORD)v11 )
    {
      v13 = 0;
      v10 = 0;
      v14 = 0;
      v41 = v65;
      do
      {
        while ( 1 )
        {
          v16 = a2[15].m128i_i64[0];
          if ( v16 )
          {
            if ( (unsigned int)v13 < *(_DWORD *)(v16 - 4) )
            {
              v17 = *(_QWORD *)(v16 + 8 * v13);
              if ( v17 )
                break;
            }
          }
          *(_QWORD *)v63 = v10;
          *(_QWORD *)v65 = 0;
          sub_62BD60(v63, v65);
          ++v13;
          v10 = *(_QWORD *)v63;
          if ( v11 == v13 )
            goto LABEL_16;
        }
        LODWORD(v48) = v14 + 1;
        v15 = sub_15DB5C0(v55, v14, v17);
        v61 = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        *(_QWORD *)v63 = v10;
        sub_62BD60(v63, &v61);
        ++v13;
        v10 = *(_QWORD *)v63;
        ++v14;
      }
      while ( v11 != v13 );
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    result = sub_1662B00(&a2[15], 0);
    if ( (_BYTE)result )
      return result;
    v55 = a2->m128i_i64[0];
    v62 = a2->m128i_i64[0];
  }
LABEL_16:
  sub_1584DD0(v67, v55, 0);
  *(_QWORD *)v67 = &off_1C4CA60;
  v68 = v82;
  v69 = 0;
  v70 = 0;
  sub_1584DD0(v71, v55, 0);
  v71[18] = 0;
  v72 = 0;
  v71[0] = &off_1C61DB8;
  sub_1584DD0(&v73, v55, 0);
  v76 = v55;
  v74 = 0;
  v78 = v55;
  v73 = &off_1C61DE0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = v55;
  v81 = 0;
  *(_QWORD *)v67 = &off_1C4CA80;
  v82[8] = 0;
  if ( v10 )
    v19 = *(_DWORD *)(v10 - 4);
  else
    v19 = 0;
  sub_157BE40(
    (int)v65,
    (int)v67,
    *(_QWORD *)(a1 + 40),
    v19,
    v10,
    v18,
    (int)v41,
    v48,
    v51,
    (int)v67,
    (int)v65,
    v55,
    v57,
    ptr);
  sub_62A170(&v64, a2, *(unsigned __int64 *)v65);
  ptra = (void *)v64.m128i_i64[1];
  sub_629FE0(*(__int64 *)v65, v66);
  v58 = v64.m128i_i64[0];
  if ( v64.m128i_i64[0] )
    ++*(_DWORD *)(v64.m128i_i64[0] + 8);
  v21 = *(_QWORD *)(a1 + 40);
  if ( v21 )
  {
    v22 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v56, v21);
  }
  v23 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = v58;
  if ( v23 )
  {
    v24 = 0;
    if ( !v10 )
    {
      while ( 1 )
      {
        v25 = a1 + 8LL * v24;
        sub_157BE40(
          v54,
          (int)v53,
          *(_QWORD *)(v25 + 80) & 0xFFFFFFF8,
          0,
          0,
          v20,
          *(_QWORD *)(v25 + 80) & 0xFFFFFFF8,
          *(_QWORD *)(v25 + 80),
          v52[0],
          (int)v53,
          v54,
          v56,
          v58,
          ptra);
        v26 = *(_QWORD *)v65;
        v27 = *(_QWORD *)v42;
        *(_QWORD *)v52 = a2->m128i_i64[0];
        if ( !*(_WORD *)(*(_QWORD *)v65 + 4LL) )
        {
          if ( *(_DWORD *)(*(_QWORD *)v65 + 8LL) )
          {
LABEL_27:
            v28 = (*(_QWORD *)(v25 + 80) & 7LL) == 1;
          }
          else
          {
            sub_15D7BC0(v66, *(_QWORD *)v65);
            v27 = *(_QWORD *)v42;
            v28 = (*(_QWORD *)(v25 + 80) & 7LL) == 1;
          }
LABEL_28:
          v29 = *(_DWORD *)(v26 + 8);
          *(_DWORD *)(v26 + 8) = v29 + 1;
          if ( v49 <= 7 )
          {
            *(_QWORD *)(v25 + 80) = v26 | v28;
          }
          else
          {
            v22 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v22 )
            {
              v46 = v28;
              sub_15D7BC0(v56, v27);
              *(_QWORD *)(v25 + 80) = v26 | v46;
            }
            else
            {
              *(_QWORD *)(v25 + 80) = v26 | v28;
            }
            v29 = *(_DWORD *)(v26 + 8) - 1;
          }
          *(_DWORD *)(v26 + 8) = v29;
          if ( !v29 )
            sub_15D7BC0(*(_QWORD *)v52, v26);
          goto LABEL_34;
        }
        v38 = sub_15E1B70(a2->m128i_i64[0]);
        v27 = *(_QWORD *)v42;
        v26 = v38;
        if ( v38 )
        {
          v39 = *(_QWORD *)v65;
          ++*(_DWORD *)(v38 + 8);
          if ( !v39 )
            goto LABEL_27;
        }
        else
        {
          v39 = *(_QWORD *)v65;
          if ( !*(_QWORD *)v65 )
          {
            v28 = (*(_QWORD *)(v25 + 80) & 7LL) == 1;
            goto LABEL_76;
          }
        }
        v40 = v66;
        v22 = (*(_DWORD *)(v39 + 8))-- == 1;
        if ( v22 )
        {
          sub_15D7BC0(v40, v39);
          v27 = *(_QWORD *)v42;
        }
        v28 = (*(_QWORD *)(v25 + 80) & 7LL) == 1;
        if ( v26 )
          goto LABEL_28;
LABEL_76:
        if ( v49 > 7 && (v22 = *(_DWORD *)(v27 + 8) == 1, --*(_DWORD *)(v27 + 8), v22) )
        {
          v47 = v28;
          sub_15D7BC0(v56, v27);
          *(_QWORD *)(v25 + 80) = v47;
        }
        else
        {
          *(_QWORD *)(v25 + 80) = v28;
        }
LABEL_34:
        if ( ++v24 >= *(_DWORD *)(a1 + 56) )
          goto LABEL_35;
      }
    }
    do
    {
      v32 = a1 + 8LL * v24;
      sub_157BE40(
        v54,
        (int)v53,
        *(_QWORD *)(v32 + 80) & 0xFFFFFFF8,
        *(_DWORD *)(v10 - 4),
        v10,
        v20,
        *(_QWORD *)(v32 + 80) & 0xFFFFFFF8,
        *(_QWORD *)(v32 + 80),
        v52[0],
        (int)v53,
        v54,
        v56,
        v58,
        ptra);
      v33 = *(_QWORD *)v65;
      v34 = *(_QWORD *)v43;
      *(_QWORD *)v52 = a2->m128i_i64[0];
      if ( !*(_WORD *)(*(_QWORD *)v65 + 4LL) )
      {
        if ( *(_DWORD *)(*(_QWORD *)v65 + 8LL) )
        {
LABEL_38:
          v30 = (*(_QWORD *)(v32 + 80) & 7LL) == 1;
        }
        else
        {
          sub_15D7BC0(v66, *(_QWORD *)v65);
          v34 = *(_QWORD *)v43;
          v30 = (*(_QWORD *)(v32 + 80) & 7LL) == 1;
        }
LABEL_39:
        v31 = *(_DWORD *)(v33 + 8);
        *(_DWORD *)(v33 + 8) = v31 + 1;
        if ( v50 <= 7 )
        {
          *(_QWORD *)(v32 + 80) = v33 | v30;
        }
        else
        {
          v22 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v22 )
          {
            v44 = v30;
            sub_15D7BC0(v56, v34);
            *(_QWORD *)(v32 + 80) = v33 | v44;
          }
          else
          {
            *(_QWORD *)(v32 + 80) = v33 | v30;
          }
          v31 = *(_DWORD *)(v33 + 8) - 1;
        }
        *(_DWORD *)(v33 + 8) = v31;
        if ( !v31 )
          sub_15D7BC0(*(_QWORD *)v52, v33);
        goto LABEL_45;
      }
      v35 = sub_15E1B70(a2->m128i_i64[0]);
      v34 = *(_QWORD *)v43;
      v33 = v35;
      if ( v35 )
      {
        v36 = *(_QWORD *)v65;
        ++*(_DWORD *)(v35 + 8);
        if ( !v36 )
          goto LABEL_38;
      }
      else
      {
        v36 = *(_QWORD *)v65;
        if ( !*(_QWORD *)v65 )
        {
          v30 = (*(_QWORD *)(v32 + 80) & 7LL) == 1;
          goto LABEL_59;
        }
      }
      v37 = v66;
      v22 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v22 )
      {
        sub_15D7BC0(v37, v36);
        v34 = *(_QWORD *)v43;
      }
      v30 = (*(_QWORD *)(v32 + 80) & 7LL) == 1;
      if ( v33 )
        goto LABEL_39;
LABEL_59:
      if ( v50 > 7 && (v22 = *(_DWORD *)(v34 + 8) == 1, --*(_DWORD *)(v34 + 8), v22) )
      {
        v45 = v30;
        sub_15D7BC0(v56, v34);
        *(_QWORD *)(v32 + 80) = v45;
      }
      else
      {
        *(_QWORD *)(v32 + 80) = v30;
      }
LABEL_45:
      ++v24;
    }
    while ( v24 < *(_DWORD *)(a1 + 56) );
  }
LABEL_35:
  sub_629F20(v58, (__int64)ptra);
  *(_QWORD *)v67 = &off_1C4CA80;
  sub_267D20(v53);
  *(_QWORD *)v63 = v10;
  return sub_2334C0(&v62);
}

