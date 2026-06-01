unsigned __int64 __fastcall sub_C155E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, int a5, int a6)
{
  unsigned __int16 *v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  _BYTE *v14; // rdi
  __int64 v15; // r15
  __int64 (*v16)(void); // rax
  __int64 v17; // r13
  __int64 (*v18)(); // rax
  unsigned __int64 v19; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ebx
  unsigned __int64 v27; // rcx
  int i; // ebp
  unsigned __int64 v29; // r13
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 *v34; // rbp
  __int64 *v35; // rbx
  unsigned int v38; // [rsp+1Ch] [rbp-9Ch]
  char v39; // [rsp+28h] [rbp-90h]
  unsigned int v40; // [rsp+2Ch] [rbp-8Ch]
  __int64 v41[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h]
  _BYTE v45[96]; // [rsp+58h] [rbp-60h] BYREF

  v8 = a4;
  v9 = (unsigned __int8)a5;
  ptr = v45;
  v41[0] = a1;
  v39 = a5;
  v42 = 0;
  v44 = 0x400000000LL;
  v41[1] = (__int64)&v42;
  if ( !(unsigned __int8)sub_C140A0(v41, a4, (__int64)&v42, (int)a4, a5, a6) )
    goto LABEL_16;
  v10 = v42 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v42 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_15;
  if ( (v42 & 4) != 0 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    v38 = v11;
    if ( (unsigned int)v44 + (unsigned __int64)(*(_DWORD *)(a3 + 24) >> 4) <= v11 )
    {
      v40 = v11 - v44;
      if ( (_DWORD)v44 )
      {
        v12 = v11 - v44;
        v13 = 0;
        do
        {
          v14 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * v12) & 0xFFFFFFFFFFFFFFF8LL);
          if ( !v14 || (v14[28] & 0x7Fu) - 59 > 2 )
            BUG();
          v15 = *(_QWORD *)((char *)ptr + v13);
          v16 = *(__int64 (**)(void))(*(_QWORD *)v14 + 32LL);
          if ( v16 == sub_9DD400 )
            v17 = sub_B4CD20((__int64)v14);
          else
            v17 = v16();
          v18 = *(__int64 (**)())(*(_QWORD *)v15 + 32LL);
          if ( v18 == sub_9DD400 )
          {
            if ( sub_B4CD20(v15) != v17 )
              goto LABEL_15;
          }
          else if ( ((__int64 (__fastcall *)(__int64))v18)(v15) != v17 )
          {
            goto LABEL_15;
          }
          ++v12;
          v13 += 8;
        }
        while ( v38 != v12 );
        v10 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v30 = (_QWORD *)(*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
        v30 = (_QWORD *)*v30;
      if ( v30 )
        v30 -= 8;
      if ( !(unsigned __int8)sub_C03020(a1, (__int64)a4, a3, (unsigned __int64)v30, v40) )
        goto LABEL_16;
      goto LABEL_37;
    }
LABEL_15:
    sub_E0FED0(a1, a4, 108, 0);
    goto LABEL_16;
  }
  if ( !(_DWORD)v44 )
    goto LABEL_38;
  v21 = v9 + (unsigned int)v44;
  v22 = v21 + *(unsigned int *)(a3 + 56);
  if ( v22 > *(unsigned int *)(a3 + 60) )
  {
    v8 = (unsigned __int16 *)(a3 + 64);
    sub_22134E0(a3 + 48, a3 + 64, v22, 8);
  }
  v23 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v24 = *(_QWORD *)v23;
  if ( *(_BYTE *)(*(_QWORD *)v23 + 16LL) != 42 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
      goto LABEL_25;
    v24 = sub_F3F310(v24, v8, v22, v21);
    if ( !v24 )
    {
      v24 = *(_QWORD *)v23;
      goto LABEL_25;
    }
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_25:
  v25 = sub_F3F530(v24);
  v26 = v44;
  v27 = v25;
  if ( (_DWORD)v44 != 1 )
  {
    for ( i = 2; ; ++i )
    {
      v29 = *((_QWORD *)ptr + (unsigned int)(v26 - i));
      if ( !(unsigned __int8)sub_C04040(a1, (__int64)a4, a3, v27, v29, 0) )
        break;
      v27 = v29;
      if ( v26 == i )
        goto LABEL_44;
    }
    goto LABEL_16;
  }
  v29 = v25;
LABEL_44:
  v31 = (_QWORD *)(*(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
    v31 = (_QWORD *)*v31;
  v32 = (__int64)(v31 - 8);
  if ( !v31 )
    v32 = 0;
  if ( !(unsigned __int8)sub_C04040(a1, (__int64)a4, a3, v29, v32, 0) )
    goto LABEL_16;
LABEL_37:
  v10 = v42 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_38:
  v19 = v10;
  if ( !v39 )
    goto LABEL_17;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 49 <= 2 )
  {
    if ( (unsigned __int8)sub_BF1320(a1, (__int64)a4, a3, v10) )
    {
LABEL_41:
      v19 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_17;
    }
LABEL_16:
    v19 = 0;
    goto LABEL_17;
  }
  v33 = *(__int64 **)(v10 + 56);
  v34 = &v33[*(unsigned int *)(v10 + 64)];
  if ( v33 != v34 )
  {
    v35 = *(__int64 **)(v10 + 56);
    while ( (unsigned __int8)sub_BF1320(a1, (__int64)a4, a3, *v35) )
    {
      if ( v34 == ++v35 )
        goto LABEL_41;
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( ptr != v45 )
    free(ptr);
  return v19;
}

