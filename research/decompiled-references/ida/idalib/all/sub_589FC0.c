__int64 __fastcall sub_589FC0(void *a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned int a5, __int64 *a6, __int64 a7)
{
  size_t v8; // rbx
  unsigned int v10; // ebx
  int v12; // r12d
  __int64 v13; // rax
  int *v14; // rbp
  __int64 v15; // rbx
  int v16; // esi
  unsigned __int64 v17; // rdi
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // rbx
  unsigned int v24; // r15d
  int v25; // r15d
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // r9
  int v29; // eax
  void *v30; // r8
  __int64 v31; // r11
  void *v32; // r10
  _BYTE *v33; // rax
  void *v34; // rsi
  void *v35; // rdi
  size_t v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-A8h]
  __int64 v40; // [rsp+0h] [rbp-A8h]
  void *v41; // [rsp+0h] [rbp-A8h]
  void *v42; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v44; // [rsp+1Fh] [rbp-89h]
  char v45; // [rsp+1Fh] [rbp-89h]
  void *v46; // [rsp+20h] [rbp-88h]
  void *v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  void *v50; // [rsp+30h] [rbp-78h] BYREF
  __int128 v51; // [rsp+38h] [rbp-70h]
  void *ptr[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = (int)a5;
  ptr[3] = (void *)__readfsqword(0x28u);
  v51 = 0;
  ptr[2] = a1;
  v50 = nullptr;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B2ED68, (__m128i)(unsigned __int64)&v50);
  if ( (unsigned int)for_all_arglocs(ptr, a4, a5, 0) )
  {
LABEL_2:
    v10 = 0;
  }
  else
  {
    a2[1] = 0;
    if ( v8 )
    {
      v35 = (void *)*a2;
      v36 = v8;
      if ( a2[2] < v8 )
      {
        v37 = qvector_reserve(a2, *a2, v8, 1);
        *a2 = v37;
        v38 = a2[1];
        v36 = v8 - v38;
        v35 = (void *)(v38 + v37);
      }
      memset(v35, 0, v36);
      a2[1] = v8;
    }
    v12 = 0;
    v13 = 0;
    while ( v12 < (unsigned __int64)v51 )
    {
      v14 = (int *)((char *)v50 + 20 * v13);
      v15 = *v14;
      v16 = v14[3];
      if ( *((_BYTE *)v14 + 16) )
      {
        v17 = a6[1];
        if ( !v17 )
          goto LABEL_36;
        v18 = *a6;
        v19 = 0;
        v20 = 0;
        while ( 1 )
        {
          v21 = 32 * v20;
          v22 = v18 + v21;
          if ( *(_DWORD *)(v18 + v21) == (_DWORD)v15 )
            break;
          v20 = ++v19;
          if ( v19 >= v17 )
            goto LABEL_36;
        }
        if ( !v22 )
        {
LABEL_36:
          if ( !under_debugger )
            interr(27);
          goto LABEL_42;
        }
        v23 = (void *)(*a2 + v16);
        v24 = *((_DWORD *)a2 + 2) - v16;
        if ( *((_WORD *)v14 + 5) )
        {
          v40 = v18 + v21;
          memset(ptr, 0, 24);
          v28 = (unsigned __int8)getinf_flag(3, 32);
          v29 = *((unsigned __int16 *)v14 + 5);
          v30 = *(void **)(v40 + 16);
          v31 = *(_QWORD *)(v40 + 8);
          v32 = v30;
          if ( (_WORD)v29 )
            v32 = (void *)((v29 + 7) >> 3);
          v33 = ptr[1];
          if ( ptr[1] < v32 )
          {
            v34 = ptr[0];
            if ( ptr[2] < v32 )
            {
              v49 = *(_QWORD *)(v40 + 8);
              v47 = *(void **)(v40 + 16);
              v45 = v28;
              v42 = v32;
              ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v32, 1);
              v34 = ptr[0];
              v31 = v49;
              v33 = ptr[1];
              v30 = v47;
              LOBYTE(v28) = v45;
              v32 = v42;
            }
            v41 = v32;
            v48 = v31;
            v46 = v30;
            v44 = v28;
            memset(&v33[(_QWORD)v34], 0, (_BYTE *)v32 - v33);
            v32 = v41;
            v28 = v44;
            v30 = v46;
            v31 = v48;
            ptr[1] = v41;
          }
          else if ( v32 != ptr[1] )
          {
            ptr[1] = v32;
          }
          if ( !(unsigned __int8)bitrange_t_extract_using_bitrange(v14 + 2, ptr[0], v32, v31, v30, v28) )
          {
            if ( !under_debugger )
              interr(1111);
            goto LABEL_42;
          }
          sub_5897D0(v23, v24, ptr[0], (unsigned int)ptr[1], a3);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
          }
        }
        else
        {
          sub_5897D0(v23, v24, *(const void **)(v22 + 8), *(_DWORD *)(v22 + 16), a3);
        }
      }
      else
      {
        v25 = v14[1];
        v39 = a7 + v15;
        if ( a2[1] < (unsigned __int64)(v25 + v16) )
        {
          if ( !under_debugger )
            interr(696);
LABEL_42:
          BUG();
        }
        v26 = *a2 + v16;
        if ( v25 != (unsigned int)get_bytes(v26, v25, v39, 0, 0) )
        {
          invalidate_dbgmem_config(v26, v25, v27);
          if ( v25 != (unsigned int)get_bytes(v26, v25, v39, 0, 0) )
            goto LABEL_2;
        }
      }
      v13 = ++v12;
    }
    v10 = 1;
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  return v10;
}
