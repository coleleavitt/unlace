_QWORD *__fastcall sub_3D0320(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // r12d
  char v6; // r13
  __int64 v7; // rdi
  _QWORD *result; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  __int64 v12; // r13
  _BYTE *v13; // r12
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp-20h] [rbp-20h]
  int v19; // [rsp-18h] [rbp-18h]
  char v20; // [rsp-10h] [rbp-10h]

  v7 = *(_QWORD *)(a1 + 552);
  if ( !a2 )
    return (_QWORD *)nullsub_1155(v7);
  v20 = v6;
  v19 = v5;
  v18 = v4;
  result = *(_QWORD **)(v7 + 152);
  if ( a2 != result[107] && !*(_WORD *)(a2 + 4) )
  {
    result = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( result )
    {
      if ( *result == 0x900000000LL && *(_DWORD *)(a2 + 24) == 2 )
      {
        result = (_QWORD *)sub_3FCD00(
                             *(_QWORD *)(v7 + 264),
                             *(unsigned int *)(v7 + 272),
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
        if ( result )
        {
          v11 = *(_QWORD *)(v10 + 40);
          v12 = result[1];
          v13 = (_BYTE *)sub_186B270(0x70u);
          sub_400BE0(v13, *(_QWORD *)(v7 + 152), v11, a3);
          ++*(_DWORD *)v13;
          v13[108] |= 1u;
          if ( (unsigned __int8)sub_40F760((int)v12 + 176, (_DWORD)v13, v14, v15, v16, v17, v3, v18, v19, v20) )
            ++*(_DWORD *)(v7 + 576);
          else
            ++*(_DWORD *)(v7 + 580);
          return (_QWORD *)sub_41CE10(v13);
        }
      }
    }
  }
  return result;
}

