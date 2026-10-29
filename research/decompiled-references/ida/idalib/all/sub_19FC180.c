void __fastcall sub_19FC180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 *v13; // r9
  __int64 *v14; // r15
  __int64 v15; // r14
  char v16; // al
  __int64 v17; // r12
  char v18; // bp
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 i; // rdi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdi
  __int64 *v28; // [rsp+0h] [rbp-108h]
  unsigned int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v31[200]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v7 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    v11 = *((unsigned int *)v7 + 2);
    v12 = *v7 + 8 * v11;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v13 = (__int64 *)*sub_B8C3D0(a2, a2, v11, v8, v9, v10);
      if ( v13 != (__int64 *)v12 )
      {
LABEL_4:
        v14 = v13;
        v15 = v12;
        a2 = (__int64)&v30;
        v16 = 0;
        v28 = (__int64 *)(a1 + 96);
        while ( 1 )
        {
          v17 = *v14;
          if ( *(_WORD *)(*v14 + 36) != 226 )
            goto LABEL_11;
          v18 = *(_BYTE *)(v17 + 80);
          if ( !v18 )
            goto LABEL_11;
          v19 = *(_DWORD *)(v17 + 72);
          if ( v19 != 4 )
          {
            a2 = v6;
            v20 = sub_19F9BC0(v28, v6, byte_264739E[v19]);
            if ( v20 )
            {
              *(_QWORD *)(v20 + 16) = v17;
              *(_BYTE *)(v20 + 24) = 1;
            }
            else
            {
              sub_168B9F0((__int64)v31, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v6 + 24), 0x1B40u, 0);
              a2 = (__int64)&v30;
              v30 = v19;
              sub_1587D10((__int64)v31, (int *)&v30);
              sub_15F7200(v31);
            }
            v16 = v18;
            goto LABEL_11;
          }
          v22 = *(_QWORD *)(a1 + 144);
          v23 = *(_DWORD *)(a1 + 160);
          if ( !v23 )
          {
LABEL_26:
            v16 = *(_BYTE *)(v17 + 80);
            goto LABEL_11;
          }
          v24 = v23 - 1;
          a2 = (v23 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
          v25 = *(_QWORD *)(v22 + 16 * a2);
          if ( v6 != v25 )
          {
            v16 = *(_BYTE *)(v17 + 80);
            if ( v25 == -4096 )
              goto LABEL_11;
            v26 = 1;
            while ( 1 )
            {
              a2 = v24 & (unsigned int)(v26 + a2);
              v27 = *(_QWORD *)(v22 + 16LL * (unsigned int)a2);
              if ( v6 == v27 )
                break;
              ++v26;
              if ( v27 == -4096 )
                goto LABEL_26;
            }
          }
          sub_168B9F0((__int64)v31, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v6 + 24), 0x1B40u, 0);
          a2 = (__int64)&v30;
          v30 = 4;
          sub_1587D10((__int64)v31, (int *)&v30);
          sub_15F7200(v31);
          v16 = v18;
LABEL_11:
          if ( (__int64 *)v15 == ++v14 )
          {
            if ( v16 )
              return;
            break;
          }
        }
      }
    }
    else if ( v12 )
    {
      v13 = nullptr;
      goto LABEL_4;
    }
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        (unsigned int)*(unsigned __int8 *)(i + 16) - 2 <= 1;
        i = sub_F649E0(i) )
  {
    ;
  }
  if ( sub_F63500(i, a2) )
  {
    sub_168B9F0((__int64)v31, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v6 + 24), 0x1B3Du, 0);
    sub_15F7200(v31);
  }
}
