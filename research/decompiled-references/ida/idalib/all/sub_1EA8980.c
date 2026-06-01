__int64 __fastcall sub_1EA8980(__int64 a1, __int64 a2, char a3)
{
  int v3; // r14d
  int v4; // r15d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r12
  char v26; // di
  unsigned int v27; // r14d
  char v28; // al
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  unsigned __int8 v31; // r12
  unsigned __int8 v32; // r14
  unsigned __int8 v33; // di
  int v34; // r13d
  unsigned int v35; // eax
  unsigned int v36; // ebp
  _BYTE *v37; // rax
  unsigned int v38; // r8d
  void *v40; // rax
  __int64 v41; // rdx
  const void *v42; // rsi
  int v43; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+20h] [rbp-48h]
  unsigned __int8 v46; // [rsp+2Dh] [rbp-3Bh]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = operator new(0x38u);
  *(_QWORD *)(v7 + 16) = 0;
  v8 = v7;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  operator delete(0, 0, 4);
  v13 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(v8 + 32) = v13;
  if ( (_DWORD)v13 )
  {
    v40 = (void *)sub_22300B0(8 * v13, 4, v9, v10, v11, v12);
    v41 = *(_QWORD *)(a2 + 8);
    v42 = *(const void **)a2;
    *(_QWORD *)(v8 + 16) = v40;
    *(_QWORD *)(v8 + 24) = v41;
    memcpy(v40, v42, 8LL * *(unsigned int *)(v8 + 32));
  }
  else
  {
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
  }
  v14 = *(_WORD *)(a2 + 24);
  LOBYTE(v14) = v14 & 0x1F;
  *(_WORD *)(v8 + 40) = v14 | *(_WORD *)(v8 + 40) & 0xE0;
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(a2 + 32);
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v8,
    (std::__detail::_List_node_base *)(v6 + 72));
  ++*(_QWORD *)(v6 + 88);
  v15 = *(_QWORD *)(a1 + 16);
  v45 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL) + 16LL;
  v16 = *(unsigned int *)(v15 + 8);
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
  {
    sub_2237220(v15, v15 + 16, v16 + 1, 8);
    v16 = *(unsigned int *)(v15 + 8);
  }
  v17 = v3;
  *(_QWORD *)(*(_QWORD *)v15 + 8 * v16) = v45;
  ++*(_DWORD *)(v15 + 8);
  v18 = v4;
  v19 = *(_DWORD **)(a1 + 8);
  v20 = *(__int64 **)a1;
  v21 = (unsigned int)*v19;
  *v19 = v21 + 1;
  v22 = *(_QWORD *)(*v20 + 8 * v21);
  v43 = v22 - 1;
  if ( (_DWORD)v22 )
  {
    while ( 1 )
    {
      v23 = *v20;
      v24 = *(_QWORD *)(v23 + 8LL * (unsigned int)*v19);
      v25 = *(_QWORD *)(v23 + 8LL * (unsigned int)(*v19 + 1));
      *v19 += 2;
      v26 = (unsigned int)v25 >> 5;
      v27 = (unsigned int)v25 >> 6;
      v28 = (unsigned int)v25 >> 4;
      v29 = ((unsigned int)v25 >> 7) & 1;
      v30 = v25;
      v31 = v25 & 7;
      v32 = v27 & 1;
      v33 = v26 & 1;
      v46 = v28 & 1;
      v34 = (v30 >> 3) & 1;
      v35 = (32 * v33) | (8 * (unsigned __int8)v29) & 0xFFCF | v31 & 0xCF | v18 & 0xFFFFFFC0 | (16 * v32);
      LOBYTE(v35) = (32 * v33) & 0x3F | (8 * v29) & 0xF | v31 & 0xF | (16 * v32) & 0x3F;
      v18 = ((unsigned __int8)v34 << 7) | v35 | (v46 << 6);
      if ( ((16 * v32) & 0x10) != 0 || a3 )
      {
        v36 = v17 & 0xFFFFFFF0;
        v37 = (_BYTE *)sub_FCE460(v45, v24, (unsigned __int8)v34, v46, v33, v32);
        v38 = ((8 * (unsigned __int8)v29) | v36 | v31) & 0xFFFFFFCF | (16 * v32) | (32 * v33);
        LOBYTE(v38) = ((8 * v29) | v36 | v31) & 0xF | (16 * v32) & 0x3F | (32 * v33) & 0x3F;
        v17 = ((unsigned __int8)v34 << 7) | v38 | (v46 << 6);
        if ( ((((_BYTE)v34 << 7) | v38 | (v46 << 6)) & 0x80u) != 0 && (unsigned __int8)((*v37 & 7) - 4) >= 2u )
        {
          LOBYTE(v34) = 0;
          v31 = 3;
        }
        *v37 = ((_BYTE)v34 << 7) | (v46 << 6) | (32 * v33) & 0x3F | (16 * v32) & 0x3F | (8 * v29) & 0xF | v31 & 7;
      }
      if ( --v43 == -1 )
        break;
      v20 = *(__int64 **)a1;
      v19 = *(_DWORD **)(a1 + 8);
    }
  }
  return v45;
}
