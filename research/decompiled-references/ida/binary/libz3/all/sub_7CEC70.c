__int64 __fastcall sub_7CEC70(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v10; // rbp
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // r14d
  int v16; // eax
  void *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r14
  void *v25; // r12
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+0h] [rbp-148h] BYREF
  __int128 v31; // [rsp+8h] [rbp-140h] BYREF
  _DWORD v32[8]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v33[32]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-E8h] BYREF
  int v35; // [rsp+68h] [rbp-E0h]
  __int64 v36[4]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-A8h]
  int v38; // [rsp+A8h] [rbp-A0h]
  __int128 v39; // [rsp+B0h] [rbp-98h]
  _QWORD v40[2]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE v42[16]; // [rsp+E0h] [rbp-68h] BYREF
  int v43; // [rsp+F0h] [rbp-58h]

  if ( a2 == -1 )
    return 0;
  v7 = *(_QWORD *)(a1 + 2400);
  if ( v7 )
  {
    if ( a2 < *(_DWORD *)(v7 - 4) )
    {
      v10 = *(_QWORD *)(v7 + 8LL * a2);
      if ( v10 )
        return v10;
    }
  }
  if ( (a2 & 0xFFFFFFFB) == 0 )
    return 0;
  v37 = *(_QWORD *)(a1 + 144);
  sub_180C5A0(v42, "pb");
  v12 = sub_15DA4C0(v37 + 560, v42);
  v13 = *(_QWORD *)(a1 + 144);
  v38 = v12;
  v40[0] = 0;
  v40[1] = 0;
  v41[0] = 1;
  v41[1] = 0;
  v39 = 0;
  sub_16744A0(v32, v13);
  sub_1684300(&v30, *(_QWORD *)(a1 + 144));
  sub_15C5470(v42, *(_QWORD *)(a1 + 144));
  sub_16669D0((char *)&v31 + 8, *(_QWORD *)(a1 + 144));
  sub_15F01E0(v33, *(_QWORD *)(a1 + 144));
  sub_162A710(v34, *(_QWORD *)(a1 + 144));
  v14 = *(_QWORD *)(a1 + 144);
  if ( a2 == v38 )
  {
    v10 = sub_186B270(0x420u);
    sub_7AF8F0(v10, (_QWORD *)a1, a2);
  }
  else if ( a2 == v32[0] )
  {
    v16 = *(_DWORD *)(a1 + 1272);
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_116834(v36, "polysat solver is not integrated", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      if ( v16 != 2 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_116834(v36, "unknown bit-vector solver. Accepted values 0 (bit blast), 1 (polysat), 2 (int blast)", v6);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = sub_186B270(0x1A8u);
      sub_8062E0(v10, a1);
    }
    else
    {
      v10 = sub_186B270(0x310u);
      sub_80E9C0(v10, a1, a2, v27, v28, v29, v30, v31);
    }
  }
  else if ( a2 == v30 )
  {
    v10 = sub_186B270(0x218u);
    sub_818270(v10, a1, a2);
  }
  else if ( a2 == v43 )
  {
    v10 = sub_186B270(0x5A0u);
    sub_7E0730(v10, a1);
  }
  else if ( a2 == 5 )
  {
    v10 = sub_186B270(0x3E8u);
    sub_835BE0(v10, a1, 5);
  }
  else if ( a2 == (unsigned int)sub_15F0200(v33) )
  {
    v10 = sub_186B270(0x1D8u);
    sub_81BC00(v10, a1, a2);
  }
  else if ( a2 == v35 )
  {
    v10 = sub_186B270(0x110u);
    sub_7DBD80(v10, a1);
  }
  else
  {
    sub_180C5A0(v36, "specrels");
    v15 = sub_15D1320(v14 + 560, v36);
    if ( a2 != v15 )
    {
      if ( a3 )
        sub_7CDC60((_QWORD *)a1, a3, 0.0);
      v10 = 0;
      goto LABEL_24;
    }
    v10 = sub_186B270(0x80u);
    sub_851990(v10, a1, v15);
  }
  sub_7CDF60((_QWORD *)a1, v10);
LABEL_24:
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  sub_182CBA0(v17, v41);
  v18 = *((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    v19 = *(unsigned int *)(*((_QWORD *)&v39 + 1) - 4LL);
    if ( (_DWORD)v19 )
    {
      v20 = *((_QWORD *)&v39 + 1) + 16 * v19;
      do
      {
        v21 = v18;
        v18 += 16;
        sub_15D0DF0(v21);
      }
      while ( v20 != v18 );
      v18 = *((_QWORD *)&v39 + 1);
    }
    sub_186B220((void *)(v18 - 8));
  }
  v22 = v39;
  if ( (_QWORD)v39 )
  {
    v23 = *(unsigned int *)(v39 - 4);
    if ( (_DWORD)v23 )
    {
      v24 = v39 + 32 * v23;
      do
      {
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v26 = v22 + 16;
        v22 += 32;
        sub_182CBA0(v25, v26);
      }
      while ( v24 != v22 );
      v22 = v39;
    }
    sub_186B220((void *)(v22 - 8));
  }
  return v10;
}

