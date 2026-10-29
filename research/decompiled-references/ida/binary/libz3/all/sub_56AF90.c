__int64 __fastcall sub_56AF90(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  int v3; // edx
  _QWORD *v4; // rax
  unsigned int v5; // r15d
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // r15
  _QWORD *v10; // rbp
  unsigned int v11; // r12d
  __int64 v12; // r13
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r10d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // esi
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // r10d
  int v23; // r9d
  __int64 i; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  unsigned int v35; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+24h] [rbp-74h]
  unsigned int v38; // [rsp+24h] [rbp-74h]
  unsigned int v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+2Ch] [rbp-6Ch]
  __int64 v41[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_QWORD **)a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 16) = v3;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    v40 = v5 - v3;
    if ( v5 )
    {
      v6 = *v4;
      v32 = v5;
      if ( HIDWORD(v6) )
      {
        v9 = 0;
        v10 = nullptr;
        v11 = 0;
        goto LABEL_25;
      }
      v8 = v6;
      v9 = 0;
      v10 = nullptr;
      v11 = 0;
      v12 = 1;
      LODWORD(v6) = 1;
      v13 = 0;
      if ( v8 == 1 )
        goto LABEL_32;
      while ( 1 )
      {
LABEL_5:
        if ( v8 > 0x80000000 )
        {
          v8 = v13 + 32;
          if ( v10 )
          {
LABEL_7:
            v14 = *((unsigned int *)v10 - 1);
            if ( (_DWORD)v14 )
              goto LABEL_16;
            v15 = v11 >> 3;
            v16 = v11 & 7;
            if ( v8 != 64 )
              goto LABEL_19;
LABEL_9:
            v17 = ~(-1LL << v16);
            if ( !*((_DWORD *)v10 - 2) )
              goto LABEL_50;
            v12 = -1;
            v8 = 64;
            v14 = 0;
            goto LABEL_11;
          }
        }
        else
        {
LABEL_6:
          v8 = __popcountdi2() + v13;
          if ( v10 )
            goto LABEL_7;
        }
        v22 = v11 >> 3;
        v23 = v11 & 7;
        if ( v8 != 64 )
        {
          v12 = (1LL << v8) - 1;
          i = ~(v12 << v23);
          goto LABEL_37;
        }
LABEL_46:
        v8 = 64;
        v12 = -1;
        for ( i = ~(-1LL << v23); ; i = ~(v12 << (v11 & 7)) )
        {
LABEL_37:
          v38 = v22;
          v36 = v23;
          v34 = i;
          v25 = (_QWORD *)sub_186B270(0x48u);
          v10 = v25 + 1;
          v17 = v34;
          v16 = v36;
          *v25 = 2;
          v15 = v38;
          *(_QWORD *)a1 = v25 + 1;
          v18 = (__int64)(v25 + 1);
LABEL_12:
          *(_DWORD *)(v18 + 24) = v11;
          ++v9;
          v11 += v8;
          *(_DWORD *)v18 = v15;
          *(_DWORD *)(v18 + 4) = v16;
          *(_DWORD *)(v18 + 28) = v8;
          v19 = *((_DWORD *)v10 - 1);
          *(_QWORD *)(v18 + 8) = v12;
          *(_QWORD *)(v18 + 16) = v17;
          *((_DWORD *)v10 - 1) = v19 + 1;
          if ( v9 == v32 )
          {
            sub_5691D0((__int64 *)a1, v19);
            v27 = (__int64)&v10[4 * (unsigned int)(*((_DWORD *)v10 - 1) - 1)];
            goto LABEL_42;
          }
          v6 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v9);
          if ( !HIDWORD(v6) )
            break;
LABEL_25:
          v8 = HIDWORD(v6);
          if ( (_DWORD)v6 )
          {
            if ( HIDWORD(v6) != 0xFFFFFFFF )
            {
              v13 = 32;
              if ( (unsigned int)(HIDWORD(v6) + 1) <= 0x80000000 )
                goto LABEL_6;
            }
            if ( v10 )
            {
              LODWORD(v14) = *((_DWORD *)v10 - 1);
              if ( (_DWORD)v14 )
              {
                v8 = 64;
                goto LABEL_39;
              }
              v15 = v11 >> 3;
              v16 = v11 & 7;
              goto LABEL_9;
            }
            v22 = v11 >> 3;
            v23 = v11 & 7;
            goto LABEL_46;
          }
          v12 = 0x1FFFFFFFFLL;
          LODWORD(v6) = 33;
          v13 = 32;
          if ( HIDWORD(v6) != 1 )
            goto LABEL_5;
LABEL_32:
          if ( v10 )
          {
            v8 = v6;
LABEL_15:
            v14 = *((unsigned int *)v10 - 1);
            if ( (_DWORD)v14 )
            {
LABEL_16:
              if ( v8 <= 0x36 && v40 != (_DWORD)v9 )
                goto LABEL_18;
LABEL_39:
              sub_5691D0((__int64 *)a1, v14 - 1);
              v14 = *((unsigned int *)v10 - 1);
              v26 = 4LL * (unsigned int)(v14 - 1);
              v11 = HIDWORD(v10[v26 + 3]) + LODWORD(v10[v26 + 3]);
              v15 = v11 >> 3;
              v16 = (BYTE4(v10[v26 + 3]) + LOBYTE(v10[v26 + 3])) & 7;
              if ( v8 == 64 )
              {
                v12 = -1;
                v17 = ~(-1LL << v16);
LABEL_20:
                if ( *((_DWORD *)v10 - 2) == (_DWORD)v14 )
                {
                  v20 = 32 * ((unsigned int)(3 * v14 + 1) >> 1) + 8;
                  if ( 32 * (int)v14 + 8 < (unsigned int)v20 && (unsigned int)v14 < (unsigned int)(3 * v14 + 1) >> 1 )
                  {
                    v39 = v15;
                    v37 = v16;
                    v35 = (unsigned int)(3 * v14 + 1) >> 1;
                    v33 = v17;
                    v21 = (unsigned int *)sub_186B300(v10 - 1, v20);
                    v10 = v21 + 2;
                    v17 = v33;
                    v16 = v37;
                    v15 = v39;
                    *(_QWORD *)a1 = v21 + 2;
                    *v21 = v35;
                    v18 = (__int64)&v21[8 * v21[1] + 2];
                    goto LABEL_12;
                  }
LABEL_50:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v41, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v41);
                  sub_233E40((__int64)v41);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
LABEL_11:
                v18 = (__int64)&v10[4 * v14];
                goto LABEL_12;
              }
            }
            else
            {
LABEL_18:
              v15 = v11 >> 3;
              v16 = v11 & 7;
            }
LABEL_19:
            v12 = (1LL << v8) - 1;
            v17 = ~(v12 << v16);
            goto LABEL_20;
          }
          v8 = v6;
          v23 = v11 & 7;
          v22 = v11 >> 3;
        }
        v8 = v6;
        v13 = 0;
        if ( (_DWORD)v6 == 1 )
          goto LABEL_15;
      }
    }
  }
  else
  {
    v40 = -v3;
  }
  v10 = nullptr;
  sub_5691D0((__int64 *)a1, 0xFFFFFFFF);
  v27 = 0x1FFFFFFFE0LL;
LABEL_42:
  v28 = *(_DWORD *)(v27 + 24) + *(_DWORD *)(v27 + 28);
  v29 = *(_DWORD *)(a1 + 16);
  v30 = v28 >> 3;
  *(_DWORD *)(a1 + 8) = v30;
  if ( v29 )
    v29 = v30 - (LODWORD(v10[4 * v40 + 3]) >> 3);
  *(_DWORD *)(a1 + 12) = v29;
  return a1;
}

