/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93450
// Address: 0x0000000000093450

//----- (0000000000093450) ----------------------------------------------------
__int64 __fastcall sub_93450(__int64 a1, char **a2, unsigned __int64 *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rbp
  _BYTE *v7; // r14
  __int64 v8; // rax
  char *v9; // rbx
  char *v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  char *v13; // rbx
  char *v14; // r12
  unsigned __int64 v15; // rbp
  unsigned __int8 *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  char *v21; // rax
  const void *v22; // rax
  unsigned __int64 v23; // rcx
  void *v24; // rdi
  char *v25; // rbp
  bool v26; // zf
  char *v27; // rbp
  char *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int8 *v31; // r13
  __int64 i; // rbp
  unsigned __int64 v33; // rax
  const char *v34; // r8
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  unsigned __int8 *v37; // rbp
  char **v38; // rsi
  char v39; // bl
  char *v40; // rax
  char *v41; // rcx
  char *v42; // rdx
  char *v43; // rcx
  char v44; // r15
  unsigned __int64 v45; // rdx
  char *v46; // rax
  __int64 v47; // r13
  __int64 j; // rbp
  char v49; // bl
  char *v50; // rax
  char *v51; // rcx
  unsigned __int64 v52; // rax
  const char *v53; // rdx
  const char *v54; // rax
  _BYTE *v55; // rax
  unsigned int v56; // r12d
  const char *v57; // rbp
  size_t v58; // rax
  char *v59; // rbx
  void *v60; // r14
  unsigned __int64 v61; // r15
  __int64 k; // rbp
  void *v63; // rdi
  __int64 v66; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+10h] [rbp-A8h]
  unsigned int v68; // [rsp+10h] [rbp-A8h]
  __int64 v69; // [rsp+18h] [rbp-A0h]
  __int64 v70; // [rsp+20h] [rbp-98h]
  __int64 v72; // [rsp+30h] [rbp-88h]
  char *v73; // [rsp+38h] [rbp-80h]
  char *s[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v75; // [rsp+50h] [rbp-68h]
  unsigned int v76; // [rsp+5Ch] [rbp-5Ch] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v78; // [rsp+70h] [rbp-48h]
  _BYTE v79[5]; // [rsp+7Bh] [rbp-3Dh] BYREF
  _QWORD v80[7]; // [rsp+80h] [rbp-38h] BYREF

  v80[0] = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v78 = 0;
  v4 = (unsigned int)unpack_dd(a3, a3[1]);
  v5 = unpack_dd(a3, a3[1]);
  v6 = v5;
  if ( (int)(v4 | v5) < 0 || (int)(0x7FFFFFFF - v5) < (int)v4 )
  {
    v55 = pack_dd(v79, (unsigned __int64)v80, 0);
    sub_56350((__int64)a2, v79, v55 - v79);
    v56 = 0;
    if ( *(_BYTE *)(a1 + 184) )
      sub_390A0((int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", (unsigned int)v4, (unsigned int)v6);
  }
  else
  {
    sub_93C50((__int64)ptr, (int)(v4 + v5));
    v70 = v6;
    v7 = ptr[0];
    v72 = v4;
    v8 = 56LL * (int)v4;
    v9 = (char *)ptr[0] + v8;
    v10 = (char *)ptr[0];
    v66 = v8;
    if ( v8 )
    {
      v10 = (char *)ptr[0] + v8;
      v11 = 0;
      v12 = 0;
      do
      {
        v7[v11 + 40] = 0;
        v12 = unpack_dq(a3, a3[1]) + v12 - 1;
        *(_QWORD *)&v7[v11] = v12;
        *(_DWORD *)&v7[v11 + 36] = unpack_dd(a3, a3[1]);
        *(_DWORD *)&v7[v11 + 32] = unpack_dd(a3, a3[1]);
        *(_DWORD *)&v7[v11 + 44] = unpack_dd(a3, a3[1]);
        *(_DWORD *)&v7[v11 + 48] = unpack_dd(a3, a3[1]);
        v11 += 56;
      }
      while ( v66 != v11 );
      v9 = v10;
    }
    v69 = 56LL * (int)v70;
    v13 = &v9[v69];
    if ( v10 != v13 )
    {
      v14 = v10 + 24;
      v15 = 0;
      v73 = v13;
      do
      {
        v67 = unpack_dq(a3, a3[1]) + v15 - 1;
        *((_QWORD *)v14 - 3) = v67;
        v16 = (unsigned __int8 *)*a3;
        v17 = a3[1];
        if ( *a3 < v17 )
        {
          v18 = *v16;
          *a3 = (unsigned __int64)(v16 + 1);
          if ( v18 )
          {
            v19 = (__int64)(v14 - 16);
            v20 = *((_QWORD *)v14 - 1);
            if ( v20 >= v18 )
            {
              if ( v20 != v18 )
              {
                LOBYTE(s[0]) = 0;
                sub_5E330(v19, v18, (char *)s);
              }
            }
            else
            {
              if ( *(_QWORD *)v14 >= v18 )
              {
                v21 = *((char **)v14 - 2);
              }
              else
              {
                v21 = (char *)qvector_reserve(v19, *((char **)v14 - 2), v18, 1u);
                *((_QWORD *)v14 - 2) = v21;
                v20 = *((_QWORD *)v14 - 1);
              }
              memset(&v21[v20], 0, v18 - v20);
              *((_QWORD *)v14 - 1) = v18;
            }
            v22 = (const void *)*a3;
            v17 = a3[1];
            v23 = *a3 + v18;
            if ( v23 >= *a3 && v23 <= v17 )
            {
              v24 = *((void **)v14 - 2);
              *a3 = v23;
              memcpy(v24, v22, v18);
              v17 = a3[1];
            }
          }
        }
        v25 = v14 - 24;
        *((_DWORD *)v14 + 2) = unpack_dd(a3, v17);
        *((_DWORD *)v14 + 5) = unpack_dd(a3, a3[1]);
        *((_DWORD *)v14 + 6) = unpack_dd(a3, a3[1]);
        v14 += 56;
        v13 = v73;
        v26 = v25 + 56 == v73;
        v15 = v67;
      }
      while ( !v26 );
    }
    v27 = (char *)ptr[0];
    if ( (char *)ptr[0] + v66 != v13 )
    {
      v28 = &v7[v69];
      do
      {
        if ( *(_BYTE *)(a1 + 184) )
        {
          v29 = *(unsigned int *)&v27[v66 + 32];
          v30 = 0;
          if ( (_DWORD)v29 != 4 )
            v30 = *(unsigned int *)&v27[v66 + 36];
          sub_390A0(
            (int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n",
            *(_QWORD *)&v27[v66],
            v29,
            *(_QWORD *)&v27[v66 + 16],
            v30);
        }
        v27 += 56;
      }
      while ( v28 != v27 );
      v27 = (char *)ptr[0];
    }
    *(_OWORD *)s = 0;
    v75 = 0;
    v68 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, char *, __int64, __int64, char **))(**(_QWORD **)(a1 + 440)
                                                                                               + 328LL))(
            *(_QWORD *)(a1 + 440),
            &v76,
            v27,
            v72,
            v70,
            s);
    v31 = (unsigned __int8 *)ptr[0];
    if ( v66 )
    {
      for ( i = 0; i != v66; i += 56 )
      {
        if ( *(_BYTE *)(a1 + 184) )
        {
          v33 = v31[i + 40];
          v34 = "?";
          if ( v33 <= 0xA )
            v34 = off_14E790[v33];
          sub_390A0(
            (int)"add_bpt(ea=%a type=%d len=%d) => %s\n",
            *(_QWORD *)&v31[i],
            *(unsigned int *)&v31[i + 32],
            *(unsigned int *)&v31[i + 36],
            v34);
        }
      }
    }
    v35 = pack_dd(v79, (unsigned __int64)v80, v68);
    sub_56350((__int64)a2, v79, v35 - v79);
    v36 = pack_dd(v79, (unsigned __int64)v80, v76);
    sub_56350((__int64)a2, v79, v36 - v79);
    v37 = (unsigned __int8 *)ptr[0];
    v38 = a2;
    if ( ptr[0] != &v31[v66] )
    {
      do
      {
        v39 = v37[40];
        v40 = *v38;
        v41 = v38[1];
        if ( v38[2] < v41 + 1 )
        {
          v40 = (char *)qvector_reserve((__int64)a2, v40, (unsigned __int64)(v41 + 1), 1u);
          v38 = a2;
          *a2 = v40;
          v41 = a2[1];
        }
        v41[(_QWORD)v40] = v39;
        v42 = v38[1];
        v43 = v42 + 1;
        v38[1] = v42 + 1;
        if ( !v37[40] && *((_DWORD *)v37 + 8) == 4 )
        {
          v44 = v37[16];
          v45 = (unsigned __int64)(v42 + 2);
          v46 = *v38;
          if ( (unsigned __int64)v38[2] < v45 )
          {
            v46 = (char *)qvector_reserve((__int64)a2, *v38, v45, 1u);
            v38 = a2;
            *a2 = v46;
            v43 = a2[1];
          }
          v43[(_QWORD)v46] = v44;
          ++v38[1];
          sub_56350((__int64)a2, *((const void **)v37 + 1), *((_QWORD *)v37 + 2));
          v38 = a2;
        }
        v37 += 56;
      }
      while ( &v31[v66] != v37 );
    }
    if ( v69 )
    {
      v47 = (__int64)&v31[v66 + 40];
      for ( j = 0; j != v69; j += 56 )
      {
        v49 = *(_BYTE *)(v47 + j);
        v50 = *v38;
        v51 = v38[1];
        if ( v38[2] < v51 + 1 )
        {
          v50 = (char *)qvector_reserve((__int64)a2, v50, (unsigned __int64)(v51 + 1), 1u);
          v38 = a2;
          *a2 = v50;
          v51 = a2[1];
        }
        v51[(_QWORD)v50] = v49;
        ++v38[1];
        if ( *(_BYTE *)(a1 + 184) )
        {
          v52 = *(unsigned __int8 *)(v47 + j);
          v53 = "?";
          if ( v52 <= 0xA )
            v53 = off_14E790[v52];
          sub_390A0((int)"del_bpt(ea=%a) => %s\n", *(_QWORD *)(v47 + j - 40), v53);
          v38 = a2;
        }
      }
    }
    if ( v68 != 1 )
    {
      if ( s[1] )
        v54 = s[0];
      else
        v54 = s1;
      v57 = &byte_EB522;
      if ( v54 )
        v57 = v54;
      v58 = strlen(v57);
      sub_56350((__int64)a2, v57, v58 + 1);
    }
    v56 = v68;
    if ( s[0] )
    {
      s[1] = nullptr;
      qfree(s[0]);
      s[0] = nullptr;
      v75 = 0;
    }
  }
  v59 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v60 = ptr[1];
    if ( ptr[1] )
    {
      v61 = 1;
      for ( k = 8; ; k += 56 )
      {
        v63 = *(void **)&v59[k];
        if ( v63 )
        {
          *(_QWORD *)&v59[k + 8] = 0;
          qfree(v63);
          *(_QWORD *)&v59[k] = 0;
          *(_QWORD *)&v59[k + 16] = 0;
        }
        if ( v61 >= (unsigned __int64)v60 )
          break;
        v59 = (char *)ptr[0];
        ++v61;
      }
      v59 = (char *)ptr[0];
    }
    ptr[1] = nullptr;
    qfree(v59);
    ptr[0] = nullptr;
    v78 = 0;
  }
  return v56;
}
// 14E790: using guessed type char *off_14E790[11];
