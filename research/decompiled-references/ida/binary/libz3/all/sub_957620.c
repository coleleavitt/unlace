__int64 __fastcall sub_957620(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  char **exception; // rbp
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 )
  {
    if ( *(_BYTE *)(v2 + 562) )
    {
      v17 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 1184LL);
      if ( v17 )
      {
        if ( *(_DWORD *)(v17 - 4) && *(_DWORD *)(a1 + 68) < *(_DWORD *)(v2 + 188) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40), 0);
          v5 = *(_QWORD *)(a1 + 24);
          v18 = *(_DWORD *)(a1 + 68);
          v19 = sub_180C100(v5 + 8400, 24);
          v8 = *(_QWORD **)(v5 + 9456);
          v9 = v19;
          *(_QWORD *)v19 = &off_1C4C070;
          *(_QWORD *)(v19 + 8) = a1 + 68;
          *(_DWORD *)(v19 + 16) = v18;
          if ( v8 )
          {
            v10 = *((_DWORD *)v8 - 1);
            if ( v10 == *((_DWORD *)v8 - 2) )
            {
              v11 = (3 * v10 + 1) >> 1;
              v12 = 8 * v11 + 8;
              if ( 8 * v10 + 8 < v12 && v10 < v11 )
                goto LABEL_12;
              goto LABEL_25;
            }
LABEL_19:
            v20 = v10;
            v16 = v10 + 1;
            v15 = &v8[v20];
            goto LABEL_20;
          }
LABEL_24:
          v21 = (_QWORD *)sub_186B270(0x18u);
          *v21 = 2;
          v16 = 1;
          v8 = v21 + 1;
          *(_QWORD *)(v5 + 9456) = v8;
          v15 = v8;
          goto LABEL_20;
        }
      }
    }
  }
  else if ( *(_BYTE *)(v2 + 212) )
  {
    if ( *(_BYTE *)(v2 + 562) )
    {
      v4 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 1184LL);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 - 4) && *(_DWORD *)(a1 + 68) < *(_DWORD *)(v2 + 188) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40), 0);
          v5 = *(_QWORD *)(a1 + 24);
          v6 = *(_DWORD *)(a1 + 68);
          v7 = sub_180C100(v5 + 8400, 24);
          v8 = *(_QWORD **)(v5 + 9456);
          v9 = v7;
          *(_QWORD *)v7 = &off_1C4C070;
          *(_QWORD *)(v7 + 8) = a1 + 68;
          *(_DWORD *)(v7 + 16) = v6;
          if ( v8 )
          {
            v10 = *((_DWORD *)v8 - 1);
            if ( v10 == *((_DWORD *)v8 - 2) )
            {
              v11 = (3 * v10 + 1) >> 1;
              v12 = 8 * v11 + 8;
              if ( 8 * v10 + 8 < v12 && v10 < v11 )
              {
LABEL_12:
                v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
                v14 = v13[1];
                v8 = v13 + 2;
                *(_QWORD *)(v5 + 9456) = v13 + 2;
                *v13 = v11;
                LODWORD(v13) = v14;
                v15 = &v8[v14];
                v16 = (_DWORD)v13 + 1;
LABEL_20:
                *v15 = v9;
                *((_DWORD *)v8 - 1) = v16;
                ++*(_DWORD *)(a1 + 68);
                return 0;
              }
LABEL_25:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v23, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v23);
              sub_233E40((__int64)v23);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_19;
          }
          goto LABEL_24;
        }
      }
    }
  }
  return 0;
}

