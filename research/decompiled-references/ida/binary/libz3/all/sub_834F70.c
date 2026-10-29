void __fastcall sub_834F70(__int64 a1)
{
  unsigned int *v1; // rbp
  int v2; // edx
  char *v4; // r8
  int v5; // esi
  char *v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  unsigned int v19; // r15d
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-88h]
  unsigned int **v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  unsigned int v40; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v41; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned int *v42; // [rsp+40h] [rbp-48h] BYREF
  __int64 v43[8]; // [rsp+48h] [rbp-40h] BYREF

  v1 = *(unsigned int **)(a1 + 472);
  if ( v1 )
    return;
  v2 = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 368) = 0;
  if ( !v2 && !*(_DWORD *)(a1 + 144) )
    goto LABEL_11;
  v4 = *(char **)(a1 + 128);
  v5 = 0;
  v6 = &v4[8 * *(unsigned int *)(a1 + 136)];
  v7 = *(_DWORD *)(a1 + 136);
  v8 = *(_QWORD *)(a1 + 128);
  if ( v4 != v6 )
  {
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_9;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_9:
    if ( v7 > 0x10 && 3 * v7 < 4 * v5 )
    {
      if ( v4 )
      {
        sub_186B220(v4);
        v23 = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(a1 + 128) = 0;
        v23 >>= 1;
        *(_DWORD *)(a1 + 136) = v23;
        v24 = v23;
        v25 = sub_186B270(8LL * v23);
        if ( !v23 )
        {
LABEL_40:
          *(_QWORD *)(a1 + 128) = v25;
          goto LABEL_10;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 128) = 0;
        *(_DWORD *)(a1 + 136) = v7 >> 1;
        v24 = v7 >> 1;
        v25 = sub_186B270(8 * v24);
      }
      v26 = v25 + 8 * v24;
      v27 = v25;
      if ( (v24 & 1) == 0 || (v27 = v25 + 8, *(_DWORD *)(v25 + 4) = 0x80000000, v25 + 8 != v26) )
      {
        do
        {
          *(_DWORD *)(v27 + 4) = 0x80000000;
          v27 += 16;
          *(_DWORD *)(v27 - 4) = 0x80000000;
        }
        while ( v27 != v26 );
      }
      goto LABEL_40;
    }
  }
LABEL_10:
  *(_QWORD *)(a1 + 140) = 0;
LABEL_11:
  v9 = *(_QWORD *)(a1 + 88);
  if ( !v9 )
    return;
  v10 = *(_DWORD *)(v9 - 4);
  if ( v10 <= 0 )
    return;
  v11 = 0;
  v37 = (unsigned int)v10;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 72), **(_QWORD **)(v9 + 8 * v11)) )
    {
      if ( !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 496)) )
        sub_852640(a1, (unsigned int)v11, v15, v16, v17);
      LODWORD(v18) = sub_FF9FB0(*(_QWORD *)(a1 + 496), (unsigned int)v11);
      v43[0] = 0;
      v41 = v11;
      sub_834950((__int64 *)(a1 + 112), &v41, v43);
      v19 = *(_DWORD *)(v43[0] + 4);
      if ( v19 != (_DWORD)v11 )
      {
        LODWORD(v12) = *(_DWORD *)(v43[0] + 4);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v11) + 64LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v19)
                                                                                          + 64LL) )
        {
          if ( !(unsigned __int8)sub_FFADE0(*(_QWORD *)(a1 + 496), (unsigned int)v18) )
          {
            if ( !v1 )
              goto LABEL_55;
            v28 = *(v1 - 1);
            if ( (_DWORD)v28 == *(v1 - 2) )
              goto LABEL_55;
            goto LABEL_43;
          }
          v20 = *(_QWORD *)(a1 + 384);
          if ( !v20
            || v19 >= *(_DWORD *)(v20 - 4)
            || (LODWORD(v12) = v19, v22 = *(unsigned int *)(v20 + 4LL * v19), (unsigned int)v22 >= *(_DWORD *)(a1 + 368))
            || v19 != *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4 * v22) )
          {
            v18 = (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v19);
            if ( !(unsigned __int8)sub_FFADE0(*(_QWORD *)(a1 + 496), v18) )
            {
              v14 = *(_QWORD *)(a1 + 384);
              if ( v14 )
              {
                v40 = *(_DWORD *)(v14 - 4);
                if ( v19 >= v40 || (v36 = *(_DWORD *)(v14 + 4LL * v19), v36 >= *(_DWORD *)(a1 + 368)) )
                {
                  v29 = v19 + 1;
                  v38 = (unsigned int **)(a1 + 384);
                }
                else
                {
                  v29 = v19 + 1;
                  v38 = (unsigned int **)(a1 + 384);
                  if ( v19 == *(_DWORD *)(*(_QWORD *)(a1 + 376) + 4LL * v36) )
                    goto LABEL_53;
                }
                if ( v40 >= v29 )
                {
LABEL_48:
                  v30 = *(unsigned int *)(a1 + 368);
                  v31 = *(_QWORD *)(a1 + 376);
                  v32 = (unsigned int)(v30 + 1);
                  if ( v31 )
                    v33 = *(_DWORD *)(v31 - 4);
                  else
                    v33 = 0;
                  if ( v33 < (unsigned int)v32 )
                  {
                    sub_83BF90(a1 + 376, v32, v31, v12, v13, v14);
                    v30 = *(unsigned int *)(a1 + 368);
                    v14 = *(_QWORD *)(a1 + 384);
                    v31 = *(_QWORD *)(a1 + 376);
                  }
                  LODWORD(v12) = v19;
                  *(_DWORD *)(v14 + 4LL * v19) = v30;
                  *(_DWORD *)(v31 + 4 * v30) = v19;
                  ++*(_DWORD *)(a1 + 368);
LABEL_53:
                  if ( !v1 || (v28 = *(v1 - 1), (_DWORD)v28 == *(v1 - 2)) )
                  {
LABEL_55:
                    v42 = v1;
                    sub_2FD3F0(&v42);
                    v1 = v42;
                    v28 = *(v42 - 1);
                  }
LABEL_43:
                  v1[v28] = v18;
                  ++*(v1 - 1);
                  goto LABEL_23;
                }
              }
              else
              {
                v29 = v19 + 1;
                if ( v19 == -1 )
                  goto LABEL_48;
                v40 = 0;
                v38 = (unsigned int **)(a1 + 384);
              }
              while ( !v14 || *(_DWORD *)(v14 - 8) < v29 )
              {
                sub_2FD3F0(v38);
                v14 = *(_QWORD *)(a1 + 384);
              }
              *(_DWORD *)(v14 - 4) = v29;
              v34 = 4LL * v29;
              v35 = 4LL * v40;
              if ( v35 != v34 )
              {
                v39 = v14;
                memset((void *)(v14 + v35), 255, v34 - v35);
                v14 = v39;
              }
              goto LABEL_48;
            }
          }
        }
      }
    }
LABEL_23:
    if ( v37 == ++v11 )
      break;
    v9 = *(_QWORD *)(a1 + 88);
  }
  if ( v1 )
  {
    v21 = *(v1 - 1);
    if ( v21 )
      sub_1000B00(*(_QWORD *)(a1 + 496), v21, (_DWORD)v1, v12, v13, v14, v37);
    sub_186B220(v1 - 2);
  }
}

