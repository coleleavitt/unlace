__int64 __fastcall sub_502060(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rbx
  unsigned int *v13; // rax
  unsigned int v15; // edx
  unsigned int *v16; // rax
  __int64 v17; // rdx
  unsigned int *v18; // r10
  unsigned int *v19; // r15
  unsigned int *v20; // r9
  unsigned int v21; // r14d
  char v22; // al
  int v23; // r13d
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // r10
  __int64 v31; // r8
  unsigned __int64 v32; // r11
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // r9
  __int64 v37; // r14
  unsigned __int64 v38; // r10
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // r8
  __int64 v43; // r14
  unsigned __int64 v44; // r9
  char *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+0h] [rbp-88h]
  size_t v49; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v51; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v53; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v55[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a2;
  v6 = *(unsigned __int8 *)(a1 + 144);
  v55[0] = __readfsqword(0x28u);
  v7 = a3;
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (int)v5 - *(_DWORD *)(v8 + 68);
  if ( v9 >= *(_QWORD *)(a1 + 40) )
    sub_4FC970(v5, v7, v8, a4);
  v10 = v9 << 6;
  v11 = a4;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + v10 + 56) = v5;
  v12 = *(_QWORD *)(a1 + 32) + v10;
  v13 = sub_4FED00((unsigned int **)v12, v7);
  if ( v13 == (unsigned int *)(*(_QWORD *)v12 + 17LL * *(_QWORD *)(v12 + 8)) )
    return 0;
  if ( (unsigned int)v7 < *v13 )
    return 0;
  v15 = v13[1];
  if ( (unsigned int)v7 >= v15 || !v13 )
    return 0;
  if ( v11 != v15 )
  {
    v16 = sub_4FED00((unsigned int **)v12, v7);
    v19 = v16;
    if ( v20 != v16 )
    {
      v21 = *v16;
      if ( (unsigned int)v7 >= *v16 )
      {
        if ( (unsigned int)v7 < v11 )
          v7 = v11;
        if ( (unsigned int)v7 < v16[1] && (v18 == v16 || v11 >= v21 || v11 >= *(unsigned int *)((char *)v16 - 13)) )
        {
          LODWORD(v48) = *(_DWORD *)(v12 + 56);
          v22 = must_journal(v12, v7, v17);
          if ( v11 == v21 || !v22 )
          {
LABEL_20:
            LODWORD(ptr) = ea2node(*v19);
            v23 = (int)ptr;
            v24 = *(_QWORD *)(v12 + 32);
            v25 = *(_QWORD *)(v12 + 40);
            v26 = *(_QWORD *)(v12 + 48);
            v27 = v25 + 1;
            if ( (unsigned __int64)&ptr < v24 || (unsigned __int64)&ptr >= v24 + 4 * v26 )
            {
              if ( v26 < v27 )
              {
                v28 = qvector_reserve(v12 + 32, v24, v25 + 1, 4);
                *(_QWORD *)(v12 + 32) = v28;
                v24 = v28;
                v23 = (int)ptr;
                v25 = *(_QWORD *)(v12 + 40);
              }
            }
            else if ( v26 < v27 )
            {
              v47 = qvector_reserve(v12 + 32, v24, v25 + 1, 4);
              *(_QWORD *)(v12 + 32) = v47;
              v24 = v47;
              v25 = *(_QWORD *)(v12 + 40);
            }
            *(_DWORD *)(v24 + 4 * v25) = v23;
            ++*(_QWORD *)(v12 + 40);
            *v19 = v11;
            *((_BYTE *)v19 + 16) = 1;
            return v6;
          }
          v49 = (size_t)v55;
          ptr = nullptr;
          v53 = 0;
          v29 = pack_dd(src, v55, (unsigned int)v48) - (_QWORD)src;
          v30 = v29;
          if ( !v29 )
          {
LABEL_34:
            v35 = pack_dd(src, v49, v21) - (_QWORD)src;
            v36 = v35;
            if ( !v35 )
              goto LABEL_40;
            v37 = v53;
            v38 = v53 + v35;
            if ( __CFADD__((_QWORD)v53, v35) )
            {
              if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_39;
              }
              v38 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v39 = (char *)ptr;
            v40 = v53;
            if ( *((_QWORD *)&v53 + 1) < v38 )
            {
              v48 = v38;
              n = v36;
              ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
              v39 = (char *)ptr;
              v36 = n;
              v40 = v53;
              v38 = v48;
            }
            n = v36;
            v48 = v38;
            memset(&v39[v40], 0, v38 - v40);
            v36 = n;
            *(_QWORD *)&v53 = v48;
LABEL_39:
            memcpy((char *)ptr + v37, src, v36);
LABEL_40:
            v41 = pack_dd(src, v49, v11) - (_QWORD)src;
            v42 = v41;
            if ( !v41 )
              goto LABEL_46;
            v43 = v53;
            v44 = v53 + v41;
            if ( __CFADD__((_QWORD)v53, v41) )
            {
              if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_45;
              }
              v44 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v45 = (char *)ptr;
            v46 = v53;
            if ( *((_QWORD *)&v53 + 1) < v44 )
            {
              v48 = v44;
              v49 = v42;
              ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
              v45 = (char *)ptr;
              v42 = v49;
              v46 = v53;
              v44 = v48;
            }
            v49 = v42;
            v48 = v44;
            memset(&v45[v46], 0, v44 - v46);
            v42 = v49;
            *(_QWORD *)&v53 = v48;
LABEL_45:
            memcpy((char *)ptr + v43, src, v42);
LABEL_46:
            add_undo_record(185, ptr, v53);
            if ( ptr )
            {
              *(_QWORD *)&v53 = 0;
              qfree(ptr);
            }
            goto LABEL_20;
          }
          v31 = v53;
          v32 = v53 + v29;
          if ( __CFADD__((_QWORD)v53, v29) )
          {
            if ( (unsigned __int64)v53 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v53 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v53 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_33;
            }
            v32 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v33 = (char *)ptr;
          v34 = v53;
          if ( *((_QWORD *)&v53 + 1) < v32 )
          {
            v51 = v53;
            n = v30;
            v48 = v32;
            ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
            v33 = (char *)ptr;
            v31 = v51;
            v34 = v53;
            v30 = n;
            v32 = v48;
          }
          v51 = v31;
          n = v30;
          v48 = v32;
          memset(&v33[v34], 0, v32 - v34);
          v30 = n;
          v31 = v51;
          *(_QWORD *)&v53 = v48;
LABEL_33:
          memcpy((char *)ptr + v31, src, v30);
          goto LABEL_34;
        }
      }
    }
    return 0;
  }
  return sub_4FED90(v12, v7);
}

