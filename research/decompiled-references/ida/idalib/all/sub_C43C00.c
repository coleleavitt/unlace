__int64 __fastcall sub_C43C00(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-170h]
  __m128i v24; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v25; // [rsp+20h] [rbp-158h]
  __int64 v26; // [rsp+28h] [rbp-150h]
  _QWORD v27[3]; // [rsp+30h] [rbp-148h] BYREF
  int v28; // [rsp+48h] [rbp-130h]
  unsigned int v29; // [rsp+50h] [rbp-128h] BYREF
  char v30; // [rsp+54h] [rbp-124h]
  __int64 v31[8]; // [rsp+90h] [rbp-E8h] BYREF
  int v32; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-A0h]
  __int64 v34; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-88h]
  _BYTE v37[128]; // [rsp+F8h] [rbp-80h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *a1;
  v29 = 0;
  v30 &= ~1u;
  v9 = sub_C39A10((__int64)&v29, v7, v6, a4, a5);
  if ( (_BYTE)v9 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 49 > 2 )
    {
      v9 = sub_C14310(*a1, a2);
    }
    else
    {
      v25 = &v29;
      v24 = 0u;
      v26 = v11;
      v32 = 0;
      v33 = 0;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v19 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 43 <= 1
          || (v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v22 <= 1)
          && (v19 = sub_F63050(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), v7, v22, v8)) != 0 )
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v19 + 32);
            if ( (*(_BYTE *)(v19 + 18) & 0x10) == 0 )
              break;
            v20 = v11 & 0xFFFFFFFFFFFFFFF0LL;
            v19 = *(_QWORD *)v20;
            v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v20 + 16LL) - 43;
            if ( (unsigned int)v21 > 1 )
              v19 = sub_F63050(v19, v7, v21, v8);
          }
        }
        v34 = v11;
      }
      else
      {
        v34 = 0;
      }
      v36 = 0x800000000LL;
      ptr = v37;
      sub_A4F680(v31, v10 & 0xFFFFFFFFFFFFFFFBLL);
      v12 = (unsigned int)v36;
      v13 = v31[0];
      v14 = (unsigned int)v36 + 1LL;
      if ( v14 > HIDWORD(v36) )
      {
        v23 = v31[0];
        sub_2237220(&ptr, v37, v14, 8);
        v12 = (unsigned int)v36;
        v13 = v23;
      }
      *((_QWORD *)ptr + v12) = v13;
      v15 = v36 + 1;
      LODWORD(v36) = v36 + 1;
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 49 <= 2 )
      {
        v16 = *(_QWORD *)(v10 + 48);
        LOBYTE(v32) = v32 & 0xF7;
        v33 = 0;
        v34 = v16;
        v32 = v32 & 0xF | (16 * v15);
      }
      v17 = *a1;
      BYTE4(v31[0]) &= ~1u;
      LODWORD(v31[0]) = 0;
      v27[0] = v17;
      v27[1] = a2;
      v27[2] = v31;
      v28 = 0;
      v9 = sub_C356A0(v17, a2, &v24, (__int64)&v32, (__int64)v27);
      if ( LODWORD(v31[0]) > 1 )
        sub_A4F8E0((int *)v31);
      if ( ptr != v37 )
        free(ptr);
    }
  }
  if ( v29 > 1 )
    sub_A4F8E0((int *)&v29);
  return v9;
}
