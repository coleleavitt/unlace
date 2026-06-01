unsigned __int64 __fastcall sub_7D96E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int8 scalar_bt; // al
  unsigned __int64 tinfo_size; // rax
  const void *v15; // r14
  void *v16; // rax
  const void *v17; // rbp
  _QWORD *v18; // rcx
  const void *v19; // r14
  void *v20; // rax
  __int64 v22; // [rsp+18h] [rbp-100h]
  __int64 v23; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-C0h]
  void *dest; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-A8h]
  _OWORD v32[3]; // [rsp+80h] [rbp-98h] BYREF
  char *v33; // [rsp+B0h] [rbp-68h]
  int v34; // [rsp+B8h] [rbp-60h]
  __int64 v35; // [rsp+C0h] [rbp-58h]
  char v36; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v23 = 0;
    tinfo_get_func_frame(&v23, v2);
    if ( (_BYTE)v23
      || (add_frame(*(_QWORD *)(a1 + 56), *(_QWORD *)a2, *(_WORD *)(a2 + 16), *(_QWORD *)(a2 + 8)),
          tinfo_get_func_frame(&v23, *(_QWORD *)(a1 + 56)),
          (_BYTE)v23) )
    {
      v3 = 0;
      v4 = 0;
      v22 = *(_QWORD *)(a2 + 32);
      if ( v22 )
      {
        do
        {
          v24 = 0;
          v10 = v3 + *(_QWORD *)(a2 + 24);
          if ( !(unsigned __int8)sub_7E5AA0(v10 + 24) )
          {
            v18 = *(_QWORD **)(v10 + 48);
            v25 = *(_QWORD *)(v10 + 24);
            v26 = v18;
            if ( v18 )
              v18 = &v26;
            deserialize_tinfo(&v24, 0, &v25, v18, 0, 0);
          }
          if ( !(_BYTE)v24 || get_tinfo_size(0, v24, 0) == -1 )
          {
            v11 = *(_QWORD *)(v10 + 408);
            if ( !v11 )
              v11 = 1;
            scalar_bt = get_scalar_bt((unsigned int)v11);
            if ( !scalar_bt )
              scalar_bt = 17;
            *(_QWORD *)&v27 = scalar_bt;
            copy_tinfo_t(&v24);
            clear_tinfo_t(&v27);
            if ( v11 / get_tinfo_size(0, v24, 0) > 1 )
            {
              tinfo_size = get_tinfo_size(0, v24, 0);
              DWORD2(v27) = 0;
              *(_QWORD *)&v27 = 0;
              HIDWORD(v27) = v11 / tinfo_size;
              copy_tinfo_t(&v27);
              create_tinfo(&v24, 11, 11, &v27);
              clear_tinfo_t(&v27);
            }
          }
          ptr = nullptr;
          dest = nullptr;
          v33 = (char *)&dword_0 + 1;
          v34 = -1;
          v35 = 0;
          v36 = 0;
          v27 = 0;
          v29 = 0;
          v31 = 0;
          v32[0] = 0;
          v5 = *(_QWORD *)(v10 + 8);
          if ( v5 > 1 && (void **)v10 != &ptr )
          {
            v17 = *(const void **)v10;
            ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v10 + 8), 1);
            *(_QWORD *)&v29 = v5;
            memmove(ptr, v17, v5 - 1);
            *((char *)ptr + v5 - 1) = 0;
          }
          v6 = *(_QWORD *)(v10 + 104);
          if ( v6 > 1 )
          {
            if ( &dest != (void **)(v10 + 96) )
            {
              v15 = *(const void **)(v10 + 96);
              v16 = dest;
              if ( *((_QWORD *)&v31 + 1) < v6 )
              {
                v16 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v10 + 104), 1);
                dest = v16;
              }
              *(_QWORD *)&v31 = v6;
              memmove(v16, v15, v6 - 1);
              *((char *)dest + v6 - 1) = 0;
            }
          }
          else
          {
            v7 = *(_QWORD *)(v10 + 80);
            if ( v7 > 1 )
            {
              if ( &dest != (void **)(v10 + 72) )
              {
                v19 = *(const void **)(v10 + 72);
                v20 = dest;
                if ( *((_QWORD *)&v31 + 1) < v7 )
                {
                  v20 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v10 + 80), 1);
                  dest = v20;
                }
                *(_QWORD *)&v31 = v7;
                memmove(v20, v19, v7 - 1);
                *((char *)dest + v7 - 1) = 0;
              }
              HIDWORD(v35) |= 0x800u;
            }
          }
          v8 = v24;
          *(_QWORD *)&v27 = 8LL * *(_QWORD *)(v10 + 120);
          v9 = *(_QWORD *)&v32[0];
          *(_QWORD *)&v32[0] = v24;
          v24 = v9;
          *((_QWORD *)&v27 + 1) = 8 * get_tinfo_size(0, v8, 0);
          set_tinfo_property4(&v23, 9, &v27, 1, -1, 0);
          clear_tinfo_t(v32);
          if ( dest )
          {
            *(_QWORD *)&v31 = 0;
            qfree(dest);
          }
          if ( ptr )
          {
            *(_QWORD *)&v29 = 0;
            qfree(ptr);
          }
          ++v4;
          v3 += 416;
          clear_tinfo_t(&v24);
        }
        while ( v4 != v22 );
      }
    }
    clear_tinfo_t(&v23);
  }
  return v37 - __readfsqword(0x28u);
}
