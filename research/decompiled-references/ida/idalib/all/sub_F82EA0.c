unsigned __int64 __fastcall sub_F82EA0(
        __int64 a1,
        char *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  int v8; // r15d
  _QWORD **v12; // rsi
  _QWORD *v13; // rax
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r12
  unsigned __int64 v23; // r15
  int v24; // eax
  unsigned __int64 v25; // r14
  int v26; // r15d
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r13
  unsigned __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  int v45; // edx
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int *v58; // rax
  _QWORD *v59; // rax
  char *v60; // rdx
  unsigned __int64 v61; // [rsp-10h] [rbp-88h]
  __int64 v62; // [rsp-8h] [rbp-80h]
  _QWORD *v64; // [rsp+10h] [rbp-68h]
  int v65; // [rsp+18h] [rbp-60h]
  char *v66; // [rsp+28h] [rbp-50h] BYREF
  char *v67; // [rsp+30h] [rbp-48h] BYREF
  int v68; // [rsp+38h] [rbp-40h]

  v8 = 0;
  v66 = a2;
  if ( !a4 )
  {
    if ( (unsigned __int8)sub_B9B690(a8, (__int64 *)&v66, &v67) )
    {
      v58 = (int *)(v67 + 8);
      v8 = *((_DWORD *)v67 + 2) + 1;
    }
    else
    {
      v8 = 1;
      v59 = sub_F82E10((__int64)a8, (__int64 *)&v66, v67, v55, v56, v57);
      v60 = v66;
      *((_DWORD *)v59 + 2) = 0;
      v58 = (int *)(v59 + 1);
      *((_QWORD *)v58 - 1) = v60;
    }
    *v58 = v8;
    a2 = v66;
  }
  v67 = a2;
  v68 = v8;
  v12 = (_QWORD **)&v67;
  *sub_F82D40(a6, (__int64)&v67) = a3;
  v68 = v8;
  v67 = v66;
  v13 = sub_F82D40(a7, (__int64)&v67);
  v14 = v66;
  *v13 = a5;
  result = sub_A7A590((__int64)v14, (__int64)&v67, a5, v15, v16, v17);
  v22 = v19;
  v23 = result;
  if ( result != v19 )
  {
    v24 = a3;
    v25 = v23;
    v26 = v24;
    do
    {
      v27 = sub_F79C60(*(__int64 **)(v25 + 16), (__int64)v12, v19, v20, v21);
      v32 = sub_F63270(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v12, v28, v29, v30, v31);
      v36 = (__int64)v32;
      if ( (*(_BYTE *)(v25 + 12) & 1) != 0 )
      {
        v20 = *(unsigned int *)(a6 + 16);
        v19 = *(_QWORD *)a6;
        if ( (_DWORD)v20 )
        {
          v20 = (unsigned int)(v20 - 1);
          v21 = 1;
          v37 = 0x1CE4E5B900000000LL * (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          for ( result = (unsigned int)v20 & ((unsigned int)(v37 >> 31) ^ (unsigned int)v37);
                ;
                result = (unsigned int)v20 & v38 )
          {
            v12 = (_QWORD **)(v19 + 24LL * (unsigned int)result);
            if ( (_QWORD *)v36 == *v12 )
            {
              v35 = *((unsigned int *)v12 + 2);
              if ( !(_DWORD)v35 )
                break;
            }
            if ( *v12 == (_QWORD *)-4096LL && *((_DWORD *)v12 + 2) == -1 )
              goto LABEL_15;
            v38 = v21 + result;
            v21 = (unsigned int)(v21 + 1);
          }
          goto LABEL_12;
        }
LABEL_15:
        v64 = sub_EDE580(*(_QWORD *)(a1 + 24), *(char **)(a1 + 16), v19, v20, v21, v35);
        v65 = sub_F81DB0((__int64 *)(*(_QWORD *)(a1 + 32) + 72LL), v36, *(__int64 **)(a1 + 32), v47, v48, v49);
        v54 = sub_F81DB0(v64 + 9, v36, v50, v51, v52, v53);
        v45 = v65;
        v46 = v54;
      }
      else
      {
        v39 = sub_EDE580(*(_QWORD *)(a1 + 24), v66, v33, v34, v21, v35);
        v44 = sub_F81500(v39 + 9, v36, v40, v41, v42, v43);
        v45 = v44 + v26;
        v46 = a5 + v44;
      }
      v12 = (_QWORD **)v36;
      sub_F82EA0(a1, v36, v45, *(_BYTE *)(v25 + 12) & 1, v46, a6, a7, (__int64)a8);
      result = v61;
      v19 = v62;
LABEL_12:
      v25 += 24LL;
    }
    while ( v25 != v22 );
  }
  return result;
}
