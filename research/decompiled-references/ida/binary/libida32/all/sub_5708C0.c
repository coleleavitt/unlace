__int64 __fastcall sub_5708C0(void *a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned int a5, _QWORD *a6, int a7)
{
  size_t v8; // rbx
  unsigned int v10; // ebx
  int v12; // r12d
  __int64 v13; // rax
  char *v14; // rbp
  int v15; // ebx
  int v16; // r8d
  unsigned __int64 v17; // rsi
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rbx
  unsigned int v22; // r15d
  int v23; // r15d
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // eax
  void *v28; // r8
  __int64 v29; // r11
  void *v30; // r10
  _BYTE *v31; // rax
  void *v32; // rsi
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // [rsp+0h] [rbp-A8h]
  __int64 v38; // [rsp+0h] [rbp-A8h]
  void *v39; // [rsp+0h] [rbp-A8h]
  void *v40; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v42; // [rsp+1Fh] [rbp-89h]
  char v43; // [rsp+1Fh] [rbp-89h]
  void *v44; // [rsp+20h] [rbp-88h]
  void *v45; // [rsp+20h] [rbp-88h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  void *v48; // [rsp+30h] [rbp-78h] BYREF
  __int128 v49; // [rsp+38h] [rbp-70h]
  void *ptr[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = (int)a5;
  ptr[3] = (void *)__readfsqword(0x28u);
  v49 = 0;
  ptr[2] = a1;
  v48 = nullptr;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B04DA8, (__m128i)(unsigned __int64)&v48);
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
      v33 = (void *)*a2;
      v34 = v8;
      if ( a2[2] < v8 )
      {
        v35 = qvector_reserve(a2, *a2, v8, 1);
        *a2 = v35;
        v36 = a2[1];
        v34 = v8 - v36;
        v33 = (void *)(v36 + v35);
      }
      memset(v33, 0, v34);
      a2[1] = v8;
    }
    v12 = 0;
    v13 = 0;
    while ( v12 < (unsigned __int64)v49 )
    {
      v14 = (char *)v48 + 20 * v13;
      v15 = *(_DWORD *)v14;
      v16 = *((_DWORD *)v14 + 3);
      if ( v14[16] )
      {
        v17 = a6[1];
        if ( !v17 )
          goto LABEL_36;
        v18 = 0;
        v19 = 0;
        while ( 1 )
        {
          v20 = *a6 + 32 * v19;
          if ( *(_DWORD *)v20 == v15 )
            break;
          v19 = ++v18;
          if ( v18 >= v17 )
            goto LABEL_36;
        }
        if ( !v20 )
        {
LABEL_36:
          if ( !under_debugger )
            interr(27);
          goto LABEL_42;
        }
        v21 = (void *)(*a2 + v16);
        v22 = *((_DWORD *)a2 + 2) - v16;
        if ( *((_WORD *)v14 + 5) )
        {
          v38 = *a6 + 32 * v19;
          memset(ptr, 0, 24);
          v26 = (unsigned __int8)getinf_flag(3, 32);
          v27 = *((unsigned __int16 *)v14 + 5);
          v28 = *(void **)(v38 + 16);
          v29 = *(_QWORD *)(v38 + 8);
          v30 = v28;
          if ( (_WORD)v27 )
            v30 = (void *)((v27 + 7) >> 3);
          v31 = ptr[1];
          if ( ptr[1] < v30 )
          {
            v32 = ptr[0];
            if ( ptr[2] < v30 )
            {
              v47 = *(_QWORD *)(v38 + 8);
              v45 = *(void **)(v38 + 16);
              v43 = v26;
              v40 = v30;
              ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v30, 1);
              v32 = ptr[0];
              v29 = v47;
              v31 = ptr[1];
              v28 = v45;
              LOBYTE(v26) = v43;
              v30 = v40;
            }
            v39 = v30;
            v46 = v29;
            v44 = v28;
            v42 = v26;
            memset(&v31[(_QWORD)v32], 0, (_BYTE *)v30 - v31);
            v30 = v39;
            v26 = v42;
            v28 = v44;
            v29 = v46;
            ptr[1] = v39;
          }
          else if ( v30 != ptr[1] )
          {
            ptr[1] = v30;
          }
          if ( !(unsigned __int8)bitrange_t_extract_using_bitrange(v14 + 8, ptr[0], v30, v29, v28, v26) )
          {
            if ( !under_debugger )
              interr(1111);
            goto LABEL_42;
          }
          sub_5700D0(v21, v22, ptr[0], (unsigned int)ptr[1], a3);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
          }
        }
        else
        {
          sub_5700D0((void *)(*a2 + v16), v22, *(const void **)(v20 + 8), *(_DWORD *)(v20 + 16), a3);
        }
      }
      else
      {
        v23 = *((_DWORD *)v14 + 1);
        v37 = a7 + v15;
        if ( a2[1] < (unsigned __int64)(v23 + v16) )
        {
          if ( !under_debugger )
            interr(696);
LABEL_42:
          BUG();
        }
        v24 = *a2 + v16;
        if ( v23 != (unsigned int)get_bytes(v24, v23, v37, 0, 0) )
        {
          invalidate_dbgmem_config(v24, v23, v25);
          if ( v23 != (unsigned int)get_bytes(v24, v23, v37, 0, 0) )
            goto LABEL_2;
        }
      }
      v13 = ++v12;
    }
    v10 = 1;
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  return v10;
}

