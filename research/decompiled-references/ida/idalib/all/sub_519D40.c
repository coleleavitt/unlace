__int64 __fastcall sub_519D40(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v11; // rbx
  unsigned __int64 *v12; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 *v17; // r10
  unsigned __int64 *v18; // r13
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // r14
  unsigned int v21; // r15d
  char v22; // al
  void *v23; // r14
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // r9
  __int64 v31; // r15
  unsigned __int64 v32; // r10
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // r9
  __int64 v37; // r8
  unsigned __int64 v38; // r10
  char *v39; // rsi
  __int64 v40; // rax
  void *v41; // r15
  size_t v42; // rax
  size_t v43; // r8
  __int64 v44; // r15
  unsigned __int64 v45; // r9
  char *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  void *src; // [rsp+0h] [rbp-88h]
  unsigned __int64 v50; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v52; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v54; // [rsp+28h] [rbp-60h]
  _BYTE v55[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v56[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v57[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a2;
  v6 = *(unsigned __int8 *)(a1 + 152);
  v57[0] = __readfsqword(0x28u);
  v7 = a3;
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v8 = (int)v5 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL);
  if ( v8 >= *(_QWORD *)(a1 + 40) )
    sub_5144F0(v5, a3);
  v9 = v8 << 6;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + v9 + 56) = v5;
  v11 = *(_QWORD *)(a1 + 32) + v9;
  v12 = sub_5168B0((unsigned __int64 **)v11, a3);
  if ( v12 == (unsigned __int64 *)(*(_QWORD *)v11 + 33LL * *(_QWORD *)(v11 + 8)) )
    return 0;
  if ( v7 < *v12 )
    return 0;
  v14 = v12[1];
  if ( v7 >= v14 || !v12 )
    return 0;
  if ( a4 != v14 )
  {
    v15 = sub_5168B0((unsigned __int64 **)v11, v7);
    v18 = v15;
    if ( v19 != v15 )
    {
      v20 = *v15;
      if ( v7 >= *v15 )
      {
        if ( v7 < a4 )
          v7 = a4;
        if ( v7 < v15[1] && (v17 == v15 || a4 >= v20 || a4 >= *(unsigned __int64 *)((char *)v15 - 25)) )
        {
          v21 = *(_DWORD *)(v11 + 56);
          v22 = must_journal(v11, v7, v16);
          if ( a4 == v20 || !v22 )
          {
LABEL_20:
            ptr = (void *)ea2node(*v18);
            v23 = ptr;
            v24 = *(_QWORD *)(v11 + 32);
            v25 = *(_QWORD *)(v11 + 40);
            v26 = *(_QWORD *)(v11 + 48);
            v27 = v25 + 1;
            if ( (unsigned __int64)&ptr < v24 || (unsigned __int64)&ptr >= v24 + 8 * v26 )
            {
              if ( v26 < v27 )
              {
                v28 = qvector_reserve(v11 + 32, v24, v25 + 1, 8);
                *(_QWORD *)(v11 + 32) = v28;
                v24 = v28;
                v23 = ptr;
                v25 = *(_QWORD *)(v11 + 40);
              }
            }
            else if ( v26 < v27 )
            {
              v48 = qvector_reserve(v11 + 32, v24, v25 + 1, 8);
              *(_QWORD *)(v11 + 32) = v48;
              v24 = v48;
              v25 = *(_QWORD *)(v11 + 40);
            }
            *(_QWORD *)(v24 + 8 * v25) = v23;
            ++*(_QWORD *)(v11 + 40);
            *v18 = a4;
            *((_BYTE *)v18 + 32) = 1;
            return v6;
          }
          ptr = nullptr;
          src = v55;
          v54 = 0;
          v29 = pack_dd(v55, v56, v21) - (_QWORD)v55;
          v30 = v29;
          if ( !v29 )
          {
LABEL_34:
            v35 = pack_dq(src, v57, v20) - (_QWORD)src;
            v36 = v35;
            if ( !v35 )
              goto LABEL_40;
            v37 = v54;
            v38 = v54 + v35;
            if ( __CFADD__((_QWORD)v54, v35) )
            {
              if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_39;
              }
              v38 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v39 = (char *)ptr;
            v40 = v54;
            if ( *((_QWORD *)&v54 + 1) < v38 )
            {
              v52 = v54;
              n = v36;
              v50 = v38;
              ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
              v39 = (char *)ptr;
              v37 = v52;
              v40 = v54;
              v36 = n;
              v38 = v50;
            }
            v52 = v37;
            n = v36;
            v50 = v38;
            memset(&v39[v40], 0, v38 - v40);
            v36 = n;
            v37 = v52;
            *(_QWORD *)&v54 = v50;
LABEL_39:
            memcpy((char *)ptr + v37, src, v36);
LABEL_40:
            v41 = src;
            v42 = pack_dq(src, v57, a4) - (_QWORD)v41;
            v43 = v42;
            if ( !v42 )
              goto LABEL_46;
            v44 = v54;
            v45 = v54 + v42;
            if ( __CFADD__((_QWORD)v54, v42) )
            {
              if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
                  *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_45;
              }
              v45 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v46 = (char *)ptr;
            v47 = v54;
            if ( *((_QWORD *)&v54 + 1) < v45 )
            {
              n = v43;
              v50 = v45;
              ptr = (void *)qvector_reserve(&ptr, ptr, v45, 1);
              v46 = (char *)ptr;
              v43 = n;
              v47 = v54;
              v45 = v50;
            }
            n = v43;
            v50 = v45;
            memset(&v46[v47], 0, v45 - v47);
            v43 = n;
            *(_QWORD *)&v54 = v50;
LABEL_45:
            memcpy((char *)ptr + v44, src, v43);
LABEL_46:
            add_undo_record(185, ptr, v54);
            if ( ptr )
            {
              *(_QWORD *)&v54 = 0;
              qfree(ptr);
            }
            goto LABEL_20;
          }
          v31 = v54;
          v32 = v54 + v29;
          if ( __CFADD__((_QWORD)v54, v29) )
          {
            if ( (unsigned __int64)v54 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v54 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v54 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_33;
            }
            v32 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v33 = (char *)ptr;
          v34 = v54;
          if ( *((_QWORD *)&v54 + 1) < v32 )
          {
            n = v30;
            v50 = v32;
            ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
            v33 = (char *)ptr;
            v30 = n;
            v34 = v54;
            v32 = v50;
          }
          n = v30;
          v50 = v32;
          memset(&v33[v34], 0, v32 - v34);
          v30 = n;
          *(_QWORD *)&v54 = v50;
LABEL_33:
          memcpy((char *)ptr + v31, src, v30);
          goto LABEL_34;
        }
      }
    }
    return 0;
  }
  return sub_516950(v11, v7);
}
