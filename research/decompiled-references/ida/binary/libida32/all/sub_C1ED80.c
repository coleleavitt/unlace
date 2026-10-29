__int64 __fastcall sub_C1ED80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // edx
  int *v13; // rcx
  int *v14; // rsi
  int v15; // r14d
  int *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  signed __int64 v20; // r15
  void *ptr; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-1C0h]
  _BYTE v23[16]; // [rsp+10h] [rbp-1B8h] BYREF
  unsigned int v24; // [rsp+20h] [rbp-1A8h] BYREF
  char v25; // [rsp+24h] [rbp-1A4h]
  __int64 v26; // [rsp+28h] [rbp-1A0h]
  unsigned int v27; // [rsp+60h] [rbp-168h] BYREF
  char v28; // [rsp+64h] [rbp-164h]
  __int64 v29; // [rsp+68h] [rbp-160h] BYREF
  int v30; // [rsp+70h] [rbp-158h]
  int *v31; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-120h]
  _BYTE v33[280]; // [rsp+B0h] [rbp-118h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *a1;
  v25 &= ~1u;
  v24 = 0;
  v8 = sub_C15CD0((__int64)&v24, v7, v6, a4, a5);
  if ( (_BYTE)v8 )
  {
    v9 = v24;
    v10 = 0;
    if ( v24 == 8 )
    {
      v22 = 0x400000000LL;
      ptr = v23;
      sub_BDC820(a2, (__int64)&ptr);
      v12 = v22;
      if ( (_DWORD)v22 == 1 )
      {
        v10 = sub_BEC6A0(a1 + 1, v26 + 56LL * *(unsigned int *)ptr + 8);
      }
      else
      {
        v32 = 0x400000000LL;
        v13 = (int *)v33;
        v31 = (int *)v33;
        v14 = (int *)v33;
        if ( (_DWORD)v22 )
        {
          v15 = 0;
          v16 = (int *)(v26 + 56LL * *(unsigned int *)ptr);
          v17 = 0;
          while ( 1 )
          {
            sub_A2FF00((__int64)&v13[14 * v17], v16);
            v12 = v22;
            v18 = (unsigned int)(v15 + 1);
            v15 = v18;
            v17 = (unsigned int)(v32 + 1);
            LODWORD(v32) = v32 + 1;
            if ( (unsigned int)v18 >= (unsigned int)v22 )
              break;
            v19 = v17 + 1;
            v16 = (int *)(v26 + 56LL * *((unsigned int *)ptr + v18));
            v13 = v31;
            if ( v17 + 1 > (unsigned __int64)HIDWORD(v32) )
            {
              if ( v31 > v16 || v16 >= &v31[14 * v17] )
              {
                sub_C021C0((__int64)&v31, v19);
                v13 = v31;
                v17 = (unsigned int)v32;
              }
              else
              {
                v20 = (char *)v16 - (char *)v31;
                sub_C021C0((__int64)&v31, v19);
                v13 = v31;
                v17 = (unsigned int)v32;
                v16 = (int *)((char *)v31 + v20);
              }
            }
          }
          v14 = v31;
        }
        v28 &= ~1u;
        v30 = 0;
        v29 = 0;
        v27 = 8;
        sub_BF50C0((__int64)&v27, v14, v12);
        v10 = sub_BEC6A0(a1 + 1, (__int64)&v29);
        if ( v27 > 1 )
          sub_A2BBA0((int *)&v27);
        sub_BFF870((__int64)&v31);
      }
      if ( ptr != v23 )
        free(ptr);
      v9 = v24;
    }
  }
  else
  {
    v10 = v8;
    v9 = v24;
  }
  if ( v9 > 1 )
    sub_A2BBA0((int *)&v24);
  return v10;
}

