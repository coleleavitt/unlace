__int64 __fastcall sub_5A80(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // ebx
  int v9; // r13d
  signed int v11; // ebx
  __int64 v12; // r15
  char *v13; // rsi
  const char *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r15
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  size_t v34; // r8
  __int64 v35; // r15
  size_t v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+10h] [rbp-1E0h]
  __int64 v43; // [rsp+10h] [rbp-1E0h]
  __int64 v44; // [rsp+10h] [rbp-1E0h]
  size_t v45; // [rsp+10h] [rbp-1E0h]
  unsigned __int64 v46; // [rsp+18h] [rbp-1D8h]
  __int64 v47; // [rsp+18h] [rbp-1D8h]
  __int64 v48; // [rsp+18h] [rbp-1D8h]
  size_t v49; // [rsp+18h] [rbp-1D8h]
  unsigned __int64 v50; // [rsp+20h] [rbp-1D0h]
  int v51; // [rsp+28h] [rbp-1C8h]
  unsigned __int64 v52; // [rsp+28h] [rbp-1C8h]
  unsigned __int64 v53; // [rsp+28h] [rbp-1C8h]
  unsigned int v55; // [rsp+3Ch] [rbp-1B4h]
  signed int v56; // [rsp+3Ch] [rbp-1B4h]
  _QWORD v57[4]; // [rsp+40h] [rbp-1B0h] BYREF
  void *src; // [rsp+60h] [rbp-190h]
  __int128 v59; // [rsp+68h] [rbp-188h]
  __int64 v60; // [rsp+80h] [rbp-170h] BYREF
  __int128 v61; // [rsp+88h] [rbp-168h]
  const char *v62; // [rsp+A0h] [rbp-150h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-148h]
  __int128 v64; // [rsp+C0h] [rbp-130h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-120h]
  __int128 v66; // [rsp+D8h] [rbp-118h]
  __int64 v67; // [rsp+E8h] [rbp-108h]
  __int128 v68; // [rsp+F0h] [rbp-100h]
  char *v69; // [rsp+100h] [rbp-F0h]
  __int128 v70; // [rsp+108h] [rbp-E8h]
  __int128 v71; // [rsp+120h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+130h] [rbp-C0h]
  __int128 v73; // [rsp+138h] [rbp-B8h]
  __int64 v74; // [rsp+148h] [rbp-A8h]
  __int64 v75; // [rsp+150h] [rbp-A0h]
  int v76; // [rsp+158h] [rbp-98h]
  __int128 v77; // [rsp+160h] [rbp-90h]
  __int64 v78; // [rsp+170h] [rbp-80h]
  __int128 v79; // [rsp+178h] [rbp-78h]
  __int64 v80; // [rsp+188h] [rbp-68h]
  __int64 v81; // [rsp+190h] [rbp-60h]
  int v82; // [rsp+198h] [rbp-58h]
  int v83; // [rsp+1A0h] [rbp-50h]
  __int64 v84; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v85; // [rsp+1B8h] [rbp-38h]

  v7 = a4;
  v55 = a5;
  v85 = __readfsqword(0x28u);
  if ( a4 < a5 )
  {
    v80 = a1;
    v72 = 0;
    v74 = a1;
    v75 = -1;
    v76 = 0;
    v78 = 0;
    v81 = -1;
    v82 = -1;
    v83 = 0;
    v84 = -1;
    v71 = 0;
    v73 = 0;
    v77 = 0;
    v79 = 0;
    if ( a4 < 0 )
      return v55;
    v9 = a6;
    if ( (unsigned __int64)a4 >= *(_QWORD *)(a6 + 56) )
      return v55;
    if ( (unsigned __int8)sub_81A0((unsigned int)&v71, a3, *(_QWORD *)(*(_QWORD *)(a6 + 48) + 8LL * a4), 0, a5, a6) )
    {
      v11 = v7 + 1;
      v51 = v76;
      sub_55E0((__int64)v57, (__int64)&v71);
      src = 0;
      v59 = 0;
      v12 = 2 * a7;
      if ( 2 * a7 )
      {
        v30 = (void *)qvector_reserve();
        v31 = v59;
        src = v30;
        if ( (unsigned __int64)v59 < v12 + 1 )
        {
          do
          {
            v32 = v31;
            *((_BYTE *)v30 + v31++) = 32;
            v30 = src;
          }
          while ( v12 != v32 );
        }
        *(_QWORD *)&v59 = v12 + 1;
        *((_BYTE *)v30 + v12) = 0;
        v33 = v59;
        if ( (_QWORD)v59 )
        {
          v34 = v59 - 1;
          if ( (_QWORD)v59 != 1 )
          {
            v35 = a2[1];
            v36 = v59 - 1;
            if ( v35 )
            {
              --v35;
              v36 = v34 + v35;
              v33 = v59 + v35;
            }
            v37 = *a2;
            if ( a2[2] < v33 )
            {
              v45 = v59 - 1;
              v49 = v36;
              v50 = v33;
              v41 = qvector_reserve();
              *a2 = v41;
              v34 = v45;
              v37 = v41;
              v36 = v49;
              v33 = v50;
            }
            a2[1] = v33;
            *(_BYTE *)(v37 + v36) = 0;
            memcpy((void *)(v35 + *a2), src, v34);
          }
        }
      }
      v60 = 0;
      v62 = 0;
      v65 = 0;
      v67 = a1;
      v69 = 0;
      v61 = 0;
      v63 = 0;
      v64 = 0;
      v66 = 0;
      v68 = -1;
      v70 = 0;
      v69 = (char *)qvector_reserve();
      *(_QWORD *)&v70 = 1;
      *v69 = 0;
      if ( !(unsigned __int8)sub_7690(&v64, a3, v75, 0) )
        goto LABEL_52;
      v13 = (char *)&haystack;
      if ( (_QWORD)v70 )
        v13 = v69;
      if ( (unsigned __int8)sub_4850((__int64)&v62, v13) )
      {
        v14 = &haystack;
        if ( (_QWORD)v63 )
          v14 = v62;
        sub_107B0(&v60, v75, v14);
      }
      else
      {
LABEL_52:
        sub_53A0(&v60);
      }
      sub_5520(a2);
      if ( HIDWORD(v81) != -1 )
        sub_5520(a2);
      v15 = a2[1];
      if ( v15 )
      {
        v16 = v15 + 2;
        v17 = v15 + 3;
        --v15;
      }
      else
      {
        v17 = 4;
        v16 = 3;
      }
      v18 = *a2;
      if ( a2[2] < v17 )
      {
        v42 = v16;
        v46 = v17;
        v38 = qvector_reserve();
        *a2 = v38;
        v16 = v42;
        v18 = v38;
        v17 = v46;
      }
      a2[1] = v17;
      *(_BYTE *)(v18 + v16) = 0;
      v19 = *a2 + v15;
      *(_WORD *)v19 = 10784;
      *(_BYTE *)(v19 + 2) = 47;
      if ( v51 )
      {
        v20 = v11 + v51;
        v21 = a2[1];
        if ( v11 + v51 > (int)v55 )
          v20 = v55;
        v56 = v20;
        if ( v21 )
        {
          v22 = v21 + 2;
          v23 = v21 + 3;
          --v21;
        }
        else
        {
          v23 = 4;
          v22 = 3;
        }
        v24 = *a2;
        if ( a2[2] < v23 )
        {
          v44 = v21;
          v48 = v22;
          v53 = v23;
          v40 = qvector_reserve();
          *a2 = v40;
          v21 = v44;
          v24 = v40;
          v22 = v48;
          v23 = v53;
        }
        a2[1] = v23;
        *(_BYTE *)(v24 + v22) = 0;
        v25 = *a2 + v21;
        *(_WORD *)v25 = 14880;
        *(_BYTE *)(v25 + 2) = 10;
        if ( v11 < v56 )
        {
          while ( 1 )
          {
            v11 = sub_5A80(a1, (_DWORD)a2, a3, v11, v56, v9, a7 + 1);
            if ( v11 >= v56 )
              break;
            v26 = a2[1];
            if ( v26 )
            {
              v27 = v26 + 1;
              v28 = v26 + 2;
              --v26;
            }
            else
            {
              v28 = 3;
              v27 = 2;
            }
            v29 = *a2;
            if ( a2[2] < v28 )
            {
              v43 = v26;
              v47 = v27;
              v52 = v28;
              v39 = qvector_reserve();
              *a2 = v39;
              v26 = v43;
              v29 = v39;
              v27 = v47;
              v28 = v52;
            }
            a2[1] = v28;
            *(_BYTE *)(v29 + v27) = 0;
            *(_WORD *)(*a2 + v26) = 2604;
          }
        }
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree();
      }
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree();
      }
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      if ( v57[0] )
      {
        v57[1] = 0;
        qfree();
      }
      v55 = v11;
    }
    if ( v78 )
    {
      *(_QWORD *)&v79 = 0;
      qfree();
    }
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
      return v55;
    }
    else
    {
      return v55;
    }
  }
  return v7;
}
