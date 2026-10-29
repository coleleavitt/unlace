__int64 __fastcall sub_71DE40(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int *v6; // rbp
  __int64 v8; // r15
  int v9; // r14d
  int *v10; // rsi
  __int64 v11; // r8
  int v12; // edx
  unsigned int *v13; // r13
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int16 *v18; // r8
  unsigned __int16 *v19; // rdi
  unsigned __int64 v20; // r10
  unsigned __int16 *v21; // rsi
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rax
  int v26; // edx
  unsigned __int8 v27; // si
  unsigned __int8 v28; // cl
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // r13d
  __int64 v32; // rsi
  unsigned int v33; // ecx
  unsigned __int16 *v34; // r9
  char *v35; // r8
  unsigned __int64 v36; // r11
  unsigned __int16 *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  int v41; // r10d
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int8 v44; // di
  unsigned __int8 v45; // si
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  int v48; // r10d
  __int64 v49; // rdx
  unsigned __int16 *v50; // rcx
  unsigned __int64 v51; // r11
  unsigned __int16 *v52; // r8
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r13
  int v55; // r9d
  int v56; // eax
  unsigned __int8 v57; // si
  __int64 v58; // r13
  __int64 v59; // r14
  unsigned __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdi
  int v67; // [rsp+10h] [rbp-68h]
  int v68; // [rsp+10h] [rbp-68h]
  __int64 v69; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+1Ch] [rbp-5Ch]
  __int16 v72; // [rsp+20h] [rbp-58h]
  unsigned __int64 v73; // [rsp+20h] [rbp-58h]
  int v74; // [rsp+30h] [rbp-48h] BYREF
  char v75; // [rsp+34h] [rbp-44h]
  unsigned __int64 v76; // [rsp+38h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v6 = *(unsigned int **)a2;
  if ( !**(_DWORD **)a2 )
    return sub_71DA00(a1, a2);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *((__int16 *)v6 + 2);
  v67 = *(_DWORD *)(a2 + 12);
  v71 = *(_DWORD *)(a1 + 36);
  sub_7180A0(v8, *(_QWORD *)a2);
  v10 = &v74;
  sub_721790(v6, &v74, *(_QWORD *)(a1 + 4232), 0xFFFFFFFFLL, v11);
  v12 = v74;
  v13 = (unsigned int *)((char *)v6 + 6 * v74 + 6);
  if ( v75 )
  {
LABEL_4:
    if ( v9 > v12 )
    {
      v10 = (int *)a2;
      sub_71D220(a1, a2, v12, 1);
      v12 = v74;
    }
    v14 = *((__int16 *)v6 + 2);
    v15 = v12 + 1;
    byte_2CA272D = 1;
    if ( v12 + 1 < v14 )
    {
      do
      {
        v16 = *((unsigned __int16 *)v13 + 5);
        v17 = *(v6 - 2);
        v18 = *(unsigned __int16 **)(a1 + 4232);
        if ( (unsigned int)v16 >= (unsigned int)v17 )
          sub_722BF0(v16, v10, v17);
        v19 = (unsigned __int16 *)((char *)v6 + v16);
        v20 = *(unsigned __int16 *)((char *)v6 + v16);
        v21 = (unsigned __int16 *)((char *)v6 + v16 + v20 + 2);
        if ( (int)v16 + (int)v20 + 3 >= (unsigned int)v17 )
          sub_722BF0(v19, v21, v17);
        if ( (unsigned int)v16 + *v21 + (_DWORD)v20 + 4 - 1 >= (unsigned int)v17 )
          sub_722BF0(v19, v21, v17);
        v22 = *v18;
        v23 = *v19;
        if ( v22 <= v20 )
          v23 = *v18;
        v24 = v23;
        if ( v23 )
        {
          v25 = 2;
          v26 = 1;
          while ( 1 )
          {
            v27 = *((_BYTE *)v19 + v25);
            v28 = *((_BYTE *)v18 + v25);
            if ( v27 != v28 )
              break;
            ++v26;
            ++v25;
            if ( v24 < v26 )
              goto LABEL_43;
          }
          if ( v27 < v28 )
            v26 = -v26;
        }
        else
        {
          v26 = 1;
LABEL_43:
          if ( v22 == v20 )
          {
            v26 = 0;
          }
          else if ( v22 >= v20 )
          {
            v26 = -v26;
          }
        }
        if ( *(_DWORD *)(a1 + 4240) >= v26 )
          break;
        sub_71DD10(a1, *v13);
        sub_71D220(a1, a2, v15, 1);
        --*(_DWORD *)(a1 + 28);
        v10 = (int *)a2;
        *v13 = sub_725B20(a1, a2, v15);
      }
      while ( *((__int16 *)v6 + 2) > (int)v15 );
    }
    sub_71D930(a1, (unsigned int **)a2, v15, 1u, 0);
    *(_QWORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 64) = 0;
    v29 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 1612) = 0;
    v30 = *((__int16 *)v6 + 2);
    v72 = *((_WORD *)v6 + 2);
    unk_2CA26C9 = v29 >> 1 < *(__int16 *)(a2 + 8);
    if ( (v67 != v71) < v30 )
    {
      v68 = v30;
      sub_71E620(a1, a2, (unsigned int)v74, 0);
      if ( v72 == *((_WORD *)v6 + 2) )
      {
        v47 = a1;
        sub_71E620(a1, a2, v15, 1);
        if ( v72 == *((_WORD *)v6 + 2) )
        {
          v48 = v74;
          if ( v74 < v68 )
          {
            v49 = *((unsigned __int16 *)v13 + 2);
            if ( (unsigned __int16)v49 > 1u )
            {
              v63 = *(_QWORD *)a2;
              v64 = *(unsigned int *)(*(_QWORD *)a2 - 8LL);
              if ( (unsigned __int16)v49 >= (unsigned int)v64 )
                sub_722BF0(a1, v64, v49);
              v50 = (unsigned __int16 *)(v63 + v49);
              v51 = *(unsigned __int16 *)(v63 + v49);
              v65 = v49 + v51 + 3;
              if ( (unsigned int)v65 >= (unsigned int)v64 )
                sub_722BF0(v65, v64, v49);
              v47 = *(unsigned __int16 *)(v63 + v49 + v51 + 2);
              v49 = v49 + (int)v47 + (int)v51 + 4 - 1;
              if ( (unsigned int)v49 >= (unsigned int)v64 )
                sub_722BF0(v47, v64, v49);
            }
            else
            {
              v50 = *(unsigned __int16 **)(a2 + 8 * v49 + 16);
              if ( !v50 )
                sub_722BF0(a1, a2, v49);
              v51 = *v50;
            }
            v52 = *(unsigned __int16 **)(a1 + 4232);
            v53 = v51;
            v54 = *v52;
            if ( v54 <= v51 )
              v53 = *v52;
            v55 = v53;
            if ( v53 )
            {
              v49 = 2;
              v56 = 1;
              while ( 1 )
              {
                v47 = *((unsigned __int8 *)v50 + v49);
                v57 = *((_BYTE *)v52 + v49);
                if ( (_BYTE)v47 != v57 )
                  break;
                ++v56;
                ++v49;
                if ( v55 < v56 )
                  goto LABEL_83;
              }
              v49 = (unsigned int)-v56;
              if ( (unsigned __int8)v47 < v57 )
                v56 = -v56;
              if ( !v56 )
                goto LABEL_73;
            }
            else
            {
              v56 = 1;
LABEL_83:
              if ( v54 == v51 )
                goto LABEL_73;
              v49 = (unsigned int)-v56;
              if ( v54 >= v51 )
                v56 = -v56;
            }
            if ( *(_DWORD *)(a1 + 4240) < v56 )
            {
LABEL_73:
              v58 = *(_QWORD *)(a1 + 16);
              v59 = *(_QWORD *)(v58 + 8);
              --*(_DWORD *)(a1 + 28);
              if ( v48 )
              {
                v47 = (unsigned __int64)v6 + 6;
                v60 = *(unsigned int *)((char *)v6 + 6 * v48);
              }
              else
              {
                v60 = *v6;
              }
              if ( !(_DWORD)v60 )
                sub_722BF0(v47, v60, v49);
              v61 = sub_71AA60(a1, v60, 1u);
              if ( !v61 || *(__int16 *)(v61 + 8) < 0 )
                sub_722BF0(a1, v60, v62);
              v69 = v61;
              sub_722EF0(a1, v61, a2, a2, (unsigned int)v74, (unsigned int)v74);
              if ( unk_2CA26C9 )
                sub_71FC40(a1, a2, v69, (unsigned int)v74, 0);
              *(_QWORD *)(v58 + 8) = v59;
            }
          }
        }
      }
      if ( *(__int16 *)(a2 + 8) < 0 )
      {
        sub_724140(a1, a2, a3, a4);
        byte_2CA272D = 1;
        unk_2CA26C9 = 0;
      }
      else
      {
        unk_2CA26C9 = *(_DWORD *)a1 >> 1 < (unsigned int)*(__int16 *)(a2 + 8);
        sub_71A620(a1, a2);
      }
      if ( v72 != *((_WORD *)v6 + 2) )
        byte_2CA272D = 1;
      goto LABEL_26;
    }
    goto LABEL_50;
  }
  if ( v74 != v9 )
  {
    v32 = *((unsigned __int16 *)v13 + 2);
    v33 = *(v6 - 2);
    v34 = *(unsigned __int16 **)(a1 + 4232);
    if ( (unsigned int)v32 >= v33 )
      sub_722BF0((char *)v6 + 6, v32, v74);
    v35 = (char *)v6 + v32;
    v36 = *(unsigned __int16 *)((char *)v6 + v32);
    v37 = (unsigned __int16 *)((char *)v6 + v32 + v36 + 2);
    v38 = v32 + v36 + 3;
    if ( (unsigned int)v38 >= v33 )
      sub_722BF0(v37, v38, v74);
    v39 = *v37;
    if ( (int)v35 + (int)v39 + (int)v36 + 4 - 1 - (int)v6 >= v33 )
      sub_722BF0(v37, v39, v74);
    v40 = *v34;
    v73 = v40;
    if ( v40 > v36 )
      v40 = v36;
    v41 = v40;
    if ( v40 )
    {
      v42 = 2;
      v43 = 1;
      while ( 1 )
      {
        v44 = v35[v42];
        v45 = *((_BYTE *)v34 + v42);
        if ( v44 != v45 )
          break;
        ++v43;
        ++v42;
        if ( v41 < v43 )
          goto LABEL_53;
      }
      if ( v44 < v45 )
        v43 = -v43;
    }
    else
    {
      v43 = 1;
LABEL_53:
      if ( v73 == v36 )
      {
        v43 = 0;
      }
      else if ( v73 >= v36 )
      {
        v43 = -v43;
      }
    }
    if ( *(_DWORD *)(a1 + 4240) < v43 )
    {
      v10 = (int *)a2;
      sub_71D930(a1, (unsigned int **)a2, v74, 0, 1u);
      v12 = v74;
      goto LABEL_4;
    }
  }
  sub_71D930(a1, (unsigned int **)a2, v74, 0, 0);
  *(_QWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 64) = 0;
  v46 = (unsigned int)v74;
  *(_DWORD *)(a1 + 1612) = 0;
  v31 = sub_71E620(a1, a2, v46, 0);
  if ( !(_BYTE)v31 )
    goto LABEL_27;
  if ( *(__int16 *)(a2 + 8) < 0 )
  {
    sub_724140(a1, a2, a3, a4);
    byte_2CA272D = 1;
    unk_2CA26C9 = 0;
    goto LABEL_26;
  }
LABEL_50:
  sub_71A620(a1, a2);
LABEL_26:
  v31 = 1;
LABEL_27:
  sub_7180B0(v8, (__int64)v6);
  return v31;
}

