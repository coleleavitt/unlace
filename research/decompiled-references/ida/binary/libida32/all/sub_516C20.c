__int64 __fastcall sub_516C20(__int64 *a1, __int64 a2, unsigned int *a3, __int16 a4)
{
  __int64 *v7; // r13
  __int64 v8; // rsi
  int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v18; // edx
  char v19; // cl
  __int64 v20; // rsi
  unsigned int v21; // [rsp+8h] [rbp-60h]
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v7 = *(__int64 **)(*a1 + 1480);
  if ( (a4 & 4) == 0 )
    goto LABEL_4;
  v18 = *a3;
  ptr = nullptr;
  v24 = 0;
  if ( sub_516900(a1, (__int64)&ptr, v18) && (unsigned __int8)sub_6AAFE0(&ptr) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    return 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
LABEL_4:
  v22 = sub_516700((__int64)a1, a2);
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
    goto LABEL_20;
  if ( (a4 & 0x100) == 0 )
  {
    if ( !(unsigned __int8)sub_69A8C0(*(_QWORD *)(*a1 + 1480)) )
    {
      v19 = 0;
      goto LABEL_21;
    }
LABEL_20:
    sub_69E750(v7, *a3, 1);
    v19 = 1;
LABEL_21:
    v20 = *a3;
    v21 = *a3;
    sub_3C4F00(v7, v20, a3[3], v19);
    if ( (get_merge_state(v7, v20) & 2) != 0 && (a4 & 0x100) == 0 )
      sub_3DDD20((__int64)v7, v21, 1);
    goto LABEL_7;
  }
  v8 = *a3;
  v21 = *a3;
  sub_3C4F00(v7, v8, a3[3], 0);
  get_merge_state(v7, v8);
LABEL_7:
  v9 = a4 & 1;
  v10 = sub_3B90A0(v7, v21);
  LODWORD(ptr) = v10;
  if ( (a4 & 0x80) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      sub_675160(v7, v21, 0, 1, (*(_BYTE *)(a2 + 20) & 0x40) != 0);
    }
    else
    {
      netnode_supdel_range(v10, 0, 0xFFFFFFFFLL, 65);
      netnode_supdel_range((unsigned int)ptr, 0, 0xFFFFFFFFLL, 83);
    }
  }
  else
  {
    sub_3DD870((__int64)v7, v21, v11, v12);
    sub_79BCF0((int)&ptr);
  }
  v13 = (__int64)a3 - *(_QWORD *)(a2 + 8);
  v14 = 0xCCCCCCCCCCCCCCCDLL * (v13 >> 2);
  memmove(a3, a3 + 5, 20 * (*(unsigned int *)(a2 + 4) - v14) - 20);
  v15 = (unsigned int)(*(_DWORD *)(a2 + 4) - 1);
  *(_DWORD *)(a2 + 4) = v15;
  if ( (*(_BYTE *)(a2 + 20) & 2) != 0 && v14 < v15 )
  {
    v16 = v13;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + v16 + 4) = v14++;
      v16 += 20;
    }
    while ( v14 < *(unsigned int *)(a2 + 4) );
  }
  if ( v9 )
    sub_516780(*(_QWORD **)(*a1 + 1480), *(_QWORD *)(*a1 + 1680), (unsigned int *)a2, v22);
  return 1;
}

