__int64 __fastcall sub_1AF34A0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  _BYTE *v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v19[72]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = 1688LL * a3;
  v7 = *(_QWORD *)(a1 + 8);
  ptr[0] = v19;
  ptr[1] = (void *)0x400000000LL;
  sub_FFF220(
    (__int64)ptr,
    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 336) + 6776LL * *(unsigned int *)(v7 + 344) - 6776) + v6 + 976));
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 || (LOBYTE(v8) = sub_9B48E0(a2), v9 = v8, (_BYTE)v8) )
  {
    v10 = ptr[0];
    v9 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(unsigned int *)(v12 + 344);
    if ( (_DWORD)v13
      && (v14 = *(_QWORD *)(v12 + 336) + 6776 * v13 - 6776, *(_QWORD *)(v14 + 6768) == *(_QWORD *)(v12 + 328))
      && (v15 = *(unsigned int *)(v14 + 8), v16 = *(unsigned int *)(v12 + 27504), (unsigned int)v15 > (unsigned int)v16)
      && v5 < v15 - v16 )
    {
      LOBYTE(v17) = sub_FFE8A0(*(_DWORD *)(*(_QWORD *)v14 + v6 + 976));
      v10 = ptr[0];
      v9 = v17;
      if ( (_BYTE)v17 )
        LOBYTE(v9) = *((_DWORD *)ptr[0] + v4) != 88;
    }
    else
    {
      v10 = ptr[0];
    }
  }
  if ( v10 != v19 )
    free(v10);
  return v9;
}
