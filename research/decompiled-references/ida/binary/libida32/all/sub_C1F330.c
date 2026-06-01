__int64 __fastcall sub_C1F330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  unsigned __int64 *v23; // r12
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD v27[2]; // [rsp+10h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-1C0h]
  _BYTE v30[16]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-1A8h] BYREF
  char v32; // [rsp+44h] [rbp-1A4h]
  __int64 v33; // [rsp+48h] [rbp-1A0h]
  unsigned int v34; // [rsp+80h] [rbp-168h] BYREF
  char v35; // [rsp+84h] [rbp-164h]
  __int64 v36; // [rsp+88h] [rbp-160h]
  int v37; // [rsp+90h] [rbp-158h]
  int *v38; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-120h]
  _BYTE v40[280]; // [rsp+D0h] [rbp-118h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)a1;
  v32 &= ~1u;
  v31 = 0;
  v9 = sub_C15CD0((__int64)&v31, v8, v7, a4, a5);
  v10 = (_BYTE)v9 == 0;
  v11 = v9;
  v12 = v31;
  if ( !v10 )
  {
    if ( v31 == 8 )
    {
      v29 = 0x400000000LL;
      ptr = v30;
      sub_BDC820(a2, (__int64)&ptr);
      v14 = v29;
      if ( (_DWORD)v29 == 1 )
      {
        sub_BFF800(*(unsigned __int64 **)(a1 + 8), v33 + 56LL * *(unsigned int *)ptr);
      }
      else
      {
        v15 = (int *)v40;
        v39 = 0x400000000LL;
        v16 = (int *)v40;
        v38 = (int *)v40;
        if ( (_DWORD)v29 )
        {
          v17 = 0;
          v18 = (int *)(v33 + 56LL * *(unsigned int *)ptr);
          v19 = 0;
          while ( 1 )
          {
            sub_A2FF00((__int64)&v15[14 * v19], v18);
            v14 = v29;
            v20 = (unsigned int)(v17 + 1);
            v17 = v20;
            v19 = (unsigned int)(v39 + 1);
            LODWORD(v39) = v39 + 1;
            if ( (unsigned int)v20 >= (unsigned int)v29 )
              break;
            v15 = v38;
            v18 = (int *)(v33 + 56LL * *((unsigned int *)ptr + v20));
            v21 = v19 + 1;
            if ( v19 + 1 > (unsigned __int64)HIDWORD(v39) )
            {
              if ( v38 > v18 || v18 >= &v38[14 * v19] )
              {
                sub_C021C0((__int64)&v38, v21);
                v15 = v38;
                v19 = (unsigned int)v39;
              }
              else
              {
                v22 = (char *)v18 - (char *)v38;
                sub_C021C0((__int64)&v38, v21);
                v15 = v38;
                v19 = (unsigned int)v39;
                v18 = (int *)((char *)v38 + v22);
              }
            }
          }
          v16 = v38;
        }
        v35 &= ~1u;
        v36 = 0;
        v37 = 0;
        v34 = 8;
        sub_BF50C0((__int64)&v34, v16, v14);
        v23 = *(unsigned __int64 **)(a1 + 8);
        *v23 = *v23 & 7 | sub_A2D650((__int64)&v34);
        v24 = sub_A2D660((__int64)&v34);
        v25 = *v23;
        *((_DWORD *)v23 + 4) = 0;
        *v23 = (4LL * v24) | v25 & 0xFFFFFFFFFFFFFFFBLL;
        v27[0] = sub_A2D670((__int64)&v34);
        v27[1] = v26;
        sub_BFF780((__int64)(v23 + 1), (__int64)v27);
        if ( v34 > 1 )
          sub_A2BBA0((int *)&v34);
        sub_BFF870((__int64)&v38);
      }
      if ( ptr != v30 )
        free(ptr);
      v12 = v31;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v12 > 1 )
    sub_A2BBA0((int *)&v31);
  return v11;
}

