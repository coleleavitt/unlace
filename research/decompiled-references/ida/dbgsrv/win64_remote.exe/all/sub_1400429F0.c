/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400429F0
// Address: 0x00000001400429F0

//----- (00000001400429F0) ----------------------------------------------------
__int64 __fastcall sub_1400429F0(_QWORD *a1, _DWORD *a2, __int64 *a3, int a4, int a5)
{
  double v5; // xmm3_8
  __int64 v6; // r14
  _DWORD *v8; // r15
  int v10; // ebp
  __int64 *i; // r14
  _DWORD *v12; // rbx
  _DWORD *v13; // rcx
  void *v14; // rcx
  int v15; // ebx
  unsigned int *v16; // r14
  unsigned int *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  void **v21; // r14
  size_t v22; // r15
  size_t v23; // rbx
  void *v24; // rbp
  unsigned int v25; // r12d
  unsigned int v26; // r13d
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  _BYTE *v29; // rax
  __int64 result; // rax
  __int64 v31; // [rsp+30h] [rbp-98h]
  unsigned int *v32; // [rsp+38h] [rbp-90h]
  __int64 v33; // [rsp+D0h] [rbp+8h] BYREF
  _DWORD *v34; // [rsp+D8h] [rbp+10h]
  int v35; // [rsp+E0h] [rbp+18h]
  unsigned int v36; // [rsp+E8h] [rbp+20h] BYREF

  v34 = a2;
  v6 = a4;
  v8 = a2;
  if ( !a1[19] && a1[53] )
  {
    sub_14001A640(a1 + 53, 0);
    j_free((void *)a1[53]);
    a1[53] = 0;
    a1[55] = 0;
  }
  v10 = 0;
  for ( i = &a3[7 * v6]; a3 != i; a3 += 7 )
  {
    if ( !*((_BYTE *)a3 + 40) )
    {
      if ( *((_DWORD *)a3 + 8) == 4 )
      {
        v36 = *((_DWORD *)a1 + 98);
        v33 = *a3;
        (*(void (__fastcall **)(_QWORD *, __int64 *, unsigned int *))(*a1 + 536LL))(a1, &v33, &v36);
      }
      else
      {
        v36 = *((_DWORD *)a3 + 9);
        v33 = *a3;
      }
      v12 = (_DWORD *)a1[53];
      v13 = &v12[14 * a1[54]];
      if ( v12 != v13 )
      {
        do
        {
          if ( *a3 == *(_QWORD *)v12 && *((_DWORD *)a3 + 8) == v12[8] )
            break;
          v12 += 14;
        }
        while ( v12 != v13 );
        if ( v12 != v13 && v12[12] == *((_DWORD *)a3 + 12) )
        {
          v14 = *((void **)v12 + 1);
          if ( v14 )
          {
            *((_QWORD *)v12 + 2) = 0;
            j_free(v14);
            *((_QWORD *)v12 + 1) = 0;
            *((_QWORD *)v12 + 3) = 0;
          }
          memcpy(
            v12,
            v12 + 14,
            56
          * (((__int64)((unsigned __int128)((a1[53] + 56LL * a1[54] - (__int64)v12) * (__int128)0x4924924924924925LL) >> 64) >> 4)
           + ((unsigned __int64)((unsigned __int128)((a1[53] + 56LL * a1[54] - (__int64)v12)
                                                   * (__int128)0x4924924924924925LL) >> 64) >> 63)
           - 1));
          --a1[54];
        }
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, unsigned int))(*a1 + 304LL))(
              a1,
              a3 + 1,
              *((unsigned int *)a3 + 8),
              v33,
              v36);
      sub_140043130(
        (__int64)a1,
        (struct __crt_locale_pointers *)"dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
        *((_DWORD *)a3 + 8),
        v5,
        v36,
        v15);
      switch ( v15 )
      {
        case -2:
          *((_BYTE *)a3 + 40) = 7;
          break;
        case 1:
          *((_BYTE *)a3 + 40) = 0;
          ++v10;
          break;
        case 2:
          *((_BYTE *)a3 + 40) = 10;
          ++v10;
          break;
        default:
          *((_BYTE *)a3 + 40) = 8;
          break;
      }
    }
  }
  v16 = (unsigned int *)&i[7 * a5];
  v32 = v16;
  if ( a3 != (__int64 *)v16 )
  {
    v17 = (unsigned int *)(a3 + 4);
    do
    {
      *((_BYTE *)v17 + 8) = 0;
      v18 = *v17;
      v19 = 4;
      if ( (_DWORD)v18 != 4 )
        v19 = 9;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, unsigned int))(*a1 + 312LL))(
              a1,
              v18,
              *((_QWORD *)v17 - 4),
              *((_QWORD *)v17 - 3),
              v17[v19 - 8]);
      sub_140043130((__int64)a1, (struct __crt_locale_pointers *)"dbg_del_bpt(type=%d, ea=%a) => %d\n", *v17, v5, v20);
      if ( v20 <= 0 )
      {
        *((_BYTE *)v17 + 8) = 8;
      }
      else
      {
        v35 = ++v10;
        if ( *v17 == 4 || *v17 == 8 )
        {
          v21 = (void **)(a1 + 53);
          v31 = *((_QWORD *)v17 - 4);
          v22 = 0;
          v23 = *((_QWORD *)v17 - 2);
          if ( v23 )
          {
            v24 = sub_14005AAA0(*((_QWORD *)v17 - 2));
            v22 = v23;
            memcpy(v24, *((const void **)v17 - 3), v23);
          }
          else
          {
            v23 = 0;
            v24 = nullptr;
          }
          v25 = *v17;
          v26 = v17[1];
          LOBYTE(a5) = *((_BYTE *)v17 + 8);
          v36 = v17[3];
          LODWORD(v33) = v17[4];
          v27 = a1[54] + 1LL;
          if ( v27 > a1[55] )
            *v21 = sub_14005ABE0((__int64)(a1 + 53), *v21, v27, 0x38u);
          v28 = 56LL * a1[54];
          v29 = *v21;
          *(_QWORD *)&v29[v28] = v31;
          *(_QWORD *)&v29[v28 + 8] = v24;
          *(_QWORD *)&v29[v28 + 16] = v23;
          *(_QWORD *)&v29[v28 + 24] = v22;
          *(_DWORD *)&v29[v28 + 32] = v25;
          *(_DWORD *)&v29[v28 + 36] = v26;
          v29[v28 + 40] = a5;
          *(_DWORD *)&v29[v28 + 44] = v36;
          *(_DWORD *)&v29[v28 + 48] = v33;
          ++a1[54];
          v10 = v35;
          v16 = v32;
        }
      }
      v17 += 14;
    }
    while ( v17 - 8 != v16 );
    v8 = v34;
  }
  result = 1;
  if ( v8 )
    *v8 = v10;
  return result;
}
// 140042BBF: variable 'v5' is possibly undefined
