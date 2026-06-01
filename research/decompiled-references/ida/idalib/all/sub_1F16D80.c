void *__fastcall sub_1F16D80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // rax
  void *result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax

  v1 = *(unsigned int *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = (unsigned int)(v1 + 1);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(unsigned int *)(v2 + 8 * v1);
  *(_DWORD *)(a1 + 24) = v4;
  switch ( v6 )
  {
    case 0LL:
      v9 = *(_QWORD *)(v2 + 8 * v4);
      v10 = *(_QWORD **)(a1 + 8);
      v11 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = v5 + 2;
      if ( v9 )
        v9 = sub_1EE0A70((__int64)v10, v11, v9);
      result = (void *)sub_1EE2910(v10, v9);
      break;
    case 1LL:
    case 2LL:
    case 7LL:
    case 11LL:
      result = (void *)sub_1EFA7B0(a1);
      break;
    case 3LL:
      v13 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      result = (void *)sub_B87BD0(
                         v3 + 17536,
                         *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v13) & 7);
      break;
    case 4LL:
      v14 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      result = (void *)sub_B87700(
                         v3 + 17536,
                         *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v14) & 7);
      break;
    case 5LL:
      v15 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      result = (void *)sub_B87AA0(
                         v3 + 17536,
                         *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v15) & 7);
      break;
    case 6LL:
      v16 = *(int *)(v2 + 8 * v4);
      *(_DWORD *)(a1 + 24) = v5 + 2;
      result = (void *)((v3 + 16 * v16 + 17592) | 6);
      break;
    case 8LL:
      v8 = sub_1EE1670(a1);
      result = (void *)sub_B87960(v3 + 17536, v8);
      break;
    case 9LL:
      v12 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), (_DWORD *)(a1 + 24));
      result = (void *)sub_B87830(v3 + 17536, v12);
      break;
    case 10LL:
      if ( !(_BYTE)qword_2CCC3F8 && __cxa_guard_acquire(&qword_2CCC3F8) )
      {
        unk_2CCC400 = 2;
        __cxa_guard_release(&qword_2CCC3F8);
      }
      result = &unk_2CCC407;
      break;
  }
  return result;
}
