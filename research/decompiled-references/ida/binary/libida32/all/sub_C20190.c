__int64 __fastcall sub_C20190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v11; // edx
  int *v12; // rcx
  int *v13; // rsi
  int v14; // r14d
  int *v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rax
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
  __int64 v29; // [rsp+68h] [rbp-160h]
  int v30; // [rsp+70h] [rbp-158h]
  int *v31; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-120h]
  _BYTE v33[280]; // [rsp+B0h] [rbp-118h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v25 &= ~1u;
  v24 = 0;
  v6 = sub_C15CD0((__int64)&v24, a1, v5, a4, a5);
  v7 = (_BYTE)v6 == 0;
  v8 = v6;
  v9 = v24;
  if ( !v7 )
  {
    if ( v24 == 8 )
    {
      v22 = 0x400000000LL;
      ptr = v23;
      sub_BDC820(a2, (__int64)&ptr);
      v11 = v22;
      if ( (_DWORD)v22 != 1 )
      {
        v32 = 0x400000000LL;
        v12 = (int *)v33;
        v31 = (int *)v33;
        v13 = (int *)v33;
        if ( (_DWORD)v22 )
        {
          v14 = 0;
          v15 = (int *)(v26 + 56LL * *(unsigned int *)ptr);
          v16 = 0;
          while ( 1 )
          {
            sub_A2FF00((__int64)&v12[14 * v16], v15);
            v11 = v22;
            v17 = v32 + 1;
            v18 = (unsigned int)(v14 + 1);
            LODWORD(v32) = v32 + 1;
            v14 = v18;
            if ( (unsigned int)v22 <= (unsigned int)v18 )
              break;
            v15 = (int *)(v26 + 56LL * *((unsigned int *)ptr + v18));
            v16 = v17;
            v12 = v31;
            v19 = v16 + 1;
            if ( v16 + 1 > (unsigned __int64)HIDWORD(v32) )
            {
              if ( v31 > v15 || v15 >= &v31[14 * v16] )
              {
                sub_C021C0((__int64)&v31, v19);
                v12 = v31;
                v16 = (unsigned int)v32;
              }
              else
              {
                v20 = (char *)v15 - (char *)v31;
                sub_C021C0((__int64)&v31, v19);
                v12 = v31;
                v16 = (unsigned int)v32;
                v15 = (int *)((char *)v31 + v20);
              }
            }
          }
          v13 = v31;
        }
        v28 &= ~1u;
        v30 = 0;
        v29 = 0;
        v27 = 8;
        sub_BF50C0((__int64)&v27, v13, v11);
        if ( v27 > 1 )
          sub_A2BBA0((int *)&v27);
        sub_BFF870((__int64)&v31);
      }
      if ( ptr != v23 )
        free(ptr);
      v9 = v24;
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 > 1 )
    sub_A2BBA0((int *)&v24);
  return v8;
}

