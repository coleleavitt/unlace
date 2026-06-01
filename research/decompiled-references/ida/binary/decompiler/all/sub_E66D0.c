__int64 __fastcall sub_E66D0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *exception; // rdi
  __int64 v4; // rax
  bool v7; // zf
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rsi
  int v13; // eax
  _DWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // r13d
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // r12
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 i; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[32]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v34[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_DWORD *)a3 == 56;
  v34[3] = __readfsqword(0x28u);
  if ( v7 )
    sub_336840(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a3 + 32);
  v9 = sub_11A310(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 1);
  if ( !(_BYTE)v9 )
  {
    v13 = *(_DWORD *)(a3 + 4);
    if ( (v13 & 0x8000) != 0 )
    {
      BYTE1(v13) &= ~0x80u;
      *(_DWORD *)(a3 + 4) = v13;
      v9 = sub_1D2A50(a1);
      if ( !(_BYTE)v9 )
      {
        exception = __cxa_allocate_exception(0x30u);
        v4 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)exception = off_4DB660;
        exception[2] = -4;
        *((_QWORD *)exception + 2) = v4;
        *((_QWORD *)exception + 3) = 0;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_9FE30);
      }
      if ( *(_DWORD *)(a1 + 76) && !*(_DWORD *)(a1 + 376) )
      {
        v14 = *(_DWORD **)(a1 + 56);
        if ( *v14 == 55 )
          v15 = (unsigned int)v14[10];
        else
          v15 = (unsigned int)(*(_DWORD *)(a1 + 72) + 1);
        v16 = a1 + 368;
        sub_81220((__int64 *)(a1 + 368), 1u);
        **(_DWORD **)(a1 + 368) = v15;
        v20 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v15 >= *(_DWORD *)(v20 + 64) )
          sub_CE6C0(v16, 1, v17, v18, v19);
        v21 = *(_DWORD *)(a1 + 72);
        v22 = *(_QWORD **)(*(_QWORD *)(v20 + 528) + 8 * v15);
        v23 = v22[44];
        v24 = v22[43];
        if ( v22[45] < (unsigned __int64)(v23 + 1) )
        {
          v30 = qvector_reserve();
          v22[43] = v30;
          v24 = v30;
          v23 = v22[44];
        }
        *(_DWORD *)(v24 + 4 * v23) = v21;
        ++v22[44];
        *(_DWORD *)(a1 + 76) = 3;
      }
      return v9;
    }
    return 0;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 || *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(a3 + 68) )
  {
    sub_6A8E0(a1, v10);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_6;
    goto LABEL_23;
  }
  if ( a3 != a2 )
  {
    sub_6A8E0(a1, 0);
    if ( *(_BYTE *)(a3 + 64) != 8 )
      goto LABEL_7;
    goto LABEL_23;
  }
  sub_6A8E0(a1, 0);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    return 0;
  v9 = 0;
LABEL_23:
  v25 = *(_QWORD **)(a3 + 72);
  v26 = v25[6];
  if ( v26 )
  {
    v27 = v25[7];
    if ( v27 )
    {
      for ( i = 0; i != v27; ++i )
      {
        v29 = i;
        sub_11A960(16 * v29 + v26);
        v26 = v25[6];
      }
    }
    v25[7] = 0;
    qfree();
    v25[6] = 0;
    v25[8] = 0;
  }
  *(_DWORD *)(a3 + 68) = 0;
LABEL_6:
  if ( a3 != a2 )
  {
LABEL_7:
    v32[1] = 0;
    v11 = *(_QWORD *)(a3 + 24);
    v32[0] = 0xFFFFFFFF00000000LL;
    v33[0] = 0xFFFFFFFF00000000LL;
    v33[1] = 0;
    v34[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    sub_32D4D0(v31, v11);
    sub_11B450(a3, v31);
    sub_11B450(a2, v31);
    sub_11A960(v34);
    sub_11A960(v33);
    sub_11A960(v32);
  }
  return v9;
}
