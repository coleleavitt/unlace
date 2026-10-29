unsigned __int64 __fastcall sub_181440(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-B0h]
  __int64 v23; // [rsp+28h] [rbp-A0h]
  __int128 v24; // [rsp+30h] [rbp-98h]
  __int128 v25; // [rsp+40h] [rbp-88h]
  __int128 v26; // [rsp+50h] [rbp-78h]
  __int128 v27; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+88h] [rbp-40h]
  unsigned __int64 v32; // [rsp+98h] [rbp-30h]

  v20 = a2;
  v32 = __readfsqword(0x28u);
  if ( sub_17F6B0((_QWORD *)a1, a2) == -1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)std::__detail::_Map_base<unsigned long,std::pair<unsigned long const,unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned long>,std::hash<unsigned long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                 a1 + 384,
                 &v20) = v6;
    v7 = *(_QWORD *)(a1 + 440);
    v8 = **(unsigned int **)(a3 + 8) / (unsigned __int64)*(int *)(a1 + 376);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = v8;
    if ( v8 < v9 )
      goto LABEL_11;
    v21 = 0;
    v15 = (unsigned int)(2 * v8 + 1);
    if ( v15 >= v9 )
    {
      if ( v9 >= v15 )
        goto LABEL_11;
      v16 = *(_QWORD *)(a1 + 456);
      if ( (unsigned __int64)&v21 < v7 || (unsigned __int64)&v21 >= v7 + 8 * v16 )
      {
        if ( v16 >= v15
          || (v18 = qvector_reserve(), v9 = *(_QWORD *)(a1 + 448), *(_QWORD *)(a1 + 440) = v18, v7 = v18, v9 < v15) )
        {
          do
          {
            *(_QWORD *)(v7 + 8 * v9++) = v21;
            v7 = *(_QWORD *)(a1 + 440);
          }
          while ( v15 != v9 );
        }
      }
      else if ( v16 >= v15
             || (v19 = qvector_reserve(), v9 = *(_QWORD *)(a1 + 448), *(_QWORD *)(a1 + 440) = v19, v7 = v19, v9 < v15) )
      {
        do
        {
          *(_QWORD *)(v7 + 8 * v9++) = 0;
          v7 = *(_QWORD *)(a1 + 440);
        }
        while ( v15 != v9 );
      }
    }
    *(_QWORD *)(a1 + 448) = v15;
LABEL_11:
    v11 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v7 + 8 * v10) = v11;
    v12 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v11 + 1) )
    {
      v17 = qvector_reserve();
      *(_QWORD *)(a1 + 24) = v17;
      v12 = v17;
    }
    v13 = v12 + (*(_QWORD *)(a1 + 32) << 7);
    *(_OWORD *)(v13 + 8) = 0;
    *(_OWORD *)(v13 + 32) = 0;
    *(_QWORD *)v13 = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_DWORD *)(v13 + 96) = -1;
    *(_QWORD *)(v13 + 104) = 12;
    *(_QWORD *)(v13 + 112) = -1;
    *(_DWORD *)(v13 + 120) = -1;
    *(_OWORD *)(v13 + 48) = 0;
    *(_OWORD *)(v13 + 64) = 0;
    *(_OWORD *)(v13 + 80) = 0;
    v14 = *(int *)(a1 + 376);
    ++*(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v13 + 16) < v14 )
    {
      *(_QWORD *)v13 = qvector_reserve();
      if ( *(_QWORD *)(v13 + 40) >= (unsigned __int64)*(int *)(a1 + 376) )
        goto LABEL_15;
    }
    else if ( *(_QWORD *)(v13 + 40) >= v14 )
    {
LABEL_15:
      sub_17F4A0(a3, v13);
      return v32 - __readfsqword(0x28u);
    }
    *(_QWORD *)(v13 + 24) = qvector_reserve();
    sub_17F4A0(a3, v13);
    return v32 - __readfsqword(0x28u);
  }
  v4 = *(int *)(a1 + 376);
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v23 = 0;
  v28 = -1;
  v29 = 12;
  v30 = -1;
  v31 = -1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( v4 )
  {
    v21 = qvector_reserve();
    if ( *((_QWORD *)&v24 + 1) < v4 )
      v23 = qvector_reserve();
  }
  sub_17F4A0(a3, (__int64)&v21);
  if ( (_QWORD)v25 )
  {
    *((_QWORD *)&v25 + 1) = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

