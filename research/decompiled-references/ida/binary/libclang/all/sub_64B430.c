void __fastcall sub_64B430(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  _BYTE *v14; // rdi
  void *v15; // rdi
  size_t v16; // r15
  _BYTE *v17; // r8
  void *v18; // rdi
  size_t v19; // r15
  _BYTE *v20; // r8
  void *v21; // rdi
  size_t v22; // r15
  _BYTE *v23; // r8
  size_t v24; // r15
  _BYTE *v25; // r8
  __int64 v26; // r13
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  __int64 *v36; // r13
  __int64 *v37; // rbp
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 *v40; // rdi
  _BYTE *v41; // [rsp+0h] [rbp-58h]
  _BYTE *v42; // [rsp+0h] [rbp-58h]
  _BYTE *v43; // [rsp+0h] [rbp-58h]
  _BYTE *v44; // [rsp+0h] [rbp-58h]
  unsigned int v45; // [rsp+Ch] [rbp-4Ch]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v4 = *(__int64 **)a1;
    v45 = *((_DWORD *)a2 + 2);
    if ( v3 >= v45 )
    {
      v32 = *(__int64 **)a1;
      if ( v45 )
      {
        v33 = *a2;
        v34 = (unsigned __int64)v45 << 7;
        v35 = *a2 + v34;
        v36 = *(__int64 **)a1;
        do
        {
          std::string::_M_assign();
          std::string::_M_assign();
          std::string::_M_assign();
          v33 += 128;
          std::string::_M_assign();
          v36 += 16;
        }
        while ( v33 != v35 );
        v32 = *(__int64 **)a1;
        v3 = *(unsigned int *)(a1 + 8);
        v4 = (__int64 *)((char *)v4 + v34);
      }
      v37 = &v32[16 * v3];
      while ( v37 != v4 )
      {
        while ( 1 )
        {
          v37 -= 16;
          v38 = (__int64 *)v37[12];
          if ( v38 != v37 + 14 )
            operator delete(v38, v37[14] + 1);
          v39 = (__int64 *)v37[8];
          if ( v39 != v37 + 10 )
            operator delete(v39, v37[10] + 1);
          v40 = (__int64 *)v37[4];
          if ( v40 != v37 + 6 )
            operator delete(v40, v37[6] + 1);
          if ( (__int64 *)*v37 == v37 + 2 )
            break;
          operator delete((void *)*v37, v37[2] + 1);
          if ( v37 == v4 )
            goto LABEL_64;
        }
      }
    }
    else
    {
      if ( *(unsigned int *)(a1 + 12) >= (unsigned __int64)v45 )
      {
        if ( !*(_DWORD *)(a1 + 8) )
        {
          v13 = *a2;
          v12 = *a2 + ((unsigned __int64)v45 << 7);
          goto LABEL_28;
        }
        v26 = *a2;
        v9 = v3 << 7;
        v27 = *a2 + v9;
        do
        {
          std::string::_M_assign();
          std::string::_M_assign();
          std::string::_M_assign();
          v26 += 128;
          std::string::_M_assign();
          v4 += 16;
        }
        while ( v26 != v27 );
        v10 = *((unsigned int *)a2 + 2);
      }
      else
      {
        v5 = &v4[16 * v3];
        while ( v5 != v4 )
        {
          while ( 1 )
          {
            v5 -= 16;
            v6 = (__int64 *)v5[12];
            if ( v6 != v5 + 14 )
              operator delete(v6, v5[14] + 1);
            v7 = (__int64 *)v5[8];
            if ( v7 != v5 + 10 )
              operator delete(v7, v5[10] + 1);
            v8 = (__int64 *)v5[4];
            if ( v8 != v5 + 6 )
              operator delete(v8, v5[6] + 1);
            if ( (__int64 *)*v5 == v5 + 2 )
              break;
            operator delete((void *)*v5, v5[2] + 1);
            if ( v5 == v4 )
              goto LABEL_14;
          }
        }
LABEL_14:
        *(_DWORD *)(a1 + 8) = 0;
        v9 = 0;
        sub_64A630(a1, v45);
        v10 = *((unsigned int *)a2 + 2);
      }
      v11 = v10 << 7;
      v12 = *a2 + v11;
      v4 = (__int64 *)(v9 + *(_QWORD *)a1);
      v13 = v9 + *a2;
      if ( v11 != v9 )
      {
LABEL_28:
        while ( 1 )
        {
          *v4 = (__int64)(v4 + 2);
          v24 = *(_QWORD *)(v13 + 8);
          v25 = *(_BYTE **)v13;
          if ( v24 > 0xF )
            break;
          v14 = (_BYTE *)*v4;
          if ( v24 == 1 )
          {
            *v14 = *v25;
            v14 = (_BYTE *)*v4;
            goto LABEL_18;
          }
          if ( v24 )
            goto LABEL_43;
LABEL_18:
          v4[1] = v24;
          v14[v24] = 0;
          v15 = v4 + 6;
          v4[4] = (__int64)(v4 + 6);
          v16 = *(_QWORD *)(v13 + 40);
          v17 = *(_BYTE **)(v13 + 32);
          if ( v16 > 0xF )
          {
            v44 = *(_BYTE **)(v13 + 32);
            v31 = std::string::_M_create();
            v17 = v44;
            v4[4] = v31;
            v15 = (void *)v31;
            v4[6] = v16;
LABEL_49:
            memcpy(v15, v17, v16);
            v15 = (void *)v4[4];
            goto LABEL_21;
          }
          if ( v16 == 1 )
          {
            *((_BYTE *)v4 + 48) = *v17;
            goto LABEL_21;
          }
          if ( v16 )
            goto LABEL_49;
LABEL_21:
          v4[5] = v16;
          *((_BYTE *)v15 + v16) = 0;
          v18 = v4 + 10;
          v4[8] = (__int64)(v4 + 10);
          v19 = *(_QWORD *)(v13 + 72);
          v20 = *(_BYTE **)(v13 + 64);
          if ( v19 > 0xF )
          {
            v43 = *(_BYTE **)(v13 + 64);
            v30 = std::string::_M_create();
            v20 = v43;
            v4[8] = v30;
            v18 = (void *)v30;
            v4[10] = v19;
LABEL_47:
            memcpy(v18, v20, v19);
            v18 = (void *)v4[8];
            goto LABEL_24;
          }
          if ( v19 == 1 )
          {
            *((_BYTE *)v4 + 80) = *v20;
            goto LABEL_24;
          }
          if ( v19 )
            goto LABEL_47;
LABEL_24:
          v4[9] = v19;
          *((_BYTE *)v18 + v19) = 0;
          v21 = v4 + 14;
          v4[12] = (__int64)(v4 + 14);
          v22 = *(_QWORD *)(v13 + 104);
          v23 = *(_BYTE **)(v13 + 96);
          if ( v22 > 0xF )
          {
            v42 = *(_BYTE **)(v13 + 96);
            v29 = std::string::_M_create();
            v23 = v42;
            v4[12] = v29;
            v21 = (void *)v29;
            v4[14] = v22;
LABEL_45:
            memcpy(v21, v23, v22);
            v21 = (void *)v4[12];
            goto LABEL_27;
          }
          if ( v22 == 1 )
          {
            *((_BYTE *)v4 + 112) = *v23;
          }
          else if ( v22 )
          {
            goto LABEL_45;
          }
LABEL_27:
          v13 += 128LL;
          v4[13] = v22;
          v4 += 16;
          *((_BYTE *)v21 + v22) = 0;
          if ( v12 == v13 )
            goto LABEL_64;
        }
        v41 = *(_BYTE **)v13;
        v28 = std::string::_M_create();
        v25 = v41;
        *v4 = v28;
        v14 = (_BYTE *)v28;
        v4[2] = v24;
LABEL_43:
        memcpy(v14, v25, v24);
        v14 = (_BYTE *)*v4;
        goto LABEL_18;
      }
    }
LABEL_64:
    *(_DWORD *)(a1 + 8) = v45;
  }
}

