__int64 __fastcall sub_C252A0(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  unsigned __int8 **v18; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int8 v24; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v25; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v26; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v27; // [rsp+8h] [rbp-E0h]
  void *v28; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-D0h]
  char v30; // [rsp+1Ch] [rbp-CCh]
  void *v31; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-C0h]
  char v33; // [rsp+2Ch] [rbp-BCh]
  __int64 v34; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-B0h]
  __int64 v36; // [rsp+40h] [rbp-A8h]
  char v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h]
  __int64 v40; // [rsp+68h] [rbp-80h]
  _BYTE v41[120]; // [rsp+70h] [rbp-78h] BYREF

  switch ( *a2 )
  {
    case 1:
      v12 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2372, 0);
      v13 = v12;
      if ( v12 )
      {
        sub_C11320(v12, 0);
        sub_C11320(v13, 1);
        v14 = sub_EEC8C0(*(_QWORD *)(a1[1] + 16LL));
        LOBYTE(v35) = 1;
        v34 = v14;
        sub_AEC610((__int64 *)v13, &v34);
      }
      return 0;
    case 2:
      return sub_C1F500(a1, (__int64)(a2 + 2), a3, a4, a5);
    case 3:
      v15 = *a1;
      v16 = a1[1];
      if ( (a3 & 1) != 0 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_20;
      v17 = a2 + 2;
      if ( !(unsigned __int8)sub_C17F00(v15, v16, a1[2], v17)
        || !(unsigned __int8)sub_C12170(*a1, a1[1], v17, *((_DWORD *)a1 + 6), (_QWORD *)(a1[4] + 8LL)) )
      {
        return 0;
      }
      return sub_C17F00(*a1, a1[1], a3, v17);
    case 7:
      if ( (a3 & 1) == 0 && (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      {
        v8 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v8 + 16) != 42
          && ((v23 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) != 42)
           || (v8 = sub_F63050(v8, a2, v23, a4)) == 0)
          || (v9 = *(_QWORD *)(v8 + 32), (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0)
          || (v10 = a1[4], *(_DWORD *)v10 != 2)
          || (v19 = *((_DWORD *)a1 + 6), (unsigned int)(v19 - 5) > 1) )
        {
LABEL_7:
          sub_E33C10(*a1, a1[1], 108, 0);
          return 0;
        }
        v29 = *(_DWORD *)(v10 + 16);
        if ( v29 > 0x40 )
        {
          sub_2205510(&v28);
          v19 = *((_DWORD *)a1 + 6);
        }
        else
        {
          v28 = *(void **)(v10 + 8);
        }
        v30 = *(_BYTE *)(v10 + 20);
        if ( v19 == 6 )
          sub_C12610((__int64)&v28);
        v37 |= 1u;
        v34 = 0;
        ptr = v41;
        v40 = 0x800000000LL;
        v20 = *a1;
        v35 = 0;
        v36 = 0;
        v38 = 0;
        v41[65] = 0;
        sub_C245D0((__int64)&v34, *(_QWORD **)(v20 + 16), (__int64)a2);
        v32 = v29;
        if ( v29 > 0x40 )
          sub_2205510(&v31);
        else
          v31 = v28;
        v21 = a1[1];
        v22 = *a1;
        v33 = v30;
        result = sub_C1A330(v22, v21, (__int64)&v34, v9, (__int64)&v31);
        if ( v32 > 0x40 && v31 )
        {
          v24 = result;
          operator delete[](v31);
          result = v24;
        }
        if ( (_BYTE)result )
        {
          v25 = result;
          sub_C0F890((__int64)&v34, (__int64)a2);
          result = v25;
        }
        if ( ptr != v41 )
        {
          v26 = result;
          free(ptr);
          result = v26;
        }
        if ( v29 > 0x40 && v28 )
        {
          v27 = result;
          operator delete[](v28);
          return v27;
        }
        return result;
      }
      v18 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2442, 0);
      if ( v18 )
        goto LABEL_21;
      return 0;
    case 8:
      v15 = *a1;
      v16 = a1[1];
      if ( (a3 & 1) != 0 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
LABEL_20:
        v18 = (unsigned __int8 **)sub_E33C10(v15, v16, 2442, 0);
        if ( v18 )
LABEL_21:
          sub_AE9DF0(v18, a3, 8u);
        return 0;
      }
      else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 16LL)
              - 57 > 1 )
      {
        sub_E33C10(v15, v16, 108, 0);
        return 0;
      }
      else
      {
        return sub_C1F7A0(v15, v16, *((_DWORD *)a1 + 6), (__int64)a2, a1[4]);
      }
    default:
      goto LABEL_7;
  }
}
