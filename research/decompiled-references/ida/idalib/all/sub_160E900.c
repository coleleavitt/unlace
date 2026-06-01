void __fastcall sub_160E900(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r12
  int v8; // eax
  _BYTE *v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-118h] BYREF
  __int64 v15; // [rsp+8h] [rbp-110h]
  void *v16; // [rsp+10h] [rbp-108h]
  __int64 v17; // [rsp+18h] [rbp-100h]
  int v18; // [rsp+20h] [rbp-F8h]
  char v19; // [rsp+24h] [rbp-F4h]
  __int64 v20; // [rsp+28h] [rbp-F0h] BYREF
  void *ptr; // [rsp+48h] [rbp-D0h]
  __int64 v22; // [rsp+50h] [rbp-C8h]
  _BYTE v23[32]; // [rsp+58h] [rbp-C0h] BYREF
  void *v24; // [rsp+78h] [rbp-A0h]
  __int64 v25; // [rsp+80h] [rbp-98h]
  int v26; // [rsp+88h] [rbp-90h]
  char v27; // [rsp+8Ch] [rbp-8Ch]
  __int64 v28; // [rsp+90h] [rbp-88h] BYREF
  void *v29; // [rsp+B0h] [rbp-68h]
  __int64 v30; // [rsp+B8h] [rbp-60h]
  int v31; // [rsp+C0h] [rbp-58h]
  char v32; // [rsp+C4h] [rbp-54h]
  __int64 v33; // [rsp+C8h] [rbp-50h] BYREF
  bool v34; // [rsp+E8h] [rbp-30h]
  int v35; // [rsp+ECh] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 552);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 384LL))(v3, a1 + 3096);
  if ( *(_DWORD *)(a1 + 528) || *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) )
  {
    v4 = *(unsigned int *)(a1 + 3128);
    if ( (_DWORD)v4 )
    {
      v5 = *(_QWORD *)(a1 + 248);
      v15 = a1;
      v6 = *(__int64 **)(a1 + 3120);
      v18 = 0;
      v14 = v5;
      v16 = &v20;
      v7 = &v6[v4];
      ptr = v23;
      v24 = &v28;
      v17 = 4;
      v19 = 1;
      v22 = 0x400000000LL;
      v25 = 4;
      v26 = 0;
      v27 = 1;
      v29 = &v33;
      v30 = 4;
      v31 = 0;
      v32 = 1;
      v34 = 0;
      v35 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (_BYTE *)*v6;
          if ( (*(_BYTE *)(*v6 + 28) & 0x7Fu) - 34 > 5 )
            break;
          a2 = sub_17A6B10(v15, *v6, 1);
          v34 = v8 == 0;
          sub_160DD70((__int64)&v14, 0, (__int64)v9, a2);
LABEL_9:
          if ( v7 == ++v6 )
            goto LABEL_15;
        }
        v10 = sub_B73640(*v6);
        if ( !v10 )
          goto LABEL_9;
        v11 = sub_B062C0(v9);
        v13 = HIDWORD(v11);
        if ( !BYTE4(v11) || (unsigned int)(v11 - 1) > 1 )
        {
          sub_160D770((__int64)&v14, v10, a2, v13, v12);
          goto LABEL_9;
        }
        ++v6;
        ++v35;
        sub_160D770((__int64)&v14, v10, a2, v13, v12);
        --v35;
        if ( v7 == v6 )
        {
LABEL_15:
          if ( !v32 )
            free(v29);
          if ( !v27 )
            free(v24);
          if ( ptr != v23 )
            free(ptr);
          if ( !v19 )
            free(v16);
          return;
        }
      }
    }
  }
}
