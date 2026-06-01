unsigned __int64 __fastcall sub_77C2D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  unsigned __int64 v4; // rax
  _QWORD *v5; // r13
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdi
  void *v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  __int64 v17; // rdx
  _BYTE *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-150h]
  _BYTE *v20; // [rsp+10h] [rbp-148h] BYREF
  __int64 v21; // [rsp+18h] [rbp-140h]
  _BYTE v22[312]; // [rsp+20h] [rbp-138h] BYREF

  v20 = v22;
  v21 = 0x800000000LL;
  if ( sub_76AB10(a1, a2)
    || (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) != 0
    || (v3 = 1, (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29) && *(char *)(a1 + 97) < 0 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    v3 = 0;
    if ( v2 )
    {
      if ( (v2 & 4) != 0 )
      {
        v18 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v18 )
          v3 = (*v18 & 4) != 0;
      }
    }
  }
  v4 = sub_77C160(a1, (__int64)&v20, v3);
  v5 = v20;
  v19 = v4;
  v6 = &v20[32 * (unsigned int)v21];
  if ( v20 != (_BYTE *)v6 )
  {
    do
    {
      v7 = *(v6 - 3);
      v6 -= 4;
      if ( v7 )
      {
        v8 = v6[2];
        if ( v8 )
        {
          if ( v7 >= v8 && v8 + 14848 >= v7 )
          {
            v17 = *(unsigned int *)(v8 + 14976);
            *(_DWORD *)(v8 + 14976) = v17 + 1;
            *(_QWORD *)(v8 + 8 * v17 + 14848) = v7;
          }
          else
          {
            v9 = *(_QWORD **)(v7 + 528);
            v10 = (unsigned __int64)*(unsigned int *)(v7 + 536) << 6;
            v11 = (_QWORD *)((char *)v9 + v10);
            if ( v9 != (_QWORD *)((char *)v9 + v10) )
            {
              do
              {
                v11 -= 8;
                v12 = (_QWORD *)v11[3];
                if ( v12 != v11 + 5 )
                  operator delete(v12, v11[5] + 1LL);
              }
              while ( v9 != v11 );
              v11 = *(_QWORD **)(v7 + 528);
            }
            if ( v11 != (_QWORD *)(v7 + 544) )
              free(v11);
            v13 = *(void **)(v7 + 416);
            if ( v13 != (void *)(v7 + 432) )
              free(v13);
            v14 = (_QWORD *)(v7 + 400);
            do
            {
              v15 = (_QWORD *)*(v14 - 2);
              if ( v14 != v15 )
                operator delete(v15, *v14 + 1LL);
              v14 -= 4;
            }
            while ( v14 != (_QWORD *)(v7 + 80) );
            operator delete((void *)v7, 0x3A0u);
          }
          v6[1] = 0;
        }
      }
    }
    while ( v5 != v6 );
    v6 = v20;
  }
  if ( v6 != (_QWORD *)v22 )
    free(v6);
  return v19;
}

