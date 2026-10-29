__int64 __fastcall sub_C1F8E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int v14; // edx
  int *v15; // rdi
  int *v16; // rsi
  int v17; // r14d
  int *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  signed __int64 v22; // r15
  void *ptr; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-1C0h]
  _BYTE v25[16]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-1A8h] BYREF
  char v27; // [rsp+34h] [rbp-1A4h]
  __int64 v28; // [rsp+38h] [rbp-1A0h]
  unsigned int v29; // [rsp+70h] [rbp-168h] BYREF
  char v30; // [rsp+74h] [rbp-164h]
  __int64 v31; // [rsp+78h] [rbp-160h]
  int v32; // [rsp+80h] [rbp-158h]
  int *v33; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-120h]
  _BYTE v35[280]; // [rsp+C0h] [rbp-118h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  v27 &= ~1u;
  v26 = 0;
  v9 = sub_C15CD0((__int64)&v26, v8, v7, a4, a5);
  v10 = (_BYTE)v9 == 0;
  v11 = v9;
  v12 = v26;
  if ( !v10 )
  {
    if ( v26 == 8 )
    {
      v24 = 0x400000000LL;
      ptr = v25;
      sub_BDC820(a2, (__int64)&ptr);
      v14 = v24;
      if ( (_DWORD)v24 == 1 )
      {
        sub_A30FE0(a1[2], (int *)(v28 + 56LL * *(unsigned int *)ptr));
      }
      else
      {
        v15 = (int *)v35;
        v34 = 0x400000000LL;
        v16 = (int *)v35;
        v33 = (int *)v35;
        if ( (_DWORD)v24 )
        {
          v17 = 0;
          v18 = (int *)(v28 + 56LL * *(unsigned int *)ptr);
          v19 = 0;
          while ( 1 )
          {
            sub_A2FF00((__int64)&v15[14 * v19], v18);
            v14 = v24;
            v20 = (unsigned int)(v17 + 1);
            v17 = v20;
            v19 = (unsigned int)(v34 + 1);
            LODWORD(v34) = v34 + 1;
            if ( (unsigned int)v20 >= (unsigned int)v24 )
              break;
            v15 = v33;
            v18 = (int *)(v28 + 56LL * *((unsigned int *)ptr + v20));
            v21 = v19 + 1;
            if ( v19 + 1 > (unsigned __int64)HIDWORD(v34) )
            {
              if ( v33 > v18 || v18 >= &v33[14 * v19] )
              {
                sub_C021C0((__int64)&v33, v21);
                v15 = v33;
                v19 = (unsigned int)v34;
              }
              else
              {
                v22 = (char *)v18 - (char *)v33;
                sub_C021C0((__int64)&v33, v21);
                v15 = v33;
                v19 = (unsigned int)v34;
                v18 = (int *)((char *)v33 + v22);
              }
            }
          }
          v16 = v33;
        }
        v30 &= ~1u;
        v29 = 8;
        v31 = 0;
        v32 = 0;
        sub_BF50C0((__int64)&v29, v16, v14);
        sub_A30FE0(a1[2], (int *)&v29);
        if ( v29 > 1 )
          sub_A2BBA0((int *)&v29);
        sub_BFF870((__int64)&v33);
      }
      if ( ptr != v25 )
        free(ptr);
      v12 = v26;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v12 > 1 )
    sub_A2BBA0((int *)&v26);
  return v11;
}

