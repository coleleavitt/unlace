char __fastcall sub_A92A80(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdx
  char v10; // al
  __int64 v11; // rsi
  char v12; // bp
  char v13; // bp
  void *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rdi
  _BYTE *v21; // rdi
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  _BYTE *v24; // rdi
  __int64 v25; // rbx
  unsigned __int8 v26; // dl
  char v27; // [rsp+1h] [rbp-169h]
  char v28; // [rsp+1h] [rbp-169h]
  char v29; // [rsp+1h] [rbp-169h]
  char v30; // [rsp+1h] [rbp-169h]
  void *v31; // [rsp+2h] [rbp-168h] BYREF
  unsigned int v32; // [rsp+Ah] [rbp-160h]
  char v33; // [rsp+Eh] [rbp-15Ch]
  void *v34; // [rsp+12h] [rbp-158h] BYREF
  __int64 v35; // [rsp+1Ah] [rbp-150h]
  _BYTE v36[128]; // [rsp+22h] [rbp-148h] BYREF
  void *ptr; // [rsp+A2h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+AAh] [rbp-C0h]
  _BYTE v39[184]; // [rsp+B2h] [rbp-B8h] BYREF

  result = 0;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFF) == (*(_DWORD *)a3 & 0x7FFFFFFF) )
  {
    switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
    {
      case 0:
      case 9:
        if ( 3LL * *(unsigned int *)(a3 + 4) != 3LL * *(unsigned int *)(a2 + 4) )
          return 0;
        v17 = *(_QWORD *)(a2 + 8);
        v18 = v17 + 24LL * *(unsigned int *)(a3 + 4);
        if ( v17 != v18 )
        {
          v19 = *(_QWORD *)(a3 + 8);
          while ( (unsigned __int8)sub_A92A80(a1, v17, v19) )
          {
            v17 += 24;
            v19 += 24;
            if ( v18 == v17 )
              goto LABEL_37;
          }
          return 0;
        }
LABEL_37:
        result = 1;
        break;
      case 1:
      case 3:
        v7 = *(_QWORD *)(a2 + 8);
        v8 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL];
        return (*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v7) & 7) == (v8 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | (unsigned __int8)*(_QWORD *)(a3 + 8)) & 7);
      case 2:
        v21 = *(_BYTE **)(a2 + 16);
        v22 = v21[28] & 0x7F;
        if ( (unsigned int)v22 - 53 <= 1 || ((v22 + 52) & 0x7Fu) <= 1 )
          v21 = (_BYTE *)sub_B4F190();
        v23 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v21 + 32LL))(v21);
        v24 = *(_BYTE **)(a3 + 16);
        v25 = v23;
        v26 = v24[28] & 0x7F;
        if ( ((v26 + 52) & 0x7Fu) <= 1 || (unsigned int)v26 - 53 <= 1 )
          v24 = (_BYTE *)sub_B4F190();
        return v25 == (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v24 + 32LL))(v24);
      case 4:
        v9 = *(void **)(a3 + 8);
        v10 = *(_BYTE *)(a3 + 7) >> 7;
        v11 = *(_DWORD *)(a3 + 4) & 0x7FFFFFFF;
        v12 = v10;
        if ( (unsigned int)v11 > 0x40 )
        {
          sub_21E18C0(&ptr, v11, v9, ((unsigned __int64)(unsigned int)v11 + 63) >> 6);
          BYTE4(v35) = v12;
          LODWORD(v35) = v38;
          v34 = ptr;
        }
        else
        {
          LODWORD(v35) = v11;
          v34 = v9;
          BYTE4(v35) = v10;
        }
        v13 = *(_BYTE *)(a2 + 7) >> 7;
        v14 = *(void **)(a2 + 8);
        v15 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
        if ( (unsigned int)v15 > 0x40 )
        {
          sub_21E18C0(&ptr, v15, v14, ((unsigned __int64)(unsigned int)v15 + 63) >> 6);
          v33 = v13;
          v32 = v38;
          v31 = ptr;
        }
        else
        {
          v32 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
          v31 = v14;
          v33 = v13;
        }
        result = (unsigned int)sub_96A590((__int64 *)&v31, (__int64 *)&v34) == 0;
        if ( v32 > 0x40 && v31 )
        {
          v27 = result;
          operator delete[](v31);
          result = v27;
        }
        if ( (unsigned int)v35 > 0x40 && v34 )
        {
          v28 = result;
          operator delete[](v34);
          return v28;
        }
        return result;
      case 5:
        return sub_EF9EB0(a2, a3);
      case 6:
      case 7:
        sub_EFED50(&ptr, *(_QWORD *)(a3 + 8));
        v16 = sub_A92560(a1, (__int64)ptr, 0);
        sub_EFED50(&ptr, *(_QWORD *)(a2 + 8));
        return sub_A92560(a1, (__int64)ptr, 0) == v16;
      case 8:
        v20 = *(_QWORD *)(a2 + 8);
        v34 = v36;
        v35 = 0x2000000000LL;
        v38 = 0x2000000000LL;
        ptr = v39;
        sub_EF6750(v20, &v34, a1, 1, 0);
        sub_EF6750(*(_QWORD *)(a3 + 8), &ptr, a1, 1, 0);
        result = sub_21FF190(&v34, &ptr);
        if ( ptr != v39 )
        {
          v29 = result;
          free(ptr);
          result = v29;
        }
        if ( v34 != v36 )
        {
          v30 = result;
          free(v34);
          return v30;
        }
        return result;
    }
  }
  return result;
}

