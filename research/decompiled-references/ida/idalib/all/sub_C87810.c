__int64 __fastcall sub_C87810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r10
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  int v14; // eax
  void *v15; // rdi
  __int64 v16; // r12
  char v17; // al
  char v18; // bl
  char v19; // bl
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int8 v23; // [rsp+8h] [rbp-C0h]
  __int64 v24; // [rsp+8h] [rbp-C0h]
  __int64 v25; // [rsp+8h] [rbp-C0h]
  __int64 v26; // [rsp+8h] [rbp-C0h]
  __int64 v27; // [rsp+8h] [rbp-C0h]
  __int64 v28; // [rsp+14h] [rbp-B4h] BYREF
  char v29; // [rsp+1Ch] [rbp-ACh]
  void *v30; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v31; // [rsp+28h] [rbp-A0h]
  __int64 v32; // [rsp+30h] [rbp-98h] BYREF
  void *v33; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-80h]

  switch ( ((*(_BYTE *)(a2 + 2) >> 3) + 26) & 0x1F )
  {
    case 0:
    case 6:
      return sub_C44E70(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
    case 1:
      if ( !(unsigned __int8)sub_C44E70(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
        return 0;
      v10 = a1[1];
      if ( *(_DWORD *)v10 != 2 )
        return sub_C14310(*a1, a2);
      v11 = v10 + 8;
      if ( *(_BYTE *)(v10 + 20) )
        goto LABEL_15;
      v12 = *(_DWORD *)(v10 + 16);
      v13 = v12 - 1;
      if ( v12 <= 0x40 )
      {
        if ( *(_QWORD *)(v10 + 8) != 1LL << v13 )
          goto LABEL_15;
      }
      else
      {
        if ( ((1LL << v13) & *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL * (v13 >> 6))) == 0 )
          goto LABEL_15;
        v14 = sub_22068B0(v10 + 8);
        v11 = v10 + 8;
        if ( v13 != v14 )
          goto LABEL_15;
      }
      if ( (*(_QWORD *)a2 & 0x1000000LL) != 0 )
      {
        if ( *(_BYTE *)(*a1 + 915) )
        {
          v26 = v11;
          v21 = sub_A62AC0(*(_QWORD *)(*a1 + 16));
          sub_FC70B0(&v33, v21, *(unsigned int *)(a2 + 4), 2561);
          sub_C1DEB0(&v30, v26, 10, *(_BYTE *)(v10 + 20) ^ 1, 0, 1u, 1u);
          sub_AEC220((unsigned __int8 **)&v33, v30, v31);
          sub_AE9DF0((unsigned __int8 **)&v33, *(_QWORD *)(a2 + 8), 8u);
          v29 = 1;
          v28 = sub_EEC8C0(a2);
          sub_AEC610((__int64 *)&v33, &v28);
          v22 = v26;
          if ( v30 != &v32 )
          {
            operator delete(v30);
            v22 = v26;
          }
          v27 = v22;
          sub_AEA040((__int64)&v33);
          v12 = *(_DWORD *)(v10 + 16);
          v11 = v27;
        }
        v24 = v11;
        v16 = *(_QWORD *)(a2 + 8);
        sub_C16810((__int64)&v30, v11, v12 + 1);
        sub_C16960((__int64)&v33, (__int64)&v30);
        v17 = sub_C1B140(*a1, a2, (__int64)&v33, v16);
        v11 = v24;
        v18 = v17;
        if ( v34 > 0x40 && v33 )
        {
          operator delete[](v33);
          v11 = v24;
        }
        if ( (unsigned int)v31 > 0x40 && v30 )
        {
          v25 = v11;
          operator delete[](v30);
          v11 = v25;
        }
        if ( !v18 )
          return 0;
      }
LABEL_15:
      sub_C16960((__int64)&v33, v11);
      result = sub_C12770((__int64)&v33, a1[1]);
      if ( v34 > 0x40 )
      {
        v15 = v33;
        if ( v33 )
          goto LABEL_17;
      }
      return result;
    case 2:
      v8 = *(_QWORD *)(a2 + 16);
      if ( !(unsigned __int8)sub_C44E70(a1, v8, a3, a4, a5, a6) )
        return 0;
      v9 = a1[1];
      if ( *(_DWORD *)v9 != 2 )
        return sub_C14310(*a1, a2);
      v19 = *(_BYTE *)(v9 + 20);
      v34 = *(_DWORD *)(v9 + 16);
      if ( v34 > 0x40 )
      {
        v8 = v9 + 8;
        sub_2205510(&v33);
      }
      else
      {
        v33 = *(void **)(v9 + 8);
      }
      sub_C16720((__int64)&v33, v8);
      v20 = a1[1];
      BYTE4(v31) = v19;
      LODWORD(v31) = v34;
      v30 = v33;
      result = sub_C12770((__int64)&v30, v20);
      if ( (unsigned int)v31 > 0x40 )
      {
        v15 = v30;
        if ( v30 )
        {
LABEL_17:
          v23 = result;
          operator delete[](v15);
          return v23;
        }
      }
      return result;
    case 3:
      result = sub_C3FB70(*(_QWORD *)(a2 + 16), &v33, *a1, a4, a5);
      if ( (_BYTE)result )
        return sub_C12E40(*a1, (void *)((unsigned __int8)v33 ^ 1u), a2, a1[1]);
      return result;
    default:
      return sub_C14310(*a1, a2);
  }
}
