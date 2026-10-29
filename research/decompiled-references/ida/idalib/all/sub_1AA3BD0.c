void __fastcall sub_1AA3BD0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rdx
  __int64 *v6; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v27[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( *((_BYTE *)a1 + 64) )
    abort();
  v5 = a1[2];
  v6 = a1[3];
  if ( v5 != v6 )
  {
    v8 = v6[3];
    if ( !*((_BYTE *)a1 + 12) )
      goto LABEL_11;
    v9 = v5[3];
    if ( !v9 )
      goto LABEL_11;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 48LL);
    v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
    if ( (unsigned int)v12 <= 1
      || (v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v12 <= 1)
      && (v11 = sub_F63050(v11, a2, v12, a4)) != 0 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v11 + 32);
        if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
          v11 = *(_QWORD *)v14;
          v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v14 + 16LL) - 43;
          if ( (unsigned int)v12 <= 1 )
            break;
          v15 = sub_F63050(v11, a2, v12, a4);
          v13 = *(_QWORD *)(v15 + 32);
          if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
            goto LABEL_9;
        }
      }
LABEL_9:
      v10 = v13;
    }
    if ( (unsigned __int8)sub_1AA36B0(v10, a2, v12, a4, a5) )
    {
LABEL_11:
      if ( v8 )
      {
        v16 = *(_QWORD **)(v8 + 8);
        v17 = v16[6];
        v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
        v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43;
        if ( (unsigned int)v19 <= 1
          || (v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v19 <= 1)
          && (v18 = sub_F63050(*(_QWORD *)(v16[6] & 0xFFFFFFFFFFFFFFF0LL), a2, v19, a4)) != 0 )
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 32);
            if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
              v18 = *(_QWORD *)v21;
              v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL) - 43;
              if ( (unsigned int)v19 <= 1 )
                break;
              v22 = sub_F63050(v18, a2, v19, a4);
              v20 = *(_QWORD *)(v22 + 32);
              if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
                goto LABEL_16;
            }
          }
LABEL_16:
          v17 = v20;
        }
        v26 = v17;
        if ( !(unsigned __int8)sub_1AA36B0(v17, a2, v19, a4, a5) )
        {
          v23 = *a1;
          v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          sub_168B9F0((__int64)v27, v23, v24, 0xB64u, 0);
          v25 = sub_1AA3B30((__int64)v27, (char *)*a1 + 288);
          sub_1605D30(v25, &v26);
          sub_15F7200(v27);
          sub_168B9F0((__int64)v27, *a1, *((_DWORD *)*a1 + 73), 0x1672u, 0);
          sub_1AA3B30((__int64)v27, (char *)*a1 + 288);
          sub_15F7200(v27);
        }
      }
    }
  }
}
