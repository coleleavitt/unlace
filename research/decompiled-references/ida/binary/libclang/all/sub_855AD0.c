unsigned __int64 __fastcall sub_855AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // r13
  __int64 (*v13)(void); // rax
  __int64 v14; // r14
  __int64 (*v15)(); // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // r15
  int i; // r12d
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // r12
  __int64 *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // r8
  unsigned int v35; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v37; // [rsp+2Ch] [rbp-8Ch]
  __int64 v38[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-68h]
  _BYTE v42[96]; // [rsp+58h] [rbp-60h] BYREF

  ptr = v42;
  v38[0] = a1;
  v39 = 0;
  v41 = 0x400000000LL;
  v38[1] = (__int64)&v39;
  if ( !(unsigned __int8)sub_854640(v38, a4) )
    goto LABEL_16;
  v6 = v39;
  if ( v39 <= 7 )
    goto LABEL_15;
  if ( (v39 & 4) != 0 )
  {
    v7 = *(_DWORD *)(a3 + 56);
    v35 = v7;
    if ( v7 >= (unsigned int)v41 + (unsigned __int64)(*(_DWORD *)(a3 + 24) >> 4) )
    {
      v8 = v7 - v41;
      v37 = v8;
      if ( (_DWORD)v41 )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * v8);
          v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v10 <= 7 || (v11[28] & 0x7Fu) - 57 > 2 )
            BUG();
          v12 = *(_QWORD *)((char *)ptr + v9);
          v13 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL);
          if ( v13 == sub_6A41B0 )
            v14 = sub_777E10((__int64)v11);
          else
            v14 = v13();
          v15 = *(__int64 (**)())(*(_QWORD *)v12 + 32LL);
          if ( v15 == sub_6A41B0 )
          {
            if ( sub_777E10(v12) != v14 )
              goto LABEL_15;
          }
          else if ( ((__int64 (__fastcall *)(__int64))v15)(v12) != v14 )
          {
            goto LABEL_15;
          }
          ++v8;
          v9 += 8;
        }
        while ( v35 != v8 );
        v6 = v39;
      }
      v25 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v25 & 4) != 0 )
        v26 = (_QWORD *)*v26;
      if ( v26 )
        v26 -= 8;
      if ( !(unsigned __int8)sub_82B240(a1, a4, a3, (unsigned __int64)v26, v37) )
        goto LABEL_16;
LABEL_37:
      v6 = v39;
      goto LABEL_38;
    }
LABEL_15:
    sub_A2E130(a1, a4, 110, 0);
    goto LABEL_16;
  }
  if ( (_DWORD)v41 )
  {
    v18 = *(unsigned int *)(a3 + 56) + (unsigned int)v41 + (unsigned __int64)a5;
    if ( *(unsigned int *)(a3 + 60) < v18 )
      sub_25D6060(a3 + 48, a3 + 64, v18, 8);
    v19 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v19 + 16) != 41 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
        goto LABEL_25;
      v19 = sub_B0D320(v19);
      if ( !v19 )
      {
        v19 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_25;
      }
    }
    v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_25:
    v20 = sub_B0E910(v19);
    v21 = v41;
    v22 = v20;
    if ( (_DWORD)v41 != 1 )
    {
      for ( i = 2; ; ++i )
      {
        v24 = v22;
        v22 = *((_QWORD *)ptr + (unsigned int)(v21 - i));
        if ( !(unsigned __int8)sub_829EC0(a1, a4, a3, v24, v22, 0) )
          break;
        if ( v21 == i )
          goto LABEL_48;
      }
      v16 = 0;
      goto LABEL_17;
    }
LABEL_48:
    v31 = (_QWORD *)(*(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
      v31 = (_QWORD *)*v31;
    v32 = (__int64)(v31 - 8);
    if ( !v31 )
      v32 = 0;
    if ( !(unsigned __int8)sub_829EC0(a1, a4, a3, v22, v32, 0) )
    {
      v16 = 0;
      goto LABEL_17;
    }
    goto LABEL_37;
  }
LABEL_38:
  v27 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v16 = v27;
  if ( !a5 )
    goto LABEL_17;
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 47 <= 2 )
  {
    if ( (unsigned __int8)sub_825C70(a1, a4, a3, v27) )
    {
LABEL_41:
      v16 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_17;
    }
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
  v28 = *(__int64 **)(v27 + 56);
  v29 = &v28[*(unsigned int *)(v16 + 64)];
  if ( v28 != v29 )
  {
    v30 = *(__int64 **)(v16 + 56);
    while ( (unsigned __int8)sub_825C70(a1, a4, a3, *v30) )
    {
      if ( v29 == ++v30 )
        goto LABEL_41;
    }
    v16 = 0;
  }
LABEL_17:
  if ( ptr != v42 )
    free(ptr);
  return v16;
}

