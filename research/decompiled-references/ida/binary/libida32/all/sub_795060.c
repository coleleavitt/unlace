__int64 __fastcall sub_795060(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, unsigned int a6)
{
  unsigned int v6; // r13d
  __int64 v10; // r14
  unsigned int v12; // eax
  unsigned int i; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // r9d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  bool v25; // cf
  void *v26; // r10
  char *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  _QWORD *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rsi
  char *v52; // [rsp+0h] [rbp-98h]
  int v53; // [rsp+0h] [rbp-98h]
  int v54; // [rsp+Ch] [rbp-8Ch]
  __int64 v55; // [rsp+10h] [rbp-88h]
  _QWORD *v56; // [rsp+10h] [rbp-88h]
  unsigned int v57; // [rsp+10h] [rbp-88h]
  unsigned __int32 v58; // [rsp+10h] [rbp-88h]
  __int64 v59; // [rsp+18h] [rbp-80h]
  __int64 v60; // [rsp+18h] [rbp-80h]
  _QWORD *v61; // [rsp+18h] [rbp-80h]
  __int64 v62; // [rsp+18h] [rbp-80h]
  _QWORD *v63; // [rsp+18h] [rbp-80h]
  unsigned int v64; // [rsp+18h] [rbp-80h]
  __int64 v67; // [rsp+28h] [rbp-70h]
  _QWORD *v68; // [rsp+28h] [rbp-70h]
  __int64 v69; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v71; // [rsp+48h] [rbp-50h]
  unsigned __int64 v72; // [rsp+58h] [rbp-40h]

  v6 = a3 + a5;
  v72 = __readfsqword(0x28u);
  v71 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( a3 )
      v12 = sub_794710(a1, a2, a3 - 1, a6);
    else
      v12 = sub_7946D0(a1, a2, a6);
    for ( i = v12; i < v6; i = sub_7928A0(a1, a6, a2, 1) )
    {
      HIDWORD(v69) = sub_791FA0(a1, a2, i, a6);
      v15 = HIDWORD(v69);
      v16 = ptr;
      v17 = v71;
      LODWORD(v69) = i;
      v18 = v71 + 1;
      if ( &v69 < ptr || &v69 >= (__int64 *)((char *)ptr + 8 * *((_QWORD *)&v71 + 1)) )
      {
        if ( *((_QWORD *)&v71 + 1) < v18 )
        {
          v55 = *((_QWORD *)&v71 + 1);
          v19 = qvector_reserve(&ptr, 0, v18, 8);
          v20 = *((_QWORD *)&v71 + 1);
          v21 = (__int64 *)ptr;
          *((_QWORD *)&v71 + 1) = v55;
          v22 = v71 - 1;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v23 = v19;
            do
            {
              v24 = *v21;
              v23 += 8;
              ++v21;
              *(_QWORD *)(v23 - 8) = v24;
              v25 = v22-- == 0;
            }
            while ( !v25 );
            v21 = (__int64 *)ptr;
          }
          v59 = v20;
          v56 = (_QWORD *)v19;
          qfree(v21);
          v16 = v56;
          v17 = v71;
          ptr = v56;
          *((_QWORD *)&v71 + 1) = v59;
        }
        v16[v17] = v69;
      }
      else
      {
        if ( *((_QWORD *)&v71 + 1) < v18 )
        {
          v60 = *((_QWORD *)&v71 + 1);
          v57 = HIDWORD(v69);
          v29 = qvector_reserve(&ptr, 0, v18, 8);
          v30 = *((_QWORD *)&v71 + 1);
          v31 = (__int64 *)ptr;
          v32 = v71 - 1;
          *((_QWORD *)&v71 + 1) = v60;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v33 = v29;
            do
            {
              v34 = *v31;
              v33 += 8;
              ++v31;
              *(_QWORD *)(v33 - 8) = v34;
              v25 = v32-- == 0;
            }
            while ( !v25 );
            v31 = (__int64 *)ptr;
          }
          v61 = (_QWORD *)v29;
          qfree(v31);
          v16 = v61;
          v17 = v71;
          v15 = v57;
          ptr = v61;
          *((_QWORD *)&v71 + 1) = v30;
        }
        v14 = (unsigned int *)&v16[v17];
        *v14 = i;
        v14[1] = v15;
      }
      *(_QWORD *)&v71 = v71 + 1;
      sub_792400(a1, a2, i, a6);
      if ( a2 == -1 )
        break;
      if ( (a6 & 0x100) != 0 && unk_2CAA7A8 )
        i = unk_2CAA7A8(i);
      *(_BYTE *)(a1 + 52) = a6;
      *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
      if ( (a6 & 0x800) != 0 )
        *(_BYTE *)(a1 + 53) = i;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(i);
      *(_WORD *)(a1 + 45) = (a6 & 0x800) == 0 ? 10 : 7;
    }
  }
  else
  {
    if ( a2 == -1 )
      return 0;
    v53 = a6 & 0x800;
    v54 = a6 & 0x100;
    v58 = _byteswap_ulong(a2);
    while ( 1 )
    {
      if ( v54 && unk_2CAA7A8 )
        v6 = unk_2CAA7A8(v6);
      *(_BYTE *)(a1 + 52) = a6;
      *(_DWORD *)(a1 + 48) = v58;
      if ( v53 )
        *(_BYTE *)(a1 + 53) = v6;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v6);
      *(_WORD *)(a1 + 45) = v53 == 0 ? 10 : 7;
      v6 = sub_7928A0(a1, a6, a2, 0);
      if ( v6 < a3 || v6 == -1 )
        break;
      HIDWORD(v69) = sub_791FA0(a1, a2, v6, a6);
      v36 = HIDWORD(v69);
      v37 = ptr;
      v38 = v71;
      LODWORD(v69) = v6;
      v39 = v71 + 1;
      if ( &v69 < ptr || &v69 >= (__int64 *)((char *)ptr + 8 * *((_QWORD *)&v71 + 1)) )
      {
        if ( *((_QWORD *)&v71 + 1) < v39 )
        {
          v62 = *((_QWORD *)&v71 + 1);
          v40 = qvector_reserve(&ptr, 0, v39, 8);
          v41 = *((_QWORD *)&v71 + 1);
          v42 = (__int64 *)ptr;
          *((_QWORD *)&v71 + 1) = v62;
          v43 = v71 - 1;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v44 = v40;
            do
            {
              v45 = *v42;
              v44 += 8;
              ++v42;
              *(_QWORD *)(v44 - 8) = v45;
              v25 = v43-- == 0;
            }
            while ( !v25 );
            v42 = (__int64 *)ptr;
          }
          v63 = (_QWORD *)v40;
          qfree(v42);
          v37 = v63;
          v38 = v71;
          *((_QWORD *)&v71 + 1) = v41;
          ptr = v63;
        }
        v37[v38] = v69;
      }
      else
      {
        if ( *((_QWORD *)&v71 + 1) < v39 )
        {
          v67 = *((_QWORD *)&v71 + 1);
          v64 = HIDWORD(v69);
          v46 = qvector_reserve(&ptr, 0, v39, 8);
          v47 = *((_QWORD *)&v71 + 1);
          v48 = (__int64 *)ptr;
          v49 = v71 - 1;
          *((_QWORD *)&v71 + 1) = v67;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v50 = v46;
            do
            {
              v51 = *v48;
              v50 += 8;
              ++v48;
              *(_QWORD *)(v50 - 8) = v51;
              v25 = v49-- == 0;
            }
            while ( !v25 );
            v48 = (__int64 *)ptr;
          }
          v68 = (_QWORD *)v46;
          qfree(v48);
          v37 = v68;
          v38 = v71;
          *((_QWORD *)&v71 + 1) = v47;
          v36 = v64;
          ptr = v68;
        }
        v35 = (unsigned int *)&v37[v38];
        *v35 = v6;
        v35[1] = v36;
      }
      *(_QWORD *)&v71 = v71 + 1;
      sub_792400(a1, a2, v6, a6);
    }
  }
  v26 = ptr;
  v10 = v71;
  v52 = (char *)ptr + 8 * v71;
  if ( v52 != ptr )
  {
    v27 = (char *)ptr;
    do
    {
      v28 = a4 - a3 + *(_DWORD *)v27;
      LODWORD(v69) = *((_DWORD *)v27 + 1);
      sub_791DB0((const char *)a1, a2, v28, (const char *)&v69, 4u, a6);
      v27 += 8;
    }
    while ( v52 != v27 );
    v26 = ptr;
    v10 = v71;
  }
  if ( v26 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v26);
  }
  return v10;
}

