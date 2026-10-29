__int64 __fastcall sub_C1EFF0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v20; // r12
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-170h]
  __m128i v29; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v30; // [rsp+20h] [rbp-158h]
  __int64 v31; // [rsp+28h] [rbp-150h]
  __int64 v32; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-140h]
  __int64 *v34; // [rsp+40h] [rbp-138h]
  int v35; // [rsp+48h] [rbp-130h]
  unsigned int v36; // [rsp+50h] [rbp-128h] BYREF
  char v37; // [rsp+54h] [rbp-124h]
  __int64 v38[8]; // [rsp+90h] [rbp-E8h] BYREF
  int v39; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-A0h]
  __int64 v41; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-88h]
  _BYTE v44[128]; // [rsp+F8h] [rbp-80h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  v36 = 0;
  v37 &= ~1u;
  v10 = sub_C15CD0((__int64)&v36, v8, v7, a4, a5);
  if ( (_BYTE)v10 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 > 2 )
    {
      v10 = sub_BF05D0(*a1, a2);
    }
    else
    {
      v30 = &v36;
      v29 = 0u;
      v31 = v12;
      v39 = 0;
      v40 = 0;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v24 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v24 + 16) - 43 <= 1
          || (v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v27 <= 1)
          && (v24 = sub_F3F310(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), v8, v27, v9)) != 0 )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v24 + 32);
            if ( (*(_BYTE *)(v24 + 18) & 0x10) == 0 )
              break;
            v25 = v12 & 0xFFFFFFFFFFFFFFF0LL;
            v24 = *(_QWORD *)v25;
            v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v25 + 16LL) - 43;
            if ( (unsigned int)v26 > 1 )
              v24 = sub_F3F310(v24, v8, v26, v9);
          }
        }
        v41 = v12;
      }
      else
      {
        v41 = 0;
      }
      v43 = 0x800000000LL;
      ptr = v44;
      sub_A2B940(v38, v11 & 0xFFFFFFFFFFFFFFFBLL);
      v13 = (unsigned int)v43;
      v14 = v38[0];
      v15 = (unsigned int)v43 + 1LL;
      if ( v15 > HIDWORD(v43) )
      {
        v28 = v38[0];
        sub_22134E0(&ptr, v44, v15, 8);
        v13 = (unsigned int)v43;
        v14 = v28;
      }
      *((_QWORD *)ptr + v13) = v14;
      v16 = v43 + 1;
      LODWORD(v43) = v43 + 1;
      if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 <= 2 )
      {
        v17 = *(_QWORD *)(v11 + 48);
        LOBYTE(v39) = v39 & 0xF7;
        v40 = 0;
        v41 = v17;
        v39 = v39 & 0xF | (16 * v16);
      }
      v18 = *a1;
      LODWORD(v38[0]) = 0;
      BYTE4(v38[0]) &= ~1u;
      v32 = v18;
      v33 = a2;
      v34 = v38;
      v35 = 0;
      v10 = sub_C11960(v18, a2, &v29, (__int64)&v39, (__int64)&v32);
      if ( (_BYTE)v10 )
      {
        v20 = a1[1];
        *(_QWORD *)v20 = *(_QWORD *)v20 & 7LL | sub_A2D650((__int64)v38);
        v21 = sub_A2D660((__int64)v38);
        v22 = *(_QWORD *)v20;
        *(_DWORD *)(v20 + 16) = 0;
        *(_QWORD *)v20 = (4LL * v21) | v22 & 0xFFFFFFFFFFFFFFFBLL;
        v32 = sub_A2D670((__int64)v38);
        v33 = v23;
        sub_BFF780(v20 + 8, (__int64)&v32);
      }
      if ( LODWORD(v38[0]) > 1 )
        sub_A2BBA0((int *)v38);
      if ( ptr != v44 )
        free(ptr);
    }
  }
  if ( v36 > 1 )
    sub_A2BBA0((int *)&v36);
  return v10;
}

