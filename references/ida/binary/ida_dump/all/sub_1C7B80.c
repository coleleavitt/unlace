__int64 __fastcall sub_1C7B80(__int64 a1, _DWORD *a2, __int64 *a3, signed int a4, char a5)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v13; // edx
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbp
  size_t v16; // r14
  __int64 v17; // r13
  size_t v18; // r8
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  size_t v21; // r8
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // r8
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  size_t v30; // r14
  __int64 v31; // r13
  size_t v32; // r8
  __int64 v33; // rsi
  __int64 *v34; // r13
  __int64 v35; // r14
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r14
  size_t v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v50; // [rsp+10h] [rbp-78h]
  size_t v51; // [rsp+10h] [rbp-78h]
  __int64 v52; // [rsp+10h] [rbp-78h]
  unsigned __int64 v53; // [rsp+10h] [rbp-78h]
  size_t v54; // [rsp+10h] [rbp-78h]
  unsigned __int64 v55; // [rsp+10h] [rbp-78h]
  unsigned __int64 v56; // [rsp+18h] [rbp-70h]
  size_t v57; // [rsp+18h] [rbp-70h]
  __int64 v58; // [rsp+20h] [rbp-68h]
  size_t v59; // [rsp+20h] [rbp-68h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v61; // [rsp+38h] [rbp-50h]
  unsigned __int64 v62; // [rsp+48h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( (a5 & 1) != 0 )
    a3[1] = 0;
  src = nullptr;
  v61 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v8 = a3[1];
      v9 = 2;
      if ( v8 )
        v9 = v8-- + 1;
      v10 = *a3;
      if ( a3[2] < v9 )
      {
        v46 = qvector_reserve();
        *a3 = v46;
        v10 = v46;
      }
      a3[1] = v9;
      *(_BYTE *)(v10 + v8) = 63;
      *(_BYTE *)(*a3 + v8 + 1) = 0;
      goto LABEL_9;
    case 1:
      sub_FAAD0(a3);
      if ( (a5 & 2) == 0 )
        goto LABEL_10;
      goto LABEL_13;
    case 2:
      v34 = *(__int64 **)(a1 + 8);
      v35 = *v34;
      v50 = *v34 + 24 * v34[1];
      if ( v50 == *v34 )
        return *a3;
      while ( 1 )
      {
        sub_FAAD0(a3);
        sub_1C7B80(v35, a2, a3, *(unsigned __int16 *)(v35 + 18), 2);
        v35 += 24;
        if ( v35 == v50 )
          break;
        if ( v35 != *v34 )
        {
          v36 = a3[1];
          v37 = 2;
          if ( v36 )
            v37 = v36-- + 1;
          v38 = *a3;
          if ( a3[2] < v37 )
          {
            v58 = v36;
            v56 = v37;
            v39 = qvector_reserve();
            v36 = v58;
            v37 = v56;
            *a3 = v39;
            v38 = v39;
          }
          a3[1] = v37;
          *(_BYTE *)(v38 + v36) = 44;
          *(_BYTE *)(*a3 + v36 + 1) = 0;
        }
      }
LABEL_9:
      if ( (a5 & 2) != 0 )
      {
LABEL_13:
        if ( *(_DWORD *)a1 != 2 )
          sub_FAAD0(a3);
      }
LABEL_10:
      v11 = *a3;
      if ( src )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      return v11;
    case 3:
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a4;
      goto LABEL_16;
    case 4:
      v14 = a4 / 2;
      sub_1338F0(a2, (__int64 *)&src, *(unsigned __int16 *)(a1 + 10), a4 / 2);
      v20 = v61;
      if ( (_QWORD)v61 )
      {
        v21 = v61 - 1;
        if ( (_QWORD)v61 != 1 )
        {
          v40 = a3[1];
          v41 = v61 - 1;
          if ( v40 )
          {
            --v40;
            v41 = v21 + v40;
            v20 = v61 + v40;
          }
          v42 = *a3;
          if ( a3[2] < v20 )
          {
            v59 = v41;
            v57 = v61 - 1;
            v55 = v20;
            v48 = qvector_reserve();
            v41 = v59;
            *a3 = v48;
            v42 = v48;
            v21 = v57;
            v20 = v55;
          }
          a3[1] = v20;
          *(_BYTE *)(v42 + v41) = 0;
          memcpy((void *)(v40 + *a3), src, v21);
        }
      }
      v22 = a3[1];
      v23 = 2;
      if ( v22 )
        v23 = v22-- + 1;
      v24 = *a3;
      if ( a3[2] < v23 )
      {
        v53 = v23;
        v45 = qvector_reserve();
        v23 = v53;
        *a3 = v45;
        v24 = v45;
      }
      a3[1] = v23;
      *(_BYTE *)(v24 + v22) = 58;
      *(_BYTE *)(*a3 + v22 + 1) = 0;
      v13 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)a1 == 4 )
        v13 = (unsigned __int16)v13;
      else
        v14 = a4;
LABEL_16:
      sub_1338F0(a2, (__int64 *)&src, v13, v14);
      v15 = v61;
      if ( (_QWORD)v61 )
      {
        v16 = v61 - 1;
        if ( (_QWORD)v61 != 1 )
        {
          v17 = a3[1];
          v18 = v61 - 1;
          if ( v17 )
          {
            --v17;
            v18 = v16 + v17;
            v15 = v61 + v17;
          }
          v19 = *a3;
          if ( a3[2] < v15 )
          {
            v51 = v18;
            v43 = qvector_reserve();
            *a3 = v43;
            v18 = v51;
            v19 = v43;
          }
          a3[1] = v15;
          *(_BYTE *)(v19 + v18) = 0;
          memcpy((void *)(v17 + *a3), src, v16);
        }
      }
      goto LABEL_9;
    case 5:
      v25 = a3[1];
      v26 = *(_QWORD *)(a1 + 8);
      v27 = 2;
      if ( v25 )
        v27 = v25-- + 1;
      v28 = *a3;
      if ( a3[2] < v27 )
      {
        v52 = *(_QWORD *)(a1 + 8);
        v44 = qvector_reserve();
        *a3 = v44;
        v26 = v52;
        v28 = v44;
      }
      a3[1] = v27;
      *(_BYTE *)(v28 + v25) = 91;
      *(_BYTE *)(*a3 + v25 + 1) = 0;
      sub_1338F0(a2, (__int64 *)&src, *(_DWORD *)(v26 + 8), a2[21]);
      v29 = v61;
      if ( (_QWORD)v61 )
      {
        v30 = v61 - 1;
        if ( (_QWORD)v61 != 1 )
        {
          v31 = a3[1];
          v32 = v61 - 1;
          if ( v31 )
          {
            --v31;
            v32 = v30 + v31;
            v29 = v61 + v31;
          }
          v33 = *a3;
          if ( a3[2] < v29 )
          {
            v54 = v32;
            v47 = qvector_reserve();
            *a3 = v47;
            v32 = v54;
            v33 = v47;
          }
          a3[1] = v29;
          *(_BYTE *)(v33 + v32) = 0;
          memcpy((void *)(v31 + *a3), src, v30);
        }
      }
      sub_FAAD0(a3);
      if ( (a5 & 2) == 0 )
        goto LABEL_10;
      goto LABEL_13;
    case 6:
      sub_FAAD0(a3);
      if ( (a5 & 2) == 0 )
        goto LABEL_10;
      goto LABEL_13;
    default:
      goto LABEL_9;
  }
}
