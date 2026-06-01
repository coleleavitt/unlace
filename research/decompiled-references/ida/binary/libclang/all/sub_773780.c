__int64 __fastcall sub_773780(__int64 a1)
{
  __int64 *v3; // r15
  __int64 *v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _DWORD *v22; // rdx
  std::__detail::_List_node_base *v23; // rbx
  char *v24; // rdi
  std::__detail::_List_node_base **v25; // r12
  _QWORD *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdi
  int v29; // eax
  std::__detail::_List_node_base *v30; // rdx
  __int64 *v31; // [rsp+0h] [rbp-88h]
  std::__detail::_List_node_base *v32; // [rsp+8h] [rbp-80h]
  _QWORD *v33; // [rsp+10h] [rbp-78h]
  _QWORD *v34; // [rsp+10h] [rbp-78h]
  __int64 *v35; // [rsp+18h] [rbp-70h]
  __int64 v36; // [rsp+20h] [rbp-68h]
  std::__detail::_List_node_base *v37[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 361) )
    return 1;
  if ( !*(_BYTE *)(a1 + 360) )
    return 1;
  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v38 = 0;
  *(__m128i *)v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
  if ( v3 == (__int64 *)(a1 + 8) )
    return 1;
  do
  {
    v5 = v3;
    v3 = (__int64 *)*v3;
    v6 = v5[2];
    v7 = v6 + 24LL * *((unsigned int *)v5 + 6);
    if ( v6 == v7 )
      continue;
    v31 = v3;
    v32 = (std::__detail::_List_node_base *)v5;
    do
    {
LABEL_8:
      if ( (*(_BYTE *)(*(_QWORD *)v6 + 12LL) & 1) == 0 )
        goto LABEL_7;
      v8 = **(_QWORD **)(*(_QWORD *)v6 + 16LL);
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      v10 = *(_QWORD *)(v9 + 8);
      if ( (v10 & 7) != 0 || (v10 & 8) != 0 )
        v9 = sub_B0CF30(v8, v5);
      v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v11 + 16LL) != 47 )
        break;
      v12 = (__int64 *)sub_B14A40(*v11);
      if ( !v12 )
        break;
      v13 = *(__int64 **)(a1 + 8);
      if ( v4 != v13 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(v13[2] + 24LL * *((unsigned int *)v13 + 6) - 24) + 16LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v15 = *(_QWORD *)(v14 + 8);
          if ( (v15 & 7) != 0 || (v15 & 8) != 0 )
            v14 = sub_B0CF30(**(_QWORD **)(*(_QWORD *)(v13[2] + 24LL * *((unsigned int *)v13 + 6) - 24) + 16LL), v5);
          v16 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v16 + 16LL) != 47 )
            break;
          v17 = sub_B14A40(*v16);
          v18 = (_QWORD *)v17;
          if ( !v17 )
            break;
          v19 = *(__int64 **)(v17 + 104);
          v20 = v19[12];
          v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v20 & 1) != 0 )
          {
            if ( v21 )
              goto LABEL_22;
          }
          else if ( v21 > 3 && (v20 & 2) != 0 )
          {
            v26 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            v27 = v26[2275];
            if ( v27 )
            {
              v5 = (__int64 *)v26[274];
              v26[284] += 24LL;
              v21 = ((unsigned __int64)v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v26[275] >= v21 + 24 && v5 )
              {
                v26[274] = v21 + 24;
              }
              else
              {
                v5 = &qword_18;
                v36 = v27;
                v35 = v19;
                v34 = v18;
                v21 = sub_76D810((__int64)(v26 + 274), 24, 3);
                v27 = v36;
                v19 = v35;
                v18 = v34;
              }
              *(_QWORD *)v21 = v27;
              *(_DWORD *)(v21 + 8) = 0;
              v20 = v21 | 5;
              *(_QWORD *)(v21 + 16) = v19;
              v19[12] = v21 | 5;
              LOBYTE(v21) = v21 & 0xFA | 4;
LABEL_22:
              if ( (v21 & 4) != 0 )
              {
                v22 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v22 )
                {
                  v28 = *(_QWORD *)v22;
                  v29 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
                  if ( v22[2] != v29 )
                  {
                    v22[2] = v29;
                    v5 = v19;
                    v33 = v18;
                    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 144LL))(v28, v19);
                    v18 = v33;
                  }
                }
              }
              goto LABEL_24;
            }
            v19[12] = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFALL | 1;
          }
LABEL_24:
          if ( *(_DWORD *)(v18[16] + 20LL) )
          {
            v5 = v12;
            if ( (unsigned __int8)sub_773360(v18, v12) )
            {
              v3 = v31;
              v30 = *(std::__detail::_List_node_base **)v32;
              if ( v37[0] != v32 && v37[0] != v30 )
              {
                std::__detail::_List_node_base::_M_transfer(v37[0], v32, v30);
                ++v38;
                --*(_QWORD *)(a1 + 24);
              }
              goto LABEL_29;
            }
          }
          v13 = (__int64 *)*v13;
          if ( v4 == v13 )
          {
            v6 += 24;
            if ( v7 != v6 )
              goto LABEL_8;
            goto LABEL_28;
          }
        }
      }
LABEL_7:
      v6 += 24;
    }
    while ( v7 != v6 );
LABEL_28:
    v3 = v31;
LABEL_29:
    ;
  }
  while ( v4 != v3 );
  v23 = v37[0];
  if ( (std::__detail::_List_node_base **)v37[0] != v37 )
  {
    while ( 1 )
    {
      v24 = *((char **)v23 + 2);
      v25 = *(std::__detail::_List_node_base ***)v23;
      if ( v24 != (char *)v23 + 32 )
        free(v24);
      operator delete(v23, 0x90u);
      if ( v25 == v37 )
        break;
      v23 = (std::__detail::_List_node_base *)v25;
    }
  }
  return 1;
}

