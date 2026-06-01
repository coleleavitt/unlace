__int64 __fastcall sub_C1D820(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v14; // edx
  int *v15; // rdi
  int *v16; // rsi
  int v17; // r13d
  int *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned int v21; // ecx
  unsigned __int64 v22; // rsi
  signed __int64 v23; // r15
  void *ptr; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-1C0h]
  _BYTE v26[16]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v27; // [rsp+30h] [rbp-1A8h] BYREF
  char v28; // [rsp+34h] [rbp-1A4h]
  __int64 v29; // [rsp+38h] [rbp-1A0h]
  unsigned int v30; // [rsp+70h] [rbp-168h] BYREF
  char v31; // [rsp+74h] [rbp-164h]
  __int64 v32; // [rsp+78h] [rbp-160h]
  int v33; // [rsp+80h] [rbp-158h]
  int *v34; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-120h]
  _BYTE v36[280]; // [rsp+C0h] [rbp-118h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  v28 &= ~1u;
  v27 = 0;
  v9 = sub_C15CD0((__int64)&v27, v8, v7, a4, a5);
  v10 = (_BYTE)v9 == 0;
  v11 = v9;
  v12 = v27;
  if ( !v10 )
  {
    if ( v27 == 8 )
    {
      v25 = 0x400000000LL;
      ptr = v26;
      sub_BDC820(a2, (__int64)&ptr);
      v14 = v25;
      if ( (_DWORD)v25 == 1 )
      {
        sub_C00890(a1[1], *(_QWORD **)(*a1 + 16), v29 + 56LL * *(unsigned int *)ptr);
      }
      else
      {
        v15 = (int *)v36;
        v35 = 0x400000000LL;
        v16 = (int *)v36;
        v34 = (int *)v36;
        if ( (_DWORD)v25 )
        {
          v17 = 0;
          v18 = (int *)(v29 + 56LL * *(unsigned int *)ptr);
          v19 = 0;
          while ( 1 )
          {
            sub_A2FF00((__int64)&v15[14 * v19], v18);
            v14 = v25;
            v20 = (unsigned int)(v17 + 1);
            v17 = v20;
            v21 = v35 + 1;
            LODWORD(v35) = v35 + 1;
            if ( (unsigned int)v20 >= (unsigned int)v25 )
              break;
            v15 = v34;
            v18 = (int *)(v29 + 56LL * *((unsigned int *)ptr + v20));
            v19 = v21;
            v22 = v21 + 1LL;
            if ( v22 > HIDWORD(v35) )
            {
              if ( v34 > v18 || v18 >= &v34[14 * v21] )
              {
                sub_C021C0((__int64)&v34, v22);
                v15 = v34;
                v19 = (unsigned int)v35;
              }
              else
              {
                v23 = (char *)v18 - (char *)v34;
                sub_C021C0((__int64)&v34, v22);
                v15 = v34;
                v19 = (unsigned int)v35;
                v18 = (int *)((char *)v34 + v23);
              }
            }
          }
          v16 = v34;
        }
        v31 &= ~1u;
        v30 = 8;
        v32 = 0;
        v33 = 0;
        sub_BF50C0((__int64)&v30, v16, v14);
        sub_C00890(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v30);
        if ( v30 > 1 )
          sub_A2BBA0((int *)&v30);
        sub_BFF870((__int64)&v34);
      }
      if ( ptr != v26 )
        free(ptr);
      v12 = v27;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v12 > 1 )
    sub_A2BBA0((int *)&v27);
  return v11;
}

