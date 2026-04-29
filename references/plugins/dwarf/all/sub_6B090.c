__int64 __fastcall sub_6B090(_QWORD *a1, int *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // ebx
  _QWORD *v22; // rcx
  int v23; // edx
  _QWORD *v24; // rbp
  unsigned __int8 v26; // [rsp+0h] [rbp-168h]
  unsigned __int8 v27; // [rsp+0h] [rbp-168h]
  unsigned __int8 v28; // [rsp+0h] [rbp-168h]
  __int64 v29; // [rsp+8h] [rbp-160h]
  __int64 v30; // [rsp+10h] [rbp-158h] BYREF
  _QWORD *v31; // [rsp+18h] [rbp-150h]
  _QWORD v32[41]; // [rsp+20h] [rbp-148h] BYREF

  v7 = *a3;
  v8 = *(unsigned __int8 *)(a4 + 32);
  v32[33] = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v7 + 16);
  if ( (_BYTE)v8 == 0x91 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(v10 + 128) + 24LL);
    sub_84A60(v32);
    v19 = sub_99400(a3, 64, v32);
    if ( !v19 )
    {
LABEL_21:
      v27 = v19;
      sub_1B750((__int64)v32);
      return v27;
    }
    v30 = 0;
    v31 = nullptr;
    v20 = sub_6A2D0(a1, (unsigned __int64)&v30, v32, a3, a5);
    if ( !v20 )
    {
LABEL_20:
      v26 = v20;
      cleanup_argloc(&v30);
      v19 = v26;
      goto LABEL_21;
    }
    v21 = v30;
    if ( (_DWORD)v30 == 6 )
    {
      v28 = v20;
      v24 = (_QWORD *)(*(_QWORD *)(v29 + 16) & ((unsigned __int64)v31 + *(_QWORD *)a4));
      cleanup_argloc(&v30);
    }
    else
    {
      if ( (_DWORD)v30 != 1 )
      {
        if ( (_DWORD)v30 == 5 )
        {
          *v31 += *(_QWORD *)a4;
          v21 = v30;
        }
        goto LABEL_19;
      }
      v24 = (_QWORD *)((char *)v31 + *(_QWORD *)a4);
      v28 = v20;
      cleanup_argloc(&v30);
    }
    v31 = v24;
    v20 = v28;
LABEL_19:
    v22 = v31;
    v31 = *((_QWORD **)a2 + 1);
    v23 = *a2;
    *((_QWORD *)a2 + 1) = v22;
    *a2 = v21;
    LODWORD(v30) = v23;
    goto LABEL_20;
  }
  v11 = *(_QWORD *)(v10 + 168);
  v12 = *(_DWORD *)(v11 + 2416);
  if ( v12 == -1 || (_DWORD)v8 != v12 + 112 )
  {
    v13 = *(_DWORD *)(v11 + 2420);
    if ( v13 == -1 || (_DWORD)v8 != v13 + 112 )
    {
      v14 = a3[32];
      v32[0] = 0;
      (*(void (__fastcall **)(__int64, _QWORD *))(v14 + 552))(v8, v32);
      if ( (debug & 0x40000) != 0 )
        sub_16DD0((__int64)"DWARF: Unexpected stkvar operation: %s (%d)\n");
      return 0;
    }
  }
  v16 = sub_85470(v11, a4);
  v17 = sub_85560(v11, v16);
  if ( !v17 )
    return 0;
  v18 = operator new(0x10u);
  *(_QWORD *)v18 = 0;
  *(_DWORD *)(v18 + 8) = 0;
  *(_DWORD *)(v18 + 8) = *(_DWORD *)(v17 + 4);
  *(_QWORD *)v18 = *(_QWORD *)a4;
  cleanup_argloc(a2);
  if ( v18 )
  {
    *a2 = 5;
    *((_QWORD *)a2 + 1) = v18;
  }
  return 1;
}
