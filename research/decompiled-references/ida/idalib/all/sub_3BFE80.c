__int64 __fastcall sub_3BFE80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int *a4, char *a5)
{
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r8
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  __int64 result; // rax
  bool v23; // al
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 addr; // rax
  unsigned __int64 v28; // rax
  char v29; // al
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rbx
  int v32; // [rsp+0h] [rbp-40h]

  *(_OWORD *)a4 = 0;
  v10 = nbits(a2);
  v11 = v10 + 14;
  v12 = v10 + 7;
  if ( v12 >= 0 )
    v11 = v12;
  v13 = v11 >> 3;
  if ( a3 && v13 && !is_mul_ok(a3, v13) || (v14 = a3 * v13, a3 * v13 > 0x10) )
  {
    *a5 = 1;
    return 1;
  }
  if ( !v14 )
  {
    *a5 = 1;
    v16 = *(_QWORD *)(a1 + 32);
LABEL_23:
    if ( !*(_QWORD *)(v16 + 152) )
      return 1;
    goto LABEL_10;
  }
  v15 = sub_3BFA20((__int64 *)a1, a4, v14, a2, 0, 0) == v14;
  *a5 = v15;
  v16 = *(_QWORD *)(a1 + 32);
  if ( v15 )
    goto LABEL_23;
  if ( !*(_QWORD *)(v16 + 160) )
    return 1;
LABEL_10:
  if ( *(_QWORD *)(a1 + 776) && (unsigned __int8)sub_3FCEA0(a1, a2) || a2 == -1 )
    return 1;
  if ( a2 == *(_QWORD *)(a1 + 1208) )
  {
    if ( *(_BYTE *)(a1 + 1216) )
      goto LABEL_15;
  }
  else
  {
    *(_QWORD *)(a1 + 1208) = a2;
    v23 = rangeset_t_find_range(a1 + 1120, a2) != 0;
    *(_BYTE *)(a1 + 1216) = v23;
    if ( v23 )
    {
LABEL_15:
      if ( !*a5 )
      {
        v17 = a2 + v14;
        v18 = (_QWORD *)(a1 + 960);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL);
        v20 = *(_QWORD **)(a1 + 968);
        if ( v20 )
        {
          v21 = (_QWORD *)(a1 + 960);
          do
          {
            if ( v20[4] >= v17 )
            {
              v21 = v20;
              v20 = (_QWORD *)v20[2];
            }
            else
            {
              v20 = (_QWORD *)v20[3];
            }
          }
          while ( v20 );
          if ( v21 != v18 && v19 > v21[4] )
            v19 = v21[4];
        }
        addr = rangeset_t_next_addr(a1 + 1160, v17);
        if ( addr > v19 )
          addr = v19;
        v28 = addr - a2;
        goto LABEL_44;
      }
      return 1;
    }
  }
  v24 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
    v24 = -2;
  if ( a2 >= v24 )
    return 1;
  v25 = sub_3BE900((_QWORD *)a1, a2 + 1, 1);
  if ( (v25 & 0x600) != 0x200 )
    return 1;
  if ( a3 == 1 )
  {
    v32 = v25;
    v29 = sub_3BF920((__int64 *)a1, a2 + 1, v25, a4, *a5);
    LODWORD(v25) = v32;
    if ( !v29 )
      return 1;
  }
  if ( (a2 & 1) != 0 )
  {
    v28 = ((unsigned int)v25 >> 20) + 1LL;
    goto LABEL_44;
  }
  v26 = 4294967294LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
    v26 = -3;
  if ( a2 >= v26 || (v30 = a2 + 2, v31 = sub_3BE900((_QWORD *)a1, a2 + 2, 1), (v31 & 0x600) != 0x200) )
  {
    if ( a3 != 1 )
      return 1;
    return 2;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 2 && !sub_3BFD80((__int64 *)a1, v30, v31, a4, *a5) )
      return 1;
    goto LABEL_53;
  }
  if ( !sub_3BF920((__int64 *)a1, v30, v31, a4, *a5) )
    return 2;
LABEL_53:
  v28 = ((unsigned int)v31 >> 20) + 2LL;
LABEL_44:
  result = v28 / a3;
  if ( !result )
    return 1;
  return result;
}
