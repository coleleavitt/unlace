__int64 __fastcall sub_C1DFF0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-170h]
  __m128i v25; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v26; // [rsp+20h] [rbp-158h]
  __int64 v27; // [rsp+28h] [rbp-150h]
  _QWORD v28[3]; // [rsp+30h] [rbp-148h] BYREF
  int v29; // [rsp+48h] [rbp-130h]
  unsigned int v30; // [rsp+50h] [rbp-128h] BYREF
  char v31; // [rsp+54h] [rbp-124h]
  __int64 v32; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v33[7]; // [rsp+98h] [rbp-E0h] BYREF
  int v34; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-A0h]
  __int64 v36; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-88h]
  _BYTE v39[128]; // [rsp+F8h] [rbp-80h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)a1;
  v30 = 0;
  v31 &= ~1u;
  v10 = sub_C15CD0((__int64)&v30, v8, v7, a4, a5);
  if ( (_BYTE)v10 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 > 2 )
    {
      v10 = sub_BF05D0(*(_QWORD *)a1, a2);
    }
    else
    {
      v26 = &v30;
      v25 = 0u;
      v27 = v12;
      v34 = 0;
      v35 = 0;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v20 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43 <= 1
          || (v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v23 <= 1)
          && (v20 = sub_F3F310(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), v8, v23, v9)) != 0 )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v20 + 32);
            if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
              break;
            v21 = v12 & 0xFFFFFFFFFFFFFFF0LL;
            v20 = *(_QWORD *)v21;
            v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL) - 43;
            if ( (unsigned int)v22 > 1 )
              v20 = sub_F3F310(v20, v8, v22, v9);
          }
        }
        v36 = v12;
      }
      else
      {
        v36 = 0;
      }
      v38 = 0x800000000LL;
      ptr = v39;
      sub_A2B940(&v32, v11 & 0xFFFFFFFFFFFFFFFBLL);
      v13 = (unsigned int)v38;
      v14 = v32;
      v15 = (unsigned int)v38 + 1LL;
      if ( v15 > HIDWORD(v38) )
      {
        v24 = v32;
        sub_22134E0(&ptr, v39, v15, 8);
        v13 = (unsigned int)v38;
        v14 = v24;
      }
      *((_QWORD *)ptr + v13) = v14;
      v16 = v38 + 1;
      LODWORD(v38) = v38 + 1;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 <= 2 )
      {
        v17 = *(_QWORD *)(v11 + 48);
        LOBYTE(v34) = v34 & 0xF7;
        v35 = 0;
        v36 = v17;
        v34 = v34 & 0xF | (16 * v16);
      }
      v18 = *(_QWORD *)a1;
      LODWORD(v32) = 0;
      BYTE4(v32) &= ~1u;
      v28[0] = v18;
      v28[1] = a2;
      v28[2] = &v32;
      v29 = 0;
      v10 = sub_C11960(v18, a2, &v25, (__int64)&v34, (__int64)v28);
      if ( (_BYTE)v10 )
        sub_BF34E0(*(__int64 **)(a1 + 8), v33);
      if ( (unsigned int)v32 > 1 )
        sub_A2BBA0((int *)&v32);
      if ( ptr != v39 )
        free(ptr);
    }
  }
  if ( v30 > 1 )
    sub_A2BBA0((int *)&v30);
  return v10;
}

