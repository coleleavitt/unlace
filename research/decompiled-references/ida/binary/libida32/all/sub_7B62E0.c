unsigned __int64 __fastcall sub_7B62E0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned __int8 scalar_bt; // al
  unsigned __int64 tinfo_size; // rax
  const void *v16; // r8
  void *v17; // rax
  _QWORD *v18; // rcx
  const void *v19; // r8
  void *v20; // rax
  unsigned int src; // [rsp+8h] [rbp-100h]
  const void *srcb; // [rsp+8h] [rbp-100h]
  void *srcc; // [rsp+8h] [rbp-100h]
  void *srca; // [rsp+8h] [rbp-100h]
  __int64 v25; // [rsp+18h] [rbp-F0h]
  __int64 v26; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C8h] BYREF
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h]
  void *dest; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-98h]
  __int128 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    v26 = 0;
    tinfo_get_func_frame(&v26, v3);
    if ( (_BYTE)v26
      || (add_frame(*(_QWORD *)(a1 + 56), *a2, *((unsigned __int16 *)a2 + 4), a2[1]),
          tinfo_get_func_frame(&v26, *(_QWORD *)(a1 + 56)),
          (_BYTE)v26) )
    {
      v4 = 0;
      v5 = 0;
      v25 = *((_QWORD *)a2 + 3);
      if ( v25 )
      {
        do
        {
          v27 = 0;
          v11 = v4 + *((_QWORD *)a2 + 2);
          if ( !(unsigned __int8)sub_7C2740(v11 + 24) )
          {
            v18 = *(_QWORD **)(v11 + 48);
            v28 = *(_QWORD *)(v11 + 24);
            v29 = v18;
            if ( v18 )
              v18 = &v29;
            deserialize_tinfo(&v27, 0, &v28, v18, 0, 0);
          }
          if ( !(_BYTE)v27 || get_tinfo_size(0, v27, 0) == -1 )
          {
            v12 = 1;
            if ( *(_DWORD *)(v11 + 272) )
              v12 = *(_DWORD *)(v11 + 272);
            src = v12;
            scalar_bt = get_scalar_bt(v12);
            if ( !scalar_bt )
              scalar_bt = 17;
            *(_QWORD *)&v30 = scalar_bt;
            copy_tinfo_t(&v27);
            clear_tinfo_t(&v30);
            if ( src / (unsigned __int64)get_tinfo_size(0, v27, 0) > 1 )
            {
              tinfo_size = get_tinfo_size(0, v27, 0);
              DWORD2(v30) = 0;
              *(_QWORD *)&v30 = 0;
              HIDWORD(v30) = src / tinfo_size;
              copy_tinfo_t(&v30);
              create_tinfo(&v27, 11, 11, &v30);
              clear_tinfo_t(&v30);
            }
          }
          ptr = nullptr;
          dest = nullptr;
          v36 = 1;
          v37 = -1;
          v38 = 0;
          v39 = 0;
          v30 = 0;
          v32 = 0;
          v34 = 0;
          v35 = 0;
          v6 = *(_QWORD *)(v11 + 8);
          if ( v6 > 1 && (void **)v11 != &ptr )
          {
            srcb = *(const void **)v11;
            ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v11 + 8), 1);
            *(_QWORD *)&v32 = v6;
            memmove(ptr, srcb, v6 - 1);
            *((char *)ptr + v6 - 1) = 0;
          }
          v7 = *(_QWORD *)(v11 + 104);
          if ( v7 > 1 )
          {
            if ( &dest != (void **)(v11 + 96) )
            {
              v16 = *(const void **)(v11 + 96);
              v17 = dest;
              if ( *((_QWORD *)&v34 + 1) < v7 )
              {
                srca = *(void **)(v11 + 96);
                v17 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v11 + 104), 1);
                dest = v17;
                v16 = srca;
              }
              *(_QWORD *)&v34 = v7;
              memmove(v17, v16, v7 - 1);
              *((char *)dest + v7 - 1) = 0;
            }
          }
          else
          {
            v8 = *(_QWORD *)(v11 + 80);
            if ( v8 > 1 )
            {
              if ( &dest != (void **)(v11 + 72) )
              {
                v19 = *(const void **)(v11 + 72);
                v20 = dest;
                if ( *((_QWORD *)&v34 + 1) < v8 )
                {
                  srcc = *(void **)(v11 + 72);
                  v20 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v11 + 80), 1);
                  dest = v20;
                  v19 = srcc;
                }
                *(_QWORD *)&v34 = v8;
                memmove(v20, v19, v8 - 1);
                *((char *)dest + v8 - 1) = 0;
              }
              HIDWORD(v38) |= 0x800u;
            }
          }
          v9 = v27;
          *(_QWORD *)&v30 = 8LL * *(_QWORD *)(v11 + 120);
          v10 = v35;
          *(_QWORD *)&v35 = v27;
          v27 = v10;
          *((_QWORD *)&v30 + 1) = 8 * get_tinfo_size(0, v9, 0);
          set_tinfo_property4(&v26, 9, &v30, 1, -1, 0);
          clear_tinfo_t(&v35);
          if ( dest )
          {
            *(_QWORD *)&v34 = 0;
            qfree(dest);
          }
          if ( ptr )
          {
            *(_QWORD *)&v32 = 0;
            qfree(ptr);
          }
          ++v5;
          v4 += 280;
          clear_tinfo_t(&v27);
        }
        while ( v5 != v25 );
      }
    }
    clear_tinfo_t(&v26);
  }
  return v40 - __readfsqword(0x28u);
}

