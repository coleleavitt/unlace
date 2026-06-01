void __fastcall sub_1B48390(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 *v24; // rdx
  __int64 v25; // rdi
  int v26; // edx
  int v27; // edi
  __int64 v28; // r9
  __int64 v29; // [rsp+0h] [rbp-58h]
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_EEE240(a2) + 16LL * *(unsigned int *)(a2 + 8);
  v4 = sub_EEE240(a2);
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      if ( (unsigned int)sub_EEE220((__int64 *)v4) != 1 && (unsigned int)sub_EEE220((__int64 *)v4) != 2 )
        goto LABEL_8;
      v5 = sub_EEE230((_QWORD *)v4);
      if ( sub_FFE8A0(*(_DWORD *)(a1 + 16)) )
      {
        v6 = *(_QWORD *)a1;
        v7 = *(unsigned int *)(*(_QWORD *)a1 + 344LL);
        if ( (_DWORD)v7 )
        {
          v8 = *(_QWORD *)(v6 + 336) + 6776 * v7 - 6776;
          if ( *(_QWORD *)(v8 + 6768) == *(_QWORD *)(v6 + 328) )
          {
            v17 = *(_DWORD *)(v8 + 8);
            v18 = *(unsigned int *)(v6 + 27504);
            if ( v17 > (unsigned int)v18 )
            {
              v19 = *(_QWORD *)v8;
              v20 = *(_QWORD *)v8 + 1688 * (v17 - v18);
              if ( v19 != v20 )
              {
                v21 = *(_QWORD *)(v20 - 984);
                v22 = *(unsigned int *)(v20 - 968);
                if ( (_DWORD)v22 )
                {
                  v23 = (v22 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
                  v24 = (__int64 *)(v21 + 1184LL * v23);
                  v25 = *v24;
                  if ( v5 == *v24 )
                    goto LABEL_14;
                  v26 = 1;
                  if ( v25 != -4096 )
                    break;
                }
              }
            }
          }
        }
      }
LABEL_7:
      v9 = *(_DWORD *)(v4 + 8);
      v30[0] = *(_QWORD *)(v5 + 48);
      v10 = sub_F67970(v30, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL));
      v11 = *(_QWORD *)(a1 + 8);
      v29 = v10;
      *(_BYTE *)(v5 + 29) |= 8u;
      sub_B8C4D0(v5, *(_QWORD *)(v11 + 248));
      v12 = sub_C09130(*(_QWORD **)(v11 + 248), 0, 0, 0, v5, 1, v9, v29, 1, 0, 0, 0);
      sub_1B48300(a1, v12, v13, v14, v15, v16);
LABEL_8:
      v4 += 16;
      if ( v3 == v4 )
        return;
    }
    while ( 1 )
    {
      v27 = v26 + 1;
      v23 = (v22 - 1) & (v23 + v26);
      v24 = (__int64 *)(v21 + 1184LL * v23);
      v28 = *v24;
      if ( v5 == *v24 )
        break;
      v26 = v27;
      if ( v28 == -4096 )
        goto LABEL_7;
    }
LABEL_14:
    if ( v24 != (__int64 *)(v21 + 1184 * v22) && 9LL * *((unsigned int *)v24 + 4) )
      goto LABEL_8;
    goto LABEL_7;
  }
}
