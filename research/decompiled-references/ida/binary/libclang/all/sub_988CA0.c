__int64 __fastcall sub_988CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  _DWORD *v14; // r8
  _DWORD *v15; // r15
  _DWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // r15
  __int64 v26; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v27[3]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v28; // [rsp+38h] [rbp-C0h]
  _BYTE v29[64]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v30[24]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-60h]
  unsigned int v32; // [rsp+A0h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-48h]

  v7 = *(_DWORD *)(a4 + 48);
  v26 = a2;
  if ( v7 == 1 )
  {
    v11 = *(_QWORD *)(a4 + 24);
    v8 = a4;
  }
  else if ( v7 )
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
    {
      v28 = &v26;
      BUG();
    }
    v8 = a4;
    v11 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 32LL);
  }
  else
  {
    v8 = a4;
    v9 = *(_QWORD *)(a4 + 24);
    v10 = *(unsigned int *)(v8 + 32);
    v11 = *(_QWORD *)(v9 + 32);
    if ( (_DWORD)v10 != *(_DWORD *)(v11 + 16) && (_DWORD)v10 )
      v11 = *(_QWORD *)(v9 + v10 + 32);
  }
  v12 = *(_QWORD *)(v11 + 24);
  v27[0] = v8;
  v27[2] = a3;
  v13 = *(unsigned int *)(v12 + 288);
  v14 = *(_DWORD **)(v12 + 280);
  v28 = &v26;
  v27[1] = a1;
  v15 = v14;
  v16 = &v14[6 * v13];
  if ( v16 != v14 )
  {
    do
    {
      if ( *(_BYTE *)(v12 + 648) )
      {
        v17 = (unsigned int)(*(_DWORD *)a3 + v15[2]);
        sub_A1C030(v30, *(_QWORD *)(a3 + 24), v17, (unsigned int)v17);
        if ( (v33
           || !v31
           || *(_DWORD *)(*(_QWORD *)(v31 + 32) + 16LL) == v32
           || !v32
           || (*(_BYTE *)(v31 + v32 + 28) & 0x10) != 0)
          && !(unsigned __int8)sub_9882A0((__int64)v27, v15, 1u) )
        {
          sub_A1C0C0(v30);
          return 0;
        }
        sub_A1C0C0(v30);
      }
      else if ( !(unsigned __int8)sub_9882A0((__int64)v27, v15, a5) )
      {
        return 0;
      }
      v15 += 6;
    }
    while ( v16 != v15 );
  }
  v19 = *(_QWORD *)(v12 + 8);
  v20 = v19 + 32LL * *(unsigned int *)(v12 + 16);
  if ( v19 == v20 )
  {
LABEL_24:
    sub_A1DB00(a4);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v21 = (unsigned int)(*(_DWORD *)a4 + *(_DWORD *)(v19 + 8));
      sub_A1C030(v29, *(_QWORD *)(a4 + 24), v21, (unsigned int)v21);
      v22 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)(v19 + 8));
      sub_A1C030(v30, *(_QWORD *)(a3 + 24), v22, (unsigned int)v22);
      v23 = sub_988CA0(a1, v26, v30, v29, a5);
      sub_A1C0C0(v30);
      if ( !v23 )
        break;
      sub_A1C0C0(v29);
      v19 += 32;
      if ( v19 == v20 )
        goto LABEL_24;
    }
    sub_A1C0C0(v29);
    return 0;
  }
}

