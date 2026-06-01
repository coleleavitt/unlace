__int64 __fastcall sub_5BFD00(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r15d
  unsigned int *v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r12d
  char *v9; // rax
  char *v10; // rax
  __int64 (__fastcall *v11)(__int64, int); // rax
  int v12; // eax
  __int64 result; // rax
  unsigned int v14; // ebx
  int aflags; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+0h] [rbp-208h]
  bool v21; // [rsp+Bh] [rbp-1FDh]
  unsigned int v22; // [rsp+Ch] [rbp-1FCh]
  __int64 v23; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-1F0h]
  __int64 v25; // [rsp+20h] [rbp-1E8h]
  char v26; // [rsp+28h] [rbp-1E0h] BYREF
  char v27; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-110h]
  __int64 v30; // [rsp+100h] [rbp-108h]
  char v31; // [rsp+108h] [rbp-100h] BYREF
  _QWORD v32[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v3 = 56 * a3;
  v4 = *(_QWORD *)(a2 + 64);
  v32[0] = __readfsqword(0x28u);
  v5 = a3;
  v6 = (unsigned int *)(56 * a3 + v4);
  if ( a3 >= *(int *)(a2 + 88) )
  {
    v14 = *v6;
    aflags = get_aflags(*v6);
    result = 5;
    if ( (aflags & 0x400000) == 0 )
      return (unsigned int)sub_5B28A0(a1, v14) + 5;
  }
  else
  {
    v7 = v6[1];
    v8 = v7 - 1;
    v22 = v7;
    if ( (sub_3B9AA0((__int64)a1, v7 - 1, 4) & 0x600) == 0x200 )
      v8 = sub_3BD5D0((__int64)a1, v8);
    v9 = &v26;
    v24 = 0;
    v25 = 0;
    v23 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 24;
      *((_WORD *)v9 - 11) = 0;
      *((_WORD *)v9 - 10) = 0;
      *((_DWORD *)v9 - 1) = 0;
      *((_WORD *)v9 - 9) = 0;
      *((_QWORD *)v9 - 2) = 0;
      *((_DWORD *)v9 - 2) = 0;
    }
    while ( &v27 != v9 );
    v28 = -1;
    v10 = &v31;
    v29 = 0;
    v30 = 0;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 24;
      *((_WORD *)v10 - 11) = 0;
      *((_WORD *)v10 - 10) = 0;
      *((_DWORD *)v10 - 1) = 0;
      *((_WORD *)v10 - 9) = 0;
      *((_QWORD *)v10 - 2) = 0;
      *((_DWORD *)v10 - 2) = 0;
    }
    while ( v10 != (char *)v32 );
    LODWORD(v24) = -1;
    LODWORD(v29) = -1;
    decode_insn(&v23, v8, v32, 0, 0, 0);
    v21 = 0;
    v20 = -1;
    if ( *(char *)(a1[2] + 10) < 0 )
    {
      v20 = v8 - 1;
      if ( (sub_3B9AA0((__int64)a1, v8 - 1, 4) & 0x600) == 0x200 )
        v20 = sub_3BD5D0((__int64)a1, v20);
      decode_insn(&v28, v20, v17, v18, v19, &v28);
      v21 = v20 >= *(_DWORD *)(*(_QWORD *)(a2 + 64) + v3);
    }
    v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v11 == sub_5A95E0 )
      v12 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 56LL * v5 + 16);
    else
      v12 = v11(a2, v5);
    if ( v12 )
    {
      if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v23, 1u) )
        return 3;
      if ( !v21 )
      {
        if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v23, 1u) )
          return 2;
        return (unsigned __int8)is_indirect_jump_insn(&v23) && !(unsigned __int8)is_call_insn(&v23);
      }
      if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v28, 1u) )
        return 3;
      if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v23, 1u) )
        return 2;
      goto LABEL_38;
    }
    if ( (get_aflags(v8) & 0x400000) != 0 || v21 && (get_aflags(v20) & 0x400000) != 0 )
      return 4;
    if ( v22 == -1 || (v16 = sub_3B9AA0((__int64)a1, v22, 4), result = 7, (v16 & 0x10000) == 0) )
    {
      if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v23, 1u) )
        return 2;
      if ( !v21 )
        return (unsigned __int8)is_indirect_jump_insn(&v23) && !(unsigned __int8)is_call_insn(&v23);
LABEL_38:
      if ( (unsigned __int8)sub_4B5BC0(a1, (__int64)&v28, 1u) )
        return 2;
      if ( (unsigned __int8)is_indirect_jump_insn(&v23) && !(unsigned __int8)is_call_insn(&v23) )
        return 1;
      if ( (unsigned __int8)is_indirect_jump_insn(&v28) )
        return (unsigned __int8)is_call_insn(&v28) ^ 1u;
      return 0;
    }
  }
  return result;
}

