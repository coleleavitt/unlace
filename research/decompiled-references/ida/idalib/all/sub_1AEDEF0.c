__int64 __fastcall sub_1AEDEF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 *v17; // rdi
  unsigned __int64 v18; // rbp
  __int16 v19; // dx
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h]
  _QWORD v23[23]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = 0;
  v7 = *(unsigned int *)(a2 + 32);
  if ( !(_DWORD)v7 )
    return v6;
  v8 = *(_QWORD *)(a2 + 24);
  v10 = *(_QWORD *)(v8 + 8);
  v11 = v8 + 16 * v7;
  v12 = v8 + 16;
  ptr = v23;
  v23[0] = *(_QWORD *)(v10 + 16);
  v22 = 0x1000000001LL;
  if ( v11 == v12 )
  {
    v17 = v23;
LABEL_18:
    v18 = *v17;
    goto LABEL_9;
  }
  v13 = 1;
  v14 = 1;
  do
  {
    while ( 1 )
    {
      v15 = v13 + 1;
      v16 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL);
      if ( v15 > HIDWORD(v22) )
        break;
      v12 += 16;
      *((_QWORD *)ptr + v14) = v16;
      v14 = (unsigned int)(v22 + 1);
      LODWORD(v22) = v14;
      v13 = (unsigned int)v14;
      if ( v12 == v11 )
        goto LABEL_6;
    }
    v12 += 16;
    sub_2237220(&ptr, v23, v15, 8);
    *((_QWORD *)ptr + (unsigned int)v22) = v16;
    v13 = (unsigned int)(v22 + 1);
    v14 = v13;
    LODWORD(v22) = v22 + 1;
  }
  while ( v11 != v12 );
LABEL_6:
  v17 = (unsigned __int64 *)ptr;
  v6 = 0;
  if ( !(_DWORD)v14 )
    goto LABEL_12;
  if ( (_DWORD)v14 == 1 )
    goto LABEL_18;
  v18 = (unsigned __int64)sub_BA6010(a1, ptr, v14, v14, a5, a6) | 1;
LABEL_9:
  v6 = sub_EEE9A0(24, a1, 8u);
  v19 = *(_WORD *)v6 & 0xFE00;
  LOBYTE(v19) = -11;
  *(_WORD *)v6 = v19;
  if ( unk_2CD7484 )
    sub_EE9B50(245);
  *(_QWORD *)(v6 + 8) = v18;
  v17 = (unsigned __int64 *)ptr;
  *(_QWORD *)(v6 + 16) = 0;
LABEL_12:
  if ( v17 != v23 )
    free(v17);
  return v6;
}
