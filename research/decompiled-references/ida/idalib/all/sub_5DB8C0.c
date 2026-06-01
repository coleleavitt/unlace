__int64 __fastcall sub_5DB8C0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  int v5; // r15d
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char *v9; // rax
  char *v10; // rax
  __int64 (__fastcall *v11)(__int64, int); // rax
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 v14; // rbp
  int aflags; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  unsigned __int64 v21; // [rsp+8h] [rbp-330h]
  bool v22; // [rsp+17h] [rbp-321h]
  unsigned __int64 v23; // [rsp+18h] [rbp-320h]
  __int128 v24; // [rsp+20h] [rbp-318h] BYREF
  __int64 v25; // [rsp+30h] [rbp-308h]
  __int64 v26; // [rsp+38h] [rbp-300h]
  __int64 v27; // [rsp+40h] [rbp-2F8h]
  char v28; // [rsp+48h] [rbp-2F0h] BYREF
  char v29; // [rsp+188h] [rbp-1B0h] BYREF
  __int128 v30; // [rsp+190h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+1A0h] [rbp-198h]
  __int64 v32; // [rsp+1A8h] [rbp-190h]
  __int64 v33; // [rsp+1B0h] [rbp-188h]
  char v34; // [rsp+1B8h] [rbp-180h] BYREF
  _QWORD v35[8]; // [rsp+2F8h] [rbp-40h] BYREF

  v3 = a3 << 6;
  v4 = *(_QWORD *)(a2 + 72);
  v35[0] = __readfsqword(0x28u);
  v5 = a3;
  v6 = (unsigned __int64 *)((a3 << 6) + v4);
  if ( a3 >= *(int *)(a2 + 96) )
  {
    v14 = *v6;
    aflags = get_aflags(*v6);
    result = 5;
    if ( (aflags & 0x400000) == 0 )
      return (unsigned int)sub_5CD7D0(a1, v14) + 5;
  }
  else
  {
    v7 = v6[1];
    v8 = v7 - 1;
    v23 = v7;
    if ( (sub_3BE900(a1, v7 - 1, 4) & 0x600) == 0x200 )
      v8 = sub_3C2650(a1, v8);
    v26 = 0;
    v9 = &v28;
    v27 = 0;
    v24 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 40;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *((_QWORD *)v9 - 2) = 0;
    }
    while ( &v29 != v9 );
    v32 = 0;
    v10 = &v34;
    v33 = 0;
    v30 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 40;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *((_QWORD *)v10 - 2) = 0;
    }
    while ( v10 != (char *)v35 );
    v25 = -1;
    v31 = -1;
    decode_insn(&v24, v8, v35, 0, 0, 0, 0.0);
    v22 = 0;
    v21 = -1;
    if ( *(char *)(a1[2] + 10) < 0 )
    {
      v21 = v8 - 1;
      if ( (sub_3BE900(a1, v8 - 1, 4) & 0x600) == 0x200 )
        v21 = sub_3C2650(a1, v21);
      decode_insn(&v30, v21, v17, v18, v19, &v30, 0.0);
      v22 = v21 >= *(_QWORD *)(*(_QWORD *)(a2 + 72) + v3);
    }
    v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
    if ( v11 == sub_5C3EA0 )
      v12 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + ((__int64)v5 << 6) + 24);
    else
      v12 = v11(a2, v5);
    if ( v12 )
    {
      if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v24, 1u) )
        return 3;
      if ( !v22 )
      {
        if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v24, 1u) )
          return 2;
        return (unsigned __int8)is_indirect_jump_insn((__int64)&v24) && !(unsigned __int8)is_call_insn(&v24);
      }
      if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v30, 1u) )
        return 3;
      if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v24, 1u) )
        return 2;
      goto LABEL_39;
    }
    if ( (get_aflags(v8) & 0x400000) != 0 || v22 && (get_aflags(v21) & 0x400000) != 0 )
      return 4;
    v16 = 0x100000000LL;
    if ( *(_DWORD *)(a1[3] + 24) == 8 )
      v16 = -1;
    if ( v23 >= v16 || (v20 = sub_3BE900(a1, v23, 4), result = 7, (v20 & 0x10000) == 0) )
    {
      if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v24, 1u) )
        return 2;
      if ( !v22 )
        return (unsigned __int8)is_indirect_jump_insn((__int64)&v24) && !(unsigned __int8)is_call_insn(&v24);
LABEL_39:
      if ( (unsigned __int8)sub_4CC920(a1, (__int64)&v30, 1u) )
        return 2;
      if ( (unsigned __int8)is_indirect_jump_insn((__int64)&v24) && !(unsigned __int8)is_call_insn(&v24) )
        return 1;
      if ( (unsigned __int8)is_indirect_jump_insn((__int64)&v30) )
        return (unsigned __int8)is_call_insn(&v30) ^ 1u;
      return 0;
    }
  }
  return result;
}
