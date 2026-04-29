__int64 __fastcall sub_215FE0(__int64 *a1, int a2, __int64 a3, int a4)
{
  _QWORD *v6; // rdx
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-58h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = (_QWORD *)a1[11];
  v20[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(*(_QWORD *)(*v6 + 104LL * a2 + 80), 2) & 0x2F) != 0xD )
    return 1;
  v8 = (__int64 *)sub_2156E0(a1 + 12, a1[2], a2);
  v9 = *v8;
  v10 = *v8 + 8 * v8[1];
  if ( v10 == *v8 )
    return 1;
  v19 = a4;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
    v12 = *(_QWORD *)v9 + 24LL;
    if ( sub_1163C0(*(_DWORD *)(v11 + 4)) || (unsigned int)(**(_DWORD **)(v12 + 40) - 56) <= 1 && !*(_BYTE *)(v12 + 52) )
      goto LABEL_16;
    v13 = sub_32D500(0, a3, *(_QWORD *)(v12 + 16) + v19, *(int *)(v11 + 4), 1);
    if ( (_BYTE)v13 )
      goto LABEL_16;
    v14 = *(_QWORD *)(v12 + 40);
    if ( *(_DWORD *)v14 != 4 && (*(_DWORD *)v14 != 67 || *(_DWORD *)(v14 + 36) != *(_DWORD *)(v14 + 68)) )
      return v13;
    v15 = v14 + 64;
    if ( *(_BYTE *)(v12 + 52) )
      v15 = v14 + 32;
    v16 = *(_QWORD *)(v14 + 24);
    v17 = a1[2];
    v20[0] = 0;
    if ( !(unsigned __int8)sub_23B3F0(v17, v16, v15, v20, 0) )
      break;
    clear_tinfo_t(v20);
LABEL_16:
    v9 += 8;
    if ( v10 == v9 )
      return 1;
  }
  clear_tinfo_t(v20);
  return 0;
}
