__int16 __fastcall sub_17A40B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  int v10; // r14d
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  size_t v17; // rax
  __int64 v18; // rcx

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_QWORD *)&byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v3 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v3 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 )
    return v2;
  v4 = v2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v5 + 17) & 4) != 0 )
    return v2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
    return v2;
  v6 = *(_QWORD *)(a2 + 48);
  v2 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) == 13 )
  {
    LOWORD(v2) = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
    if ( (_WORD)v2 == 492 || (_WORD)v2 == 435 )
      return v2;
  }
  v7 = *(_QWORD *)(a1 + 232);
  if ( (unsigned int)sub_FEAA90(v7) != 200 )
  {
    if ( (unsigned int)sub_FEAA90(v7) != 300 )
      goto LABEL_18;
    v17 = j__strlen("__opencl_c_program_scope_global_variables");
    v18 = v7;
    v10 = 4;
    if ( !sub_FF8060(a1 + 200, (__int64)"__opencl_c_program_scope_global_variables", v17, v18) )
      goto LABEL_19;
  }
  if ( sub_9B48E0(a2) )
  {
LABEL_18:
    v10 = 4;
    goto LABEL_19;
  }
  v10 = 1;
LABEL_19:
  v11 = *(_QWORD *)(a1 + 248);
  if ( *(_BYTE *)(*(_QWORD *)v4 + 16LL) == 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v4 + 32LL);
    v13 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
    if ( ((v13 & 8) == 0 || (*(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) == 0)
      && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
    {
      v14 = sub_A70E70(v11, v12, v10);
      v15 = sub_A72040(*(_QWORD **)(a1 + 248), v14);
      v16 = sub_A75D20(*(_QWORD **)(a1 + 248), v15 & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(_QWORD *)(a1 + 248);
      v6 = v16;
    }
  }
  v2 = sub_A70E70(v11, v6, v10);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u )
    v2 = sub_A72040(*(_QWORD **)(a1 + 248), v2) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a2 + 48) = v2;
  return v2;
}
