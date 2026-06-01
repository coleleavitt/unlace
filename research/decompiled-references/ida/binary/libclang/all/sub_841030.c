__int64 __fastcall sub_841030(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int8 **v23; // rax
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
      v9 = (unsigned __int8 **)sub_A2E130(*a1, a1[1], 2171, 0);
      v10 = v9;
      if ( v9 )
      {
        sub_823450(v9, 0);
        sub_823450(v10, 1);
        v11 = sub_AC7B80(*(_QWORD *)(a1[1] + 16LL));
        LOBYTE(v35) = 1;
        v34 = v11;
        sub_839C90((__int64 *)v10, &v34);
      }
      return 0;
    case 2:
      return sub_83F380((__int64)a1, (__int64)(a2 + 2), a3);
    case 3:
      v7 = *a1;
      v8 = a1[1];
      if ( (a3 & 1) != 0 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_43;
      v12 = (__int64 *)(a2 + 2);
      if ( !(unsigned __int8)sub_833070(v7, v8, a1[2], v12)
        || !(unsigned __int8)sub_82E1B0(*a1, a1[1], v12, *((_DWORD *)a1 + 6), (_QWORD *)(a1[4] + 8LL)) )
      {
        return 0;
      }
      return sub_833070(*a1, a1[1], a3, v12);
    case 7:
      v13 = *a1;
      v14 = a1[1];
      if ( (a3 & 1) == 0 )
      {
        v15 = a3 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
        {
          v16 = *(_QWORD *)v15;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 41 )
            goto LABEL_20;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
          {
LABEL_42:
            sub_A2E130(v13, v14, 110, 0);
            return 0;
          }
          v16 = sub_B0D320(v16);
          if ( v16 )
          {
LABEL_20:
            v17 = *(_QWORD *)(v16 + 32);
            if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
            {
              v18 = a1[4];
              if ( *(_DWORD *)v18 == 2 )
              {
                v19 = *((_DWORD *)a1 + 6);
                if ( (unsigned int)(v19 - 5) <= 1 )
                {
                  v29 = *(_DWORD *)(v18 + 16);
                  if ( v29 > 0x40 )
                  {
                    sub_2585B30(&v28);
                    v19 = *((_DWORD *)a1 + 6);
                  }
                  else
                  {
                    v28 = *(void **)(v18 + 8);
                  }
                  v30 = *(_BYTE *)(v18 + 20);
                  if ( v19 == 6 )
                    sub_823C50((__int64)&v28);
                  v37 |= 1u;
                  v34 = 0;
                  v40 = 0x800000000LL;
                  v20 = *a1;
                  v35 = 0;
                  v36 = 0;
                  v38 = 0;
                  ptr = v41;
                  v41[65] = 0;
                  sub_824D00((__int64)&v34, *(_QWORD **)(v20 + 16), (__int64)a2);
                  v32 = v29;
                  if ( v29 > 0x40 )
                    sub_2585B30(&v31);
                  else
                    v31 = v28;
                  v21 = a1[1];
                  v22 = *a1;
                  v33 = v30;
                  result = sub_835AB0(v22, v21, (__int64)&v34, v17, (__int64)&v31);
                  if ( v32 > 0x40 && v31 )
                  {
                    v24 = result;
                    operator delete[](v31);
                    result = v24;
                  }
                  if ( (_BYTE)result )
                  {
                    v25 = result;
                    sub_81F730((__int64)&v34, (__int64)a2);
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
              }
            }
          }
          v13 = *a1;
          v14 = a1[1];
          goto LABEL_42;
        }
      }
      v23 = (unsigned __int8 **)sub_A2E130(*a1, v14, 2240, 0);
      if ( v23 )
LABEL_44:
        sub_8356A0(v23, a3, 8u);
      return 0;
    case 8:
      v7 = *a1;
      v8 = a1[1];
      if ( (a3 & 1) == 0 && (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 56 <= 1 )
          return sub_83F900(v7, v8, *((_DWORD *)a1 + 6), (__int64)a2, a1[4]);
        sub_A2E130(v7, v8, 110, 0);
        return 0;
      }
LABEL_43:
      v23 = (unsigned __int8 **)sub_A2E130(v7, v8, 2240, 0);
      if ( !v23 )
        return 0;
      goto LABEL_44;
    default:
      sub_A2E130(*a1, a1[1], 110, 0);
      return 0;
  }
}

